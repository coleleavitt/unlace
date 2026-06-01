__int64 __fastcall sub_12ED050(
        __int64 a1,
        _BYTE *a2,
        size_t a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v8; // rbx
  __m128i *v9; // rax
  __m128i si128; // xmm0

  v8 = 0;
  if ( !(unsigned __int8)sub_12ECF50(a1, a2, a3, a4, a5) )
  {
    v8 = operator new(0x40u);
    *(_DWORD *)(v8 + 8) = *a6;
    *(_QWORD *)v8 = &off_2BB3F98;
    *(_QWORD *)(v8 + 16) = a7;
    v9 = (__m128i *)operator new(0x70u);
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 56) = v9;
    v9->m128i_i64[0] = (__int64)off_2C42CD0;
    memset(&v9[1], 0, 0x60u);
    v9[6] = si128;
    v9->m128i_i64[1] = 0x100000001LL;
    v9[2].m128i_i64[0] = (__int64)v9[3].m128i_i64;
    v9[2].m128i_i64[1] = 0x400000000LL;
    v9[5].m128i_i64[0] = (__int64)v9[6].m128i_i64;
    *(_QWORD *)(v8 + 48) = v9 + 1;
  }
  return v8;
}
