__int64 __fastcall sub_5856E0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 12) = -1;
  *(_QWORD *)(result + 32) = a2;
  *(_QWORD *)result = off_2B05170;
  *(__m128i *)(result + 16) = si128;
  return result;
}

