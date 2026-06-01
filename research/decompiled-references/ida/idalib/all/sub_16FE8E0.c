bool __fastcall sub_16FE8E0(int a1, __int64 a2)
{
  bool result; // al

  switch ( a1 )
  {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      result = 1;
      break;
    case 2:
    case 3:
      result = 0;
      break;
    case 7:
    case 10:
      result = (*(_BYTE *)(a2 + 1) & 8) != 0;
      break;
    case 9:
      result = (*(_DWORD *)a2 & 0x40801) != 0;
      break;
  }
  return result;
}
