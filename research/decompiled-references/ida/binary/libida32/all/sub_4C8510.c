unsigned __int64 __fastcall sub_4C8510(__int64 a1)
{
  __int64 v1; // rax
  __m128i v2; // xmm2
  __m128i v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+18h] [rbp-50h]
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  v4 = _mm_unpacklo_epi64(
         (__m128i)((unsigned __int64)&std::string::_Rep::_S_empty_rep_storage + 24),
         (__m128i)((unsigned __int64)&std::string::_Rep::_S_empty_rep_storage + 24));
  *(_QWORD *)a1 = 0;
  v1 = operator new(0x50u);
  *(_QWORD *)(a1 + 48) = a1 + 96;
  *(_OWORD *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 32) = 0;
  *(_OWORD *)(v1 + 48) = 0;
  *(_OWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 8) = 0x100000001LL;
  *(_QWORD *)v1 = off_2AFE6C0;
  *(_QWORD *)(a1 + 8) = v1;
  *(_QWORD *)a1 = v1 + 16;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1065353216;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v5 = a1 + 152;
  v6 = 0;
  sub_421320(a1 + 200, &v6);
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  v6 = 0;
  sub_421320(a1 + 304, &v6);
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  v6 = 0;
  sub_421320(a1 + 408, &v6);
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  *(_OWORD *)(a1 + 496) = 0;
  *(_OWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 544) = 0;
  v6 = 0;
  sub_421320(a1 + 512, &v6);
  v2 = _mm_load_si128(&v4);
  *(_BYTE *)(a1 + 568) = 0;
  *(_DWORD *)(a1 + 572) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_OWORD *)(a1 + 584) = 0;
  *(__m128i *)(a1 + 600) = v2;
  return v7 - __readfsqword(0x28u);
}

