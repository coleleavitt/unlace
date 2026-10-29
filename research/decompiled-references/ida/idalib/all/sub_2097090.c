void __fastcall sub_2097090(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax

  *(_QWORD *)(a1 + 112) = a1 + 128;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_2C724F8;
  *(_QWORD *)(a1 + 40) = 0x800000000LL;
  *(_QWORD *)(a1 + 120) = 0x800000000LL;
  *(_QWORD *)(a1 + 240) = a1 + 256;
  *(_QWORD *)(a1 + 248) = 0x1000000000LL;
  v2 = (_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 384) = 1;
  if ( a1 + 392 != a1 + 520 )
  {
    do
    {
      *v2 = -4096;
      v2 += 2;
    }
    while ( (_QWORD *)(a1 + 520) != v2 );
  }
  sub_2222F10(a1 + 520, 6);
  v3 = *(unsigned int *)(a1 + 44);
  *(_QWORD *)(a1 + 552) = a1 + 568;
  *(_QWORD *)(a1 + 560) = 0x400000000LL;
  *(_QWORD *)(a1 + 600) = a1 + 616;
  v4 = *(unsigned int *)(a1 + 40);
  *(_OWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_OWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a2 + 8) = a1;
  if ( v4 + 1 > v3 )
  {
    sub_2237220(a1 + 32, a1 + 48, v4 + 1, 8);
    v4 = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4) = a2;
  ++*(_DWORD *)(a1 + 40);
  sub_2096FC0((__int64 **)(a1 + 8), a2);
}
