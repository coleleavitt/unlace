unsigned __int64 __fastcall sub_1C96DA0(
        __int64 *a1,
        __m128i *a2,
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
  switch ( a2->m128i_i32[2] )
  {
    case 0:
      result = sub_1C73160((__int64)a2);
      break;
    case 1:
      result = sub_1C73170((__int64)a2);
      break;
    case 2:
      result = sub_1C73180((__int64)a2);
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
      result = sub_1C824E0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1C82660(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1C826C0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1C82830(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1C82A00(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1C72F30((__int64)a1, (__int64)a2);
      break;
    case 0xB:
      JUMPOUT(0x2EAA66);
    case 0xC:
      result = (unsigned __int64)sub_1C72F60((__int64)a1, (__int64)a2);
      break;
    case 0xE:
      result = sub_1C73190((__int64)a2);
      break;
    case 0xF:
      result = sub_1C82A60(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1C731A0((__int64)a2);
      break;
    case 0x11:
      result = sub_1C731B0((__int64)a2);
      break;
    case 0x12:
      result = sub_1C82AC0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1C82C00(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1C72F90((__int64)a1, (__int64)a2);
      break;
    case 0x15:
      result = sub_1C72FC0((__int64)a1, (__int64)a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1C82D40(a1, (__int64)a2, a6, a7);
      break;
    case 0x17:
      result = sub_1C82EE0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1C82F40(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1C82FA0(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1C83000(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1C83070(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1C830E0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      JUMPOUT(0x2EAA5C);
    case 0x20:
      result = sub_1C83250(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1C731C0((__int64)a2);
      break;
    case 0x22:
      result = sub_1C83390(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1C833F0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1C83450(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1C83590(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1C96690((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1C73000((__int64)a1, a2->m128i_i32);
      break;
    case 0x28:
      result = sub_1C836D0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1C83740(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1C83890(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1C838F0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1C83950(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1C8B920(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1C839C0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1C83B00(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1C83C80(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1C83DD0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1C83F30(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1C95E30((__int64)a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1C731D0((__int64)a2);
      break;
    case 0x3B:
      result = sub_1C840C0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x3C:
      result = sub_1C731E0((__int64)a2);
      break;
    case 0x3D:
      result = sub_1C731F0((__int64)a2);
      break;
    case 0x3E:
      result = sub_1C73200((__int64)a2);
      break;
    case 0x3F:
      result = sub_1C73210((__int64)a2);
      break;
    case 0x40:
      result = sub_1C73220((__int64)a2);
      break;
    case 0x41:
      result = sub_1C73230((__int64)a2);
      break;
    case 0x42:
      result = sub_1C84110(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1C84170(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1C842B0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1C84310(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1C84380(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1C844C0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1C73740((__int64)a1, (__int64)a2);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1C73020((__int64)a1, a2->m128i_i32);
      break;
    case 0x4B:
      result = sub_1C84530(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1C73040((__int64)a1, (__int64)a2);
      break;
    case 0x4D:
      result = sub_1C84590(a1, (__int64)a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1C845F0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1C84650(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x51:
      result = sub_1C84810(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1C84870(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1C73080((__int64)a1, (__int64)a2);
      break;
    case 0x54:
      result = sub_1C73240((__int64)a2);
      break;
    case 0x55:
      result = sub_1C8BFF0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x56:
      result = sub_1C73250((__int64)a2);
      break;
    case 0x57:
      result = sub_1C73260((__int64)a2);
      break;
    case 0x58:
      JUMPOUT(0x2EAA61);
    case 0x59:
      result = sub_1C849B0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1C84A10(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      JUMPOUT(0x2EAA75);
    case 0x5C:
      result = sub_1C73270((__int64)a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1C730B0((__int64)a1, (__int64)a2);
      break;
    case 0x5E:
      result = sub_1C84A90(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1C73280((__int64)a2);
      break;
    case 0x60:
      result = sub_1C84BD0(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1C84C30(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x62:
      result = sub_1C8C6D0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1C84DF0(a1, (__int64)a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1C73290((__int64)a2);
      break;
    case 0x66:
      result = sub_1C95720((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x67:
      JUMPOUT(0x2EAA70);
    case 0x68:
      JUMPOUT(0x2EAA6B);
    case 0x6B:
      result = sub_1C732A0((__int64)a2);
      break;
    case 0x6C:
      result = sub_1C732B0((__int64)a2);
      break;
    case 0x6D:
      result = sub_1C84F30(a1, (__int64)a2, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1C84F90(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1C850E0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1C85230(a1, (__int64)a2, a6, a7);
      break;
    case 0x71:
      result = sub_1C732C0((__int64)a2);
      break;
    case 0x73:
      result = sub_1C732D0((__int64)a2);
      break;
    default:
      result = (unsigned __int64)a2;
      break;
  }
  return result;
}
