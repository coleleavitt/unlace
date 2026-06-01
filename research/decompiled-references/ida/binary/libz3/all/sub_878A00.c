__int64 __fastcall sub_878A00(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __m128i si128; // xmm0
  __m128i *v4; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v2 = (_QWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 16) = 8;
  *(_OWORD *)(a1 + 32) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B66B0);
  *v2 = 0;
  v2[2] = 0;
  v2[4] = 0;
  v2[6] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[12] = 0;
  v2[14] = 0;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(__m128i *)(a1 + 48) = si128;
  v4 = (__m128i *)sub_186B270(0x20u);
  *(_QWORD *)(a1 + 40) = v4;
  v4[1].m128i_i64[0] = -1;
  v4[1].m128i_i64[1] = 0xFFFFFFFF00000000LL;
  *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  result = *(unsigned int *)(sub_7E4EB0(a2) + 88);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}

