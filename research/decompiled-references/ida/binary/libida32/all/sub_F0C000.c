void __fastcall sub_F0C000(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 1096);
  if ( (*(_BYTE *)(a2 + 58) & 2) != 0 )
    sub_971800(v3, " -");
  else
    sub_971800(v3, " +");
  sub_F07020(a1, a2);
  sub_F068D0(a1, *(_QWORD *)(a2 + 80));
  if ( (*(_BYTE *)(a2 + 58) & 4) != 0 )
    sub_971800(*(_QWORD *)(a1 + 1096), " variadic");
}

