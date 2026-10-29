__int64 __fastcall sub_F0B400(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_F07020(a1, a2);
  sub_F068D0(a1, *(_QWORD *)(a2 + 48));
  if ( (*(_BYTE *)(a2 + 68) & 2) == 0 )
  {
    result = *(_QWORD *)(a2 + 8) & 7LL;
    if ( result != 4 )
      return result;
    return sub_971800(*(_QWORD *)(a1 + 1096), " __module_private__");
  }
  sub_971800(*(_QWORD *)(a1 + 1096), " mutable");
  result = *(_QWORD *)(a2 + 8) & 7LL;
  if ( result == 4 )
    return sub_971800(*(_QWORD *)(a1 + 1096), " __module_private__");
  return result;
}

