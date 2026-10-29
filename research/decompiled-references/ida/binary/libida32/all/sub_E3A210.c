unsigned __int64 __fastcall sub_E3A210(__int64 a1, char *a2, __int64 a3)
{
  char *v6; // rbx
  char *v7; // r12
  char *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r13
  char *v13; // r14
  char *v14; // rsi
  __int64 v15; // rdi
  char *v16; // r14
  unsigned __int64 v17; // r13
  char *v18; // rsi
  unsigned __int64 v19; // rdi
  char *i; // rbp
  char *v21; // rdi
  unsigned __int64 result; // rax
  __m128 v23; // xmm0
  unsigned __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+10h] [rbp-48h]
  char *v27; // [rsp+18h] [rbp-40h]

  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  if ( !(0xCCCCCCCCCCCCCCCDLL * ((__int64)&v6[-*(_QWORD *)a1] >> 3)) )
  {
    v9 = 1;
    goto LABEL_20;
  }
  v9 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v10 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * ((__int64)&v6[-*(_QWORD *)a1] >> 3) > 0x999999999999999ALL
                                                                  * ((__int64)&v6[-*(_QWORD *)a1] >> 3)
    || v9 > 0x666666666666666LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_20:
    v10 = 40 * v9;
LABEL_3:
    v27 = v8;
    v11 = operator new(v10);
    v8 = v27;
    v25 = v11;
    v26 = v11 + v10;
    v24 = v11 + 40;
    goto LABEL_4;
  }
  v24 = 40;
  v26 = 0;
  v25 = 0;
LABEL_4:
  sub_2205840(&v8[v25], a3);
  if ( a2 != v7 )
  {
    v12 = v25;
    v13 = v7;
    do
    {
      v14 = v13;
      v15 = v12;
      v13 += 40;
      v12 += 40;
      sub_2207610(v15, v14);
    }
    while ( a2 != v13 );
    v24 = v25 + 8 * ((unsigned __int64)(a2 - 40 - v7) >> 3) + 80;
  }
  v16 = a2;
  v17 = v24;
  if ( a2 != v6 )
  {
    do
    {
      v18 = v16;
      v19 = v17;
      v16 += 40;
      v17 += 40LL;
      sub_2207610(v19, v18);
    }
    while ( v16 != v6 );
    v24 += 8 * ((unsigned __int64)(v6 - a2 - 40) >> 3) + 40;
  }
  for ( i = v7; i != v6; i += 40 )
  {
    v21 = i;
    sub_2207560(v21);
  }
  if ( v7 )
    operator delete(v7);
  result = v26;
  v23 = _mm_loadh_ps((const double *)&v24);
  *(_QWORD *)(a1 + 16) = v26;
  *(__m128 *)a1 = v23;
  return result;
}

