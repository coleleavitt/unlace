__int64 __fastcall sub_21306C0(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v4; // rbx
  __m128i *v5; // rbp
  unsigned __int64 v6; // rax
  __int8 *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm3
  __m128i *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int16 v17; // dx
  const __m128i *v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  const __m128i *v27; // rax
  __int64 v28; // rcx
  __m128i v29; // xmm2
  __int64 v30; // rcx
  __int64 v31; // rcx
  __m128i *i; // r14
  __int64 v33; // r12
  __int64 v34; // r15
  void *v35; // rdi
  __int64 result; // rax
  __m128 v37; // xmm0
  __int64 v38; // [rsp+0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+10h] [rbp-58h]
  __int8 *v41; // [rsp+18h] [rbp-50h]
  const __m128i *v42; // [rsp+20h] [rbp-48h]
  const __m128i *v43; // [rsp+28h] [rbp-40h]

  v4 = *(const __m128i **)(a1 + 8);
  v5 = *(__m128i **)a1;
  v6 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v4->m128i_i64 - *(_QWORD *)a1) >> 4);
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !v6 )
  {
    v8 = 1;
    goto LABEL_30;
  }
  v8 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v9 = -16;
  if ( v6 > 2 * v6 || v8 > 0x555555555555555LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_30:
    v9 = 48 * v8;
LABEL_3:
    v43 = a3;
    v42 = a2;
    v41 = v7;
    v10 = operator new(v9);
    v7 = v41;
    v39 = v10;
    a3 = v43;
    v40 = v10 + v9;
    v38 = v10 + 48;
    goto LABEL_4;
  }
  v38 = 48;
  v40 = 0;
  v39 = 0;
LABEL_4:
  v11 = v39;
  v12 = _mm_loadu_si128(a3);
  v13 = (__m128i *)&v7[v39];
  v14 = a3[1].m128i_i64[0];
  a3[1].m128i_i64[0] = 0;
  *v13 = v12;
  v13[1].m128i_i64[0] = v14;
  v15 = a3[1].m128i_i64[1];
  a3[1].m128i_i64[1] = 0;
  v13[1].m128i_i64[1] = v15;
  v16 = a3[2].m128i_i64[0];
  a3[2].m128i_i64[0] = 0;
  v17 = a3[2].m128i_i16[4];
  v13[2].m128i_i64[0] = v16;
  v13[2].m128i_i16[4] = v17;
  if ( a2 != v5 )
  {
    v18 = v5;
    v19 = v11;
    do
    {
      v20 = _mm_loadu_si128(v18);
      *(_QWORD *)(v19 + 24) = 0;
      v18 += 3;
      v19 += 48;
      *(_QWORD *)(v19 - 16) = 0;
      *(_QWORD *)(v19 - 32) = 0;
      v21 = v18[-2].m128i_i64[0];
      *(__m128i *)(v19 - 48) = v20;
      *(_QWORD *)(v19 - 32) = v21;
      v22 = v18[-2].m128i_i64[1];
      v18[-2].m128i_i64[0] = 0;
      v23 = *(_QWORD *)(v19 - 24);
      *(_QWORD *)(v19 - 24) = v22;
      v24 = v18[-1].m128i_i64[0];
      v18[-2].m128i_i64[1] = v23;
      v25 = *(_QWORD *)(v19 - 16);
      *(_QWORD *)(v19 - 16) = v24;
      v18[-1].m128i_i64[0] = v25;
      *(_BYTE *)(v19 - 8) = v18[-1].m128i_i8[8];
      *(_BYTE *)(v19 - 7) = v18[-1].m128i_i8[9];
    }
    while ( a2 != v18 );
    v38 = v39
        + 16
        * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&a2[-3] - (char *)v5) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 6);
  }
  if ( a2 != v4 )
  {
    v26 = v38;
    v27 = a2;
    do
    {
      v28 = v27[1].m128i_i64[0];
      v29 = _mm_loadu_si128(v27);
      v27 += 3;
      v26 += 48;
      v27[-2].m128i_i64[0] = 0;
      *(_QWORD *)(v26 - 32) = v28;
      v30 = v27[-2].m128i_i64[1];
      v27[-2].m128i_i64[1] = 0;
      *(_QWORD *)(v26 - 24) = v30;
      v31 = v27[-1].m128i_i64[0];
      v27[-1].m128i_i64[0] = 0;
      *(_QWORD *)(v26 - 16) = v31;
      LOBYTE(v31) = v27[-1].m128i_i8[8];
      *(__m128i *)(v26 - 48) = v29;
      *(_BYTE *)(v26 - 8) = v31;
      *(_BYTE *)(v26 - 7) = v27[-1].m128i_i8[9];
    }
    while ( v4 != v27 );
    v38 += 16
         * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v4 - (char *)a2 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
          + 3);
  }
  for ( i = v5; i != v4; i += 3 )
  {
    while ( 1 )
    {
      v33 = i[1].m128i_i64[1];
      v34 = i[1].m128i_i64[0];
      if ( v33 != v34 )
      {
        do
        {
          if ( *(_DWORD *)(v34 + 32) > 0x40u )
          {
            v35 = *(void **)(v34 + 24);
            if ( v35 )
              operator delete[](v35);
          }
          v34 += 40;
        }
        while ( v33 != v34 );
        v34 = i[1].m128i_i64[0];
      }
      if ( !v34 )
        break;
      i += 3;
      operator delete((void *)v34);
      if ( v4 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v5 )
    operator delete(v5);
  result = v40;
  v37 = _mm_loadh_ps((const double *)&v38);
  *(_QWORD *)(a1 + 16) = v40;
  *(__m128 *)a1 = v37;
  return result;
}
