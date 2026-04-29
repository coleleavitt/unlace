unsigned __int64 __fastcall sub_4CCA0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  int v7; // edx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdi
  bool v20; // cf
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 *v31; // r15
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rdx
  int v35; // [rsp+0h] [rbp-88h]
  _QWORD *v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  __m128i v39; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v40[28]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  v41 = __readfsqword(0x28u);
  if ( a2 >= v3 && a2 < v3 + 56 * v4 )
  {
    v35 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 6 )
    {
      *(_DWORD *)a2 = 0;
      v23 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 8) = 0;
      v24 = a1[1];
      v4 = a1[2];
      v39.m128i_i64[0] = v23;
      v10 = v24 + 1;
      if ( v4 >= v24 + 1 )
      {
        v11 = *a1 + 56 * v24;
        *(_DWORD *)v11 = 6;
        goto LABEL_31;
      }
    }
    else
    {
      v9 = a1[1];
      v10 = v9 + 1;
      if ( v35 == 7 )
      {
        v39 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        *(__m128i *)v40 = _mm_loadu_si128((const __m128i *)(a2 + 24));
        *(__m128i *)&v40[12] = _mm_loadu_si128((const __m128i *)(a2 + 36));
        if ( v4 >= v10 )
        {
          v11 = v3 + 56 * v9;
          *(_DWORD *)v11 = 7;
          goto LABEL_50;
        }
      }
      else
      {
        v39.m128i_i64[0] = *(_QWORD *)(a2 + 8);
        if ( v4 >= v10 )
        {
          v11 = v3 + 56 * v9;
          *(_DWORD *)v11 = v35;
LABEL_13:
          *(_QWORD *)(v11 + 8) = v39.m128i_i64[0];
          goto LABEL_7;
        }
      }
    }
    v25 = qvector_reserve(a1, 0, v10, 56);
    v26 = a1[1];
    v27 = a1[2];
    a1[2] = v4;
    v28 = *a1;
    v38 = v27;
    v29 = v26 - 1;
    if ( v29 >= 0 )
    {
      v30 = v25;
      do
      {
        *(_DWORD *)v30 = 0;
        *(_BYTE *)(v30 + 8) = 0;
        v33 = *(_DWORD *)v28;
        *(_DWORD *)v30 = *(_DWORD *)v28;
        if ( v33 == 6 )
        {
          *(_QWORD *)(v30 + 8) = *(_QWORD *)(v28 + 8);
        }
        else
        {
          if ( v33 == 7 )
          {
            *(__m128i *)(v30 + 8) = _mm_loadu_si128((const __m128i *)(v28 + 8));
            *(__m128i *)(v30 + 24) = _mm_loadu_si128((const __m128i *)(v28 + 24));
            *(__m128i *)(v30 + 36) = _mm_loadu_si128((const __m128i *)(v28 + 36));
          }
          else
          {
            *(_QWORD *)(v30 + 8) = *(_QWORD *)(v28 + 8);
          }
          if ( *(_DWORD *)v28 == 6 )
          {
            v31 = *(__int64 **)(v28 + 8);
            if ( v31 )
            {
              v32 = *v31;
              if ( *v31 )
              {
                v31[1] = 0;
                qfree(v32);
              }
              operator delete(v31, 0x18u);
            }
          }
        }
        v28 += 56;
        v30 += 56;
        v20 = v29-- == 0;
      }
      while ( !v20 );
      v28 = *a1;
    }
    qfree(v28);
    v34 = a1[1];
    *a1 = v25;
    a1[2] = v38;
    v11 = v25 + 56 * v34;
    *(_DWORD *)v11 = v35;
    if ( v35 != 6 )
    {
      if ( v35 != 7 )
        goto LABEL_13;
LABEL_50:
      *(__m128i *)(v11 + 8) = _mm_loadu_si128(&v39);
      *(__m128i *)(v11 + 24) = _mm_loadu_si128((const __m128i *)v40);
      *(__m128i *)(v11 + 36) = _mm_loadu_si128((const __m128i *)&v40[12]);
      goto LABEL_7;
    }
    v23 = v39.m128i_i64[0];
LABEL_31:
    *(_QWORD *)(v11 + 8) = v23;
    goto LABEL_7;
  }
  v5 = a1[1];
  if ( v4 < v5 + 1 )
  {
    v12 = qvector_reserve(a1, 0, v5 + 1, 56);
    v13 = a1[1];
    v14 = *a1;
    v3 = v12;
    v15 = a1[2];
    a1[2] = v4;
    v37 = v15;
    v16 = v13 - 1;
    if ( v16 >= 0 )
    {
      v17 = v3;
      do
      {
        while ( 1 )
        {
          *(_DWORD *)v17 = 0;
          *(_BYTE *)(v17 + 8) = 0;
          v21 = *(_DWORD *)v14;
          *(_DWORD *)v17 = *(_DWORD *)v14;
          if ( v21 != 6 )
            break;
          v22 = *(_QWORD *)(v14 + 8);
          v17 += 56LL;
          v14 += 56;
          *(_QWORD *)(v17 - 48) = v22;
          v20 = v16-- == 0;
          if ( v20 )
            goto LABEL_26;
        }
        if ( v21 == 7 )
        {
          *(__m128i *)(v17 + 8) = _mm_loadu_si128((const __m128i *)(v14 + 8));
          *(__m128i *)(v17 + 24) = _mm_loadu_si128((const __m128i *)(v14 + 24));
          *(__m128i *)(v17 + 36) = _mm_loadu_si128((const __m128i *)(v14 + 36));
        }
        else
        {
          *(_QWORD *)(v17 + 8) = *(_QWORD *)(v14 + 8);
        }
        if ( *(_DWORD *)v14 == 6 )
        {
          v18 = *(_QWORD **)(v14 + 8);
          if ( v18 )
          {
            v19 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              v36 = v18;
              qfree(v19);
              v18 = v36;
            }
            operator delete(v18, 0x18u);
          }
        }
        v14 += 56;
        v17 += 56LL;
        v20 = v16-- == 0;
      }
      while ( !v20 );
LABEL_26:
      v14 = *a1;
    }
    qfree(v14);
    *a1 = v3;
    a1[2] = v37;
    v5 = a1[1];
  }
  v6 = v3 + 56 * v5;
  *(_DWORD *)v6 = 0;
  *(_BYTE *)(v6 + 8) = 0;
  v7 = *(_DWORD *)a2;
  *(_DWORD *)v6 = *(_DWORD *)a2;
  if ( v7 == 6 )
  {
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(a2 + 8);
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else if ( v7 == 7 )
  {
    *(__m128i *)(v6 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(__m128i *)(v6 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
    *(__m128i *)(v6 + 36) = _mm_loadu_si128((const __m128i *)(a2 + 36));
  }
  else
  {
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(a2 + 8);
  }
LABEL_7:
  ++a1[1];
  return v41 - __readfsqword(0x28u);
}
