__int64 __fastcall forms_ui::dialog_t::import_actions(__int64 a1, __int64 a2)
{
  size_t v2; // rbp
  __int64 *v3; // r12
  void *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 > 7 && !strncmp(*(const char **)(a2 + 32), "DirTree", 7u) )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = (void *)qalloc_or_throw(v2);
    memcpy(v4, *(const void **)(a2 + 32), v2);
    v5 = v3[1];
    v6 = *v3;
    if ( v3[2] < (unsigned __int64)(v5 + 1) )
    {
      v9 = qvector_reserve(v3, v6, v5 + 1, 24);
      *v3 = v9;
      v5 = v3[1];
      v6 = v9;
    }
    v7 = v6 + 24 * v5;
    *(_QWORD *)v7 = v4;
    *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
    ++v3[1];
  }
  return 0;
}
