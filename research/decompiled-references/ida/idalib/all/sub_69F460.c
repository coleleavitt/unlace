void __fastcall sub_69F460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6, __m128 a7)
{
  __m128i *v7; // rbx
  __int64 v8; // r14
  __int64 v12; // rdi
  char *v13; // r12
  __int64 v14; // rbx
  char *v15; // rbp
  unsigned __int64 v16; // rdx
  char *v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char *v20; // rax
  char *v21; // rsi
  char *v22; // rsi

  v7 = *(__m128i **)a1;
  v8 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v8 == *(_QWORD *)a1 )
    return;
  do
  {
    v12 = v7->m128i_i64[0];
    v7 = (__m128i *)((char *)v7 + 8);
    v7[-1].m128i_i64[1] = correct_address(v12, a2, a3, a4, 0);
  }
  while ( (__m128i *)v8 != v7 );
  v13 = *(char **)a1;
  v14 = 8LL * *(_QWORD *)(a1 + 8);
  v15 = (char *)(*(_QWORD *)a1 + v14);
  if ( *(char **)a1 == v15 )
    return;
  if ( !(v14 >> 3) )
  {
    sub_6984B0(*(__m128i **)a1, (unsigned __int64 *)(*(_QWORD *)a1 + v14), -2, a5, a6, a7);
    goto LABEL_12;
  }
  _BitScanReverse64(&v16, v14 >> 3);
  sub_6984B0(*(__m128i **)a1, (unsigned __int64 *)(*(_QWORD *)a1 + v14), 2LL * (int)v16, a5, a6, a7);
  if ( v14 <= 128 )
  {
LABEL_12:
    sub_698340(v13, v15);
    return;
  }
  v17 = v13 + 128;
  sub_698340(v13, v13 + 128);
  do
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      v19 = *((_QWORD *)v17 - 1);
      v20 = v17 - 8;
      if ( *(_QWORD *)v17 < v19 )
        break;
      v22 = v17;
      v17 += 8;
      *(_QWORD *)v22 = v18;
      if ( v15 == v17 )
        return;
    }
    do
    {
      *((_QWORD *)v20 + 1) = v19;
      v21 = v20;
      v19 = *((_QWORD *)v20 - 1);
      v20 -= 8;
    }
    while ( v18 < v19 );
    v17 += 8;
    *(_QWORD *)v21 = v18;
  }
  while ( v15 != v17 );
}
