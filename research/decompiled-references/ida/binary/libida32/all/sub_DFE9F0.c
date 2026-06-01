__int64 __fastcall sub_DFE9F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 i; // rax
  unsigned int v10; // ecx
  __int64 *v11; // rbp
  __int64 *v12; // r12
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi

  *(_QWORD *)a1 = &off_2B21818;
  *(_QWORD *)(a1 + 16) = off_2B218B8;
  v3 = *(_QWORD *)(a1 + 400);
  if ( v3 )
  {
    while ( !*(_BYTE *)(v3 + 200) )
    {
      v4 = *(_QWORD *)(v3 + 8);
      sub_DFCD30((void *)v3);
      *(_QWORD *)(a1 + 400) = v4;
      if ( !v4 )
        break;
      v3 = v4;
    }
  }
  sub_DFAF90((_QWORD *)(a1 + 192));
  v5 = *(_QWORD **)(a1 + 32);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)v5[2];
      free(v5);
      *(_QWORD *)(a1 + 32) = v6;
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = *(_QWORD *)(a1 + 584);
  v8 = v7 + 8LL * *(unsigned int *)(a1 + 592);
  if ( v7 != v8 )
  {
    for ( i = *(_QWORD *)(a1 + 584); ; i = *(_QWORD *)(a1 + 584) )
    {
      a2 = 0x40000000000LL;
      v10 = (unsigned int)((v7 - i) >> 3) >> 7;
      if ( v10 <= 0x1D )
        a2 = 4096LL << v10;
      v7 += 8;
      operator delete();
      if ( v8 == v7 )
        break;
    }
  }
  v11 = *(__int64 **)(a1 + 632);
  v12 = &v11[2 * *(unsigned int *)(a1 + 640)];
  if ( v11 != v12 )
  {
    do
    {
      a2 = v11[1];
      v11 += 2;
      operator delete();
    }
    while ( v12 != v11 );
    v12 = *(__int64 **)(a1 + 632);
  }
  if ( v12 != (__int64 *)(a1 + 648) )
    free(v12);
  v13 = *(void **)(a1 + 584);
  if ( v13 != (void *)(a1 + 600) )
    free(v13);
  v14 = *(void **)(a1 + 504);
  if ( v14 != (void *)(a1 + 520) )
    free(v14);
  v15 = *(void **)(a1 + 440);
  if ( v15 != (void *)(a1 + 456) )
    free(v15);
  sub_DFCB10(a1 + 192);
  sub_D8AF40(a1 + 48);
  return nullsub_481(a1, a2);
}

