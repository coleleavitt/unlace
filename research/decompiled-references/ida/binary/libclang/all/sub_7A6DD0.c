unsigned __int64 __fastcall sub_7A6DD0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // xmm2_8
  __int64 v15; // rax
  __int64 v16; // r13
  __int16 v17; // ax
  __m128i v18; // xmm5
  __m128i si128; // xmm6
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __m128i v22[4]; // [rsp+10h] [rbp-48h] BYREF

  v22[0] = (__m128i)_mm_loadh_ps((const double *)&a9);
  v13 = sub_79A610(88, a1, a2, 0);
  v21 = _mm_unpacklo_epi64((__m128i)a5, (__m128i)a6);
  v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)).m128i_u64[0];
  if ( !(_BYTE)qword_4AD2338 && __cxa_guard_acquire(&qword_4AD2338) )
  {
    LODWORD(qword_4AD2340) = 2;
    __cxa_guard_release(&qword_4AD2338);
  }
  *(_QWORD *)v13 = off_49F5208;
  if ( !a2
    || (v15 = sub_79A2E0(a2), v16 = *(_QWORD *)(v15 + 8) & 7LL, (*(_QWORD *)(v15 + 8) & 7) == 0)
    || *(char *)(v15 + 29) < 0 && !sub_7946A0(v15) )
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v13 + 24) = a7;
  *(_WORD *)(v13 + 28) = 24630;
  v17 = sub_799DF0(0x36u);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(54);
  v18 = _mm_load_si128(&v21);
  *(_QWORD *)(v13 + 40) = (char *)&qword_4AD2340 + 7;
  si128 = _mm_load_si128(v22);
  *(_QWORD *)(v13 + 48) = v14;
  *(__m128i *)(v13 + 56) = v18;
  *(_QWORD *)v13 = &off_49F5670;
  *(__m128i *)(v13 + 72) = si128;
  return v13;
}

