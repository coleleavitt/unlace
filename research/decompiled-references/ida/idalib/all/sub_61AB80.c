unsigned __int64 __fastcall sub_61AB80(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rbx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r12
  const void *v14; // rbp
  void *v15; // rax
  const void *v16; // r14
  void *v17; // rdi
  unsigned __int64 v19; // rbx
  __int64 *v20; // rdi
  unsigned __int64 v21; // r13
  __int64 v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int128 v34; // xmm1
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // rsi
  __m128i v38; // xmm0
  void *v39; // rdi
  __int64 v41; // rax
  char *v42; // [rsp+8h] [rbp-C0h]
  __int64 v43; // [rsp+10h] [rbp-B8h]
  __int64 v44; // [rsp+18h] [rbp-B0h]
  __int64 v45; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+28h] [rbp-A0h]
  __int64 v47; // [rsp+38h] [rbp-90h]
  __int128 v48; // [rsp+40h] [rbp-88h]
  __int64 v49; // [rsp+50h] [rbp-78h] BYREF
  __int128 v50; // [rsp+58h] [rbp-70h]
  __int64 v51; // [rsp+68h] [rbp-60h]
  __int128 v52; // [rsp+70h] [rbp-58h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v4 = a1[5];
  v5 = a1[6];
  v53 = __readfsqword(0x28u);
  v7 = v4;
  if ( a3 >= v5 )
  {
    v42 = (char *)(a3 + 1);
    if ( a3 + 1 != v5 )
    {
      v45 = 0;
      v47 = 0;
      v46 = 0;
      v48 = 0;
      if ( a3 + 1 < v5 )
      {
        v21 = a3 + 1;
        while ( 1 )
        {
          v22 = v4 + 48 * v21;
          v23 = *(void **)(v22 + 24);
          if ( v23 )
          {
            *(_QWORD *)(v22 + 32) = 0;
            qfree(v23);
          }
          v24 = *(void **)v22;
          if ( *(_QWORD *)v22 )
          {
            *(_QWORD *)(v22 + 8) = 0;
            qfree(v24);
          }
          if ( ++v21 >= v5 )
            break;
          v4 = a1[5];
        }
        v7 = a1[5];
        a1[6] = v42;
      }
      else
      {
        v19 = a1[7];
        v20 = a1 + 5;
        if ( (unsigned __int64)&v45 < v4 || (unsigned __int64)&v45 >= v4 + 48 * v19 )
        {
          if ( v19 < (unsigned __int64)v42 )
          {
            v28 = qvector_reserve(v20, 0, v42, 48);
            v29 = a1[6];
            v30 = (char *)a1[5];
            v7 = v28;
            v31 = a1[7];
            a1[7] = v19;
            v44 = v31;
            v32 = v29 - 1;
            if ( v32 >= 0 )
            {
              v33 = v7;
              v34 = 0;
              do
              {
                v35 = *(_QWORD *)v30;
                v36 = _mm_loadu_si128((const __m128i *)(v30 + 8));
                *(_QWORD *)v30 = 0;
                *(_OWORD *)(v30 + 8) = v34;
                *(_QWORD *)v33 = v35;
                *(__m128i *)(v33 + 8) = v36;
                v37 = *((_QWORD *)v30 + 3);
                v38 = _mm_loadu_si128((const __m128i *)v30 + 2);
                *((_QWORD *)v30 + 3) = 0;
                *(_QWORD *)(v33 + 24) = v37;
                *(__m128i *)(v33 + 32) = v38;
                v39 = *(void **)v30;
                *((_QWORD *)v30 + 5) = 0;
                if ( v39 )
                {
                  *((_QWORD *)v30 + 1) = 0;
                  v43 = v32;
                  qfree(v39);
                  v32 = v43;
                  v34 = 0;
                }
                v30 += 48;
                v33 += 48;
              }
              while ( v32-- != 0 );
              v30 = (char *)a1[5];
            }
            qfree(v30);
            a1[5] = v7;
            v5 = a1[6];
            a1[7] = v44;
          }
          if ( v5 < (unsigned __int64)v42 )
          {
            v25 = 48 * v5;
            do
            {
              v26 = v25 + v7;
              v27 = v5;
              v25 += 48;
              ++v5;
              *(_QWORD *)v26 = 0;
              *(_QWORD *)(v26 + 24) = 0;
              *(_OWORD *)(v26 + 8) = 0;
              *(_OWORD *)(v26 + 32) = 0;
              v7 = a1[5];
            }
            while ( a3 != v27 );
          }
          a1[6] = v42;
        }
        else
        {
          v49 = 0;
          v51 = 0;
          v50 = 0;
          v52 = 0;
          sub_61A970(v20, v42, (__int64)&v49);
          v7 = a1[5];
        }
      }
    }
  }
  v8 = 48 * a3;
  v9 = 48 * a3 + *(_QWORD *)(a2 + 40);
  v10 = (__int64 *)(v7 + v8);
  if ( (__int64 *)v9 != v10 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    if ( v11 > 1 )
    {
      v16 = *(const void **)v9;
      v17 = (void *)*v10;
      if ( v10[2] < v11 )
      {
        v41 = qvector_reserve(v10, *v10, *(_QWORD *)(v9 + 8), 1);
        *v10 = v41;
        v17 = (void *)v41;
      }
      v10[1] = v11;
      memmove(v17, v16, v11 - 1);
      *(_BYTE *)(*v10 + v11 - 1) = 0;
    }
    else
    {
      v10[1] = 0;
    }
  }
  if ( v10 + 3 != (__int64 *)(v9 + 24) )
  {
    v12 = *(_QWORD *)(v9 + 32);
    if ( v12 > 1 )
    {
      v14 = *(const void **)(v9 + 24);
      v15 = (void *)v10[3];
      if ( v10[5] < v12 )
      {
        v15 = (void *)qvector_reserve(v10 + 3, v10[3], v12, 1);
        v10[3] = (__int64)v15;
      }
      v10[4] = v12;
      memmove(v15, v14, v12 - 1);
      *(_BYTE *)(v10[3] + v12 - 1) = 0;
    }
    else
    {
      v10[4] = 0;
    }
  }
  return v53 - __readfsqword(0x28u);
}
