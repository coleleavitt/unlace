__int64 __fastcall sub_EC8400(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _BOOL4 v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // dx
  __int64 v14; // rax
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  while ( 2 )
  {
    switch ( *(_WORD *)a1 & 0x1FF )
    {
      case 0:
      case 0x100:
        return *(unsigned int *)(a1 + 40);
      case 1:
        a1 = *(_QWORD *)(a1 + 8LL * ((unsigned int)((*(_WORD *)a1 & 0x200) != 0) + 1) + 16);
        continue;
      case 2:
      case 0x11:
      case 0x1D:
      case 0x24:
      case 0x37:
      case 0x38:
      case 0x3C:
      case 0x3D:
      case 0x4F:
      case 0x50:
      case 0x57:
      case 0x63:
      case 0x89:
      case 0x9B:
      case 0x9F:
      case 0xA0:
      case 0xF0:
        goto LABEL_4;
      case 3:
        return *(unsigned int *)(a1 + 36);
      case 4:
        if ( *(_BYTE *)(a1 + 2) <= 0xFu )
          return *(unsigned int *)(a1 + 4);
LABEL_4:
        a1 = *(_QWORD *)(a1 + 16);
        continue;
      case 5:
        return *(unsigned int *)(a1 + 28);
      case 6:
        return *(unsigned int *)(a1 + 20);
      case 7:
        return *(unsigned int *)(a1 + 36);
      case 8:
        return *(unsigned int *)(a1 + 4);
      case 9:
        return *(unsigned int *)(a1 + 4LL * *(unsigned int *)(a1 + 4) + 16);
      case 0xA:
        return *(unsigned int *)(a1 + 28);
      case 0xB:
        return *(unsigned int *)(a1 + 20);
      case 0xC:
        return *(unsigned int *)(a1 + 24);
      case 0xD:
        return *(unsigned int *)(a1 + 20);
      case 0xE:
        return *(unsigned int *)(a1 + 24);
      case 0xF:
        return *(unsigned int *)(a1 + 40);
      case 0x10:
        return *(unsigned int *)(a1 + 20);
      case 0x12:
        return *(unsigned int *)(a1 + 4);
      case 0x13:
        return *(unsigned int *)(a1 + 20);
      case 0x14:
        return *(unsigned int *)(a1 + 20);
      case 0x15:
        return *(unsigned int *)(a1 + 20);
      case 0x16:
        return *(unsigned int *)(a1 + 16);
      case 0x17:
        if ( (*(_QWORD *)a1 & 0x80000) != 0 && *(_DWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 80) )
          return *(unsigned int *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 84);
        result = sub_B61CD0(a1 + 16);
        if ( !(_DWORD)result )
          return *(unsigned int *)(a1 + 24);
        return result;
      case 0x18:
        if ( (*(_QWORD *)a1 & 0x80000) != 0 && *(_DWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 64) )
          return *(unsigned int *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 68);
        result = sub_B61CD0(a1 + 16);
        if ( !(_DWORD)result )
          return *(unsigned int *)(a1 + 24);
        return result;
      case 0x19:
        return *(unsigned int *)(a1 + 16);
      case 0x1A:
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
          goto LABEL_29;
        return *(unsigned int *)(a1 + 4);
      case 0x1B:
        return *(unsigned int *)(a1 + 20);
      case 0x1C:
        return *(unsigned int *)(a1 + 16);
      case 0x1E:
        return *(unsigned int *)(a1 + 28);
      case 0x1F:
        return *(unsigned int *)(a1 + 32);
      case 0x20:
        return *(unsigned int *)(a1 + 32);
      case 0x21:
        return *(unsigned int *)(a1 + 36);
      case 0x22:
        return *(unsigned int *)(a1 + 32);
      case 0x23:
        return *(unsigned int *)(a1 + 24);
      case 0x25:
        return *(unsigned int *)(a1 + 28);
      case 0x26:
      case 0x2A:
        return *(unsigned int *)(a1 + 24);
      case 0x27:
        return *(unsigned int *)(a1 + 36);
      case 0x28:
        return *(unsigned int *)(a1 + 20);
      case 0x29:
        return *(unsigned int *)(a1 + 36);
      case 0x2B:
        return *(unsigned int *)(a1 + 24);
      case 0x2C:
        a1 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 24) + 32);
        continue;
      case 0x2D:
      case 0x36:
      case 0x70:
      case 0x7E:
        return 0;
      case 0x2E:
        return sub_BD6160((__int64 *)a1);
      case 0x2F:
        return *(unsigned int *)(a1 + 4);
      case 0x30:
        v9 = *(_QWORD *)(a1 + 16);
        if ( (v9 & 4) != 0 )
          a1 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        else
          a1 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        continue;
      case 0x31:
        return *(unsigned int *)(a1 + 32);
      case 0x32:
        return *(unsigned int *)(a1 + 32);
      case 0x33:
        return *(unsigned int *)(a1 + 28);
      case 0x34:
        return *(unsigned int *)(a1 + 28);
      case 0x35:
        return sub_BD74E0(a1);
      case 0x39:
        return *(unsigned int *)(a1 + 24);
      case 0x3A:
        return *(unsigned int *)(a1 + 16);
      case 0x3B:
        return *(unsigned int *)(a1 + 24);
      case 0x3E:
        return *(unsigned int *)(a1 + 28);
      case 0x3F:
        return *(unsigned int *)(a1 + 28);
      case 0x40:
        return *(unsigned int *)(a1 + 32);
      case 0x41:
        return *(unsigned int *)(a1 + 20);
      case 0x42:
        return *(unsigned int *)(a1 + 16);
      case 0x43:
        return sub_BDF6F0(a1);
      case 0x44:
        return sub_BDF650(a1);
      case 0x45:
        if ( (*(_DWORD *)a1 & 0x80000) != 0 && *(_DWORD *)(a1 + 56) )
          return *(unsigned int *)(a1 + 60);
        else
          return *(unsigned int *)(a1 + 40);
      case 0x46:
      case 0x48:
      case 0x49:
      case 0x6E:
      case 0x74:
      case 0x76:
      case 0x77:
      case 0x84:
      case 0x87:
      case 0x9A:
      case 0xFD:
        a1 = *(_QWORD *)(a1 + 24);
        continue;
      case 0x47:
        return sub_BD42A0(a1);
      case 0x4A:
        return *(unsigned int *)(a1 + 36);
      case 0x4B:
        v10 = *(_QWORD *)(a1 + 16);
        v11 = *(_QWORD *)(v10 + 64);
        if ( !v11 || (result = *(unsigned int *)(v11 + 4), !(_DWORD)result) )
        {
          result = sub_B61CD0(v10 + 24);
          if ( !(_DWORD)result )
            return *(unsigned int *)(v10 + 32);
        }
        return result;
      case 0x4C:
        a1 = *(_QWORD *)(a1 + 32);
        if ( a1 )
          continue;
        return 0;
      case 0x4D:
        return *(unsigned int *)(a1 + 44);
      case 0x4E:
        return *(unsigned int *)(a1 + 20);
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return *(unsigned int *)(a1 + 36);
      case 0x56:
        return sub_C70DF0(a1);
      case 0x58:
        return *(unsigned int *)(a1 + 36);
      case 0x59:
      case 0x5A:
      case 0x5C:
      case 0x5D:
        return *(unsigned int *)(a1 + 20);
      case 0x5B:
        return sub_C70820(a1) >> 32;
      case 0x5E:
        return *(unsigned int *)(a1 + 36);
      case 0x5F:
        result = *(unsigned int *)(a1 + 28);
        if ( (_DWORD)result )
          return result;
        result = *(unsigned int *)(a1 + 4);
        if ( !(_DWORD)result )
          return result;
        a1 = *(_QWORD *)(a1 + 8LL * (unsigned int)(result - 1) + 32);
        continue;
      case 0x60:
      case 0x69:
        return *(unsigned int *)(a1 + 28);
      case 0x61:
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
          goto LABEL_29;
        return *(unsigned int *)(a1 + 4);
      case 0x62:
        return *(unsigned int *)(a1 + 4);
      case 0x64:
        return *(unsigned int *)(a1 + 4);
      case 0x65:
        sub_C6FDE0((__int64)v15, a1);
        a1 = v15[2];
        continue;
      case 0x66:
        return sub_C70400(a1);
      case 0x67:
        return *(unsigned int *)(a1 + 32);
      case 0x68:
        return *(unsigned int *)(a1 + 4);
      case 0x6A:
        return *(unsigned int *)(a1 + 44);
      case 0x6B:
        return *(unsigned int *)(a1 + 24);
      case 0x6C:
        result = *(unsigned int *)(a1 + 24);
        if ( (_DWORD)result )
          return result;
        v4 = *(_DWORD **)(a1 + 40);
        if ( v4 && (*v4 & 0x4000) != 0 )
          return *(unsigned int *)(a1 + 20);
LABEL_16:
        a1 = *(_QWORD *)(a1 + 48);
        continue;
      case 0x6D:
        if ( (*(_QWORD *)a1 & 0x100000LL) != 0 && *(_DWORD *)(a1 + 72) )
          return *(unsigned int *)(a1 + 76);
        result = sub_B61CD0(a1 + 48);
        if ( !(_DWORD)result )
          return *(unsigned int *)(a1 + 56);
        return result;
      case 0x6F:
        return *(unsigned int *)(a1 + 4);
      case 0x71:
        return sub_C70750(a1);
      case 0x72:
        return sub_C71070((__int16 *)a1);
      case 0x73:
        return *(unsigned int *)(a1 + 4);
      case 0x75:
        a1 = sub_BD7590(a1);
        continue;
      case 0x78:
        return *(unsigned int *)(a1 + 80);
      case 0x79:
        return *(unsigned int *)(a1 + 28);
      case 0x7A:
        return *(unsigned int *)(a1 + 36);
      case 0x7B:
        return *(unsigned int *)(a1 + 4);
      case 0x7C:
        return *(unsigned int *)(a1 + 64);
      case 0x7D:
        v6 = *(_QWORD *)(a1 + 16);
        a1 = *(_QWORD *)(v6 + 16);
        if ( a1 )
          continue;
        return *(unsigned int *)(v6 + 4);
      case 0x7F:
        return *(unsigned int *)(a1 + 20);
      case 0x80:
      case 0xF3:
        a1 = *(_QWORD *)(a1 + 40);
        continue;
      case 0x81:
        goto LABEL_16;
      case 0x82:
      case 0xED:
        a1 = *(_QWORD *)(a1 + 8);
        continue;
      case 0x83:
        v12 = *(_QWORD *)a1;
        v13 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 8LL * (((v13 & 0x200) != 0) + (unsigned int)((v13 & 0x400) != 0) + 1) + 24) )
          v14 = ((v13 & 0x200) != 0) + (unsigned int)((v12 & 0x400) != 0) + 1;
        else
          v14 = ((v13 & 0x200) != 0) + ((v12 & 0x400) != 0);
        a1 = *(_QWORD *)(a1 + 8 * v14 + 24);
        continue;
      case 0x85:
        while ( (**(_WORD **)(a1 + 8LL * ((unsigned int)((*(_QWORD *)a1 & 0x200) != 0) + 1) + 24) & 0x1FF) == 0x85 )
          a1 = *(_QWORD *)(a1 + 8LL * ((unsigned int)((*(_QWORD *)a1 & 0x200) != 0) + 1) + 24);
        a1 = *(_QWORD *)(a1 + 8LL * ((unsigned int)((*(_QWORD *)a1 & 0x200) != 0) + 1) + 24);
        continue;
      case 0x86:
        return *(unsigned int *)(*(_QWORD *)(a1 + 8) + 12LL);
      case 0x88:
        return *(unsigned int *)(a1 + 8);
      case 0x8A:
        return *(unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL);
      case 0x8B:
        v3 = *(_QWORD *)(a1 + 8);
        if ( v3 )
          goto LABEL_29;
        return *(unsigned int *)(a1 + 4);
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
      case 0xF2:
        return *(unsigned int *)(a1 + 16);
      case 0x9C:
        return sub_ECEE90(a1);
      case 0x9D:
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
          goto LABEL_29;
        return *(unsigned int *)(a1 + 8);
      case 0x9E:
        return *(unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL);
      case 0xEE:
      case 0xF8:
      case 0xFE:
        return *(unsigned int *)(a1 + 4);
      case 0xEF:
        a1 = *(_QWORD *)(a1 + 56);
        continue;
      case 0xF1:
        v7 = *(_QWORD *)a1;
        if ( (*(_QWORD *)a1 & 0x1000LL) != 0
          && (v8 = (v7 & 0x4000) != 0, *(_QWORD *)(a1 + 8LL * (v8 + (unsigned int)((v7 & 0x2000) != 0) + 2) + 16)) )
        {
          a1 = *(_QWORD *)(a1 + 8LL * (v8 + (unsigned int)((v7 & 0x2000) != 0) + 2) + 16);
        }
        else
        {
          a1 = *(_QWORD *)(a1 + 8LL * (((v7 & 0x4000) != 0) + (unsigned int)((v7 & 0x2000) != 0) + 1) + 16);
        }
        continue;
      case 0xF4:
        return *(unsigned int *)(a1 + 28);
      case 0xF5:
        return *(unsigned int *)(a1 + 20);
      case 0xF6:
        v5 = *(_QWORD *)(a1 + 16);
        if ( v5 )
          return *(unsigned int *)(v5 + 12);
        else
          return (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 32;
      case 0xF7:
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
        {
LABEL_29:
          a1 = v3;
          continue;
        }
        return *(unsigned int *)(a1 + 8);
      case 0xF9:
        return *(unsigned int *)(a1 + 12);
      case 0xFA:
        a1 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 8) + 32);
        continue;
      case 0xFB:
        a1 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 12) + 16);
        continue;
      case 0xFC:
        a1 = *(_QWORD *)(a1 + 64);
        continue;
      case 0xFF:
        return *(unsigned int *)(a1 + 44);
    }
  }
}

