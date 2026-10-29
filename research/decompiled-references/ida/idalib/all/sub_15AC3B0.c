bool __fastcall sub_15AC3B0(__int64 a1)
{
  __int64 v1; // r15
  int v2; // esi
  _DWORD *v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rax
  bool result; // al
  __int64 v11; // rax

  v2 = *(_DWORD *)(a1 + 136);
  if ( v2 )
  {
    v3 = *(_DWORD **)(a1 + 128);
    v4 = 1LL << *v3;
    if ( (v4 & 0xB7) != 0 )
      return 0;
    if ( (v4 & 8) != 0 )
      return 1;
    v5 = &v3[36 * (v2 - 1)];
    while ( v3 != v5 )
    {
      v6 = 1LL << v3[36];
      if ( (v6 & 0xB7) != 0 )
        return 0;
      v3 += 36;
      if ( (v6 & 8) != 0 )
        return 1;
    }
  }
  v7 = *(_DWORD **)a1;
  switch ( (**(_DWORD **)a1 >> 12) & 0x7F )
  {
    case 0:
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
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      return 0;
    case 0x1C:
    case 0x1D:
    case 0x1F:
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
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
      if ( (*((_QWORD *)v7 + 1) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v8 = *(_QWORD *)(*((_QWORD *)v7 + 1) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v8 + 16) != 59 )
        goto LABEL_17;
      v9 = (__int64 *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v9 )
        return 0;
LABEL_16:
      v8 = *v9;
LABEL_17:
      result = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1;
      break;
    case 0x1E:
    case 0x20:
    case 0x21:
      v11 = *((_QWORD *)v7 + 1);
      if ( !v11 )
        return 0;
      v9 = (__int64 *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_16;
    default:
      ++*(_DWORD *)(v1 + 8);
      BUG();
  }
  return result;
}
