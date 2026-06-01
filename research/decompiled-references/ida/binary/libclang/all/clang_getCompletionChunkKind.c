__int64 __fastcall clang_getCompletionChunkKind(unsigned __int16 *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi

  if ( !a1 )
    return 2;
  result = 2;
  if ( a2 < *a1 )
  {
    v3 = 8LL * a2;
    result = *(unsigned int *)&a1[v3 + 16];
    switch ( *(_DWORD *)&a1[v3 + 16] )
    {
      case 0:
        result = 1;
        break;
      case 1:
        return 2;
      case 2:
        result = 0;
        break;
      case 3:
      case 4:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
        return result;
      case 5:
        result = 15;
        break;
      case 6:
        result = 5;
        break;
      case 7:
        result = 6;
        break;
      case 8:
        result = 7;
        break;
      case 9:
        result = 8;
        break;
      case 0xA:
        result = 9;
        break;
      case 0xB:
        result = 10;
        break;
      case 0xC:
        result = 11;
        break;
      case 0xD:
        result = 12;
        break;
      case 0xE:
        result = 13;
        break;
      case 0xF:
        result = 14;
        break;
    }
  }
  return result;
}

