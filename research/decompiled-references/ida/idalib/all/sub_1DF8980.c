__int64 __fastcall sub_1DF8980(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rdi
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rax

  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
      v17 = *(_QWORD *)(v17 + 32);
    if ( v17 )
    {
      v18 = sub_1DD1930((__int64)a1, v17, a3, a4);
      v17 = (unsigned __int64)v18;
      if ( !v18 )
        return 1;
      v19 = *v18;
    }
    else
    {
      v19 = (__int64)sub_1DD1AB0((__int64)a1, *(_QWORD *)(v16 + 48), a3, a4);
      if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 1;
    }
    v20 = *(__int64 **)(*a1 + 736);
    v21 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v16 + 40) & 7) != 0 )
      v21 = 0;
    v23 = sub_189F870(v20, v17, v19, *(_DWORD *)(v16 + 64), *(_DWORD *)(v16 + 24), v21, 0);
    if ( !v23 )
      return 1;
    v24 = v16;
    v16 = v23;
    sub_1DC20B0(*(_QWORD *)(*a1 + 11280), v24, v23, v22);
  }
  v25 = sub_1DF6720(a1, *(_WORD **)(a2 + 16), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v25 == 1 )
    return 1;
  return sub_1A86080(
           *(_QWORD *)(*a1 + 736),
           *(_DWORD *)(a2 + 24),
           *(_DWORD *)(a2 + 28),
           v16,
           v25 & 0xFFFFFFFFFFFFFFFELL);
}
