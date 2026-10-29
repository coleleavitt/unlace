unsigned __int64 __fastcall sub_1BC2C80(
        __int64 *a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128i a8)
{
  unsigned __int64 result; // rax

  if ( !a2 )
    return 0;
  switch ( a2->m128i_i32[2] )
  {
    case 0:
      result = sub_1AE76E0((__int64)a2);
      break;
    case 1:
      result = sub_1AE76F0((__int64)a2);
      break;
    case 2:
      result = sub_1AE7700((__int64)a2);
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
      result = sub_1BA9A40(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1BA9BC0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1BA9C70(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1BA9DE0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1BA9FB0(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1B095C0((__int64)a1, (__int64)a2);
      break;
    case 0xB:
      sub_2EA2AA();
    case 0xC:
      result = (unsigned __int64)sub_1B0A040((__int64)a1, (__int64)a2);
      break;
    case 0xE:
      result = sub_1AE7710((__int64)a2);
      break;
    case 0xF:
      result = sub_1BAA010(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1AE7720((__int64)a2);
      break;
    case 0x11:
      result = sub_1AE7730((__int64)a2);
      break;
    case 0x12:
      result = sub_1BAA110(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1BAA250(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      JUMPOUT(0x1B09010);
    case 0x15:
      result = sub_1B1C2E0((__int64)a1, (__int64)a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1BAA390(a1, (__int64)a2, a6, a7);
      break;
    case 0x17:
      result = sub_1BAA530(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1BAA590(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1BAA5F0(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1BAA650(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1BAA6C0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1BAA730(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      sub_2EA2AA();
    case 0x20:
      result = sub_1BAA8A0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1AE7740((__int64)a2);
      break;
    case 0x22:
      result = sub_1BAA9E0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1BAAA40(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1BAAAA0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1BAABE0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1BC2580((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1AE7640((__int64)a1, a2->m128i_i32);
      break;
    case 0x28:
      result = sub_1BAAD60(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1BAADD0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1BAAF20(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1BAB020(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1BAB0E0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1BB3A30(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1BAB150(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1BAB290(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1BAB410(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1BAB560(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1BAB6C0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1BC1D30((__int64)a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1AE7750((__int64)a2);
      break;
    case 0x3B:
      result = sub_1BAB850(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x3C:
      result = sub_1AE7760((__int64)a2);
      break;
    case 0x3D:
      result = sub_1AE7770((__int64)a2);
      break;
    case 0x3E:
      result = sub_1AE7780((__int64)a2);
      break;
    case 0x3F:
      result = sub_1AE7790((__int64)a2);
      break;
    case 0x40:
      result = sub_1AE77A0((__int64)a2);
      break;
    case 0x41:
      result = sub_1AE77B0((__int64)a2);
      break;
    case 0x42:
      result = sub_1BAB9A0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1BABA00(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1BABB40(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1BABBA0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1BABC10(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1BABD50(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1AF8900((__int64)a1, (__int64)a2);
      break;
    case 0x4A:
      result = sub_1AF8500((__int64)a1, a2->m128i_i64);
      break;
    case 0x4B:
      result = sub_1BABDC0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1B09BD0((__int64)a1, (__int64)a2);
      break;
    case 0x4D:
      result = sub_1BABE20(a1, (__int64)a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1BABE80(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1BABF50(a1, (unsigned __int64)a2, a6, a7, a3, a4);
      break;
    case 0x51:
      result = sub_1BAC140(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1BAC1A0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1B092C0((__int64)a1, (__int64)a2);
      break;
    case 0x54:
      result = sub_1AE77C0((__int64)a2);
      break;
    case 0x55:
      result = sub_1BB4100(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x56:
      result = sub_1AE77D0((__int64)a2);
      break;
    case 0x57:
      result = sub_1AE77E0((__int64)a2);
      break;
    case 0x58:
      sub_2EA2AA();
    case 0x59:
      result = sub_1BAC2E0(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1BAC3E0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      sub_2EA2AA();
    case 0x5C:
      result = sub_1AE77F0((__int64)a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1B09770((__int64)a1, (__int64)a2);
      break;
    case 0x5E:
      result = sub_1BAC460(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1AE7800((__int64)a2);
      break;
    case 0x60:
      result = sub_1BAC5A0(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1BAC6A0(a1, (unsigned __int64)a2, a6, a7, a3, a4);
      break;
    case 0x62:
      result = sub_1BB47E0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1BAC890(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1AE7810((__int64)a2);
      break;
    case 0x66:
      result = sub_1BC1630((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x67:
      sub_2EA2AA();
    case 0x68:
      sub_2EA2AA();
    case 0x6B:
      result = sub_1AE7820((__int64)a2);
      break;
    case 0x6C:
      result = sub_1AE7830((__int64)a2);
      break;
    case 0x6D:
      result = sub_1BAC9D0(a1, a2->m128i_i64, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1BACAB0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1BACC00(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1BACD50(a1, (__int64)a2, a6, a7);
      break;
    case 0x71:
      result = sub_1AE7840((__int64)a2);
      break;
    case 0x73:
      result = sub_1AE7850((__int64)a2);
      break;
    default:
      result = (unsigned __int64)a2;
      break;
  }
  return result;
}
