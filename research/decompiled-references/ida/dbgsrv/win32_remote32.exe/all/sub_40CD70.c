/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CD70
// Address: 0x0040CD70

//----- (0040CD70) --------------------------------------------------------
int __usercall sub_40CD70@<eax>(int a1@<ecx>, __m128i a2@<xmm0>)
{
  int *v3; // ecx
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  void *v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  void *v15; // [esp-4h] [ebp-24h]
  int v16[4]; // [esp+10h] [ebp-10h] BYREF

  sub_4145E0(a1, a2, (_DWORD *)(a1 + 504));
  sub_4145E0(a1, a2, (_DWORD *)(a1 + 508));
  sub_4145E0(a1, a2, (_DWORD *)(a1 + 500));
  sub_4145E0(a1, a2, (_DWORD *)(a1 + 452));
  v3 = *(int **)(a1 + 532);
  v4 = *v3;
  v16[0] = v4;
  if ( (int *)v4 != v3 )
  {
    do
    {
      sub_4145E0(a1, a2, (_DWORD *)(v4 + 44));
      sub_40B5E0(v16);
      v4 = v16[0];
    }
    while ( v16[0] != *(_DWORD *)(a1 + 532) );
  }
  *(_DWORD *)(a1 + 256) = -1;
  if ( *(_DWORD *)(a1 + 460) )
  {
    v15 = *(void **)(a1 + 460);
    *(_DWORD *)(a1 + 464) = 0;
    sub_453A20(v15);
    *(_DWORD *)(a1 + 460) = 0;
    *(_DWORD *)(a1 + 468) = 0;
  }
  *(_DWORD *)(a1 + 476) = 0;
  *(_BYTE *)(a1 + 521) = sub_4560B0("IDA_SYSTEMBREAKPOINT", nullptr);
  *(_BYTE *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 656) = 0;
  *(_DWORD *)(a1 + 628) = 0;
  *(_DWORD *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 636) = 0;
  *(_DWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 644) = 0;
  *(_DWORD *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 652) = 0;
  *(_DWORD *)(a1 + 616) = -1;
  *(_DWORD *)(a1 + 620) = -1;
  *(_DWORD *)(a1 + 624) = -1;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = -1;
  sub_40D1C0((void **)(a1 + 188));
  v5 = *(_DWORD *)(a1 + 604);
  sub_408AA0((void *)(a1 + 604), a1 + 604, *(int **)(v5 + 4));
  *(_DWORD *)(v5 + 4) = v5;
  *(_DWORD *)v5 = v5;
  *(_DWORD *)(v5 + 8) = v5;
  *(_DWORD *)(a1 + 608) = 0;
  v6 = *(_DWORD **)(a1 + 596);
  v16[0] = (int)v6;
  v7 = (_DWORD *)v6[1];
  if ( !*((_BYTE *)v7 + 13) )
  {
    do
    {
      sub_408940(a1 + 596, v7[2]);
      v8 = v7;
      v7 = (_DWORD *)*v7;
      sub_4627F2(v8);
      v16[3] = -1;
    }
    while ( !*((_BYTE *)v7 + 13) );
    v6 = (_DWORD *)v16[0];
  }
  v6[1] = v6;
  *v6 = v6;
  v6[2] = v6;
  *(_DWORD *)(a1 + 600) = 0;
  sub_40D090((_DWORD *)(a1 + 216));
  v9 = *(_DWORD *)(a1 + 524);
  sub_408890((void *)(a1 + 524), a1 + 524, *(int **)(v9 + 4));
  *(_DWORD *)(v9 + 4) = v9;
  *(_DWORD *)v9 = v9;
  *(_DWORD *)(v9 + 8) = v9;
  *(_DWORD *)(a1 + 528) = 0;
  v10 = *(_DWORD *)(a1 + 532);
  sub_408890((void *)(a1 + 532), a1 + 532, *(int **)(v10 + 4));
  *(_DWORD *)(v10 + 4) = v10;
  *(_DWORD *)v10 = v10;
  *(_DWORD *)(v10 + 8) = v10;
  *(_DWORD *)(a1 + 536) = 0;
  sub_40D110((_DWORD *)(a1 + 564));
  v11 = *(_DWORD *)(a1 + 540);
  sub_408890((void *)(a1 + 540), a1 + 540, *(int **)(v11 + 4));
  *(_DWORD *)(v11 + 4) = v11;
  *(_DWORD *)v11 = v11;
  *(_DWORD *)(v11 + 8) = v11;
  *(_DWORD *)(a1 + 544) = 0;
  v12 = *(_DWORD *)(a1 + 548);
  sub_408890((void *)(a1 + 548), a1 + 548, *(int **)(v12 + 4));
  *(_DWORD *)(v12 + 4) = v12;
  *(_DWORD *)v12 = v12;
  *(_DWORD *)(v12 + 8) = v12;
  *(_DWORD *)(a1 + 552) = 0;
  v13 = *(_DWORD *)(a1 + 556);
  sub_408890((void *)(a1 + 556), a1 + 556, *(int **)(v13 + 4));
  *(_DWORD *)(v13 + 4) = v13;
  *(_DWORD *)v13 = v13;
  *(_DWORD *)(v13 + 8) = v13;
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 692) = 0;
  *(_DWORD *)(a1 + 696) = 0;
  *(_DWORD *)(a1 + 700) = 0;
  *(_DWORD *)(a1 + 704) = 0;
  *(_DWORD *)(a1 + 708) = 0;
  *(_DWORD *)(a1 + 712) = 0;
  *(_DWORD *)(a1 + 716) = -1;
  return sub_418540((_BYTE *)a1);
}
