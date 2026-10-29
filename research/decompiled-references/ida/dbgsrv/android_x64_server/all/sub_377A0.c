/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_377A0
// Address: 0x00000000000377A0

//----- (00000000000377A0) ----------------------------------------------------
void __fastcall sub_377A0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void **v10; // r14
  void **v11; // rbx
  void **v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rdi
  void *v16; // rdi

  *(_QWORD *)a1 = off_14E9F8;
  sub_9FEA0(a1);
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
  sub_383E0((char **)(a1 + 616));
  v4 = *(void **)(a1 + 592);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 600) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 592) = 0;
    *(_QWORD *)(a1 + 608) = 0;
  }
  sub_38490((char **)(a1 + 568));
  v5 = *(void **)(a1 + 544);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 552) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 544) = 0;
    *(_QWORD *)(a1 + 560) = 0;
  }
  sub_38540(a1 + 504, *(_QWORD **)(a1 + 512));
  v6 = *(void **)(a1 + 480);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 488) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 480) = 0;
    *(_QWORD *)(a1 + 496) = 0;
  }
  sub_380A0((char **)(a1 + 456));
  sub_38580(a1 + 432, *(_QWORD **)(a1 + 440));
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
    sub_385C0((__int64 *)(a1 + 376), 0);
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
  sub_38680(a1 + 328, *(_QWORD **)(a1 + 336));
  sub_38710(a1 + 304, *(_QWORD **)(a1 + 312));
  if ( *(_QWORD *)(a1 + 280) )
  {
    sub_38980((__int64 *)(a1 + 280), 0);
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
  sub_38A40((_QWORD *)(a1 + 120));
  v11 = *(void ***)(a1 + 128);
  v12 = *(void ***)(a1 + 136);
  if ( v11 != v12 )
  {
    do
      operator delete(*v11++);
    while ( v12 != v11 );
    v13 = *(_QWORD *)(a1 + 128);
    v14 = *(_QWORD *)(a1 + 136);
    if ( v14 != v13 )
    {
      do
        v14 -= 8;
      while ( v13 != v14 );
      *(_QWORD *)(a1 + 136) = v13;
    }
  }
  if ( *v10 )
    operator delete(*v10);
  v15 = *(void **)(a1 + 96);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v16 = *(void **)(a1 + 72);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    sub_38B70((__int64 *)(a1 + 48), 0);
    qfree(*(void **)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
}
// 14E9F8: using guessed type __int64 (__fastcall *off_14E9F8[5])();
