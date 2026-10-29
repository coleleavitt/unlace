void __fastcall sub_F2D3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
      sub_F0ABE0(a1, a2);
      break;
    case 4:
    case 5:
    case 6:
      sub_F0AB00(a1, a2);
      break;
    case 0x10:
      sub_F1D2B0(a1, a2);
      break;
    case 0x11:
      sub_F2D3C0(a1, a2);
      break;
    case 0x15:
      sub_971800(*(_QWORD *)(a1 + 1096), " ");
      sub_F06060(a1, *(_DWORD *)(a2 + 48));
      break;
    case 0x19:
      sub_F0AE70(a1, a2);
      break;
    case 0x1A:
      sub_F210C0((__int64 (__fastcall *)())a1, (const char *)a2);
      break;
    case 0x1D:
      sub_F1CA40(a1, a2);
      break;
    case 0x24:
      sub_F1CAB0(a1, a2, a3, a4, a5);
      break;
    case 0x26:
      v6 = *(_DWORD *)(a2 + 20);
      if ( v6 )
      {
        v7 = sub_971800(*(_QWORD *)(a1 + 1096), " expansions ");
        sub_2257BD0(v7, (unsigned int)(v6 - 1));
      }
      break;
    case 0x2C:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        sub_971800(*(_QWORD *)(a1 + 1096), " written as lvalue reference");
      break;
    case 0x2D:
      sub_F1CC00(a1, a2, a3, a4, a5, a6);
      break;
    case 0x2E:
      sub_F1CF80(a1, a2);
      break;
    case 0x2F:
    case 0x30:
      sub_F1C9D0(a1, a2, a3, a4, a5);
      break;
    case 0x31:
      sub_F2D370(a1, a2);
      break;
    case 0x32:
      sub_F1D1A0(a1, a2);
      break;
    case 0x35:
      sub_F1CD10(a1, a2, a3, a4, a5, a6);
      break;
    case 0x36:
      sub_F0AF60(a1, a2);
      break;
    case 0x37:
      sub_F1C960(a1, a2, a3, a4, a5, a6);
      break;
    case 0x38:
      sub_F1CC80(a1, a2, a3, a4, a5, a6);
      break;
    case 0x39:
    case 0x3A:
      sub_F0AD20(a1, a2);
      break;
  }
}

