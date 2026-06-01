__int64 __fastcall sub_177AD70(__int64 *a1, __m128i *a2, double a3)
{
  __int64 result; // rax

  if ( !a2 )
    return 0;
  switch ( a2->m128i_i32[2] )
  {
    case 0:
      result = sub_1740EA0((__int64)a2);
      break;
    case 1:
      result = sub_1740EB0((__int64)a2);
      break;
    case 2:
      result = sub_1740EC0((__int64)a2);
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
      result = sub_1761390(a1, a2);
      break;
    case 5:
      result = sub_1761510(a1, (unsigned __int16 **)a2);
      break;
    case 6:
      result = sub_1761570(a1, a2);
      break;
    case 7:
      result = sub_17616E0(a1, (__int64)a2);
      break;
    case 8:
      result = sub_17618B0(a1, (unsigned __int16 **)a2);
      break;
    case 0xA:
      result = sub_1740980((__int64)a1, (unsigned int *)a2);
      break;
    case 0xB:
      sub_2E94E0();
    case 0xC:
      result = sub_17409B0((__int64)a1, (unsigned int *)a2);
      break;
    case 0xE:
      result = sub_1740ED0((__int64)a2);
      break;
    case 0xF:
      result = sub_1761910(a1, (unsigned __int16 **)a2);
      break;
    case 0x10:
      result = sub_1740EE0((__int64)a2);
      break;
    case 0x11:
      result = sub_1740EF0((__int64)a2);
      break;
    case 0x12:
      result = sub_1761970(a1, (unsigned int *)a2);
      break;
    case 0x13:
      result = sub_1761AB0(a1, (unsigned int *)a2);
      break;
    case 0x14:
      result = sub_17409E0((__int64)a1, (unsigned int *)a2);
      break;
    case 0x15:
      result = sub_1740A10((__int64)a1, a2);
      break;
    case 0x16:
      result = sub_1761BF0(a1, (__int64)a2);
      break;
    case 0x17:
      result = sub_1761D90(a1, (unsigned __int16 **)a2);
      break;
    case 0x18:
      result = sub_1761DF0(a1, (unsigned int *)a2);
      break;
    case 0x19:
      result = sub_1761E50(a1, (unsigned int *)a2);
      break;
    case 0x1A:
      result = sub_1761EB0(a1, (__int64)a2);
      break;
    case 0x1C:
      result = sub_1761F20(a1, (__int64)a2);
      break;
    case 0x1D:
      result = sub_1761F90(a1, a2);
      break;
    case 0x1E:
      sub_2E94E0();
    case 0x20:
      result = sub_1762100(a1, (unsigned int *)a2);
      break;
    case 0x21:
      result = sub_1740F00((__int64)a2);
      break;
    case 0x22:
      result = sub_1762240(a1, (unsigned __int16 **)a2);
      break;
    case 0x23:
      result = sub_17622A0(a1, (unsigned __int16 **)a2);
      break;
    case 0x24:
      result = sub_1762300(a1, (unsigned int *)a2);
      break;
    case 0x25:
      result = sub_1762440(a1, (unsigned int *)a2);
      break;
    case 0x26:
      result = sub_177A660((__int64)a1, a2->m128i_i32);
      break;
    case 0x27:
      result = sub_1740A50((__int64)a1, (unsigned int *)a2);
      break;
    case 0x28:
      result = sub_1762580(a1, (__int64)a2);
      break;
    case 0x29:
      result = sub_17625F0(a1, a2);
      break;
    case 0x2A:
      result = sub_1762740(a1, (unsigned __int16 **)a2);
      break;
    case 0x2B:
      result = sub_17627A0(a1, (unsigned __int16 **)a2);
      break;
    case 0x2C:
      result = sub_1762800(a1, (__int64)a2);
      break;
    case 0x2D:
      result = sub_176B150(a1, (__int64)a2);
      break;
    case 0x2F:
      result = sub_1762870(a1, (unsigned int *)a2);
      break;
    case 0x31:
      result = sub_17629B0(a1, (__int64)a2);
      break;
    case 0x33:
      result = sub_1762B30(a1, a2);
      break;
    case 0x34:
      result = sub_1762C80(a1, a2);
      break;
    case 0x35:
      result = sub_1762DE0(a1, a2);
      break;
    case 0x37:
      result = sub_1779E00((__int64)a1, a2->m128i_i32);
      break;
    case 0x3A:
      result = sub_1740F10((__int64)a2);
      break;
    case 0x3B:
      result = sub_1762F70(a1, (unsigned int *)a2);
      break;
    case 0x3C:
      result = sub_1740F20((__int64)a2);
      break;
    case 0x3D:
      result = sub_1740F30((__int64)a2);
      break;
    case 0x3E:
      result = sub_1740F40((__int64)a2);
      break;
    case 0x3F:
      result = sub_1740F50((__int64)a2);
      break;
    case 0x40:
      result = sub_1740F60((__int64)a2);
      break;
    case 0x41:
      result = sub_1740F70((__int64)a2);
      break;
    case 0x42:
      result = sub_1762FC0(a1, (unsigned __int16 **)a2);
      break;
    case 0x43:
      result = sub_1763020(a1, (unsigned int *)a2);
      break;
    case 0x45:
      result = sub_1763160(a1, (unsigned __int16 **)a2);
      break;
    case 0x46:
      result = sub_17631C0(a1, (__int64)a2);
      break;
    case 0x47:
      result = sub_1763230(a1, (unsigned int *)a2);
      break;
    case 0x48:
      result = sub_1763370(a1, (__int64)a2);
      break;
    case 0x49:
      result = sub_17414C0((__int64)a1, (unsigned int *)a2);
      break;
    case 0x4A:
      result = sub_1740A80((__int64)a1, (unsigned int *)a2);
      break;
    case 0x4B:
      result = sub_17633E0(a1, (unsigned __int16 **)a2);
      break;
    case 0x4C:
      result = sub_1740AA0((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1763440(a1, (unsigned int *)a2);
      break;
    case 0x4F:
      result = sub_17634A0(a1, (unsigned __int16 **)a2);
      break;
    case 0x50:
      result = sub_1763510(a1, (unsigned int *)a2);
      break;
    case 0x51:
      result = sub_1763700(a1, (unsigned __int16 **)a2);
      break;
    case 0x52:
      result = sub_1763760(a1, (unsigned int *)a2);
      break;
    case 0x53:
      result = sub_1740AE0((__int64)a1, (unsigned int *)a2);
      break;
    case 0x54:
      result = sub_1740F80((__int64)a2);
      break;
    case 0x55:
      result = sub_176B820(a1, a2);
      break;
    case 0x56:
      result = sub_1740F90((__int64)a2);
      break;
    case 0x57:
      result = sub_1740FA0((__int64)a2);
      break;
    case 0x58:
      sub_2E94E0();
    case 0x59:
      result = sub_17638A0(a1, (unsigned __int16 **)a2);
      break;
    case 0x5A:
      result = sub_1763900(a1, (__int64)a2);
      break;
    case 0x5B:
      sub_2E94E0();
    case 0x5C:
      result = sub_1740FB0((__int64)a2);
      break;
    case 0x5D:
      result = sub_1740B10((__int64)a1, (unsigned int *)a2);
      break;
    case 0x5E:
      result = sub_1763980(a1, (unsigned int *)a2);
      break;
    case 0x5F:
      result = sub_1740FC0((__int64)a2);
      break;
    case 0x60:
      result = sub_1763AC0(a1, (unsigned __int16 **)a2);
      break;
    case 0x61:
      result = sub_1763B20(a1, (unsigned int *)a2);
      break;
    case 0x62:
      result = sub_176BF00(a1, (__int64)a2);
      break;
    case 0x63:
      result = sub_1763D10(a1, (unsigned int *)a2);
      break;
    case 0x65:
      result = sub_1740FD0((__int64)a2);
      break;
    case 0x66:
      result = sub_17796F0((__int64)a1, a2->m128i_i32);
      break;
    case 0x67:
      sub_2E94E0();
    case 0x68:
      sub_2E94E0();
    case 0x6B:
      result = sub_1740FE0((__int64)a2);
      break;
    case 0x6C:
      result = sub_1740FF0((__int64)a2);
      break;
    case 0x6D:
      result = sub_1763E50(a1, (unsigned __int16 **)a2);
      break;
    case 0x6E:
      result = sub_1763EB0(a1, a2);
      break;
    case 0x6F:
      result = sub_1764000(a1, a2);
      break;
    case 0x70:
      result = sub_1764150(a1, (unsigned int *)a2, a3);
      break;
    case 0x71:
      result = sub_1741000((__int64)a2);
      break;
    case 0x73:
      result = sub_1741010((__int64)a2);
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
