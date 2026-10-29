/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000940C
// Address: 0x000000010000940C

//----- (000000010000940C) ----------------------------------------------------
__int64 __fastcall sub_10000940C(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0

  *(_QWORD *)a1 = off_10009F178;
  sub_100059490(a1);
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
  sub_100009610(a1 + 544);
  sub_10000973C(a1 + 504, *(_QWORD **)(a1 + 512));
  v4 = *(void **)(a1 + 480);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 488) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 480) = 0;
    *(_QWORD *)(a1 + 496) = 0;
  }
  v5 = *(void **)(a1 + 456);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 464);
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v8 = *(_QWORD *)(a1 + 456);
        v9 = v8 + v7;
        v10 = *(void **)(v8 + v7 + 8);
        if ( v10 )
        {
          *(_QWORD *)(v9 + 16) = 0;
          qfree(v10);
          *(_QWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v8 + v7 + 24) = 0;
        }
        v7 += 56;
        --v6;
      }
      while ( v6 );
      v5 = *(void **)(a1 + 456);
    }
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  sub_100009794(a1 + 432, *(_QWORD **)(a1 + 440));
  v11 = *(void **)(a1 + 408);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 408) = 0;
    *(_QWORD *)(a1 + 424) = 0;
  }
  sub_10000B7DC((char **)(a1 + 376));
  v12 = *(void **)(a1 + 352);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 360) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  sub_1000097EC(a1 + 328, *(_QWORD **)(a1 + 336));
  sub_100009878(a1 + 304, *(_QWORD **)(a1 + 312));
  sub_1000099CC((char **)(a1 + 280));
  v13 = *(void **)(a1 + 248);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  free_debug_event(a1 + 168);
  sub_100009A88(a1 + 120);
  v14 = *(void **)(a1 + 96);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v15 = *(void **)(a1 + 72);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  sub_100009C0C((char **)(a1 + 48));
  return a1;
}
// 10009F178: using guessed type __int64 (__fastcall *off_10009F178[4])();
