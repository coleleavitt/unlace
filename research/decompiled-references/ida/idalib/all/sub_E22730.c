__int64 __fastcall sub_E22730(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  __int64 *v6; // r14
  __int64 *v7; // rbp
  __int64 i; // rax
  __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi

  *(_QWORD *)a1 = &off_2B4B7B8;
  *(_QWORD *)(a1 + 16) = off_2B4B858;
  v2 = *(_QWORD *)(a1 + 400);
  if ( v2 )
  {
    while ( !*(_BYTE *)(v2 + 200) )
    {
      v3 = *(_QWORD *)(v2 + 8);
      sub_E20A70((void *)v2);
      *(_QWORD *)(a1 + 400) = v3;
      if ( !v3 )
        break;
      v2 = v3;
    }
  }
  sub_E1ECD0((_QWORD *)(a1 + 192));
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)v4[2];
      free(v4);
      *(_QWORD *)(a1 + 32) = v5;
      v4 = v5;
    }
    while ( v5 );
  }
  v6 = *(__int64 **)(a1 + 584);
  v7 = &v6[*(unsigned int *)(a1 + 592)];
  if ( v6 != v7 )
  {
    for ( i = *(_QWORD *)(a1 + 584); ; i = *(_QWORD *)(a1 + 584) )
    {
      v9 = 0x40000000000LL;
      v10 = (unsigned int)(((__int64)v6 - i) >> 3) >> 7;
      if ( v10 <= 0x1D )
        v9 = 4096LL << v10;
      v11 = *v6++;
      operator delete(v11, v9, 16);
      if ( v7 == v6 )
        break;
    }
  }
  v12 = *(__int64 **)(a1 + 632);
  v13 = &v12[2 * *(unsigned int *)(a1 + 640)];
  if ( v12 != v13 )
  {
    do
    {
      v14 = v12[1];
      v15 = *v12;
      v12 += 2;
      operator delete(v15, v14, 16);
    }
    while ( v13 != v12 );
    v13 = *(__int64 **)(a1 + 632);
  }
  if ( v13 != (__int64 *)(a1 + 648) )
    free(v13);
  v16 = *(void **)(a1 + 584);
  if ( v16 != (void *)(a1 + 600) )
    free(v16);
  v17 = *(void **)(a1 + 504);
  if ( v17 != (void *)(a1 + 520) )
    free(v17);
  v18 = *(void **)(a1 + 440);
  if ( v18 != (void *)(a1 + 456) )
    free(v18);
  sub_E20850(a1 + 192);
  sub_DAEC80(a1 + 48);
  return nullsub_502(a1);
}
