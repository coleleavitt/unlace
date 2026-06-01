__int64 __fastcall sub_1B86CB0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v9; // rbx

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  sub_1C3BC60(*a1, *(unsigned int *)(a2 + 4), 0);
  return sub_19C0480(
           *a1,
           *(_DWORD *)(a2 + 4),
           (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL),
           (*(_QWORD *)a2 & 0x80000LL) != 0,
           a6,
           a7);
}
