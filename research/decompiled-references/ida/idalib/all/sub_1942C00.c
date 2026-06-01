__int64 __fastcall sub_1942C00(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  _QWORD *v9; // r13
  unsigned int v10; // ebp
  __int64 v11; // rbx

  v8 = *a1;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 || !sub_15F2610(*a1, 0, a3, a4, a5, a6) )
    v9 = (_QWORD *)sub_19A27D0(v8);
  else
    v9 = sub_1942710(a1, *(_QWORD *)(a2 + 8), a7, a8);
  v10 = *(_DWORD *)(a2 + 4);
  v11 = *(_QWORD *)a2 >> 16;
  if ( (unsigned __int8)sub_19A92A0(*a1, v10, v9) )
    return 1;
  else
    return sub_19B4F00(*a1, v10, v9, (v11 & 8) != 0);
}
