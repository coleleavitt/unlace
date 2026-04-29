unsigned __int64 __fastcall sub_1B5320(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rdx
  __m128i v16; // xmm0
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // [rsp+0h] [rbp-68h] BYREF
  __m128i v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+18h] [rbp-50h] BYREF
  __int128 v32; // [rsp+20h] [rbp-48h]
  unsigned __int64 v33; // [rsp+38h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v1 = a1[3];
  v32 = 0;
  v29 = 0;
  v2 = *(_QWORD *)(v1 + 32);
  v30 = 0;
  v31 = 0;
  if ( !(_DWORD)v2 )
  {
    v19 = 0;
    goto LABEL_15;
  }
  v4 = qvector_reserve(&v29, 0, (int)v2, 24);
  v5 = v30.m128i_i64[0];
  v29 = v4;
  if ( v30.m128i_i64[0] < (unsigned __int64)(int)v2 )
  {
    v6 = 24 * v30.m128i_i64[0] + v4;
    *(_QWORD *)v6 = 0;
    *(_OWORD *)(v6 + 8) = 0;
    v7 = v5 + 1;
    if ( v5 + 1 < (unsigned __int64)(int)v2 )
    {
      v8 = 24 * v5 + 24;
      do
      {
        ++v7;
        v9 = v8 + v29;
        v8 += 24;
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
      }
      while ( (int)v2 != v7 );
    }
  }
  v10 = v32;
  v30.m128i_i64[0] = (int)v2;
  if ( (unsigned __int64)v32 >= (int)v2 )
  {
    if ( (int)v2 == (_QWORD)v32 )
      goto LABEL_11;
  }
  else
  {
    v11 = v31;
    if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(int)v2 )
    {
      v31 = qvector_reserve(&v31, v31, (int)v2, 4);
      v10 = v32;
      v11 = v31;
    }
    memset((void *)(v11 + 4 * v10), 0, 4 * ((int)v2 - v10));
  }
  *(_QWORD *)&v32 = (int)v2;
LABEL_11:
  if ( (int)v2 > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = *(int *)(*a1 + v13);
      v15 = (__int64 *)(v12 + v29);
      v12 += 24;
      v16 = _mm_loadu_si128((const __m128i *)(v15 + 1));
      v17 = (_QWORD *)(*(_QWORD *)a1[3] + 24 * v14);
      v18 = *v15;
      *v15 = *v17;
      v15[1] = v17[1];
      v15[2] = v17[2];
      *v17 = v18;
      *(__m128i *)(v17 + 1) = v16;
      *(_DWORD *)(v31 + v13) = *(_DWORD *)(*(_QWORD *)(a1[3] + 24LL) + 4 * v14);
      v13 += 4;
    }
    while ( v13 != 4LL * (unsigned int)(v2 - 1) + 4 );
  }
  v1 = a1[3];
  v19 = v29;
LABEL_15:
  v20 = *(_QWORD *)v1;
  v21 = _mm_loadu_si128((const __m128i *)(v1 + 8));
  *(_QWORD *)v1 = v19;
  v22 = *(_QWORD *)(v1 + 40);
  v29 = v20;
  *(__m128i *)(v1 + 8) = v30;
  v23 = *(_QWORD *)(v1 + 24);
  v30 = v21;
  *(_QWORD *)(v1 + 24) = v31;
  v31 = v23;
  *(_OWORD *)(v1 + 32) = v32;
  *((_QWORD *)&v32 + 1) = v22;
  if ( v23 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v23);
    v20 = v29;
  }
  if ( v20 )
  {
    v24 = v30.m128i_i64[0];
    if ( v30.m128i_i64[0] )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v20 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27);
        }
        ++v25;
        v20 = v29;
      }
      while ( v24 != v25 );
    }
    v30.m128i_i64[0] = 0;
    qfree(v20);
  }
  return v33 - __readfsqword(0x28u);
}
