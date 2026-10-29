__m128i *__fastcall sub_E88940(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rax

  if ( !*(_WORD *)(a3 + 4)
    && (v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr
    && !*v4
    && v4[1] == 8
    && *(_DWORD *)(a3 + 24) == 1
    && a4 == *(_QWORD *)(a3 + 32)
    || !*(_WORD *)(a4 + 4)
    && (v5 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL)) != nullptr
    && !*v5
    && v5[1] == 8
    && *(_DWORD *)(a4 + 24) == 1
    && a3 == *(_QWORD *)(a4 + 32) )
  {
    v6 = *(_QWORD *)(a2 + 856);
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)a2);
    if ( !v6 )
      return a1;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)sub_15D27F0(a2, a3, a4) )
  {
    sub_15E1B70(a2);
    v6 = sub_15E1A70(a2);
    a1->m128i_i64[1] = a2;
    a1->m128i_i64[0] = v6;
    if ( !v6 )
      return a1;
    goto LABEL_9;
  }
  v6 = *(_QWORD *)(a2 + 856);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)a2);
  if ( v6 )
LABEL_9:
    ++*(_DWORD *)(v6 + 8);
  return a1;
}

