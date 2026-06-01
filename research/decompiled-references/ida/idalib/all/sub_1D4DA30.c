__int64 __fastcall sub_1D4DA30(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rbp
  _DWORD *v10; // rdx

  v7 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  sub_1C3BC60((_QWORD *)*a1, *(_DWORD *)(a2 + 4), 0);
  v10 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_19C0480(*a1, *(_DWORD *)(a2 + 4), v10, (*(_QWORD *)a2 & 0x80000LL) != 0, a6, a7);
  result = a2;
  if ( v10 != *(_DWORD **)(a2 + 16) )
    return sub_19C0480(*a1, *(_DWORD *)(a2 + 4), v10, (*(_QWORD *)a2 & 0x80000LL) != 0, a6, a7);
  return result;
}
