char __fastcall sub_9A5200(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  size_t v10; // rdx

  while ( *(_BYTE *)a2 == *(_BYTE *)a3 )
  {
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        if ( !*(_QWORD *)(a2 + 24) || !*(_QWORD *)(a3 + 24) )
          return a2 == a3;
        a3 = *(_QWORD *)(a3 + 24);
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 1:
      case 2:
      case 3:
        return 1;
      case 4:
        v6 = *(_QWORD *)(a2 + 16);
        if ( !v6 )
          return a2 == a3;
        v7 = *(_QWORD *)(a3 + 16);
        result = v6 == v7;
        if ( !v7 )
          return a2 == a3;
        return result;
      case 5:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
        return a2 == a3;
      case 6:
      case 0x1E:
        result = sub_9A5200(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL), *(_QWORD *)(*(_QWORD *)(a3 + 16) + 32LL));
        if ( result )
          goto LABEL_11;
        return result;
      case 7:
        goto LABEL_11;
      case 8:
      case 9:
      case 0xA:
      case 0x10:
      case 0x11:
      case 0x12:
        goto LABEL_10;
      case 0xB:
        v8 = *(_QWORD *)(a3 + 16);
        v9 = *(_QWORD *)(a2 + 16);
        result = sub_9A5200(a1, v9, v8);
        if ( !result )
          return result;
        a2 = *(_QWORD *)(a2 + 24);
        a3 = *(_QWORD *)(a3 + 24);
        if ( a2 )
          goto LABEL_28;
        if ( v9 )
        {
          a2 = v9;
        }
        else if ( !(a3 | v8) )
        {
          return result;
        }
LABEL_28:
        if ( !a3 )
          a3 = v8;
        break;
      case 0xC:
        result = sub_9A5200(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
        if ( result )
          return *(_QWORD *)(a3 + 64) == *(_QWORD *)(a2 + 64);
        return result;
      case 0xD:
      case 0xF:
        goto LABEL_13;
      case 0xE:
        if ( *(_WORD *)(a3 + 2) != *(_WORD *)(a2 + 2) )
          return 0;
        goto LABEL_13;
      case 0x13:
      case 0x15:
        if ( *(_BYTE *)(a3 + 2) != *(_BYTE *)(a2 + 2) )
          return 0;
LABEL_13:
        a3 = *(_QWORD *)(a3 + 16);
        a2 = *(_QWORD *)(a2 + 16);
        continue;
      case 0x14:
        if ( *(_BYTE *)(a3 + 2) != *(_BYTE *)(a2 + 2) )
          return 0;
LABEL_10:
        result = sub_9A5200(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
        if ( !result )
          return result;
LABEL_11:
        a3 = *(_QWORD *)(a3 + 24);
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x1B:
        a2 = *(_QWORD *)(a2 + 16);
        a3 = *(_QWORD *)(a3 + 16);
        continue;
      case 0x1C:
        v10 = *(_QWORD *)(a2 + 24);
        result = 0;
        if ( *(_QWORD *)(a3 + 24) == v10 )
        {
          result = 1;
          if ( v10 )
            return memcmp(*(const void **)(a2 + 16), *(const void **)(a3 + 16), v10) == 0;
        }
        return result;
      case 0x1D:
        result = sub_9A5200(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
        if ( !result )
          return result;
        result = sub_9A5200(a1, *(_QWORD *)(a2 + 24), *(_QWORD *)(a3 + 24));
        if ( !result )
          return result;
        a3 = *(_QWORD *)(a3 + 32);
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      default:
        return 0;
    }
  }
  return 0;
}

