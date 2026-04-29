unsigned __int64 __fastcall sub_1A1A0(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 result; // rax
  __int16 v6; // si
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 72);
  while ( 2 )
  {
    if ( v1 <= v2 )
    {
      v4 = v2;
LABEL_5:
      *(_QWORD *)(a1 + 72) = v4 - 1;
      return sub_123D0(a1);
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 56);
      v4 = v2 + 1;
      *(_QWORD *)(a1 + 72) = v2 + 1;
      switch ( *(_BYTE *)(v3 + v2) )
      {
        case 0:
        case 0xD:
        case 0xE:
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
        case 0x2C:
        case 0x2D:
        case 0x2F:
        case 0x30:
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
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x40:
        case 0x4A:
        case 0x55:
        case 0x5B:
        case 0x5C:
        case 0x5D:
        case 0x5E:
        case 0x60:
        case 0x62:
        case 0x65:
        case 0x6A:
        case 0x6B:
        case 0x7B:
        case 0x7C:
        case 0x7D:
        case 0x7E:
        case 0x7F:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8A:
        case 0x8B:
        case 0x8C:
        case 0x8D:
        case 0x8E:
        case 0x8F:
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x94:
        case 0x95:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0x99:
        case 0x9A:
        case 0x9B:
        case 0x9C:
        case 0x9D:
        case 0x9E:
        case 0x9F:
        case 0xA0:
        case 0xA1:
        case 0xA2:
        case 0xA3:
        case 0xA4:
        case 0xA5:
        case 0xA6:
        case 0xA7:
        case 0xA8:
        case 0xA9:
        case 0xAA:
        case 0xAB:
        case 0xAC:
        case 0xAD:
        case 0xAE:
        case 0xAF:
        case 0xB0:
        case 0xB1:
        case 0xB2:
        case 0xB3:
        case 0xB4:
        case 0xB5:
        case 0xB6:
        case 0xB7:
        case 0xB8:
        case 0xB9:
        case 0xBA:
        case 0xBB:
        case 0xBC:
        case 0xBD:
        case 0xBE:
        case 0xBF:
        case 0xC0:
        case 0xC1:
        case 0xC2:
        case 0xC3:
        case 0xC4:
        case 0xC5:
        case 0xC6:
        case 0xC7:
        case 0xC8:
        case 0xC9:
        case 0xCA:
        case 0xCB:
        case 0xCC:
        case 0xCD:
        case 0xCE:
        case 0xCF:
        case 0xD0:
        case 0xD1:
        case 0xD2:
        case 0xD3:
        case 0xD4:
        case 0xD5:
        case 0xD6:
        case 0xD7:
        case 0xD8:
        case 0xD9:
        case 0xDA:
        case 0xDB:
        case 0xDC:
        case 0xDD:
        case 0xDE:
        case 0xDF:
        case 0xE0:
        case 0xE1:
        case 0xE2:
        case 0xE3:
        case 0xE4:
        case 0xE5:
        case 0xE6:
        case 0xE7:
        case 0xE8:
        case 0xE9:
        case 0xEA:
        case 0xEB:
        case 0xEC:
        case 0xED:
        case 0xEE:
        case 0xEF:
        case 0xF0:
        case 0xF1:
        case 0xF2:
        case 0xF3:
        case 0xF4:
        case 0xF5:
        case 0xF6:
        case 0xF7:
        case 0xF8:
        case 0xF9:
        case 0xFA:
        case 0xFB:
        case 0xFC:
        case 0xFD:
        case 0xFE:
          goto LABEL_5;
        case 1:
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
          return sub_12290(a1, *(_BYTE *)(v3 + v2));
        case 0x2E:
          *(_QWORD *)(a1 + 72) = v1;
          return sub_BAC0((_QWORD *)a1, 210, (const void *)(v3 + v2), v1 - v2);
        case 0x41:
          return sub_12000(a1);
        case 0x42:
          return sub_E160((_QWORD *)a1);
        case 0x43:
          return sub_13100(a1, 22);
        case 0x44:
          return sub_15AE0(a1);
        case 0x45:
          return sub_13060(a1);
        case 0x46:
          return sub_15C20(a1);
        case 0x47:
          return sub_144D0((_QWORD *)a1);
        case 0x48:
          if ( v1 <= v4 )
          {
            --v2;
LABEL_60:
            *(_QWORD *)(a1 + 72) = v2;
            return sub_123D0(a1);
          }
          else
          {
            *(_QWORD *)(a1 + 72) = v2 + 2;
            switch ( *(_BYTE *)(v3 + v4) )
            {
              case 'A':
                result = sub_13950(a1);
                break;
              case 'C':
                result = sub_139F0(a1);
                break;
              case 'D':
                result = sub_13520(a1);
                break;
              case 'F':
                result = sub_12C70((_QWORD *)a1, 1);
                *(_WORD *)(result + 16) = 318;
                *(_BYTE *)(result + 18) = 0;
                break;
              case 'I':
                result = sub_13580(a1);
                break;
              case 'P':
                v18 = sub_13360(a1);
                result = sub_CD20((_QWORD *)a1, 172, v18);
                break;
              case 'a':
                result = sub_12C70((_QWORD *)a1, 1);
                *(_WORD *)(result + 16) = 329;
                *(_BYTE *)(result + 18) = 0;
                break;
              case 'c':
                v15 = sub_135F0(a1);
                result = sub_CD20((_QWORD *)a1, 178, v15);
                break;
              case 'n':
                result = sub_CDD0(a1, 149);
                break;
              case 'o':
                v12 = *(_DWORD *)(a1 + 96);
                if ( v12 )
                {
                  v13 = (unsigned int)(v12 - 1);
                  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v13);
                  *(_DWORD *)(a1 + 96) = v13;
                }
                else
                {
                  v14 = 0;
                }
                result = sub_CD20((_QWORD *)a1, 291, v14);
                break;
              case 'p':
                v17 = sub_13360(a1);
                result = sub_CD20((_QWORD *)a1, 173, v17);
                break;
              case 'r':
                v16 = sub_13360(a1);
                result = sub_CD20((_QWORD *)a1, 176, v16);
                break;
              default:
                goto LABEL_60;
            }
          }
          return result;
        case 0x49:
          return sub_164D0(a1);
        case 0x4B:
          result = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(result + 16) = 261;
          *(_BYTE *)(result + 18) = 0;
          return result;
        case 0x4C:
          return sub_17EF0(a1);
        case 0x4D:
          return sub_18240(a1);
        case 0x4E:
          v9 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, 226, v9);
        case 0x4F:
          return sub_13100(a1, 58);
        case 0x50:
          return sub_13100(a1, 169);
        case 0x51:
          return sub_16EE0(a1);
        case 0x52:
          return sub_146F0(a1);
        case 0x53:
          return sub_128F0(a1);
        case 0x54:
          return sub_192B0(a1);
        case 0x56:
          return sub_13100(a1, 208);
        case 0x57:
          return sub_18850(a1);
        case 0x58:
          return sub_17870((_QWORD *)a1);
        case 0x59:
          return sub_12CF0((_QWORD *)a1);
        case 0x5A:
          v11 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
          return sub_CD20((_QWORD *)a1, 207, v11);
        case 0x5F:
          result = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(result + 16) = 263;
          *(_BYTE *)(result + 18) = 0;
          return result;
        case 0x61:
          return sub_13100(a1, 223);
        case 0x63:
          return sub_F7F0(a1, 79, 0);
        case 0x64:
          result = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(result + 16) = 264;
          *(_BYTE *)(result + 18) = 0;
          return result;
        case 0x66:
          return sub_15EA0(a1);
        case 0x67:
          return sub_EFB0(a1);
        case 0x68:
          v6 = 197;
          v7 = sub_E0A0(a1);
          goto LABEL_9;
        case 0x69:
          return sub_16140(a1);
        case 0x6C:
          return sub_11960(a1, 0);
        case 0x6D:
          v6 = 135;
          v7 = sub_BBE0(a1, 221);
          goto LABEL_9;
        case 0x6E:
          v6 = 198;
          v7 = sub_E0A0(a1);
          goto LABEL_9;
        case 0x6F:
          return sub_DCA0(a1);
        case 0x70:
          v8 = sub_137E0(a1);
          goto LABEL_10;
        case 0x71:
          v8 = sub_14640((_QWORD *)a1);
          goto LABEL_10;
        case 0x72:
          return sub_11960(a1, 1);
        case 0x73:
          return sub_BAC0((_QWORD *)a1, 143, "Swift", (size_t)&byte_5);
        case 0x74:
          return sub_E750(a1);
        case 0x75:
          return sub_11BF0(a1);
        case 0x76:
          v10 = sub_15D90(a1, 243);
          return sub_11680((_QWORD *)a1, v10);
        case 0x77:
          return sub_11C80(a1);
        case 0x78:
          v8 = sub_10120((_QWORD *)a1, 0, 0);
          goto LABEL_10;
        case 0x79:
          result = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(result + 16) = 262;
          *(_BYTE *)(result + 18) = 0;
          return result;
        case 0x7A:
          v6 = 117;
          v7 = sub_E0A0(a1);
LABEL_9:
          v8 = sub_CD20((_QWORD *)a1, v6, v7);
LABEL_10:
          result = sub_CD20((_QWORD *)a1, 221, v8);
          break;
        case 0xFF:
          ++v2;
          continue;
      }
    }
    return result;
  }
}
