void __fastcall sub_15ED420(__int64 a1, int a2)
{
  if ( (a2 & 2) != 0 )
    *(_QWORD *)(a1 + 40) = a1;
  if ( (a2 & 4) != 0 )
    *(_QWORD *)(a1 + 48) = a1;
  *(_DWORD *)(a1 + 8) |= a2;
}
