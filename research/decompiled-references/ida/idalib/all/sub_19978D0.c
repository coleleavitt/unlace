__int64 __fastcall sub_19978D0(__int64 *a1, __m128i *a2, double a3, __m128 a4)
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
      result = sub_197F9B0(a1, a2, a3, a4);
      break;
    case 5:
      result = sub_197FB30(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 6:
      result = sub_197FB90(a1, a2, a3, a4);
      break;
    case 7:
      result = sub_197FD00(a1, (__int64)a2, a3, a4);
      break;
    case 8:
      result = sub_197FED0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0xA:
      result = sub_18BB2B0((__int64)a1, (unsigned int *)a2);
      break;
    case 0xB:
      sub_2E9A94();
    case 0xC:
      result = sub_18BB310((__int64)a1, (unsigned int *)a2);
      break;
    case 0xE:
      result = sub_18BB6A0((__int64)a2);
      break;
    case 0xF:
      result = sub_197FF30(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x10:
      result = sub_18BB6B0((__int64)a2);
      break;
    case 0x11:
      result = sub_18BB6C0((__int64)a2);
      break;
    case 0x12:
      result = sub_197FF90(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x13:
      result = sub_19800D0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x14:
      result = sub_18BB370((__int64)a1, (unsigned int *)a2);
      break;
    case 0x15:
      result = sub_18BB3E0((__int64)a1, a2);
      break;
    case 0x16:
      result = sub_1980210(a1, (__int64)a2, a3, a4);
      break;
    case 0x17:
      result = sub_19803B0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x18:
      result = sub_1980410(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x19:
      result = sub_1980470(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x1A:
      result = sub_19804D0(a1, (__int64)a2, a3, a4);
      break;
    case 0x1C:
      result = sub_1980540(a1, (__int64)a2, a3, a4);
      break;
    case 0x1D:
      result = sub_19805B0(a1, a2, a3, a4);
      break;
    case 0x1E:
      sub_2E9A94();
    case 0x20:
      result = sub_1980720(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x21:
      result = sub_18BB6D0((__int64)a2);
      break;
    case 0x22:
      result = sub_1980860(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x23:
      result = sub_19808C0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x24:
      result = sub_1980920(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x25:
      result = sub_1980A60(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x26:
      result = sub_19971C0((__int64)a1, a2->m128i_i32, a3, a4);
      break;
    case 0x27:
      result = sub_18BBBB0((__int64)a2);
      break;
    case 0x28:
      result = sub_1980BA0(a1, (__int64)a2, a3, a4);
      break;
    case 0x29:
      result = sub_1980C10(a1, a2, a3, a4);
      break;
    case 0x2A:
      result = sub_1980D60(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x2B:
      result = sub_1980DC0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x2C:
      result = sub_1980E20(a1, (__int64)a2, a3, a4);
      break;
    case 0x2D:
      result = sub_1989380(a1, (__int64)a2, a3, a4);
      break;
    case 0x2F:
      result = sub_1980E90(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x31:
      result = sub_1980FD0(a1, (__int64)a2, a3, a4);
      break;
    case 0x33:
      result = sub_1981150(a1, a2, a3, a4);
      break;
    case 0x34:
      result = sub_19812A0(a1, a2, a3, a4);
      break;
    case 0x35:
      result = sub_1981400(a1, a2, a3, a4);
      break;
    case 0x37:
      result = sub_1996960((__int64)a1, a2->m128i_i32, a3, a4);
      break;
    case 0x3A:
      result = sub_18BB6E0((__int64)a2);
      break;
    case 0x3B:
      result = sub_1981590(a1, (unsigned int *)a2, a3, a4);
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
      result = sub_19815E0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x43:
      result = sub_1981640(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x45:
      result = sub_1981780(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x46:
      result = sub_19817E0(a1, (__int64)a2, a3, a4);
      break;
    case 0x47:
      result = sub_1981850(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x48:
      result = sub_1981990(a1, (__int64)a2, a3, a4);
      break;
    case 0x49:
      result = sub_18BC690((__int64)a1, (unsigned int *)a2);
      break;
    case 0x4A:
      result = sub_18BB460((__int64)a1, (unsigned int *)a2);
      break;
    case 0x4B:
      result = sub_1981A00(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x4C:
      result = sub_18BB4C0((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1981A60(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x4F:
      result = sub_1981AC0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x50:
      result = sub_1981B30(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x51:
      result = sub_1981D20(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x52:
      result = sub_1981D80(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x53:
      result = sub_18BB530((__int64)a1, (unsigned int *)a2);
      break;
    case 0x54:
      result = sub_18BB750((__int64)a2);
      break;
    case 0x55:
      result = sub_1989A50(a1, a2, a3, a4);
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
      result = sub_1981EC0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x5A:
      result = sub_1981F20(a1, (__int64)a2, a3, a4);
      break;
    case 0x5B:
      sub_2E9A94();
    case 0x5C:
      result = sub_18BB780((__int64)a2);
      break;
    case 0x5D:
      result = sub_18BB590((__int64)a1, (unsigned int *)a2);
      break;
    case 0x5E:
      result = sub_1981FA0(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x5F:
      result = sub_18BB790((__int64)a2);
      break;
    case 0x60:
      result = sub_19820E0(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x61:
      result = sub_1982140(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x62:
      result = sub_198A130(a1, (__int64)a2, a3, a4);
      break;
    case 0x63:
      result = sub_1982330(a1, (unsigned int *)a2, a3, a4);
      break;
    case 0x65:
      result = sub_18BB7A0((__int64)a2);
      break;
    case 0x66:
      result = sub_1996250((__int64)a1, a2->m128i_i32, a3, a4);
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
      result = sub_1982470(a1, (unsigned __int16 **)a2, a3, a4);
      break;
    case 0x6E:
      result = sub_19824D0(a1, a2, a3, a4);
      break;
    case 0x6F:
      result = sub_1982620(a1, a2, a3, a4);
      break;
    case 0x70:
      result = sub_1982770(a1, (unsigned int *)a2, a3, a4);
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
