void __fastcall sub_1401A10(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  char *v8; // rdi
  unsigned __int64 v9; // rsi
  __m128i *v10; // r14
  __int8 v11; // dl
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int8 v14; // dl
  const __m128i *v15; // r15
  unsigned int *v16; // rdx
  char *v17; // rbp
  char *v18; // rbx
  char *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-D0h]
  char *i; // [rsp+10h] [rbp-C8h]
  __int64 v22; // [rsp+18h] [rbp-C0h]
  char **v23; // [rsp+20h] [rbp-B8h]
  __int64 v24; // [rsp+28h] [rbp-B0h]
  char v25; // [rsp+3Fh] [rbp-99h] BYREF
  char *v26; // [rsp+40h] [rbp-98h] BYREF
  __int64 v27; // [rsp+48h] [rbp-90h]
  char v28; // [rsp+50h] [rbp-88h] BYREF

  v20 = a1;
  v23 = &v26;
  v26 = &v28;
  v25 = 0;
  v27 = 0x100000000LL;
  if ( a4 )
  {
    v24 = *(_QWORD *)(a3 + 32);
    v22 = *(_QWORD *)(a3 + 40);
  }
  else
  {
    v24 = 0;
    v22 = 0;
  }
  v6 = *(_QWORD *)(a2 + 608);
  v7 = v6 + 80LL * *(unsigned int *)(a2 + 616);
  for ( i = &v25; v7 != v6; v10[4] = v13 )
  {
    while ( 1 )
    {
      v15 = (const __m128i *)v6;
      if ( a4 )
      {
        if ( *(_BYTE *)(v6 + 72) && v22 != *(_QWORD *)(v6 + 64) || *(_BYTE *)(v6 + 56) && *(_QWORD *)(v6 + 48) != v24 )
          break;
      }
      v16 = (unsigned int *)v6;
      v6 += 80LL;
      sub_1401650(v20, (__int64 *)a2, v16, i);
      if ( v7 == v6 )
        goto LABEL_13;
    }
    v8 = v26;
    v9 = (unsigned int)v27 + 1LL;
    v10 = (__m128i *)&v26[80 * (unsigned int)v27];
    if ( v9 > HIDWORD(v27) )
    {
      if ( (unsigned __int64)v26 > v6 || (unsigned __int64)v10 <= v6 )
      {
        sub_13FB900((__int64)v23, v9);
        v10 = (__m128i *)&v26[80 * (unsigned int)v27];
      }
      else
      {
        sub_13FB900((__int64)v23, v9);
        v15 = (const __m128i *)&v26[v6 - (_QWORD)v8];
        v10 = (__m128i *)&v26[80 * (unsigned int)v27];
      }
    }
    v6 += 80LL;
    v10->m128i_i32[0] = v15->m128i_i32[0];
    v10->m128i_i32[1] = v15->m128i_i32[1];
    v10->m128i_i64[1] = (__int64)&v10[1].m128i_i64[1];
    sub_13F27F0(&v10->m128i_i64[1], (_BYTE *)v15->m128i_i64[1], v15->m128i_i64[1] + v15[1].m128i_i64[0]);
    v11 = v15[2].m128i_i8[8];
    v12 = _mm_loadu_si128(v15 + 3);
    v13 = _mm_loadu_si128(v15 + 4);
    LODWORD(v27) = v27 + 1;
    v10[2].m128i_i8[8] = v11;
    v14 = v15[2].m128i_i8[9];
    v10[3] = v12;
    v10[2].m128i_i8[9] = v14;
  }
LABEL_13:
  sub_13FBA30(a2 + 608, (__int64)v23);
  v17 = v26;
  v18 = &v26[80 * (unsigned int)v27];
  if ( v26 != v18 )
  {
    do
    {
      while ( 1 )
      {
        v18 -= 80;
        v19 = *((char **)v18 + 1);
        if ( v19 == v18 + 24 )
          break;
        operator delete(v19);
        if ( v17 == v18 )
          goto LABEL_16;
      }
    }
    while ( v17 != v18 );
LABEL_16:
    v18 = v26;
  }
  if ( v18 != (char *)(v23 + 2) )
    free(v18);
}
