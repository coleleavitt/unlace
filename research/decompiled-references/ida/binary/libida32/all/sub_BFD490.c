__int64 __fastcall sub_BFD490(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int16 v6; // dx
  char v7; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rdi

  while ( 2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    switch ( *(_BYTE *)(v4 + 16) )
    {
      case 0:
      case 1:
      case 4:
      case 8:
      case 9:
      case 0xC:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1D:
      case 0x1E:
      case 0x20:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
        return 19;
      case 2:
      case 3:
      case 5:
      case 6:
      case 0x19:
      case 0x1A:
      case 0x2A:
        return 5;
      case 7:
        a1 = *(_QWORD *)(v4 + 32);
        continue;
      case 0xA:
        return 18;
      case 0xB:
      case 0x1B:
      case 0x1C:
      case 0x1F:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x29:
        return 0xFFFFFFFFLL;
      case 0xD:
        v6 = (*(_WORD *)(v4 + 18) >> 3) & 0x1FF;
        if ( v6 > 0x1D3u )
        {
          if ( v6 > 0x1DCu )
          {
            if ( v6 <= 0x1E7u )
              return v6 < 0x1E0u ? -1 : 8;
            return 0xFFFFFFFFLL;
          }
          if ( v6 < 0x1DAu )
            return v6 < 0x1D7u ? 1 : -1;
          return 1;
        }
        if ( v6 >= 0x1D1u )
          return 0xFFFFFFFFLL;
        if ( v6 > 0x1CAu )
          return v6 < 0x1CEu ? -1 : 1;
        if ( v6 >= 0x1B5u )
          return 1;
        result = 0;
        if ( v6 != 435 )
          return v6 < 0x1B4u ? -1 : 4;
        return result;
      case 0xE:
        return 9;
      case 0x21:
        v8 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v9 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F3F310(v9, a2, a3, a4) )
        {
          return 12;
        }
        return 7;
      case 0x2F:
        return (*(_BYTE *)(a2 + 1) & 8) == 0 ? 1 : 3;
      case 0x30:
        v7 = sub_F3D6E0(v4);
        result = 13;
        if ( !v7 )
          return 12;
        return result;
    }
  }
}

