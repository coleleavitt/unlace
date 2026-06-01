unsigned __int64 __fastcall sub_1C84A10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax

  v7 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 64), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  else
    return sub_1B1B1D0(
             *(__int64 **)(*a1 + 760),
             *(_DWORD *)(a2 + 36),
             *(_DWORD *)(a2 + 40),
             *(_DWORD *)(a2 + 32),
             (_DWORD *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)a2,
             a6,
             a7,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 44),
             *(_DWORD *)(a2 + 48),
             *(_DWORD *)(a2 + 52),
             *(_DWORD *)(a2 + 56),
             *(_DWORD *)(a2 + 4));
}
