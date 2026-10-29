__int64 __fastcall sub_1DCD190(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax
  __int64 result; // rax
  unsigned __int16 *v10; // rbp
  _DWORD *v11; // rdx

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v10 = v8;
  sub_1C3BC60((_QWORD *)*a1, *(_DWORD *)(a2 + 4), 0);
  v11 = (_DWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_19C0480(*a1, *(_DWORD *)(a2 + 4), v11, (*(_QWORD *)a2 & 0x80000LL) != 0, a7, a8);
  result = a2;
  if ( v11 != *(_DWORD **)(a2 + 16) )
    return sub_19C0480(*a1, *(_DWORD *)(a2 + 4), v11, (*(_QWORD *)a2 & 0x80000LL) != 0, a7, a8);
  return result;
}
