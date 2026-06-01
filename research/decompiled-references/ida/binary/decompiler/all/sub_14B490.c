__int64 __fastcall sub_14B490(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 != 4 )
    return sub_14B0F0(a1 + 48, a2);
  *(_BYTE *)(a1 + 40) = 1;
  return sub_11C4C0(*(_BYTE **)(a2 + 8), a1 + 48);
}
