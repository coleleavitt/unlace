__int64 __fastcall sub_1959330(__int64 *a1, __m128i *a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax

  if ( !a2 )
    return 0;
  switch ( a2->m128i_i32[2] )
  {
    case 0:
      result = sub_18BB670((__int64)a2);
      break;
    case 1:
      result = sub_18BB680((__int64)a2);
      break;
    case 2:
      result = sub_18BB690((__int64)a2);
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
      result = (__int64)a2;
      break;
    case 4:
      result = sub_19539B0(a1, a2, a3, a4);
      break;
    case 5:
      result = sub_1953B30(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 6:
      result = sub_1953B90(a1, a2, a3, a4);
      break;
    case 7:
      result = sub_1953D00(a1, (__int64)a2, a3, a4);
      break;
    case 8:
      result = sub_1953ED0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0xA:
      result = sub_1902810((__int64)a1, (unsigned int *)a2);
      break;
    case 0xB:
      sub_2E9A94();
    case 0xC:
      result = sub_1902840((__int64)a1, (unsigned int *)a2);
      break;
    case 0xE:
      result = sub_18BB6A0((__int64)a2);
      break;
    case 0xF:
      result = sub_1953F30(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x10:
      result = sub_18BB6B0((__int64)a2);
      break;
    case 0x11:
      result = sub_18BB6C0((__int64)a2);
      break;
    case 0x12:
      result = sub_1953F90(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x13:
      result = sub_19540D0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x14:
      result = sub_1902870((__int64)a1, (unsigned int *)a2);
      break;
    case 0x15:
      result = sub_19028A0((__int64)a1, a2);
      break;
    case 0x16:
      result = sub_1954210(a1, (__int64)a2, a3, a4);
      break;
    case 0x17:
      result = sub_19543B0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x18:
      result = sub_1954410(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x19:
      result = sub_1954470(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x1A:
      result = sub_19544D0(a1, (__int64)a2, a3, a4);
      break;
    case 0x1C:
      result = sub_1954540(a1, (__int64)a2, a3, a4);
      break;
    case 0x1D:
      result = sub_19545B0(a1, a2, a3, a4);
      break;
    case 0x1E:
      sub_2E9A94();
    case 0x20:
      result = sub_1954720(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x21:
      result = sub_18BB6D0((__int64)a2);
      break;
    case 0x22:
      result = sub_1954860(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x23:
      result = sub_19548C0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x24:
      result = sub_1954920(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x25:
      result = sub_1954A60(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x26:
      result = sub_19550D0((__int64)a1, a2->m128i_i32, *(double *)a3.m128_u64, a4);
      break;
    case 0x27:
      result = sub_19028E0((__int64)a1, (unsigned int *)a2);
      break;
    case 0x28:
      result = sub_1955240(a1, (__int64)a2, a3, a4);
      break;
    case 0x29:
      result = sub_19552B0(a1, a2, a3, a4);
      break;
    case 0x2A:
      result = sub_1955400(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x2B:
      result = sub_1955460(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x2C:
      result = sub_19554C0(a1, (__int64)a2, a3, a4);
      break;
    case 0x2D:
      result = sub_1955530(a1, (__int64)a2, a3, a4);
      break;
    case 0x2F:
      result = sub_1955C00(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x31:
      result = sub_1955D40(a1, (__int64)a2, a3, a4);
      break;
    case 0x33:
      result = sub_1955EC0(a1, a2, a3, a4);
      break;
    case 0x34:
      result = sub_1956010(a1, a2, a3, a4);
      break;
    case 0x35:
      result = sub_1956170(a1, a2, a3, a4);
      break;
    case 0x37:
      result = sub_1956830(a1, (__int64)a2, a3, a4);
      break;
    case 0x3A:
      result = sub_18BB6E0((__int64)a2);
      break;
    case 0x3B:
      result = sub_1956B00(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x3C:
      result = sub_18BB6F0((__int64)a2);
      break;
    case 0x3D:
      result = sub_18BB700((__int64)a2);
      break;
    case 0x3E:
      result = sub_18BB710((__int64)a2);
      break;
    case 0x3F:
      result = sub_18BB720((__int64)a2);
      break;
    case 0x40:
      result = sub_18BB730((__int64)a2);
      break;
    case 0x41:
      result = sub_18BB740((__int64)a2);
      break;
    case 0x42:
      result = sub_1956B50(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x43:
      result = sub_1956BB0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x45:
      result = sub_1956CF0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x46:
      result = sub_1956D50(a1, (__int64)a2, a3, a4);
      break;
    case 0x47:
      result = sub_1956DC0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x48:
      result = sub_1956F00(a1, (__int64)a2, a3, a4);
      break;
    case 0x49:
      result = sub_1902900((__int64)a1, (unsigned int *)a2);
      break;
    case 0x4A:
      result = sub_1902A60((__int64)a1, (unsigned int *)a2);
      break;
    case 0x4B:
      result = sub_1956F70(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x4C:
      result = sub_1902A80((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1956FD0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x4F:
      result = sub_1957030(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x50:
      result = sub_1957090(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x51:
      result = sub_1957250(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x52:
      result = sub_19572B0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x53:
      result = sub_1902AC0((__int64)a1, (unsigned int *)a2);
      break;
    case 0x54:
      result = sub_18BB750((__int64)a2);
      break;
    case 0x55:
      result = sub_19573F0(a1, a2, a3, a4);
      break;
    case 0x56:
      result = sub_18BB760((__int64)a2);
      break;
    case 0x57:
      result = sub_18BB770((__int64)a2);
      break;
    case 0x58:
      sub_2E9A94();
    case 0x59:
      result = sub_1957AD0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x5A:
      result = sub_1957B30(a1, (__int64)a2, a3, a4);
      break;
    case 0x5B:
      sub_2E9A94();
    case 0x5C:
      result = sub_18BB780((__int64)a2);
      break;
    case 0x5D:
      result = sub_1902AF0((__int64)a1, (unsigned int *)a2);
      break;
    case 0x5E:
      result = sub_1957BB0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x5F:
      result = sub_18BB790((__int64)a2);
      break;
    case 0x60:
      result = sub_1957CF0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x61:
      result = sub_1957D50(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x62:
      result = sub_1957F10(a1, (__int64)a2, a3, a4);
      break;
    case 0x63:
      result = sub_19585E0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x65:
      result = sub_18BB7A0((__int64)a2);
      break;
    case 0x66:
      result = sub_1958C50((__int64)a1, a2->m128i_i32, *(double *)a3.m128_u64, a4);
      break;
    case 0x67:
      sub_2E9A94();
    case 0x68:
      sub_2E9A94();
    case 0x6B:
      result = sub_18BB7B0((__int64)a2);
      break;
    case 0x6C:
      result = sub_18BB7C0((__int64)a2);
      break;
    case 0x6D:
      result = sub_1958DC0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x6E:
      result = sub_1958E20(a1, a2, a3, a4);
      break;
    case 0x6F:
      result = sub_1958F70(a1, a2, a3, a4);
      break;
    case 0x70:
      result = sub_19590C0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x71:
      result = sub_18BB7D0((__int64)a2);
      break;
    case 0x73:
      result = sub_18BB7E0((__int64)a2);
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
