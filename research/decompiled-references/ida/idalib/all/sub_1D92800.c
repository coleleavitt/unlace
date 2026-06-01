unsigned __int64 __fastcall sub_1D92800(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rax

  v8 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 0;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v10 = *a1;
  if ( *(_QWORD *)(a2 + 16) != v9 || *(_DWORD *)(v10 + 12632) )
    return sub_1B11630(*(__int64 **)(v10 + 760), v9, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 4), a6, a7);
  else
    return a2;
}
