/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009B50
// Address: 0x0000000100009B50

//----- (0000000100009B50) ----------------------------------------------------
void __fastcall sub_100009B50(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  *(_QWORD *)a1 = off_1000A9A60;
  sub_100061080(a1);
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
  sub_100009E80(a1 + 544);
  sub_10000A010(a1 + 504, *(_QWORD **)(a1 + 512));
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
      v7 = 8;
      do
      {
        v8 = *(_QWORD *)(a1 + 456);
        v9 = *(void **)(v8 + v7);
        if ( v9 )
        {
          *(_QWORD *)(v8 + v7 + 8) = 0;
          qfree(v9);
          *(_QWORD *)(v8 + v7) = 0;
          *(_QWORD *)(v8 + v7 + 16) = 0;
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
  sub_10000A050(a1 + 432, *(_QWORD **)(a1 + 440));
  v10 = *(void **)(a1 + 408);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 408) = 0;
    *(_QWORD *)(a1 + 424) = 0;
  }
  sub_10000C380((char **)(a1 + 376));
  v11 = *(void **)(a1 + 352);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 360) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  sub_10000A090(a1 + 328, *(_QWORD **)(a1 + 336));
  sub_10000A120(a1 + 304, *(_QWORD **)(a1 + 312));
  sub_10000A260((char **)(a1 + 280));
  v12 = *(void **)(a1 + 248);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  free_debug_event(a1 + 168);
  sub_10000A330(a1 + 120);
  v13 = *(void **)(a1 + 96);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v14 = *(void **)(a1 + 72);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  sub_10000A4D0((char **)(a1 + 48));
}
// 1000A9A60: using guessed type __int64 (__fastcall *off_1000A9A60[4])();
