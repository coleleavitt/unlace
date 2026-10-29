__int64 __fastcall sub_6B2590(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 18) & 0x10) == 0 )
    return *(_QWORD *)(a1 + 32);
  do
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 16) - 42 > 1 )
      a1 = sub_B0D320(a1);
  }
  while ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 );
  return *(_QWORD *)(a1 + 32);
}

