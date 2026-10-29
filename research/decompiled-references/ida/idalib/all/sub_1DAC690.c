unsigned __int64 __fastcall sub_1DAC690(
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
      result = sub_1D819B0(a2);
      break;
    case 1:
      result = sub_1D819C0(a2);
      break;
    case 2:
      result = sub_1D819D0(a2);
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
      result = sub_1D906F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1D90870(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1D908D0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1D90A40(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1D90C10(a1, (unsigned __int16 **)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1D81450((__int64)a1, a2);
      break;
    case 0xB:
      sub_2EAC9A();
    case 0xC:
      result = (unsigned __int64)sub_1D81480((__int64)a1, a2);
      break;
    case 0xE:
      result = sub_1D819E0(a2);
      break;
    case 0xF:
      result = sub_1D90C70(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1D819F0(a2);
      break;
    case 0x11:
      result = sub_1D81A00(a2);
      break;
    case 0x12:
      result = sub_1D90CD0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1D90E10(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1D814B0((__int64)a1, a2);
      break;
    case 0x15:
      result = sub_1D814E0((__int64)a1, a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1D90F50(a1, a2, a6, a7);
      break;
    case 0x17:
      result = sub_1D910F0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1D91150(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1D911B0(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1D91210(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1D91280(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1D912F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      sub_2EAC9A();
    case 0x20:
      result = sub_1D91460(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1D81A10(a2);
      break;
    case 0x22:
      result = sub_1D915A0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1D91600(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1D91660(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1D917A0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1DABF80((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1D81520((__int64)a1, (int *)a2);
      break;
    case 0x28:
      result = sub_1D918E0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1D91950(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1D91AA0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1D91B00(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1D91B60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1D9B940(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1D91BD0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1D91D10(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1D91E90(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1D91FE0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1D92140(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1DAB720((__int64)a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1D81A20(a2);
      break;
    case 0x3B:
      result = sub_1D922D0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x3C:
      result = sub_1D81A30(a2);
      break;
    case 0x3D:
      result = sub_1D81A40(a2);
      break;
    case 0x3E:
      result = sub_1D81A50(a2);
      break;
    case 0x3F:
      result = sub_1D81A60(a2);
      break;
    case 0x40:
      result = sub_1D81A70(a2);
      break;
    case 0x41:
      result = sub_1D81A80(a2);
      break;
    case 0x42:
      result = sub_1D92320(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1D92380(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1D924C0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1D92520(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1D92590(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1D926D0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1D82090((__int64)a1, a2);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1D81550((__int64)a1, (int *)a2);
      break;
    case 0x4B:
      result = sub_1D92740(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1D81570((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1D927A0(a1, a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1D92800(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1D92870(a1, a2, a6, a7, a3, a4);
      break;
    case 0x51:
      result = sub_1D92A60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1D92AC0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1D815B0((__int64)a1, a2);
      break;
    case 0x54:
      result = sub_1D81A90(a2);
      break;
    case 0x55:
      result = sub_1D9C010(a1, (const __m128i *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x56:
      result = sub_1D81AA0(a2);
      break;
    case 0x57:
      result = sub_1D81AB0(a2);
      break;
    case 0x58:
      sub_2EAC9A();
    case 0x59:
      result = sub_1D92C00(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1D92C60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      sub_2EAC9A();
    case 0x5C:
      result = sub_1D81AC0(a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1D815E0((__int64)a1, a2);
      break;
    case 0x5E:
      result = sub_1D92CE0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1D81AD0(a2);
      break;
    case 0x60:
      result = sub_1D92E20(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1D92E80(a1, a2, a6, a7, a3, a4);
      break;
    case 0x62:
      result = sub_1D9C6F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1D93070(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1D81AE0(a2);
      break;
    case 0x66:
      result = sub_1DAB010((__int64)a1, (unsigned int *)a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x67:
      sub_2EAC9A();
    case 0x68:
      sub_2EAC9A();
    case 0x6B:
      result = sub_1D81AF0(a2);
      break;
    case 0x6C:
      result = sub_1D81B00(a2);
      break;
    case 0x6D:
      result = sub_1D931B0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1D93210(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1D93360(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1D934B0(a1, a2, a6, a7);
      break;
    case 0x71:
      result = sub_1D81B10(a2);
      break;
    case 0x73:
      result = sub_1D81B20(a2);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
