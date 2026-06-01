__int64 __fastcall sub_55CD40(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  int v4; // edx
  __m128i v5; // xmm0
  _DWORD *v6; // rax
  unsigned __int64 v7; // rsi
  int v8; // ecx
  int v9; // esi
  __m128i v10; // xmm1
  int v11; // ecx
  __int64 v13; // [rsp+10h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    __assert_fail(
      "(uint32_t)((&self->cursor.stack)->size - 1) < (&self->cursor.stack)->size",
      "lib/src/./get_changed_ranges.c",
      0x8Cu,
      "iterator_start_position");
  v2 = *(_QWORD *)(a1 + 8) + 32LL * (unsigned int)(v1 - 1);
  v3 = *(unsigned __int64 **)v2;
  v4 = *(_DWORD *)(v2 + 8);
  v5 = _mm_loadl_epi64((const __m128i *)(v2 + 12));
  if ( *(_BYTE *)(a1 + 44) )
  {
    LODWORD(v13) = *(_DWORD *)(v2 + 8);
  }
  else
  {
    v6 = (_DWORD *)*v3;
    if ( (*v3 & 1) != 0 )
    {
      v7 = *v3;
      LODWORD(v6) = BYTE4(v6);
      v8 = BYTE6(v6);
      v9 = (v7 >> 40) & 0xF;
    }
    else
    {
      v8 = v6[1];
      v9 = v6[2];
      LODWORD(v6) = v6[3];
    }
    v10 = v5;
    v11 = v4 + v8;
    if ( v9 )
      v10 = _mm_cvtsi32_si128(v9 + _mm_cvtsi128_si32(v5));
    else
      LODWORD(v6) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229)) + (_DWORD)v6;
    LODWORD(v13) = v11;
    v5.m128i_i32[0] = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128((unsigned int)v6)).m128i_u32[0];
  }
  HIDWORD(v13) = v5.m128i_i32[0];
  return v13;
}
