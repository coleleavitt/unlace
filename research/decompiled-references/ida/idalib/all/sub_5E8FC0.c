__int64 __fastcall sub_5E8FC0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbp
  size_t v3; // r12
  void *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)sub_5E8BB0(a1)
    || *(_WORD *)(a1 + 64) != 40
    || (unsigned int)sub_5E8BB0(a1)
    || *(_WORD *)(a1 + 64) != 4 )
  {
    return 47;
  }
  v2 = *(_QWORD **)(a1 + 128);
  if ( !v2 )
  {
    v2 = *(_QWORD **)(a1 + 136);
    if ( !v2 )
      v2 = *(_QWORD **)(a1 + 112);
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 > 1 )
  {
    v4 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 48));
    memcpy(v4, *(const void **)(a1 + 40), v3);
    v5 = v2[17];
    v6 = v2[16];
    if ( v2[18] < (unsigned __int64)(v5 + 1) )
    {
      v8 = qvector_reserve(v2 + 16, v6, v5 + 1, 24);
      v2[16] = v8;
      v5 = v2[17];
      v6 = v8;
    }
    v7 = v6 + 24 * v5;
    *(_QWORD *)v7 = v4;
    *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
    ++v2[17];
  }
  result = sub_5E8BB0(a1);
  if ( (_DWORD)result || *(_WORD *)(a1 + 64) != 41 )
    return 47;
  return result;
}
