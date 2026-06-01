unsigned __int64 __fastcall sub_1D06760(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128i a8)
{
  unsigned __int64 result; // rax

  if ( !a2 )
    return 0;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      result = sub_1CAF8D0(a2);
      break;
    case 1:
      result = sub_1CAF8E0(a2);
      break;
    case 2:
      result = sub_1CAF8F0(a2);
      break;
    case 3:
    case 9:
    case 0xD:
    case 0x1B:
    case 0x1F:
    case 0x2E:
    case 0x30:
    case 0x32:
    case 0x36:
    case 0x38:
    case 0x39:
    case 0x44:
    case 0x4E:
    case 0x64:
    case 0x69:
    case 0x6A:
    case 0x72:
      result = a2;
      break;
    case 4:
      result = sub_1CED8B0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1CEDA30(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1CEDA90(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1CEDC00(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1CEDDD0(a1, (unsigned __int16 **)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1CAF050((__int64)a1, a2);
      break;
    case 0xB:
      sub_2EAAE2();
    case 0xC:
      result = (unsigned __int64)sub_1CAF0B0((__int64)a1, a2);
      break;
    case 0xE:
      result = sub_1CAF900(a2);
      break;
    case 0xF:
      result = sub_1CEDE30(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1CAF910(a2);
      break;
    case 0x11:
      result = sub_1CAF920(a2);
      break;
    case 0x12:
      result = sub_1CEDE90(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1CEDFD0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1CAF110((__int64)a1, a2);
      break;
    case 0x15:
      result = sub_1CAF180((__int64)a1, a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1CEE110(a1, a2, a6, a7);
      break;
    case 0x17:
      result = sub_1CEE2B0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1CEE310(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1CEE370(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1CEE3D0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1CEE440(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1CEE4B0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      sub_2EAAE2();
    case 0x20:
      result = sub_1CEE620(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1CAF930(a2);
      break;
    case 0x22:
      result = sub_1CEE760(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1CEE7C0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1CEE820(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1CEE960(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1D06050((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1CAF1F0((__int64)a1, (int *)a2);
      break;
    case 0x28:
      result = sub_1CEEAA0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1CEEB10(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1CEEC60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1CEECC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1CEED20(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1CF7750(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1CEED90(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1CEEED0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1CEF050(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1CEF1A0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1CEF300(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1D057F0((__int64)a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1CAF940(a2);
      break;
    case 0x3B:
      result = sub_1CEF490(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x3C:
      result = sub_1CAF950(a2);
      break;
    case 0x3D:
      result = sub_1CAF960(a2);
      break;
    case 0x3E:
      result = sub_1CAF970(a2);
      break;
    case 0x3F:
      result = sub_1CAF980(a2);
      break;
    case 0x40:
      result = sub_1CAF990(a2);
      break;
    case 0x41:
      result = sub_1CAF9A0(a2);
      break;
    case 0x42:
      result = sub_1CEF4E0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1CEF540(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1CEF680(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1CEF6E0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1CEF750(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1CEF890(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1CB0470((__int64)a1, a2);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1CAF240((__int64)a1, (int *)a2);
      break;
    case 0x4B:
      result = sub_1CEF900(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1CAF2A0((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1CEF960(a1, a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1CEF9C0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1CEFA30(a1, a2, a6, a7, a3, a4);
      break;
    case 0x51:
      result = sub_1CEFC20(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1CEFC80(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1CAF310((__int64)a1, a2);
      break;
    case 0x54:
      result = sub_1CAF9B0(a2);
      break;
    case 0x55:
      result = sub_1CF7E20(a1, (const __m128i *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x56:
      result = sub_1CAF9C0(a2);
      break;
    case 0x57:
      result = sub_1CAF9D0(a2);
      break;
    case 0x58:
      sub_2EAAE2();
    case 0x59:
      result = sub_1CEFDC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1CEFE20(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      sub_2EAAE2();
    case 0x5C:
      result = sub_1CAF9E0(a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1CAF370((__int64)a1, a2);
      break;
    case 0x5E:
      result = sub_1CEFEA0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1CAF9F0(a2);
      break;
    case 0x60:
      result = sub_1CEFFE0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1CF0040(a1, a2, a6, a7, a3, a4);
      break;
    case 0x62:
      result = sub_1CF8500(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1CF0230(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1CAFA00(a2);
      break;
    case 0x66:
      result = sub_1D050E0((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x67:
      sub_2EAAE2();
    case 0x68:
      sub_2EAAE2();
    case 0x6B:
      result = sub_1CAFA10(a2);
      break;
    case 0x6C:
      result = sub_1CAFA20(a2);
      break;
    case 0x6D:
      result = sub_1CF0370(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1CF03D0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1CF0520(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1CE8DC0(a1, a2, a6, a7);
      break;
    case 0x71:
      result = sub_1CAFA30(a2);
      break;
    case 0x73:
      result = sub_1CAFA40(a2);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
