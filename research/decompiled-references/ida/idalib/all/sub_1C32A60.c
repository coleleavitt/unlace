char __fastcall sub_1C32A60(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax

  if ( *(_BYTE *)(a1 + 12) )
    v2 = (unsigned int)sub_2205DB0(a1, a2) >> 31;
  else
    v2 = (unsigned int)sub_2205E20(a1, a2) >> 31;
  if ( !(_BYTE)v2 )
  {
    if ( *(_DWORD *)(a1 + 8) <= 0x40u )
      LOBYTE(v2) = *(_QWORD *)a1 == *a2;
    else
      LOBYTE(v2) = sub_2205D70(a1, a2);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = *(_DWORD *)(a2[2] + 4LL) > *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL);
  }
  return v2;
}
