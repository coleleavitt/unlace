__int64 __fastcall declaration_compiler_t__ctor(unsigned __int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0

  result = operator new(0x268u);
  *(_QWORD *)(result + 96) = 0;
  v2 = _mm_loadl_epi64((const __m128i *)&qword_2CA1698);
  *(_DWORD *)(result + 160) = 1065353216;
  *(_QWORD *)(result + 128) = result + 176;
  *(_QWORD *)(result + 184) = result + 232;
  *(__m128i *)result = _mm_unpacklo_epi64(v2, (__m128i)a1);
  *(_QWORD *)(result + 264) = result + 312;
  *(_DWORD *)(result + 216) = 1065353216;
  *(_DWORD *)(result + 296) = 1065353216;
  *(_DWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 136) = 1;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_QWORD *)(result + 176) = 0;
  *(_QWORD *)(result + 192) = 1;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 272) = 1;
  *(_QWORD *)(result + 280) = 0;
  *(_QWORD *)(result + 288) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 64) = 0;
  *(_OWORD *)(result + 80) = 0;
  *(_OWORD *)(result + 104) = 0;
  *(_OWORD *)(result + 232) = 0;
  *(_OWORD *)(result + 248) = 0;
  *(_QWORD *)(result + 304) = 0;
  *(_DWORD *)(result + 352) = 1065353216;
  *(_QWORD *)(result + 312) = 0;
  *(_QWORD *)(result + 320) = result + 368;
  *(_QWORD *)(result + 328) = 1;
  *(_QWORD *)(result + 336) = 0;
  *(_QWORD *)(result + 344) = 0;
  *(_QWORD *)(result + 360) = 0;
  *(_QWORD *)(result + 368) = 0;
  *(_QWORD *)(result + 376) = 0;
  *(_QWORD *)(result + 384) = result;
  *(_QWORD *)(result + 392) = 0;
  *(_QWORD *)(result + 416) = 0;
  *(_QWORD *)(result + 440) = 0;
  *(_QWORD *)(result + 480) = 0;
  *(_QWORD *)(result + 488) = 0;
  *(_QWORD *)(result + 512) = 0;
  *(_QWORD *)(result + 520) = 0;
  *(_QWORD *)(result + 544) = 0;
  *(_QWORD *)(result + 552) = 0;
  *(_QWORD *)(result + 560) = 0;
  *(_BYTE *)(result + 584) = 0;
  *(_QWORD *)(result + 592) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_OWORD *)(result + 400) = 0;
  *(_OWORD *)(result + 424) = 0;
  *(_OWORD *)(result + 448) = 0;
  *(_OWORD *)(result + 464) = 0;
  *(_OWORD *)(result + 496) = 0;
  *(_OWORD *)(result + 528) = 0;
  *(_OWORD *)(result + 568) = 0;
  *(_OWORD *)(result + 600) = 0;
  return result;
}

