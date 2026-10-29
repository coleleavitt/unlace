__m128i *__fastcall sub_578060(__m128i *a1, unsigned __int64 *a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r9
  __int64 **v4; // rax
  __int64 v5; // rdx
  bool v6; // dl
  unsigned int v7; // ecx
  __m128i v8; // xmm2
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i v11; // xmm0

  v2 = *((_DWORD *)a2 + 4);
  if ( !v2 )
    __assert_fail(
      "(uint32_t)((&self->stack)->size - 1) < (&self->stack)->size",
      "lib/src/./tree_cursor.c",
      0x1DBu,
      "ts_tree_cursor_current_node");
  v3 = a2[1];
  v4 = (__int64 **)(v3 + 32LL * (unsigned int)(v2 - 1));
  v5 = **v4;
  if ( (v5 & 1) != 0 )
    v6 = (**v4 & 8) != 0;
  else
    v6 = (*(_BYTE *)(v5 + 44) & 4) != 0;
  v7 = 0;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v4, (__m128i)*a2);
  if ( !v6 )
  {
    if ( v2 == 1 )
    {
      v7 = *((unsigned __int16 *)a2 + 12);
    }
    else
    {
      v9 = **(_QWORD **)(v3 + 32LL * (unsigned int)(v2 - 2));
      v7 = *(unsigned __int16 *)(v9 + 66);
      if ( *(_WORD *)(v9 + 66) )
        v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8) + 128LL)
                                 + 2LL * (*((_DWORD *)v4 + 6) + v7 * *(unsigned __int16 *)(*(_QWORD *)(*a2 + 8) + 36LL)));
    }
  }
  v10 = _mm_cvtsi32_si128(*((_DWORD *)v4 + 4));
  v11 = _mm_cvtsi32_si128(*((_DWORD *)v4 + 2));
  a1[1] = v8;
  *a1 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(*((_DWORD *)v4 + 3))),
          _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(v7)));
  return a1;
}
