__int64 __fastcall sub_E78640(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  __m128i si128; // xmm0
  __int64 v5; // rax
  __int64 result; // rax
  double v7[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v7[0] = a3;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)&v7[1] = a2;
  *(_QWORD *)(a1 + 40) = 0xA00000000LL;
  v3 = _mm_loadh_ps(v7);
  *(_QWORD *)(a1 + 456) = a1 + 472;
  *(__m128 *)a1 = v3;
  *(_QWORD *)(a1 + 464) = 0x400000000LL;
  *(_OWORD *)(a1 + 440) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 504) = a1 + 520;
  *(_QWORD *)(a1 + 536) = a1 + 440;
  *(__m128i *)(a1 + 520) = si128;
  *(_QWORD *)(a1 + 568) = a1 + 552;
  *(_QWORD *)(a1 + 576) = a1 + 552;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  result = *(_QWORD *)(v5 + 17448);
  *(_BYTE *)(a1 + 592) = *(_BYTE *)(result + 8) == 64;
  return result;
}
