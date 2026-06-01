/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2ADC0
// Address: 0x0002ADC0

//----- (0002ADC0) --------------------------------------------------------
void __cdecl sub_2ADC0(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax

  *(_DWORD *)a1 = off_1344D0;
  *(_DWORD *)(a1 + 668) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  v1 = *(void **)(a1 + 692);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 696) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 692) = 0;
    *(_DWORD *)(a1 + 700) = 0;
  }
  v2 = *(void **)(a1 + 680);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 684) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 680) = 0;
    *(_DWORD *)(a1 + 688) = 0;
  }
  sub_2B6C0(a1 + 656, *(void ***)(a1 + 660));
  v3 = *(void **)(a1 + 636);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 640) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 636) = 0;
    *(_DWORD *)(a1 + 644) = 0;
  }
  v4 = *(void **)(a1 + 604);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 608) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 604) = 0;
    *(_DWORD *)(a1 + 612) = 0;
  }
  v5 = *(void **)(a1 + 592);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 596) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 592) = 0;
    *(_DWORD *)(a1 + 600) = 0;
  }
  v6 = *(void **)(a1 + 580);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 584) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 580) = 0;
    *(_DWORD *)(a1 + 588) = 0;
  }
  sub_2B710(a1 + 568, *(void ***)(a1 + 572));
  sub_2B780(a1 + 556, *(void ***)(a1 + 560));
  sub_2B6C0(a1 + 544, *(void ***)(a1 + 548));
  v7 = *(void **)(a1 + 532);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 536) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 532) = 0;
    *(_DWORD *)(a1 + 540) = 0;
  }
  v8 = *(void **)(a1 + 520);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 524) = 0;
    qfree(v8);
    *(_DWORD *)(a1 + 520) = 0;
    *(_DWORD *)(a1 + 528) = 0;
  }
  v9 = *(void **)(a1 + 508);
  if ( v9 )
  {
    *(_DWORD *)(a1 + 512) = 0;
    qfree(v9);
    *(_DWORD *)(a1 + 508) = 0;
    *(_DWORD *)(a1 + 516) = 0;
  }
  v10 = *(void **)(a1 + 496);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 500) = 0;
    qfree(v10);
    *(_DWORD *)(a1 + 496) = 0;
    *(_DWORD *)(a1 + 504) = 0;
  }
  sub_1AD70(a1);
}
// 1344D0: using guessed type int (__cdecl *off_1344D0[4])(int, int);
