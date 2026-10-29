/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1AC9C
// Address: 0x0001AC9C

//----- (0001AC9C) --------------------------------------------------------
int __fastcall sub_1AC9C(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void **v8; // r5
  void *v9; // r0
  void **v10; // r5
  void *v11; // r0
  void **v12; // r5
  void **v13; // r6
  void **v14; // r7
  void *v15; // r0
  int v16; // r0
  int v17; // r1
  void *v18; // r0
  void *v19; // r0

  *(_DWORD *)a1 = &off_DA178;
  sub_64B94(a1);
  v2 = *(void **)(a1 + 372);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 376) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 372) = 0;
    *(_DWORD *)(a1 + 380) = 0;
  }
  v3 = *(void **)(a1 + 360);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 364) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 360) = 0;
    *(_DWORD *)(a1 + 368) = 0;
  }
  sub_1B348((char **)(a1 + 316));
  v4 = *(void **)(a1 + 304);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 308) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 304) = 0;
    *(_DWORD *)(a1 + 312) = 0;
  }
  sub_1B3BC((char **)(a1 + 292));
  v5 = *(void **)(a1 + 280);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 284) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 288) = 0;
  }
  sub_1B430(a1 + 260, *(_DWORD **)(a1 + 264));
  v6 = *(void **)(a1 + 248);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 252) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 248) = 0;
    *(_DWORD *)(a1 + 256) = 0;
  }
  sub_1B158((char **)(a1 + 236));
  sub_1B450(a1 + 224, *(_DWORD **)(a1 + 228));
  v7 = *(void **)(a1 + 212);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 216) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 212) = 0;
    *(_DWORD *)(a1 + 220) = 0;
  }
  v8 = (void **)(a1 + 196);
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_1B470((int *)(a1 + 196), 0);
    qfree(*v8);
    *v8 = nullptr;
    *(_DWORD *)(a1 + 204) = 0;
  }
  v9 = *(void **)(a1 + 184);
  if ( v9 )
  {
    *(_DWORD *)(a1 + 188) = 0;
    qfree(v9);
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = 0;
  }
  sub_1B4E4(a1 + 172, *(_DWORD **)(a1 + 176));
  sub_1B52E(a1 + 160, *(_DWORD **)(a1 + 164));
  v10 = (void **)(a1 + 148);
  if ( *(_DWORD *)(a1 + 148) )
  {
    sub_1B6B6((int *)(a1 + 148), 0);
    qfree(*v10);
    *v10 = nullptr;
    *(_DWORD *)(a1 + 156) = 0;
  }
  v11 = *(void **)(a1 + 132);
  if ( v11 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    qfree(v11);
    *(_DWORD *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 140) = 0;
  }
  free_debug_event((_DWORD *)(a1 + 80));
  v12 = (void **)(a1 + 56);
  sub_1B72C((_DWORD *)(a1 + 56));
  v13 = *(void ***)(a1 + 60);
  v14 = *(void ***)(a1 + 64);
  if ( v13 != v14 )
  {
    do
    {
      v15 = *v13++;
      operator delete(v15);
    }
    while ( v14 != v13 );
    v16 = *(_DWORD *)(a1 + 60);
    v17 = *(_DWORD *)(a1 + 64);
    if ( v17 != v16 )
    {
      do
        v17 -= 4;
      while ( v16 != v17 );
      *(_DWORD *)(a1 + 64) = v16;
    }
  }
  if ( *v12 )
    operator delete(*v12);
  v18 = *(void **)(a1 + 44);
  if ( v18 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    qfree(v18);
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  v19 = *(void **)(a1 + 32);
  if ( v19 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    qfree(v19);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    sub_1B7F4((int *)(a1 + 20), 0);
    qfree(*(void **)(a1 + 20));
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  return a1;
}
// DA178: using guessed type _UNKNOWN *off_DA178;
