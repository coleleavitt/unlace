__int64 __fastcall sub_140CDD0(__int64 a1, int a2, __m128i a3, double a4)
{
  int v4; // ebp
  int v5; // r12d
  __int64 result; // rax
  int v7; // ebx
  int v8; // ebx

  v4 = 0;
  if ( a2 != 27 )
  {
    if ( a2 != 26 )
    {
      v5 = 0;
      while ( 1 )
      {
        result = (unsigned int)(*(_DWORD *)(a1 + 72) - 3);
        switch ( *(_DWORD *)(a1 + 72) )
        {
          case 3:
            return result;
          case 0x18:
            ++v5;
            goto LABEL_18;
          case 0x19:
            if ( !v5 )
              return result;
            --v5;
LABEL_18:
            sub_140C1F0((_BYTE **)a1, a3, a4);
            break;
          case 0x1A:
            ++v4;
            goto LABEL_18;
          case 0x1B:
            v4 = (v4 == 0) + v4 - 1;
            goto LABEL_18;
          default:
            if ( !(v4 | v5) )
            {
              v4 = 0;
              v5 = 0;
            }
            goto LABEL_18;
        }
      }
    }
    v7 = 0;
    result = (unsigned int)(*(_DWORD *)(a1 + 72) - 3);
    while ( 1 )
    {
      switch ( result )
      {
        case 0LL:
          return result;
        case 21LL:
          ++v7;
          goto LABEL_9;
        case 22LL:
          v7 = (v7 == 0) + v7 - 1;
          goto LABEL_9;
        case 23LL:
          result = v4 | (unsigned int)v7;
          if ( !(v4 | v7) )
            return result;
          ++v4;
LABEL_9:
          while ( 1 )
          {
            sub_140C1F0((_BYTE **)a1, a3, a4);
            result = (unsigned int)(*(_DWORD *)(a1 + 72) - 3);
            if ( (unsigned int)result <= 0x18 )
              break;
LABEL_10:
            if ( !(v4 | v7) )
            {
              v4 = 0;
              v7 = 0;
            }
          }
          break;
        case 24LL:
          v4 = (v4 == 0) + v4 - 1;
          goto LABEL_9;
        default:
          goto LABEL_10;
      }
    }
  }
  v8 = 0;
  while ( 2 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 72) - 3);
    switch ( *(_DWORD *)(a1 + 72) )
    {
      case 3:
        return result;
      case 0x18:
        ++v8;
        goto LABEL_30;
      case 0x19:
        v8 = (v8 == 0) + v8 - 1;
        goto LABEL_30;
      case 0x1A:
        ++v4;
        goto LABEL_30;
      case 0x1B:
        if ( v4 )
        {
          --v4;
LABEL_30:
          sub_140C1F0((_BYTE **)a1, a3, a4);
          continue;
        }
        return result;
      default:
        if ( !(v4 | v8) )
        {
          v4 = 0;
          v8 = 0;
        }
        goto LABEL_30;
    }
  }
}
