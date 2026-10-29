/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B224
// Address: 0x000000010001B224

//----- (000000010001B224) ----------------------------------------------------
__int64 __fastcall sub_10001B224(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x21
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  __int64 v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  void *v14; // x0
  __int64 v15; // x20
  __int64 v16; // x21
  void *v17; // x0
  void *v18; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  __int64 v21; // x8
  void *v22; // x0
  _QWORD *v23; // x22
  void *v24; // x0
  void *v25; // x0
  void *v26; // x0

  v2 = *(void **)(a1 + 8);
  if ( v2 && *(_BYTE *)(a1 + 774) == 1 )
    close_linput(v2);
  v3 = *(void **)(a1 + 752);
  if ( v3 && *(_BYTE *)(a1 + 775) == 1 )
    close_linput(v3);
  v4 = *(_QWORD *)(a1 + 792);
  if ( (v4 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v5 = *(_QWORD **)(a1 + 784);
    v6 = 8 * v4;
    do
    {
      if ( *v5 )
      {
        v7 = (void *)sub_10001B224();
        operator delete(v7);
      }
      ++v5;
      v6 -= 8;
    }
    while ( v6 );
  }
  v8 = *(void **)(a1 + 832);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 840) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 832) = 0;
    *(_QWORD *)(a1 + 848) = 0;
  }
  v9 = *(void **)(a1 + 784);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 792) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 784) = 0;
    *(_QWORD *)(a1 + 800) = 0;
  }
  v10 = *(_QWORD *)(a1 + 776);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *(void **)(a1 + 728);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 736) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 728) = 0;
    *(_QWORD *)(a1 + 744) = 0;
  }
  v12 = *(void **)(a1 + 704);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 712) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 704) = 0;
    *(_QWORD *)(a1 + 720) = 0;
  }
  v13 = *(void **)(a1 + 672);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 672) = 0;
    *(_QWORD *)(a1 + 688) = 0;
  }
  v14 = *(void **)(a1 + 648);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 656);
    if ( v15 )
    {
      v16 = 0;
      do
      {
        sub_10001B190((_QWORD *)(*(_QWORD *)(a1 + 648) + v16));
        v16 += 168;
        --v15;
      }
      while ( v15 );
      v14 = *(void **)(a1 + 648);
    }
    *(_QWORD *)(a1 + 656) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 648) = 0;
    *(_QWORD *)(a1 + 664) = 0;
  }
  v17 = *(void **)(a1 + 624);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 632) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 624) = 0;
    *(_QWORD *)(a1 + 640) = 0;
  }
  v18 = *(void **)(a1 + 600);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 608);
    if ( v19 )
    {
      v20 = 0;
      do
      {
        v21 = *(_QWORD *)(a1 + 600);
        v22 = *(void **)(v21 + v20);
        if ( v22 )
        {
          v23 = (_QWORD *)(v21 + v20);
          *(_QWORD *)(v21 + v20 + 8) = 0;
          qfree(v22);
          *v23 = 0;
          v23[2] = 0;
        }
        v20 += 24;
        --v19;
      }
      while ( v19 );
      v18 = *(void **)(a1 + 600);
    }
    *(_QWORD *)(a1 + 608) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 600) = 0;
    *(_QWORD *)(a1 + 616) = 0;
  }
  v24 = *(void **)(a1 + 576);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 576) = 0;
    *(_QWORD *)(a1 + 592) = 0;
  }
  v25 = *(void **)(a1 + 552);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 552) = 0;
    *(_QWORD *)(a1 + 568) = 0;
  }
  v26 = *(void **)(a1 + 528);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 536) = 0;
    qfree(v26);
    *(_QWORD *)(a1 + 528) = 0;
    *(_QWORD *)(a1 + 544) = 0;
  }
  return a1;
}
