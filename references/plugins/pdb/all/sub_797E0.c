__int64 __fastcall sub_797E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 144);
  if ( v1 && !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 608) + 16LL))(*(_QWORD *)(v1 + 608)) )
    return 1;
  v2 = operator new(0xD0u);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  *(_QWORD *)(v2 + 8) = v2 + 56;
  *(_QWORD *)(v2 + 16) = 1;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 40) = 1065353216;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = a1 + 152;
  *(_QWORD *)v2 = &off_B22A8;
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 1;
  *(_DWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(_BYTE *)(v2 + 200) = 1;
  *(_OWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 112) = 0;
  *(_OWORD *)(v2 + 160) = 0;
  *(_OWORD *)(v2 + 184) = 0;
  v5 = sub_76FE0(v2, v3, 0);
  *(_BYTE *)(a1 + 224) = v5 == 2;
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 608);
      *(_QWORD *)(v6 + 608) = v4;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v9 = operator new(0x360u);
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = v9 + 72;
      *(_QWORD *)(v9 + 80) = v9 + 128;
      *(_WORD *)(v9 + 136) = 0;
      *(_QWORD *)(v9 + 168) = v9 + 216;
      *(_QWORD *)(v9 + 224) = v9 + 272;
      *(_QWORD *)(v9 + 32) = 1;
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 48) = 0;
      *(_DWORD *)(v9 + 56) = 1065353216;
      *(_QWORD *)(v9 + 64) = 0;
      *(_QWORD *)(v9 + 72) = 0;
      *(_QWORD *)(v9 + 88) = 1;
      *(_QWORD *)(v9 + 96) = 0;
      *(_QWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 112) = 1065353216;
      *(_QWORD *)(v9 + 120) = 0;
      *(_QWORD *)(v9 + 128) = 0;
      *(_BYTE *)(v9 + 138) = 0;
      *(_QWORD *)(v9 + 144) = 0;
      *(_QWORD *)(v9 + 176) = 1;
      *(_QWORD *)(v9 + 184) = 0;
      *(_QWORD *)(v9 + 192) = 0;
      *(_DWORD *)(v9 + 200) = 1065353216;
      *(_QWORD *)(v9 + 208) = 0;
      *(_QWORD *)(v9 + 216) = 0;
      *(_QWORD *)(v9 + 232) = 1;
      *(_QWORD *)(v9 + 240) = 0;
      *(_QWORD *)(v9 + 248) = 0;
      *(_DWORD *)(v9 + 256) = 1065353216;
      *(_OWORD *)v9 = 0;
      *(_OWORD *)(v9 + 152) = 0;
      *(_QWORD *)(v9 + 264) = 0;
      *(_QWORD *)(v9 + 280) = v9 + 328;
      *(_QWORD *)(v9 + 360) = v9 + 408;
      *(_QWORD *)(v9 + 416) = v9 + 464;
      *(_QWORD *)(v9 + 472) = v9 + 520;
      *(_QWORD *)(v9 + 272) = 0;
      *(_QWORD *)(v9 + 288) = 1;
      *(_QWORD *)(v9 + 296) = 0;
      *(_QWORD *)(v9 + 304) = 0;
      *(_DWORD *)(v9 + 312) = 1065353216;
      *(_QWORD *)(v9 + 320) = 0;
      *(_QWORD *)(v9 + 368) = 1;
      *(_QWORD *)(v9 + 376) = 0;
      *(_QWORD *)(v9 + 384) = 0;
      *(_DWORD *)(v9 + 392) = 1065353216;
      *(_QWORD *)(v9 + 400) = 0;
      *(_QWORD *)(v9 + 408) = 0;
      *(_QWORD *)(v9 + 424) = 1;
      *(_QWORD *)(v9 + 432) = 0;
      *(_QWORD *)(v9 + 440) = 0;
      *(_DWORD *)(v9 + 448) = 1065353216;
      *(_QWORD *)(v9 + 456) = 0;
      *(_QWORD *)(v9 + 464) = 0;
      *(_QWORD *)(v9 + 480) = 1;
      *(_QWORD *)(v9 + 488) = 0;
      *(_QWORD *)(v9 + 496) = 0;
      *(_QWORD *)(v9 + 504) = 1065353216;
      *(_QWORD *)(v9 + 512) = 0;
      *(_QWORD *)(v9 + 520) = 0;
      *(_QWORD *)(v9 + 528) = 0;
      *(_QWORD *)(v9 + 536) = -1;
      *(_OWORD *)(v9 + 328) = 0;
      *(_OWORD *)(v9 + 344) = 0;
      *(_WORD *)(v9 + 544) = -1;
      *(_QWORD *)(v9 + 680) = v9 + 664;
      *(_QWORD *)(v9 + 688) = v9 + 664;
      *(_QWORD *)(v9 + 728) = v9 + 712;
      *(_QWORD *)(v9 + 736) = v9 + 712;
      *(_QWORD *)(v9 + 776) = v9 + 760;
      *(_QWORD *)(v9 + 784) = v9 + 760;
      *(_QWORD *)(v9 + 552) = 0;
      *(_QWORD *)(v9 + 576) = 0;
      *(_QWORD *)(v9 + 600) = a1 + 152;
      *(_QWORD *)(v9 + 608) = v4;
      *(_QWORD *)(v9 + 624) = 0;
      *(_QWORD *)(v9 + 632) = 0;
      *(_DWORD *)(v9 + 664) = 0;
      *(_QWORD *)(v9 + 672) = 0;
      *(_QWORD *)(v9 + 696) = 0;
      *(_DWORD *)(v9 + 712) = 0;
      *(_QWORD *)(v9 + 720) = 0;
      *(_QWORD *)(v9 + 744) = 0;
      *(_DWORD *)(v9 + 760) = 0;
      *(_QWORD *)(v9 + 768) = 0;
      *(_QWORD *)(v9 + 792) = 0;
      *(_DWORD *)(v9 + 808) = 0;
      *(_QWORD *)(v9 + 816) = 0;
      *(_QWORD *)(v9 + 824) = v9 + 808;
      *(_QWORD *)(v9 + 832) = v9 + 808;
      *(_QWORD *)(v9 + 840) = 0;
      *(_QWORD *)(v9 + 848) = 0;
      *(_BYTE *)(v9 + 856) = 0;
      *(_QWORD *)(a1 + 144) = v9;
      *(_OWORD *)(v9 + 560) = 0;
      *(_OWORD *)(v9 + 584) = 0;
      *(_OWORD *)(v9 + 640) = 0;
    }
    return 1;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return 0;
}
