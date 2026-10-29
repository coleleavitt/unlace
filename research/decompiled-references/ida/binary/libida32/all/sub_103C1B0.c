_UNKNOWN **__fastcall sub_103C1B0(__int64 a1, const __m128i *a2, __int64 a3)
{
  void *v3; // rax
  _BYTE *v4; // r13
  signed __int64 v5; // rbp
  __int32 v6; // eax
  __int64 v7; // rax
  __m128i si128; // xmm0

  sub_103BB70(a1, a2, a3);
  *(_BYTE *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 152) = 0x400000004LL;
  *(_QWORD *)a1 = &off_2BFEAB8;
  v3 = (void *)(a1 + 640);
  *(_QWORD *)(a1 + 624) = a1 + 640;
  v4 = (_BYTE *)a2->m128i_i64[0];
  v5 = a2->m128i_i64[1];
  if ( v5 + a2->m128i_i64[0] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v3 = (void *)operator new(v5 + 1);
    *(_QWORD *)(a1 + 640) = v5;
    *(_QWORD *)(a1 + 624) = v3;
    goto LABEL_11;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_6;
LABEL_11:
    memcpy(v3, v4, v5);
    v3 = *(void **)(a1 + 624);
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 640) = *v4;
LABEL_6:
  *(_QWORD *)(a1 + 632) = v5;
  *((_BYTE *)v3 + v5) = 0;
  *(__m128i *)(a1 + 656) = _mm_loadu_si128(a2 + 2);
  *(_DWORD *)(a1 + 672) = a2[3].m128i_i32[0];
  v6 = a2[3].m128i_i32[1];
  *(_WORD *)(a1 + 30) = 8224;
  *(_DWORD *)(a1 + 676) = v6;
  *(_WORD *)(a1 + 14) = 8224;
  *(_BYTE *)(a1 + 33) = 64;
  *(_BYTE *)(a1 + 23) = 64;
  *(_WORD *)(a1 + 24) = 16448;
  v7 = sub_21D5370();
  si128 = _mm_load_si128((const __m128i *)&xmmword_23855F0);
  *(_DWORD *)(a1 + 168) = 9;
  *(_QWORD *)(a1 + 112) = v7;
  *(__m128i *)(a1 + 136) = si128;
  *(_QWORD *)a1 = &off_2BFD6F8;
  *(_DWORD *)(a1 + 340) = 5;
  return &off_2BFD6F8;
}

