__int64 __fastcall sub_1C9D850(
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
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rdi
  unsigned __int64 v20; // r9
  __int64 v21; // rax

  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 32);
    if ( v16 )
    {
      v17 = sub_1C8AA80(a1, v16, a3, a4);
      v16 = (unsigned __int64)v17;
      if ( !v17 )
        return 1;
      v18 = *v17;
    }
    else
    {
      v18 = (__int64)sub_1C8ABA0(a1, *(_QWORD *)(v15 + 48), a3, a4);
      if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 1;
    }
    v19 = *(__int64 **)(*a1 + 736);
    v20 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v15 + 40) & 7) != 0 )
      v20 = 0;
    v15 = sub_189F870(v19, v16, v18, *(_DWORD *)(v15 + 64), *(_DWORD *)(v15 + 24), v20, 0);
    if ( !v15 )
      return 1;
  }
  v21 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v21 == 1 )
    return 1;
  return sub_1A86080(
           *(_QWORD *)(*a1 + 736),
           *(_DWORD *)(a2 + 24),
           *(_DWORD *)(a2 + 28),
           v15,
           v21 & 0xFFFFFFFFFFFFFFFELL);
}
