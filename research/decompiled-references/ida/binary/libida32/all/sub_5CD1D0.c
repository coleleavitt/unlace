__int64 __fastcall sub_5CD1D0(__int64 a1, const char *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  size_t v4; // r12
  void *v5; // r13
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)sub_5CCDC0((__m128i *)a1, a2)
    || *(_WORD *)(a1 + 64) != 40
    || (unsigned int)sub_5CCDC0((__m128i *)a1, a2)
    || *(_WORD *)(a1 + 64) != 4 )
  {
    return 47;
  }
  v3 = *(_QWORD **)(a1 + 120);
  if ( !v3 )
  {
    v3 = *(_QWORD **)(a1 + 128);
    if ( !v3 )
      v3 = *(_QWORD **)(a1 + 104);
  }
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 > 1 )
  {
    v5 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 48), a2);
    memcpy(v5, *(const void **)(a1 + 40), v4);
    v6 = v3[17];
    a2 = (const char *)v3[16];
    if ( v3[18] < (unsigned __int64)(v6 + 1) )
    {
      v8 = qvector_reserve(v3 + 16, a2, v6 + 1, 24);
      v3[16] = v8;
      v6 = v3[17];
      a2 = (const char *)v8;
    }
    v7 = (char *)&a2[24 * v6];
    *(_QWORD *)v7 = v5;
    *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    ++v3[17];
  }
  result = sub_5CCDC0((__m128i *)a1, a2);
  if ( (_DWORD)result || *(_WORD *)(a1 + 64) != 41 )
    return 47;
  return result;
}

