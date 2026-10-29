char __fastcall sub_89CD60(__int64 *a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  char result; // al
  unsigned __int8 **v6; // rax
  __int64 v7; // r12
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // esi
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned __int8 **v15; // rdi
  __int64 v16; // r12
  _DWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned int v21; // r13d
  int v22; // ecx
  char v23; // al
  __int64 v24; // rax
  char v25; // [rsp+Fh] [rbp-79h]
  _QWORD v26[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  int v28; // [rsp+28h] [rbp-60h]

  while ( 2 )
  {
    while ( 2 )
    {
      v4 = *(_WORD *)a2 & 0x1FF;
      if ( v4 <= 0x76u )
      {
        if ( v4 == 4 )
        {
          if ( *(_BYTE *)(a2 + 2) <= 0x6Fu )
          {
            switch ( *(_BYTE *)(a2 + 2) >> 3 )
            {
              case 0:
              case 1:
                return sub_86B670(a1, a2);
              case 2:
              case 3:
              case 4:
              case 5:
              case 7:
              case 8:
              case 9:
              case 10:
              case 11:
              case 13:
                break;
              case 6:
              case 12:
LABEL_9:
                a2 = *(_QWORD *)(a2 + 16);
                continue;
            }
          }
LABEL_11:
          sub_826230(*a1, a2, 110);
          return 0;
        }
      }
      else if ( v4 <= 0x78u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
        {
          case 0:
          case 1:
            return sub_89E210(*a1, a2, a1[1], 1) != 0;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
            goto LABEL_11;
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
            return sub_89F820(a1, a2);
          default:
            goto LABEL_7;
        }
      }
      break;
    }
LABEL_7:
    switch ( (v4 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x38:
      case 0x39:
      case 0x3C:
      case 0x3D:
      case 0x3F:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4C:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x62:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x71:
      case 0x73:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
      case 0x7D:
        goto LABEL_11;
      case 1:
      case 0x7F:
        return sub_8BA070(a1, a2);
      case 6:
      case 0x63:
        goto LABEL_9;
      case 8:
        return sub_8B8D70(a1, a2);
      case 0xF:
        return sub_8B8FB0(a1, a2);
      case 0x10:
        if ( *(char *)(a2 + 2) < 0 )
          goto LABEL_9;
        a2 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_19;
      case 0x13:
        a2 = sub_83DE90(a2);
        continue;
      case 0x18:
        v16 = *a1;
        v17 = (_DWORD *)sub_821340(*(_QWORD *)(*a1 + 32), a2);
        if ( !v17 || !*v17 )
        {
          v18 = *(_QWORD *)(a2 + 16);
          if ( !v18 || a2 == v18 )
          {
            sub_826230(v16, a2, 110);
            return 0;
          }
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        }
        sub_824D00(a1[1], *(_QWORD **)(v16 + 16), (__int64)v17);
        return 1;
      case 0x2C:
        return sub_8B94A0(a1, a2);
      case 0x31:
      case 0x33:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
      case 0x61:
      case 0x6F:
      case 0x70:
        return sub_88A5E0((__m128i **)a1, a2);
      case 0x37:
        a2 = *(_QWORD *)(a2
                       + 8LL
                       * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v19 = *a1;
        v20 = *(_QWORD *)(*a1 + 32);
        v21 = *(_DWORD *)(*a1 + 320);
        v27 = *a1;
        v22 = *(_DWORD *)(v20 + 208);
        v28 = v21;
        *(_DWORD *)(v20 + 208) = v22 + 1;
        sub_847EC0(v20 + 184, v22 + 1);
        v23 = sub_89CD60(a1);
        if ( v23 )
        {
          v23 = sub_8941C0(v19, 1, v21);
          v28 = -1;
        }
        v25 = v23;
        sub_894600((__int64)&v27);
        return v25;
      case 0x3B:
        if ( (*(_WORD *)(a2 + 2) & 0x1E0) == 0 )
          goto LABEL_9;
        sub_805700((__int64)&v27, a2);
        sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v27);
        if ( (unsigned int)v27 > 1 )
          sub_69F740((__int64)&v27);
        return 1;
      case 0x3E:
        return sub_857240(a1, a2);
      case 0x40:
        v24 = *(unsigned int *)(a2 + 48);
        v26[0] = a2;
        v26[1] = v24;
        a2 = *(_QWORD *)sub_849A00(v26);
        continue;
      case 0x4A:
        goto LABEL_20;
      case 0x4B:
        if ( *(_BYTE *)(a2 + 48) )
LABEL_19:
          a2 = *(_QWORD *)(a2 + 24);
        else
LABEL_20:
          a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        return sub_89CCB0((__m128i **)a1, a2);
      case 0x50:
        v6 = (unsigned __int8 **)sub_A2E240(*a1, a2, 2215, 0);
        if ( v6 )
          sub_823450(v6, 0);
        return sub_89CCB0((__m128i **)a1, a2);
      case 0x51:
        v14 = *a1;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v15 = (unsigned __int8 **)sub_A2E240(v14, a2, 2215, 0);
          if ( v15 )
            sub_823450(v15, 1);
        }
        return sub_89CCB0((__m128i **)a1, a2);
      case 0x6D:
        v7 = *(_QWORD *)(*a1 + 32);
        v8 = *(_DWORD *)(v7 + 208) + 1;
        *(_DWORD *)(v7 + 208) = v8;
        sub_847EC0(v7 + 184, v8);
        v9 = sub_8C4900(a2);
        v10 = *a1;
        if ( v9 )
        {
          v11 = *(_QWORD *)(v10 + 32);
          if ( *(_QWORD *)(v11 + 64) )
          {
            sub_8C4900(a2);
            result = sub_89CD60(a1);
          }
          else
          {
            *(_QWORD *)(v11 + 64) = a2;
            sub_8C4900(a2);
            result = sub_89CD60(a1);
            *(_QWORD *)(v11 + 64) = 0;
          }
        }
        else
        {
          sub_826230(v10, a2, 110);
          result = 0;
        }
        goto LABEL_25;
      case 0x6E:
        v7 = *(_QWORD *)(*a1 + 32);
        v12 = *(_DWORD *)(v7 + 208) + 1;
        *(_DWORD *)(v7 + 208) = v12;
        sub_847EC0(v7 + 184, v12);
        v13 = *(_QWORD *)(*a1 + 32);
        if ( *(_QWORD *)(v13 + 64) )
        {
          sub_8C4680(a2);
          result = sub_89CD60(a1);
        }
        else
        {
          *(_QWORD *)(v13 + 64) = a2;
          sub_8C4680(a2);
          result = sub_89CD60(a1);
          *(_QWORD *)(v13 + 64) = 0;
        }
LABEL_25:
        --*(_DWORD *)(v7 + 192);
        return result;
      case 0x74:
      case 0x75:
        return sub_89F820(a1, a2);
      case 0x7E:
        return sub_8B9DD0(a1, a2);
    }
  }
}

