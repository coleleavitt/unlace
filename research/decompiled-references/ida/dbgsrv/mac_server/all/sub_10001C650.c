/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C650
// Address: 0x000000010001C650

//----- (000000010001C650) ----------------------------------------------------
void __fastcall sub_10001C650(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 i; // r13
  void *v7; // r14
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi

  v2 = *(void **)(a1 + 8);
  if ( v2 && *(_BYTE *)(a1 + 774) == 1 )
    close_linput(v2);
  v3 = *(void **)(a1 + 752);
  if ( v3 && *(_BYTE *)(a1 + 775) == 1 )
    close_linput(v3);
  v4 = 8LL * *(_QWORD *)(a1 + 792);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 784);
    for ( i = 0; i != v4; i += 8 )
    {
      v7 = *(void **)(v5 + i);
      if ( v7 )
      {
        sub_10001C650(*(_QWORD *)(v5 + i));
        operator delete(v7);
      }
    }
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
        sub_10001C580((_QWORD *)(v16 + *(_QWORD *)(a1 + 648)));
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
          *(_QWORD *)(v21 + v20 + 8) = 0;
          qfree(v22);
          *(_QWORD *)(v21 + v20) = 0;
          *(_QWORD *)(v21 + v20 + 16) = 0;
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
  v23 = *(void **)(a1 + 576);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree(v23);
    *(_QWORD *)(a1 + 576) = 0;
    *(_QWORD *)(a1 + 592) = 0;
  }
  v24 = *(void **)(a1 + 552);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 552) = 0;
    *(_QWORD *)(a1 + 568) = 0;
  }
  v25 = *(void **)(a1 + 528);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 536) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 528) = 0;
    *(_QWORD *)(a1 + 544) = 0;
  }
}
