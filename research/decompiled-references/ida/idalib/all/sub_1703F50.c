__int64 __fastcall sub_1703F50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // dx

  while ( 2 )
  {
    v4 = a1 & 0xFFFFFFFFFFFFFFF0LL;
    v5 = *(_QWORD *)v4;
    switch ( *(_BYTE *)(*(_QWORD *)v4 + 16LL) )
    {
      case 2:
      case 4:
      case 5:
      case 6:
        result = 1;
        break;
      case 0xB:
        result = 2;
        break;
      case 0xD:
        v10 = (*(_WORD *)(v5 + 18) >> 3) & 0x1FF;
        if ( v10 > 0x1EBu )
        {
          result = ((v10 + 15) & 0x1FFu) < 2 ? 5 : 0;
        }
        else
        {
          result = 4;
          if ( v10 < 0x1E9u )
          {
            result = 8;
            if ( v10 != 435 )
            {
              result = 6;
              if ( v10 != 488 )
                result = 0;
            }
          }
        }
        break;
      case 0xE:
      case 0x15:
      case 0x2F:
      case 0x39:
      case 0x3A:
        result = 0;
        break;
      case 0x19:
      case 0x1A:
        result = 3;
        break;
      case 0x22:
      case 0x23:
      case 0x24:
        result = 4;
        break;
      case 0x2A:
        result = 6;
        break;
      case 0x2B:
      case 0x2C:
        if ( !v4 )
          v5 = 0x10102464C457FLL;
        a1 = *(_QWORD *)(v5 + 32);
        if ( (*(_BYTE *)(v5 + 18) & 0x10) != 0 )
        {
          do
          {
            v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
            v8 = *(_QWORD *)v7;
            v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL) - 43;
            if ( (unsigned int)v9 > 1 )
              v8 = sub_F63050(v8, a2, v9, a4);
            a1 = *(_QWORD *)(v8 + 32);
          }
          while ( (*(_BYTE *)(v8 + 18) & 0x10) != 0 );
        }
        continue;
      case 0x30:
        result = 7;
        break;
      default:
        result = 5;
        break;
    }
    break;
  }
  return result;
}
