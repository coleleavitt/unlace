__int64 __fastcall sub_5D9DF0(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x448u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D20);
  *(_QWORD *)result = a1;
  *(__m128i *)(result + 8) = si128;
  memset((void *)(result + 24), 0, 0x3F0u);
  *(_QWORD *)(result + 1032) = 0;
  *(_QWORD *)(result + 1064) = result + 1048;
  *(_QWORD *)(result + 1072) = result + 1048;
  *(_DWORD *)(result + 1048) = 0;
  *(_QWORD *)(result + 1056) = 0;
  *(_QWORD *)(result + 1080) = 0;
  *(_DWORD *)(result + 1088) = 0;
  *(_BYTE *)(result + 1092) = 0;
  return result;
}
