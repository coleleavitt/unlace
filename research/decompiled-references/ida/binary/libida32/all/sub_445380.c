__int64 __fastcall sub_445380(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __m128i si128; // xmm1

  *(_QWORD *)a1 = &off_2BD0430;
  result = operator new(0x430u);
  *(_QWORD *)result = 0;
  v2 = result + 752;
  *(_QWORD *)(result + 48) = result + 32;
  *(_QWORD *)(result + 56) = result + 32;
  *(_QWORD *)(result + 96) = result + 80;
  *(_QWORD *)(result + 104) = result + 80;
  *(_QWORD *)(result + 168) = result + 152;
  *(_QWORD *)(result + 176) = result + 152;
  *(_QWORD *)(result + 216) = result + 200;
  *(_QWORD *)(result + 224) = result + 200;
  *(_QWORD *)(result + 288) = result + 272;
  *(_QWORD *)(result + 296) = result + 272;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 184) = 0;
  *(_DWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 240) = 0;
  *(_DWORD *)(result + 272) = 0;
  *(_QWORD *)(result + 280) = 0;
  *(_QWORD *)(result + 304) = 0;
  *(_DWORD *)(result + 320) = 0;
  *(_OWORD *)(result + 8) = 0;
  *(_OWORD *)(result + 128) = 0;
  *(_OWORD *)(result + 248) = 0;
  *(_QWORD *)(result + 328) = 0;
  *(_QWORD *)(result + 336) = result + 320;
  *(_QWORD *)(result + 344) = result + 320;
  *(_QWORD *)(result + 408) = result + 392;
  *(_QWORD *)(result + 416) = result + 392;
  *(_QWORD *)(result + 456) = result + 440;
  *(_QWORD *)(result + 464) = result + 440;
  *(_QWORD *)(result + 528) = result + 512;
  *(_QWORD *)(result + 536) = result + 512;
  *(_QWORD *)(result + 576) = result + 560;
  *(_QWORD *)(result + 584) = result + 560;
  *(_QWORD *)(result + 648) = result + 632;
  *(_QWORD *)(result + 352) = 0;
  *(_QWORD *)(result + 360) = 0;
  *(_DWORD *)(result + 392) = 0;
  *(_QWORD *)(result + 400) = 0;
  *(_QWORD *)(result + 424) = 0;
  *(_DWORD *)(result + 440) = 0;
  *(_QWORD *)(result + 448) = 0;
  *(_QWORD *)(result + 472) = 0;
  *(_QWORD *)(result + 480) = 0;
  *(_DWORD *)(result + 512) = 0;
  *(_QWORD *)(result + 520) = 0;
  *(_QWORD *)(result + 544) = 0;
  *(_DWORD *)(result + 560) = 0;
  *(_QWORD *)(result + 568) = 0;
  *(_QWORD *)(result + 592) = 0;
  *(_QWORD *)(result + 600) = 0;
  *(_DWORD *)(result + 632) = 0;
  *(_QWORD *)(result + 640) = 0;
  *(_OWORD *)(result + 368) = 0;
  *(_OWORD *)(result + 488) = 0;
  *(_OWORD *)(result + 608) = 0;
  *(_QWORD *)(result + 656) = result + 632;
  *(_QWORD *)(result + 664) = 0;
  *(_DWORD *)(result + 680) = 0;
  *(_QWORD *)(result + 688) = 0;
  *(_QWORD *)(result + 712) = 0;
  *(_QWORD *)(result + 720) = 0;
  *(_QWORD *)(result + 696) = result + 680;
  *(_QWORD *)(result + 704) = result + 680;
  v3 = result + 896;
  *(_OWORD *)(result + 728) = 0;
  do
  {
    *(_DWORD *)v2 = 0;
    *(_QWORD *)(v2 + 8) = 0;
    *(_QWORD *)(v2 + 16) = v2;
    *(_QWORD *)(v2 + 24) = v2;
    v2 += 48;
    *(_QWORD *)(v2 - 16) = 0;
  }
  while ( v3 != v2 );
  do
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = v3;
    *(_QWORD *)(v3 + 24) = v3;
    v3 += 48;
    *(_QWORD *)(v3 - 16) = 0;
  }
  while ( result + 1040 != v3 );
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383940);
  *(_QWORD *)(result + 1032) = 0;
  *(_QWORD *)(result + 1056) = 0;
  *(_BYTE *)(result + 1064) = 1;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(result + 1040) = 0;
  *(__m128i *)(a1 + 16) = si128;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  return result;
}

