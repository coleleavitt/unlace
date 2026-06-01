void __fastcall sub_1402B20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 i; // rbx
  char *v9; // rdi
  const __m128i *v10; // r13
  unsigned __int64 v11; // rsi
  __m128i *v12; // r12
  __int8 v13; // dl
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int8 v16; // dl
  unsigned int *v17; // rdx
  char *v18; // rbp
  char *v19; // rbx
  char *v20; // rdi
  char *v21; // [rsp+0h] [rbp-C8h]
  __int64 v22; // [rsp+8h] [rbp-C0h]
  char **v23; // [rsp+10h] [rbp-B8h]
  __int64 v24; // [rsp+18h] [rbp-B0h]
  char v25; // [rsp+2Fh] [rbp-99h] BYREF
  char *v26; // [rsp+30h] [rbp-98h] BYREF
  __int64 v27; // [rsp+38h] [rbp-90h]
  char v28; // [rsp+40h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 608);
  v25 = 0;
  v23 = &v26;
  v26 = &v28;
  v27 = 0x100000000LL;
  v24 = *(_QWORD *)(a3 + 32);
  v6 = *(_QWORD *)(a3 + 40);
  v7 = *(unsigned int *)(a2 + 616);
  v22 = v6;
  v21 = &v25;
  for ( i = v5 + 80 * v7; i != v5; v12[4] = v15 )
  {
    while ( (!*(_BYTE *)(v5 + 72) || v22 == *(_QWORD *)(v5 + 64))
         && (!*(_BYTE *)(v5 + 56) || v24 == *(_QWORD *)(v5 + 48)) )
    {
      v17 = (unsigned int *)v5;
      v5 += 80LL;
      sub_1401650(a1, (__int64 *)a2, v17, v21);
      if ( i == v5 )
        goto LABEL_10;
    }
    v9 = v26;
    v10 = (const __m128i *)v5;
    v11 = (unsigned int)v27 + 1LL;
    v12 = (__m128i *)&v26[80 * (unsigned int)v27];
    if ( v11 > HIDWORD(v27) )
    {
      if ( (unsigned __int64)v26 <= v5 && (unsigned __int64)v12 > v5 )
      {
        sub_13FB900((__int64)v23, v11);
        v10 = (const __m128i *)&v26[v5 - (_QWORD)v9];
        v12 = (__m128i *)&v26[80 * (unsigned int)v27];
      }
      else
      {
        sub_13FB900((__int64)v23, v11);
        v12 = (__m128i *)&v26[80 * (unsigned int)v27];
      }
    }
    v5 += 80LL;
    v12->m128i_i32[0] = v10->m128i_i32[0];
    v12->m128i_i32[1] = v10->m128i_i32[1];
    v12->m128i_i64[1] = (__int64)&v12[1].m128i_i64[1];
    sub_13F27F0(&v12->m128i_i64[1], (_BYTE *)v10->m128i_i64[1], v10->m128i_i64[1] + v10[1].m128i_i64[0]);
    v13 = v10[2].m128i_i8[8];
    v14 = _mm_loadu_si128(v10 + 3);
    v15 = _mm_loadu_si128(v10 + 4);
    LODWORD(v27) = v27 + 1;
    v12[2].m128i_i8[8] = v13;
    v16 = v10[2].m128i_i8[9];
    v12[3] = v14;
    v12[2].m128i_i8[9] = v16;
  }
LABEL_10:
  sub_13FBA30(a2 + 608, (__int64)v23);
  v18 = v26;
  v19 = &v26[80 * (unsigned int)v27];
  if ( v26 != v19 )
  {
    do
    {
      while ( 1 )
      {
        v19 -= 80;
        v20 = *((char **)v19 + 1);
        if ( v20 == v19 + 24 )
          break;
        operator delete(v20);
        if ( v18 == v19 )
          goto LABEL_13;
      }
    }
    while ( v18 != v19 );
LABEL_13:
    v19 = v26;
  }
  if ( v19 != (char *)(v23 + 2) )
    free(v19);
}
