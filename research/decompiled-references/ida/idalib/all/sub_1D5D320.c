unsigned __int64 __fastcall sub_1D5D320(
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
      result = sub_1D36E10(a2);
      break;
    case 1:
      result = sub_1D36E20(a2);
      break;
    case 2:
      result = sub_1D36E30(a2);
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
      result = sub_1D48950(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1D48AD0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1D48B30(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1D48CA0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1D48E70(a1, (unsigned __int16 **)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1D36B00((__int64)a1, a2);
      break;
    case 0xB:
      sub_2EABD4();
    case 0xC:
      result = (unsigned __int64)sub_1D36B30((__int64)a1, a2);
      break;
    case 0xE:
      result = sub_1D36E40(a2);
      break;
    case 0xF:
      result = sub_1D48ED0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1D36E50(a2);
      break;
    case 0x11:
      result = sub_1D36E60(a2);
      break;
    case 0x12:
      result = sub_1D48F30(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1D49070(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1D36B60((__int64)a1, a2);
      break;
    case 0x15:
      result = sub_1D36B90((__int64)a1, a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1D491B0(a1, a2, a6, a7);
      break;
    case 0x17:
      result = sub_1D49350(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1D493B0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1D49410(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1D49470(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1D494E0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1D49550(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      sub_2EABD4();
    case 0x20:
      result = sub_1D496C0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1D36E70(a2);
      break;
    case 0x22:
      result = sub_1D49800(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1D49860(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1D498C0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1D49A00(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1D5CC10((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1D36BD0((__int64)a1, (int *)a2);
      break;
    case 0x28:
      result = sub_1D49B40(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1D49BB0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1D49D00(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1D49D60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1D49DC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1D52540(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1D49E30(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1D49F70(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1D4A0F0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1D4A240(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1D4A3A0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1D5C3B0((__int64)a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1D36E80(a2);
      break;
    case 0x3B:
      result = sub_1D4A530(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x3C:
      result = sub_1D36E90(a2);
      break;
    case 0x3D:
      result = sub_1D36EA0(a2);
      break;
    case 0x3E:
      result = sub_1D36EB0(a2);
      break;
    case 0x3F:
      result = sub_1D36EC0(a2);
      break;
    case 0x40:
      result = sub_1D36ED0(a2);
      break;
    case 0x41:
      result = sub_1D36EE0(a2);
      break;
    case 0x42:
      result = sub_1D4A580(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1D4A5E0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1D4A720(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1D4A780(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1D4A7F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1D4A930(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1D380E0((__int64)a1, a2);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1D36C00((__int64)a1, (int *)a2);
      break;
    case 0x4B:
      result = sub_1D4A9A0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1D36C20((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1D4AA00(a1, a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1D4AA60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1D4AAD0(a1, a2, a6, a7, a3, a4);
      break;
    case 0x51:
      result = sub_1D4ACC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1D4AD20(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1D36C60((__int64)a1, a2);
      break;
    case 0x54:
      result = sub_1D36EF0(a2);
      break;
    case 0x55:
      result = sub_1D52C10(a1, (const __m128i *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x56:
      result = sub_1D36F00(a2);
      break;
    case 0x57:
      result = sub_1D36F10(a2);
      break;
    case 0x58:
      sub_2EABD4();
    case 0x59:
      result = sub_1D4AE60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1D4AEC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      sub_2EABD4();
    case 0x5C:
      result = sub_1D36F20(a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1D36C90((__int64)a1, a2);
      break;
    case 0x5E:
      result = sub_1D4AF40(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1D36F30(a2);
      break;
    case 0x60:
      result = sub_1D4B080(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1D4B0E0(a1, a2, a6, a7, a3, a4);
      break;
    case 0x62:
      result = sub_1D532F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1D4B2D0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1D36F40(a2);
      break;
    case 0x66:
      result = sub_1D5BCA0((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x67:
      sub_2EABD4();
    case 0x68:
      sub_2EABD4();
    case 0x6B:
      result = sub_1D36F50(a2);
      break;
    case 0x6C:
      result = sub_1D36F60(a2);
      break;
    case 0x6D:
      result = sub_1D4B410(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1D4B470(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1D4B5C0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1D43970(a1, a2, a6, a7);
      break;
    case 0x71:
      result = sub_1D36F70(a2);
      break;
    case 0x73:
      result = sub_1D36F80(a2);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
