__int64 __fastcall clang_Comment_getKind(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  switch ( *(_BYTE *)(a1 + 12) )
  {
    case 0:
      return 0;
    case 1:
      result = 10;
      break;
    case 2:
      result = 1;
      break;
    case 3:
      result = 2;
      break;
    case 4:
      result = 3;
      break;
    case 5:
      result = 4;
      break;
    case 6:
      result = 12;
      break;
    case 7:
      result = 5;
      break;
    case 8:
      result = 6;
      break;
    case 9:
      result = 11;
      break;
    case 0xA:
      result = 9;
      break;
    case 0xB:
      result = 8;
      break;
    case 0xC:
      result = 7;
      break;
  }
  return result;
}

