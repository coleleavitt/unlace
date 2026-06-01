__int64 __fastcall sub_125F920(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __m128i *v4; // rax
  __m128i si128; // xmm0

  v2 = *(_DWORD *)(a2 + 48) == 37;
  *(_QWORD *)a1 = a1 + 16;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 10;
    strcpy((char *)(a1 + 16), "/lib/ld.so");
    return a1;
  }
  else
  {
    v4 = (__m128i *)operator new(0x14u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9D20);
    *(_QWORD *)(a1 + 16) = 19;
    *(_QWORD *)a1 = v4;
    *v4 = si128;
    v4[1].m128i_i16[0] = 11887;
    v4[1].m128i_i8[2] = 49;
    v4[1].m128i_i8[3] = 0;
    *(_QWORD *)(a1 + 8) = 19;
    return a1;
  }
}
