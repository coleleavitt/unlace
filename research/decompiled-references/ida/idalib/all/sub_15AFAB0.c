bool __fastcall sub_15AFAB0(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (((unsigned __int8)(*(_DWORD *)a1 >> 12) + 105) & 0x7Fu) <= 4 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return (*(_BYTE *)a1 & 7) != 1;
  }
  return result;
}
