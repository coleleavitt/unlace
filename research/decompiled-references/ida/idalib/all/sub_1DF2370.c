unsigned __int64 __fastcall sub_1DF2370(
        __int64 *a1,
        __m128i *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9)
{
  unsigned __int64 result; // rax

  if ( !a2 )
    return 0;
  switch ( a2->m128i_i32[2] )
  {
    case 0:
      result = sub_1DB7B70((__int64)a2);
      break;
    case 1:
      result = sub_1DB7B80((__int64)a2);
      break;
    case 2:
      result = sub_1DB7B90((__int64)a2);
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
      result = (unsigned __int64)a2;
      break;
    case 4:
      result = sub_1DC8FB0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 5:
      result = sub_1DC9130(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 6:
      result = sub_1DC9190(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 7:
      result = sub_1DC9300(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 8:
      result = sub_1DC94D0(a1, (unsigned int *)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1DB77B0((__int64)a1, (__int64)a2);
      break;
    case 0xB:
      sub_2EAD22(a1);
    case 0xC:
      result = (unsigned __int64)sub_1DB77E0((__int64)a1, (__int64)a2);
      break;
    case 0xE:
      result = sub_1DB7BA0((__int64)a2);
      break;
    case 0xF:
      result = sub_1DC9530(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x10:
      result = sub_1DB7BB0((__int64)a2);
      break;
    case 0x11:
      result = sub_1DB7BC0((__int64)a2);
      break;
    case 0x12:
      result = sub_1DC9590(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x13:
      result = sub_1DC96D0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1DB7810((__int64)a1, (__int64)a2);
      break;
    case 0x15:
      result = sub_1DB7840((__int64)a1, (__int64)a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1DC9810(a1, (__int64)a2, a7, a8);
      break;
    case 0x17:
      result = sub_1DC99B0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x18:
      result = sub_1DC9A10(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x19:
      result = sub_1DC9A70(a1, (unsigned int *)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x1A:
      result = sub_1DC9AD0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x1C:
      result = sub_1DC9B40(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x1D:
      result = sub_1DC9BB0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x1E:
      sub_2EAD22(a1);
    case 0x20:
      result = sub_1DC9D20(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x21:
      result = sub_1DB7BD0((__int64)a2);
      break;
    case 0x22:
      result = sub_1DC9E60(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x23:
      result = sub_1DC9EC0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x24:
      result = sub_1DC9F20(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x25:
      result = sub_1DCA060(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x26:
      result = sub_1DF1A70(a1, (__int64)a2, *(double *)a7.m128_u64, a8, a9, a3, a4, a5, a6);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1DB7880((__int64)a1, a2->m128i_i32);
      break;
    case 0x28:
      result = sub_1DCA1A0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x29:
      result = sub_1DCA210(a1, a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x2A:
      result = sub_1DCA360(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x2B:
      result = sub_1DCA3C0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x2C:
      result = sub_1DCA420(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x2D:
      result = sub_1DD96B0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x2F:
      result = sub_1DCA490(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x31:
      result = sub_1DCA5D0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x33:
      result = sub_1DCA750(a1, a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x34:
      result = sub_1DCA8A0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x35:
      result = sub_1DCAA00(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x37:
      result = sub_1DF1310(a1, (unsigned int *)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x3A:
      result = sub_1DB7BE0((__int64)a2);
      break;
    case 0x3B:
      result = sub_1DCAB90(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x3C:
      result = sub_1DB7BF0((__int64)a2);
      break;
    case 0x3D:
      result = sub_1DB7C00((__int64)a2);
      break;
    case 0x3E:
      result = sub_1DB7C10((__int64)a2);
      break;
    case 0x3F:
      result = sub_1DB7C20((__int64)a2);
      break;
    case 0x40:
      result = sub_1DB7C30((__int64)a2);
      break;
    case 0x41:
      result = sub_1DB7C40((__int64)a2);
      break;
    case 0x42:
      result = sub_1DCABE0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x43:
      result = sub_1DCAC40(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x45:
      result = sub_1DCAD80(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x46:
      result = sub_1DCADE0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x47:
      result = sub_1DCAE50(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x48:
      result = sub_1DCAF90(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x49:
      result = sub_1DF21B0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1DB78B0((__int64)a1, a2->m128i_i32);
      break;
    case 0x4B:
      result = sub_1DCB000(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1DB78D0((__int64)a1, (__int64)a2);
      break;
    case 0x4D:
      result = sub_1DCB060(a1, (__int64)a2, a3, a4, a7, a8, a5, a6);
      break;
    case 0x4F:
      result = sub_1DCB0C0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x50:
      result = sub_1DCB130(a1, (unsigned __int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x51:
      result = sub_1DCB320(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x52:
      result = sub_1DCB380(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1DB7910((__int64)a1, (__int64)a2);
      break;
    case 0x54:
      result = sub_1DB7C50((__int64)a2);
      break;
    case 0x55:
      result = sub_1DD9C50(a1, a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x56:
      result = sub_1DB7C60((__int64)a2);
      break;
    case 0x57:
      result = sub_1DB7C70((__int64)a2);
      break;
    case 0x58:
      sub_2EAD22(a1);
    case 0x59:
      result = sub_1DCB4C0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x5A:
      result = sub_1DCB520(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x5B:
      sub_2EAD22(a1);
    case 0x5C:
      result = sub_1DB7C80((__int64)a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1DB7940((__int64)a1, (__int64)a2);
      break;
    case 0x5E:
      result = sub_1DCB5A0(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x5F:
      result = sub_1DB7C90((__int64)a2);
      break;
    case 0x60:
      result = sub_1DCB6E0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x61:
      result = sub_1DCB740(a1, (unsigned __int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x62:
      result = sub_1DDA200(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x63:
      result = sub_1DCB930(a1, (__int64)a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x65:
      result = sub_1DB7CA0((__int64)a2);
      break;
    case 0x66:
      result = sub_1DF0D10(a1, (__int64)a2, *(double *)a7.m128_u64, a8, a9, a3, a4, a5, a6);
      break;
    case 0x67:
      sub_2EAD22(a1);
    case 0x68:
      sub_2EAD22(a1);
    case 0x6B:
      result = sub_1DB7CB0((__int64)a2);
      break;
    case 0x6C:
      result = sub_1DB7CC0((__int64)a2);
      break;
    case 0x6D:
      result = sub_1DCBA70(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
      break;
    case 0x6E:
      result = sub_1DCBAD0(a1, a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1DCBC20(a1, a2, a7, a8, a3, a4, a5, a6);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1DCBD70(a1, (__int64)a2, a7, a8);
      break;
    case 0x71:
      result = sub_1DB7CD0((__int64)a2);
      break;
    case 0x73:
      result = sub_1DB7CE0((__int64)a2);
      break;
    default:
      result = (unsigned __int64)a2;
      break;
  }
  return result;
}
