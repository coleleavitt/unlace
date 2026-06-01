__int64 __fastcall sub_F6B0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  switch ( *(_BYTE *)(a1 + 16) )
  {
    case 0:
    case 1:
    case 0x18:
      goto LABEL_6;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xA:
    case 0xB:
    case 0xD:
    case 0xE:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1F:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x37:
    case 0x39:
    case 0x3A:
      goto LABEL_3;
    case 8:
      return *(_QWORD *)(a1 + 48);
    case 9:
    case 0xC:
    case 0x28:
      return *(_QWORD *)(a1 + 32);
    case 0xF:
      if ( (BYTE1(**(_DWORD **)(a1 + 24)) & 0x80u) != 0 )
        goto LABEL_3;
      return sub_F56680(a1);
    case 0x10:
    case 0x11:
      result = *(_QWORD *)(a1 + 24);
      if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_3;
      return result;
    case 0x1E:
      return *(_QWORD *)(a1 + 24);
    case 0x21:
      if ( !sub_F62DD0(a1) )
        goto LABEL_3;
      return sub_F62E50(a1);
    case 0x25:
      return *(_QWORD *)(a1 + 8);
    case 0x27:
      if ( (*(_BYTE *)(a1 + 17) & 2) != 0 || !(unsigned int)sub_F56710(a1) )
        goto LABEL_3;
      return sub_F56930(a1);
    case 0x2E:
      if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
        return *(_QWORD *)(a1 + 48);
      else
        return *(_QWORD *)(a1 + 8);
    case 0x31:
      if ( (*(_BYTE *)(a1 + 17) & 4) != 0 && !sub_F56690(a1) )
        goto LABEL_3;
      result = sub_F56980(a1);
      break;
    case 0x33:
      if ( (**(_DWORD **)(a1 + 24) & 0x10000) != 0 )
        goto LABEL_3;
      result = sub_F64EA0(a1, a2, a3, a4, a5);
      break;
    case 0x34:
      return sub_F64D80(a1, a2, a3, a4, a5);
    case 0x35:
      return sub_F5DAC0(a1);
    case 0x36:
      if ( (*(_BYTE *)(a1 + 17) & 4) != 0 )
LABEL_3:
        result = a1 & 0xFFFFFFFFFFFFFFF0LL;
      else
LABEL_6:
        result = *(_QWORD *)(a1 + 40);
      break;
    case 0x38:
      result = sub_F5DBF0(a1);
      break;
  }
  return result;
}
