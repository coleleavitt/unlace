bool __fastcall sub_12F9F20(char a1, __int64 a2)
{
  bool result; // al

  switch ( a1 )
  {
    case 0:
    case 2:
    case 3:
    case 12:
      result = *(_BYTE *)(a2 + 20) == 12;
      break;
    case 1:
      result = 1;
      break;
    case 4:
    case 6:
      result = *(_BYTE *)(a2 + 20) == 4;
      break;
    case 5:
    case 7:
      result = *(_BYTE *)(a2 + 20) == 5;
      break;
    case 8:
      result = (unsigned __int8)(*(_BYTE *)(a2 + 20) - 8) <= 1u;
      break;
    case 9:
      result = *(_BYTE *)(a2 + 20) == 9;
      break;
    case 10:
      result = *(_BYTE *)(a2 + 20) == 5 || *(_BYTE *)(a2 + 20) == 10;
      break;
    case 11:
      result = *(_BYTE *)(a2 + 20) == 5 || *(_BYTE *)(a2 + 20) == 11;
      break;
  }
  return result;
}
