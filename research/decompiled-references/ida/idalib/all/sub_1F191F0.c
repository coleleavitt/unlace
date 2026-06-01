void __fastcall sub_1F191F0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  if ( !(a2 & 7 | (a2 >> 3) & 1) )
  {
    switch ( *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
    {
      case 0:
      case 1:
      case 3:
      case 9:
      case 0xC:
      case 0x1B:
      case 0x1C:
      case 0x3B:
        return;
      case 2:
      case 4:
      case 5:
      case 6:
        sub_1EE7680(a1, a2, (__int64)a3);
        break;
      case 7:
        sub_1EE77C0(a1, a2, a3);
        break;
      case 8:
        *(_QWORD *)a3 = sub_1F21F80(*a1);
        break;
      case 0xA:
      case 0xB:
      case 0xE:
      case 0x11:
      case 0x13:
      case 0x15:
      case 0x17:
      case 0x1D:
      case 0x1E:
      case 0x22:
      case 0x26:
      case 0x27:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
        *a3 = sub_1EE7490(*a1);
        break;
      case 0xD:
        sub_1EE74C0(a1, a2, (__int64)a3);
        break;
      case 0xF:
        sub_1EE7730(a1, a2, a3);
        break;
      case 0x10:
        sub_1F19170(a1, a2, (__int64)a3);
        break;
      case 0x12:
        sub_1EEE5E0(a1, a2, (__int64)a3);
        break;
      case 0x14:
        sub_1F19930(a1, a2, a3);
        break;
      case 0x16:
        sub_1F1E6D0(a1, a2, a3);
        break;
      case 0x18:
        sub_1F198C0(a1, a2, a3);
        break;
      case 0x19:
      case 0x1A:
        sub_1EEE710(a1, a2, a3);
        break;
      case 0x1F:
        sub_1EEE630(a1, a2, (__int64)a3);
        break;
      case 0x20:
        sub_1EEE6A0(a1, a2, (__int64)a3);
        break;
      case 0x21:
        sub_1F19890(a1, a2, a3);
        break;
      case 0x23:
        sub_1F1E8C0(a1, a2, a3);
        break;
      case 0x24:
        sub_1EE7790(a1, a2, a3);
        break;
      case 0x25:
        sub_1EFA340(a1, a2, a3);
        break;
      case 0x28:
        sub_1EE7760(a1, a2, a3);
        break;
      case 0x31:
        sub_1F1E790(a1, a2, a3);
        break;
      case 0x33:
        sub_1EE76F0(a1, a2, a3);
        break;
      case 0x34:
        sub_1F1E820(a1, a2, a3);
        break;
      case 0x36:
        sub_1F1E870(a1, a2, a3);
        break;
    }
  }
}
