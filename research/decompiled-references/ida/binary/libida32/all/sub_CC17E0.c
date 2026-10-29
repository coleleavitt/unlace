__int64 __fastcall sub_CC17E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v2 = operator new(0x148u);
  *(_OWORD *)(v2 + 128) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  *(_QWORD *)(v2 + 144) = v2 + 160;
  *(_QWORD *)v2 = a1;
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 152) = 0x400000000LL;
  *(_QWORD *)(v2 + 192) = v2 + 208;
  *(_QWORD *)(v2 + 200) = 0;
  *(__m128i *)(v2 + 208) = si128;
  *(_QWORD *)(v2 + 224) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_DWORD *)(v2 + 264) = 0;
  *(_QWORD *)(v2 + 272) = 0;
  *(_QWORD *)(v2 + 280) = 0;
  *(_DWORD *)(v2 + 288) = 0;
  *(_QWORD *)(v2 + 296) = 0;
  *(_QWORD *)(a1 + 24) = v2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(v2 + 304) = 0;
  *(_DWORD *)(v2 + 312) = 0;
  *(_QWORD *)(v2 + 320) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(a1 + 36) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 17448) + 12LL);
  *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 17448) + 14LL);
  *(_DWORD *)(a1 + 44) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 17448) + 30LL);
  result = *(unsigned __int8 *)(*(_QWORD *)(a2 + 17448) + 32LL);
  *(_DWORD *)(a1 + 48) = result;
  return result;
}

