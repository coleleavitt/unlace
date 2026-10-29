void __fastcall sub_F51120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  __int64 v7; // rax

  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
    case 1:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1B:
    case 0x1C:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x33:
    case 0x34:
      return;
    case 2:
    case 3:
      sub_F2E920(a1, a2);
      break;
    case 4:
    case 5:
    case 6:
      sub_F2E840(a1, a2);
      break;
    case 0x10:
      sub_F40FF0(a1, a2);
      break;
    case 0x11:
      sub_F51100(a1, a2);
      break;
    case 0x15:
      sub_995540(*(_QWORD *)(a1 + 1096), " ");
      sub_F29DA0(a1, *(_DWORD *)(a2 + 48));
      break;
    case 0x19:
      sub_F2EBB0(a1, a2);
      break;
    case 0x1A:
      sub_F44E00((__int64 (__fastcall *)())a1, (const char *)a2);
      break;
    case 0x1D:
      sub_F40780(a1, a2);
      break;
    case 0x24:
      sub_F407F0(a1, a2, a3, a4, a5);
      break;
    case 0x26:
      v6 = *(_DWORD *)(a2 + 20);
      if ( v6 )
      {
        v7 = sub_995540(*(_QWORD *)(a1 + 1096), " expansions ");
        sub_227B910(v7, (unsigned int)(v6 - 1));
      }
      break;
    case 0x2C:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        sub_995540(*(_QWORD *)(a1 + 1096), " written as lvalue reference");
      break;
    case 0x2D:
      sub_F40940(a1, a2, a3, a4, a5, a6);
      break;
    case 0x2E:
      sub_F40CC0(a1, a2);
      break;
    case 0x2F:
    case 0x30:
      sub_F40710(a1, a2, a3, a4, a5);
      break;
    case 0x31:
      sub_F510B0(a1, a2);
      break;
    case 0x32:
      sub_F40EE0(a1, a2);
      break;
    case 0x35:
      sub_F40A50(a1, a2, a3, a4, a5, a6);
      break;
    case 0x36:
      sub_F2ECA0(a1, a2);
      break;
    case 0x37:
      sub_F406A0(a1, a2, a3, a4, a5, a6);
      break;
    case 0x38:
      sub_F409C0(a1, a2, a3, a4, a5, a6);
      break;
    case 0x39:
    case 0x3A:
      sub_F2EA60(a1, a2);
      break;
  }
}
