char __fastcall sub_FAF8A0(__int64 a1, unsigned int a2)
{
  unsigned __int16 *v2; // rdx
  char result; // al

  if ( a2 > 0x233B )
    return ((*(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) >> 3) & 7) != 5;
  v2 = sub_FAEEC0(a2);
  result = 1;
  if ( v2 )
    return ((*((_BYTE *)v2 + 2) >> 3) & 7) != 5;
  return result;
}

