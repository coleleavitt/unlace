__int64 __fastcall sub_197170(__int64 a1, double a2, double a3, __m128 a4)
{
  unsigned int v4; // r14d

  v4 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 2520) + 12LL) & 0x100) >> 8;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 2520) + 12LL) & 0x100) == 0 )
    return (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 2520) + 12LL) & 0x100) >> 8;
  ++*(_DWORD *)(a1 + 2040);
  sub_196FF0((__int64 *)a1, (_BYTE *)&qword_50 + 1, 0, (_BYTE *)&qword_50 + 1, 0, 0, a2, a3, a4, 0x1013u);
  --*(_DWORD *)(a1 + 2040);
  return v4;
}

