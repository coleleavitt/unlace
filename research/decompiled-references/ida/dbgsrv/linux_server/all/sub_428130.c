/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428130
// Address: 0x0000000000428130

//----- (0000000000428130) ----------------------------------------------------
__int64 __fastcall sub_428130(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = -1;
  *(_QWORD *)(a1 + 64) = a1;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_WORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  memset(
    (void *)((a1 + 144) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 144) & 0xFFFFFFF8) + 240) >> 3));
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F510);
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 456) = -1;
  *(_DWORD *)(a1 + 464) = 8;
  *(_BYTE *)(a1 + 468) = 1;
  *(_QWORD *)(a1 + 472) = a2;
  *(_QWORD *)(a1 + 480) = a3;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_WORD *)(a1 + 616) = 0;
  *(_BYTE *)(a1 + 618) = 0;
  *(_QWORD *)(a1 + 496) = sub_424B30;
  *(_OWORD *)(a1 + 360) = 0;
  *(__m128i *)(a1 + 440) = si128;
  *(_OWORD *)(a1 + 584) = 0;
  result = sub_47F710(a2);
  *(_QWORD *)(a1 + 488) = result;
  return result;
}
// 48F510: using guessed type __int128 xmmword_48F510;
