__int64 __fastcall sub_77A7F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x16 )
    return 0;
  v1 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( !v1 )
      return 0;
    result = sub_794640(a1);
  }
  else
  {
    if ( !v1 )
      return 0;
    result = *(_QWORD *)(a1 - 8);
  }
  if ( !result )
    return 0;
  switch ( *(_DWORD *)(result + 36) )
  {
    case 0:
    case 1:
    case 6:
    case 8:
      return 0;
    case 2:
    case 3:
    case 4:
    case 5:
      return result;
    case 7:
      result = *(_QWORD *)(result + 40);
      break;
  }
  return result;
}

