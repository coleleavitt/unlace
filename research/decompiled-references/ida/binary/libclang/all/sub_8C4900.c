__int64 __fastcall sub_8C4900(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
    return *(_QWORD *)(a1 + 32);
  else
    return sub_781770(*(_QWORD *)(a1 + 16));
}

