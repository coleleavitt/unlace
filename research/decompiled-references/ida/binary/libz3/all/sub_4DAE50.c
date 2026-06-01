__int64 __fastcall sub_4DAE50(int a1, const __m128i *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __m128i v4; // xmm0

  v2 = sub_186B270(0x60u);
  *(_OWORD *)(v2 + 8) = 0;
  sub_6299B0(v2 + 24);
  sub_6299B0(v2 + 32);
  *(_BYTE *)(v2 + 40) = 0;
  *(_QWORD *)v2 = off_1C66400;
  v3 = (_QWORD *)sub_186B270(0xC0u);
  v4 = _mm_loadu_si128(a2);
  *v3 = 0;
  v3[3] = 0;
  v3[6] = 0;
  v3[9] = 0;
  v3[12] = 0;
  v3[15] = 0;
  v3[18] = 0;
  v3[21] = 0;
  *(_QWORD *)(v2 + 48) = v3;
  *(_QWORD *)v2 = &off_1C4F728;
  *(_QWORD *)(v2 + 56) = 8;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 72) = a1;
  *(__m128i *)(v2 + 80) = v4;
  if ( v4.m128i_i64[0] )
    ++*(_DWORD *)(v4.m128i_i64[0] + 8);
  return v2;
}

