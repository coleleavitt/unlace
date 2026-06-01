unsigned __int64 __fastcall sub_1E2BF10(
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
      result = sub_1DFE0F0(a2);
      break;
    case 1:
      result = sub_1DFE100(a2);
      break;
    case 2:
      result = sub_1DFE110(a2);
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
      result = sub_1E16860(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1E169E0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1E16A40(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1E16BB0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1E16D80(a1, (unsigned __int16 **)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1DFDE60((__int64)a1, a2);
      break;
    case 0xB:
      JUMPOUT(0x2EAE1C);
    case 0xC:
      result = (unsigned __int64)sub_1DFDE90((__int64)a1, a2);
      break;
    case 0xE:
      result = sub_1DFE120(a2);
      break;
    case 0xF:
      result = sub_1E16DE0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1DFE130(a2);
      break;
    case 0x11:
      result = sub_1DFE140(a2);
      break;
    case 0x12:
      result = sub_1E16E40(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1E16F80(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1DFDEC0((__int64)a1, a2);
      break;
    case 0x15:
      result = sub_1DFDEF0((__int64)a1, a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1E170C0(a1, a2, a6, a7);
      break;
    case 0x17:
      result = sub_1E17260(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1E172C0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1E17320(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1E17380(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1E173F0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1E17460(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      JUMPOUT(0x2EAE12);
    case 0x20:
      result = sub_1E175D0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1DFE150(a2);
      break;
    case 0x22:
      result = sub_1E17710(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1E17770(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1E177D0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1E17910(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1E2B800((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1DFDF30((__int64)a1, (int *)a2);
      break;
    case 0x28:
      result = sub_1E17A50(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1E17AC0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1E17C10(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1E17C70(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1E17CD0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1E20340(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1E17D40(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1E17E80(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1E18000(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1E18150(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1E182B0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1E2AFA0((__int64)a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1DFE160(a2);
      break;
    case 0x3B:
      result = sub_1E18440(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x3C:
      result = sub_1DFE170(a2);
      break;
    case 0x3D:
      result = sub_1DFE180(a2);
      break;
    case 0x3E:
      result = sub_1DFE190(a2);
      break;
    case 0x3F:
      result = sub_1DFE1A0(a2);
      break;
    case 0x40:
      result = sub_1DFE1B0(a2);
      break;
    case 0x41:
      result = sub_1DFE1C0(a2);
      break;
    case 0x42:
      result = sub_1E18490(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1E184F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1E18630(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1E18690(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1E18700(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1E18840(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1DFEB60((__int64)a1, a2);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1DFDF60((__int64)a1, (int *)a2);
      break;
    case 0x4B:
      result = sub_1E188B0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1DFDF80((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1E18910(a1, a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1E18970(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1E189E0(a1, a2, a6, a7, a3, a4);
      break;
    case 0x51:
      result = sub_1E18BD0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1E18C30(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1DFDFC0((__int64)a1, a2);
      break;
    case 0x54:
      result = sub_1DFE1D0(a2);
      break;
    case 0x55:
      result = sub_1E20A10(a1, (const __m128i *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x56:
      result = sub_1DFE1E0(a2);
      break;
    case 0x57:
      result = sub_1DFE1F0(a2);
      break;
    case 0x58:
      JUMPOUT(0x2EAE17);
    case 0x59:
      result = sub_1E18D70(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1E18DD0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      JUMPOUT(0x2EAE2B);
    case 0x5C:
      result = sub_1DFE200(a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1DFDFF0((__int64)a1, a2);
      break;
    case 0x5E:
      result = sub_1E18E50(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1DFE210(a2);
      break;
    case 0x60:
      result = sub_1E18F90(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1E18FF0(a1, a2, a6, a7, a3, a4);
      break;
    case 0x62:
      result = sub_1E210F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1E191E0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1DFE220(a2);
      break;
    case 0x66:
      result = sub_1E2A890((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x67:
      JUMPOUT(0x2EAE26);
    case 0x68:
      JUMPOUT(0x2EAE21);
    case 0x6B:
      result = sub_1DFE230(a2);
      break;
    case 0x6C:
      result = sub_1DFE240(a2);
      break;
    case 0x6D:
      result = sub_1E19320(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1E19380(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1E194D0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1E19620(a1, a2, a6, a7);
      break;
    case 0x71:
      result = sub_1DFE250(a2);
      break;
    case 0x73:
      result = sub_1DFE260(a2);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
