__int64 __fastcall sub_6434A0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  sub_79A2B0(a1);
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    return *(_QWORD *)sub_79A2B0(a1);
  else
    return 0;
}

