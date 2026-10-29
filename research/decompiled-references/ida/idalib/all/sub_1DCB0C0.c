unsigned __int64 __fastcall sub_1DCB0C0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  v10 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *a1;
  if ( *(_QWORD *)(a2 + 16) != v10 || *(_DWORD *)(v11 + 12632) )
    return sub_1B11630(*(__int64 **)(v11 + 760), v10, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 4), a7, a8);
  else
    return a2;
}
