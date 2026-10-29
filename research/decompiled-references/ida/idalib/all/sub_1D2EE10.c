unsigned __int64 __fastcall sub_1D2EE10(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
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
      result = sub_1D12B70(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 5:
      result = sub_1D12CF0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 6:
      result = sub_1D12D50(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 7:
      result = sub_1D12EC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 8:
      result = sub_1D13090(a1, (unsigned __int16 **)a2, a3, a4, a5, a6, a7);
      break;
    case 0xA:
      result = (unsigned __int64)sub_1CAF020((__int64)a1, a2);
      break;
    case 0xB:
      sub_2EAAE2();
    case 0xC:
      result = (unsigned __int64)sub_1CAF080((__int64)a1, a2);
      break;
    case 0xE:
      result = sub_1CAF900(a2);
      break;
    case 0xF:
      result = sub_1D130F0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x10:
      result = sub_1CAF910(a2);
      break;
    case 0x11:
      result = sub_1CAF920(a2);
      break;
    case 0x12:
      result = sub_1D13150(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x13:
      result = sub_1D13290(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x14:
      result = (unsigned __int64)sub_1CAF0E0((__int64)a1, a2);
      break;
    case 0x15:
      result = sub_1CAF140((__int64)a1, a2);
      break;
    case 0x16:
      result = (unsigned __int64)sub_1D133D0(a1, a2, a6, a7);
      break;
    case 0x17:
      result = sub_1D13570(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x18:
      result = sub_1D135D0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x19:
      result = sub_1D13630(a1, (unsigned int *)a2, a3, a4, a5, a6, a7);
      break;
    case 0x1A:
      result = sub_1D13690(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1C:
      result = sub_1D13700(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x1D:
      result = sub_1D13770(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x1E:
      sub_2EAAE2();
    case 0x20:
      result = sub_1D138E0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x21:
      result = sub_1CAF930(a2);
      break;
    case 0x22:
      result = sub_1D13A20(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x23:
      result = sub_1D13A80(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x24:
      result = sub_1D13AE0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x25:
      result = sub_1D13C20(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x26:
      result = sub_1D2E6C0(a1, a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
      break;
    case 0x27:
      result = (unsigned __int64)sub_1CAF1C0((__int64)a1, (int *)a2);
      break;
    case 0x28:
      result = sub_1D13D60(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x29:
      result = sub_1D13DD0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x2A:
      result = sub_1D13F20(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2B:
      result = sub_1D13F80(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2C:
      result = sub_1D13FE0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x2D:
      result = sub_1D206D0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x2F:
      result = sub_1D14050(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x31:
      result = sub_1D14190(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x33:
      result = sub_1D14310(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x34:
      result = sub_1D14460(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x35:
      result = sub_1D145C0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x37:
      result = sub_1D2DF80(a1, (unsigned int *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x3A:
      result = sub_1CAF940(a2);
      break;
    case 0x3B:
      result = sub_1D14750(a1, a2, a3, a4, a5, a6, a7);
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
      result = sub_1D147A0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x43:
      result = sub_1D14800(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x45:
      result = sub_1D14940(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x46:
      result = sub_1D149A0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x47:
      result = sub_1D14A10(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x48:
      result = sub_1D14B50(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x49:
      result = sub_1CB05D0((__int64)a1, a2);
      break;
    case 0x4A:
      result = (unsigned __int64)sub_1CAF220((__int64)a1, (int *)a2);
      break;
    case 0x4B:
      result = sub_1D14BC0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x4C:
      result = (unsigned __int64)sub_1CAF260((__int64)a1, a2);
      break;
    case 0x4D:
      result = sub_1D14C20(a1, a2, a3, a4, a6, a7);
      break;
    case 0x4F:
      result = sub_1D14C80(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x50:
      result = sub_1D14CF0(a1, a2, a6, a7, a3, a4);
      break;
    case 0x51:
      result = sub_1D14EE0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x52:
      result = sub_1D14F40(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x53:
      result = (unsigned __int64)sub_1CAF2E0((__int64)a1, a2);
      break;
    case 0x54:
      result = sub_1CAF9B0(a2);
      break;
    case 0x55:
      result = sub_1D20C30(a1, (const __m128i *)a2, a6, a7, a3, a4, a5);
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
      result = sub_1D15080(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5A:
      result = sub_1D150E0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x5B:
      sub_2EAAE2();
    case 0x5C:
      result = sub_1CAF9E0(a2);
      break;
    case 0x5D:
      result = (unsigned __int64)sub_1CAF340((__int64)a1, a2);
      break;
    case 0x5E:
      result = sub_1D15160(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x5F:
      result = sub_1CAF9F0(a2);
      break;
    case 0x60:
      result = sub_1D152A0(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x61:
      result = sub_1D15300(a1, a2, a6, a7, a3, a4);
      break;
    case 0x62:
      result = sub_1D211A0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x63:
      result = sub_1D154F0(a1, a2, a6, a7, a3, a4, a5);
      break;
    case 0x65:
      result = sub_1CAFA00(a2);
      break;
    case 0x66:
      result = sub_1D2D830(a1, a2, *(double *)a6.m128_u64, a7, a8, a3, a4, a5);
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
      result = sub_1D15630(a1, a2, a3, a4, a5, a6, a7);
      break;
    case 0x6E:
      result = sub_1D15690(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x6F:
      result = (unsigned __int64)sub_1D157E0(a1, (_DWORD *)a2, a6, a7, a3, a4, a5);
      break;
    case 0x70:
      result = (unsigned __int64)sub_1D15930(a1, a2, a6, a7);
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
