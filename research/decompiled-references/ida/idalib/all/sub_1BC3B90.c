__int64 __fastcall sub_1BC3B90(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rdi
  unsigned __int64 v14; // r9
  __int64 v15; // rax

  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 56) & 4) != 0 )
      v10 = *(_QWORD *)(v10 + 32);
    if ( v10 )
    {
      v11 = sub_1BB2A80(a1, v10, a3, a4);
      v10 = (unsigned __int64)v11;
      if ( !v11 )
        return 1;
      v12 = *v11;
    }
    else
    {
      v12 = (__int64)sub_1BB2C30(a1, *(_QWORD *)(v9 + 48), a3, a4);
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 1;
    }
    v13 = *(__int64 **)(*a1 + 736);
    v14 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 40) & 7) != 0 )
      v14 = 0;
    v9 = sub_189F870(v13, v10, v12, *(_DWORD *)(v9 + 64), *(_DWORD *)(v9 + 24), v14, 0);
    if ( !v9 )
      return 1;
  }
  v15 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v15 == 1 )
    return 1;
  return sub_1A86080(*(_QWORD *)(*a1 + 736), *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28), v9, v15 & 0xFFFFFFFFFFFFFFFELL);
}
