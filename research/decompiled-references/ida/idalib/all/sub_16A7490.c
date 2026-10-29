__int64 __fastcall sub_16A7490(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned __int8 a9)
{
  __int64 v9; // rbx

  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  if ( (*(_QWORD *)v9 & 0xFFFFFFFE) != 0
    && *(_WORD *)(v9 + 16) == 9020
    && *(_WORD *)(v9 + (unsigned int)*(_QWORD *)v9 + 14) == 15907 )
  {
    return 1;
  }
  else
  {
    return sub_16A30B0(a1, a2, a7, a8, a9);
  }
}
