/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38C5C
// Address: 0x0000000000038C5C

//----- (0000000000038C5C) ----------------------------------------------------
void __fastcall sub_38C5C(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void **v10; // x20
  void **v11; // x21
  void **v12; // x22
  void *v13; // t1
  __int64 v14; // x8
  __int64 v15; // x9
  void *v16; // x0
  void *v17; // x0

  *(_QWORD *)a1 = off_15E248;
  sub_99DF0((__int64 *)a1);
  v2 = *(void **)(a1 + 704);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 712) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 704) = 0;
    *(_QWORD *)(a1 + 720) = 0;
  }
  v3 = *(void **)(a1 + 680);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 688) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 680) = 0;
    *(_QWORD *)(a1 + 696) = 0;
  }
  sub_394DC(a1 + 616);
  v4 = *(void **)(a1 + 592);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 600) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 592) = 0;
    *(_QWORD *)(a1 + 608) = 0;
  }
  sub_39570(a1 + 568);
  v5 = *(void **)(a1 + 544);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 552) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 544) = 0;
    *(_QWORD *)(a1 + 560) = 0;
  }
  sub_39604(a1 + 504, *(_QWORD **)(a1 + 512));
  v6 = *(void **)(a1 + 480);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 488) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 480) = 0;
    *(_QWORD *)(a1 + 496) = 0;
  }
  sub_39248((char **)(a1 + 456));
  sub_39640(a1 + 432, *(_QWORD **)(a1 + 440));
  v7 = *(void **)(a1 + 408);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 408) = 0;
    *(_QWORD *)(a1 + 424) = 0;
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    sub_3967C((__int64 *)(a1 + 376), 0);
    qfree(*(void **)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  v8 = *(void **)(a1 + 352);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 360) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  sub_3971C(a1 + 328, *(_QWORD **)(a1 + 336));
  sub_39790(a1 + 304, *(_QWORD **)(a1 + 312));
  if ( *(_QWORD *)(a1 + 280) )
  {
    sub_39980((__int64 *)(a1 + 280), 0);
    qfree(*(void **)(a1 + 280));
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v9 = *(void **)(a1 + 248);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  free_debug_event(a1 + 168);
  v10 = (void **)(a1 + 120);
  sub_39A1C((_QWORD *)(a1 + 120));
  v11 = *(void ***)(a1 + 128);
  v12 = *(void ***)(a1 + 136);
  if ( v11 != v12 )
  {
    do
    {
      v13 = *v11++;
      operator delete(v13);
    }
    while ( v12 != v11 );
    v14 = *(_QWORD *)(a1 + 128);
    v15 = *(_QWORD *)(a1 + 136);
    if ( v15 != v14 )
    {
      do
        v15 -= 8;
      while ( v14 != v15 );
      *(_QWORD *)(a1 + 136) = v14;
    }
  }
  if ( *v10 )
    operator delete(*v10);
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v17 = *(void **)(a1 + 72);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    sub_39B38((__int64 *)(a1 + 48), 0);
    qfree(*(void **)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
}
// 15E248: using guessed type __int64 (__fastcall *off_15E248[10])();
