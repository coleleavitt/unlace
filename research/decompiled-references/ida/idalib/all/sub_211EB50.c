__int64 __fastcall sub_211EB50(__int64 a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v6; // r12
  __m128i *v7; // r13
  __int8 *v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const __m128i *v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  const __m128i *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __m128i *i; // rbx
  _QWORD *v32; // rbp
  _QWORD *v33; // r14
  _QWORD *v34; // rdi
  void *v35; // rdi
  __int64 result; // rax
  __m128 v37; // xmm0
  __int64 v38; // [rsp+0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  __int8 *v41; // [rsp+18h] [rbp-40h]

  v6 = *(const __m128i **)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 5)) )
  {
    v9 = 1;
    goto LABEL_31;
  }
  v9 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5);
  v10 = -64;
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 5) > 0x5555555555555556LL
                                                                              * (((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 5)
    || v9 > 0x2AAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_31:
    v10 = 96 * v9;
LABEL_3:
    v41 = v8;
    v38 = v10;
    v39 = operator new(v10);
    v40 = v39 + v38;
    v38 = v39 + 96;
    goto LABEL_4;
  }
  v38 = 96;
  v40 = 0;
  v39 = 0;
LABEL_4:
  v11 = v39;
  v12 = *(_QWORD *)(a3 + 56);
  v13 = &v8[v39];
  *(_QWORD *)v13 = *(_QWORD *)a3;
  v14 = *(_QWORD *)(a3 + 8);
  *((_QWORD *)v13 + 7) = v12;
  *((_QWORD *)v13 + 1) = v14;
  *((_QWORD *)v13 + 2) = *(_QWORD *)(a3 + 16);
  *((_QWORD *)v13 + 3) = *(_QWORD *)(a3 + 24);
  *((_QWORD *)v13 + 4) = *(_QWORD *)(a3 + 32);
  v15 = *(_QWORD *)(a3 + 40);
  *(_OWORD *)(a3 + 32) = 0;
  *((_QWORD *)v13 + 5) = v15;
  v16 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0;
  *((_QWORD *)v13 + 6) = v16;
  *((_DWORD *)v13 + 16) = *(_DWORD *)(a3 + 64);
  *((_QWORD *)v13 + 9) = *(_QWORD *)(a3 + 72);
  *((_WORD *)v13 + 40) = *(_WORD *)(a3 + 80);
  *((_DWORD *)v13 + 21) = *(_DWORD *)(a3 + 84);
  *((_WORD *)v13 + 44) = *(_WORD *)(a3 + 88);
  if ( a2 != v7 )
  {
    v17 = v7;
    v18 = v11;
    do
    {
      v19 = _mm_loadu_si128(v17 + 1);
      v20 = _mm_loadu_si128(v17);
      *(_OWORD *)(v18 + 32) = 0;
      v17 += 6;
      *(_QWORD *)(v18 + 48) = 0;
      v21 = v17[-4].m128i_i64[0];
      v18 += 96;
      *(__m128i *)(v18 - 96) = v20;
      *(_QWORD *)(v18 - 64) = v21;
      v22 = v17[-4].m128i_i64[1];
      *(__m128i *)(v18 - 80) = v19;
      v17[-4].m128i_i64[0] = 0;
      v23 = *(_QWORD *)(v18 - 56);
      *(_QWORD *)(v18 - 56) = v22;
      v24 = v17[-3].m128i_i64[0];
      v17[-4].m128i_i64[1] = v23;
      v25 = *(_QWORD *)(v18 - 48);
      *(_QWORD *)(v18 - 48) = v24;
      v17[-3].m128i_i64[0] = v25;
      *(_DWORD *)(v18 - 40) = v17[-3].m128i_i32[2];
      *(_DWORD *)(v18 - 36) = v17[-3].m128i_i32[3];
      *(_DWORD *)(v18 - 32) = v17[-2].m128i_i32[0];
      *(_QWORD *)(v18 - 24) = v17[-2].m128i_i64[1];
      *(_BYTE *)(v18 - 16) = v17[-1].m128i_i8[0];
      *(_BYTE *)(v18 - 15) = v17[-1].m128i_i8[1];
      *(_DWORD *)(v18 - 12) = v17[-1].m128i_i32[1];
      *(_BYTE *)(v18 - 8) = v17[-1].m128i_i8[8];
      *(_BYTE *)(v18 - 7) = v17[-1].m128i_i8[9];
    }
    while ( a2 != v17 );
    v38 = v39
        + 32
        * (3 * ((0x2AAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&a2[-6] - (char *)v7) >> 5)) & 0x7FFFFFFFFFFFFFFLL)
         + 6);
  }
  v26 = a2;
  v27 = v38;
  if ( a2 != v6 )
  {
    do
    {
      v28 = v26->m128i_i64[0];
      v26 += 6;
      v27 += 96;
      *(_QWORD *)(v27 - 96) = v28;
      *(_QWORD *)(v27 - 88) = v26[-6].m128i_i64[1];
      *(_QWORD *)(v27 - 80) = v26[-5].m128i_i64[0];
      *(_QWORD *)(v27 - 72) = v26[-5].m128i_i64[1];
      *(_QWORD *)(v27 - 64) = v26[-4].m128i_i64[0];
      v29 = v26[-4].m128i_i64[1];
      v26[-4] = 0;
      *(_QWORD *)(v27 - 56) = v29;
      v30 = v26[-3].m128i_i64[0];
      v26[-3].m128i_i64[0] = 0;
      *(_QWORD *)(v27 - 48) = v30;
      *(_DWORD *)(v27 - 40) = v26[-3].m128i_i32[2];
      *(_DWORD *)(v27 - 36) = v26[-3].m128i_i32[3];
      *(_DWORD *)(v27 - 32) = v26[-2].m128i_i32[0];
      *(_QWORD *)(v27 - 24) = v26[-2].m128i_i64[1];
      *(_BYTE *)(v27 - 16) = v26[-1].m128i_i8[0];
      *(_BYTE *)(v27 - 15) = v26[-1].m128i_i8[1];
      *(_DWORD *)(v27 - 12) = v26[-1].m128i_i32[1];
      *(_BYTE *)(v27 - 8) = v26[-1].m128i_i8[8];
      *(_BYTE *)(v27 - 7) = v26[-1].m128i_i8[9];
    }
    while ( v6 != v26 );
    v38 += 32
         * (3 * ((0x2AAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v6 - (char *)a2 - 96) >> 5)) & 0x7FFFFFFFFFFFFFFLL)
          + 3);
  }
  for ( i = v7; i != v6; i += 6 )
  {
    while ( 1 )
    {
      v32 = (_QWORD *)i[2].m128i_i64[1];
      v33 = (_QWORD *)i[2].m128i_i64[0];
      if ( v32 != v33 )
      {
        do
        {
          while ( 1 )
          {
            v34 = (_QWORD *)v33[9];
            if ( v34 != v33 + 11 )
              operator delete(v34);
            v35 = (void *)v33[6];
            if ( !v35 )
              break;
            operator delete(v35);
            v33 += 13;
            if ( v33 == v32 )
              goto LABEL_17;
          }
          v33 += 13;
        }
        while ( v32 != v33 );
LABEL_17:
        v33 = (_QWORD *)i[2].m128i_i64[0];
      }
      if ( !v33 )
        break;
      i += 6;
      operator delete(v33);
      if ( i == v6 )
        goto LABEL_20;
    }
  }
LABEL_20:
  if ( v7 )
    operator delete(v7);
  result = v40;
  v37 = _mm_loadh_ps((const double *)&v38);
  *(_QWORD *)(a1 + 16) = v40;
  *(__m128 *)a1 = v37;
  return result;
}
