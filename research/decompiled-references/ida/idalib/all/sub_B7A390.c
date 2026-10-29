__int64 __fastcall sub_B7A390(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbx

  v9 = sub_B902D0(72, a1, a2, 0);
  sub_B725B0(v9, 0x20u, a2, a3);
  *(_QWORD *)(v9 + 40) = a4;
  *(_QWORD *)(v9 + 56) = a7;
  *(_QWORD *)(v9 + 48) = a5;
  *(_QWORD *)v9 = &off_2B4AEB8;
  *(_DWORD *)(v9 + 64) = a8;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 8) != 0 )
    *(_WORD *)(v9 + 30) |= 2u;
  return v9;
}
