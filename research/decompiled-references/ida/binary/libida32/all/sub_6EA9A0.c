__int64 __fastcall sub_6EA9A0(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  unsigned __int64 v12; // rbx
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rbx
  _WORD *v25; // rsi
  _QWORD v26[11]; // [rsp+0h] [rbp-58h] BYREF

  v26[5] = __readfsqword(0x28u);
  v12 = a2;
  switch ( *(_WORD *)a2 & 0x1FF )
  {
    case 1:
      return sub_6F71A0(a1, a2, a3);
    case 2:
      return sub_6F70A0(a1, a2, a3);
    case 3:
      return sub_6FC400(a1, a2, a3);
    case 4:
      return sub_6F6FA0(a1, a2, a3);
    case 5:
      return sub_6FC2C0(a1, a2, a3);
    case 6:
      return sub_6FC140(a1, a2, a3);
    case 7:
      return sub_6F6EA0(a1, a2, a3);
    case 8:
      return sub_6F6DA0(a1, a2, a3);
    case 9:
      return sub_6F6CA0(a1, a2, a3);
    case 0xA:
      return sub_6F6BA0(a1, a2, a3);
    case 0xB:
      return sub_6F6AA0(a1, a2, a3);
    case 0xC:
      return sub_6F69A0(a1, a2, a3);
    case 0xD:
      return sub_6F68A0(a1, a2, a3);
    case 0xE:
      return sub_6FC000(a1, a2, a3);
    case 0xF:
      return sub_6F9A80(a1, a2, a3);
    case 0x10:
      return sub_6F67A0(a1, a2, a3);
    case 0x11:
      if ( !(unsigned __int8)sub_6ED600(a1, *(_QWORD *)(a2 + 16), a3) )
        return 0;
      v22 = (_QWORD *)(a2 + 24);
      v23 = 8LL * *(unsigned __int16 *)(a2 + 4);
      v24 = a2 + v23 + 16;
      if ( v23 == 8 )
        return 1;
      while ( 1 )
      {
        v25 = (_WORD *)*v22;
        if ( (*(_WORD *)*v22 & 0x1FF) == 0x1A )
        {
          if ( v25 )
            v25 = *((_WORD **)v25 + 2);
        }
        if ( !(unsigned __int8)sub_6ED600(a1, v25, a3) )
          break;
        if ( (_QWORD *)v24 == ++v22 )
          return 1;
      }
      return 0;
    case 0x12:
      return sub_6F66A0(a1, a2, a3);
    case 0x13:
      return sub_6F65A0(a1, a2, a3);
    case 0x14:
      return sub_6F64A0(a1, a2, a3);
    case 0x15:
      return sub_6F63A0(a1, a2, a3);
    case 0x16:
      return sub_6F62A0(a1, a2, a3);
    case 0x17:
      return sub_6F86C0(a1, a2, a3);
    case 0x18:
      return sub_6F84F0(a1, a2, a3);
    case 0x19:
      return sub_6F61A0(a1, a2, a3);
    case 0x1A:
      return sub_6F60A0(a1, a2, a3);
    case 0x1B:
      return sub_6FBEC0(a1, a2, a3);
    case 0x1C:
      return sub_6F5FA0(a1, a2, a3);
    case 0x1D:
      return sub_6F5EA0(a1, a2, a3);
    case 0x1E:
      return sub_6F5DA0(a1, a2, a3);
    case 0x1F:
      return sub_6F5CA0(a1, a2, a3);
    case 0x20:
      return sub_6FBD50(a1, a2, a3);
    case 0x21:
      return sub_6FBC10(a1, a2, a3);
    case 0x22:
      return sub_6F5BA0(a1, a2, a3);
    case 0x23:
      return sub_6F5AA0(a1, a2, a3);
    case 0x24:
      return sub_6F59A0(a1, a2, a3);
    case 0x25:
      return sub_6FBAD0(a1, a2, a3);
    case 0x26:
      return sub_6F58A0(a1, a2, a3);
    case 0x27:
      return sub_6F57A0(a1, a2, a3);
    case 0x28:
      return sub_6F56A0(a1, a2, a3);
    case 0x29:
      return sub_6F55A0(a1, a2, a3);
    case 0x2A:
      return sub_6F54A0(a1, a2, a3);
    case 0x2B:
      return sub_6F53A0(a1, a2, a3);
    case 0x2C:
      return sub_6F52A0(a1, a2, a3);
    case 0x2D:
      return sub_6F51A0(a1, a2, a3);
    case 0x2E:
      return sub_6F9850(a1, a2, a3);
    case 0x2F:
      return sub_6F50A0(a1, a2, a3);
    case 0x30:
      return sub_6FD280(a1, a2, a3);
    case 0x31:
      return sub_6F4FA0(a1, a2, a3);
    case 0x32:
      return sub_6F7E60(a1, a2, a3);
    case 0x33:
      return sub_6FB5E0(a1, a2, a3);
    case 0x34:
      return sub_6F4DF0(a1, a2, a3);
    case 0x35:
      v21 = *(_QWORD *)(a2 + 48);
      if ( (v21 & 4) == 0 )
        return sub_6F4CE0(a1, v12, a3);
      if ( v21 <= 7 )
        return sub_6F4CE0(a1, a2, a3);
      v12 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      return sub_6F4CE0(a1, v12, a3);
    case 0x36:
      return sub_6F4BE0(a1, a2, a3);
    case 0x37:
      return sub_6F4AE0(a1, a2, a3);
    case 0x38:
      return sub_6F49E0(a1, a2, a3);
    case 0x39:
      return sub_6FB360(a1, a2, a3);
    case 0x3A:
      return sub_6F48E0(a1, a2, a3);
    case 0x3B:
      return sub_6F47E0(a1, a2, a3);
    case 0x3C:
      return sub_6F46E0(a1, a2, a3);
    case 0x3D:
      return sub_6F45E0(a1, a2, a3);
    case 0x3E:
      return sub_6F44E0(a1, a2, a3);
    case 0x3F:
      return sub_6F43E0(a1, a2, a3);
    case 0x40:
      return sub_6F42E0(a1, a2, a3);
    case 0x41:
      return sub_6F41B0(a1, a2, a3);
    case 0x42:
      return sub_6F3EB0(a1, a2, a3);
    case 0x43:
      return sub_6F3DB0(a1, a2, a3);
    case 0x44:
      return sub_6F3CB0(a1, a2, a3);
    case 0x45:
      return sub_6F9690(a1, a2, a3);
    case 0x46:
    case 0x48:
    case 0x49:
      return sub_6ED600(a1, *(_QWORD *)(a2 + 24), a3);
    case 0x47:
      return sub_6F9460(a1, a2, a3);
    case 0x4A:
      return sub_6F3BB0(a1, a2, a3);
    case 0x4B:
      return sub_6F8CE0(a1, a2, a3);
    case 0x4C:
      return sub_6FB220(a1, a2, a3);
    case 0x4D:
      return sub_6F3AB0(a1, a2, a3);
    case 0x4E:
      return sub_6F39B0(a1, a2, a3);
    case 0x4F:
      return sub_6F38B0(a1, a2, a3);
    case 0x50:
      return sub_6FB0E0(a1, a2, a3);
    case 0x51:
      return sub_6FAFA0(a1, a2, a3);
    case 0x52:
      return sub_6FAE60(a1, a2, a3);
    case 0x53:
      return sub_6FAD20(a1, a2, a3);
    case 0x54:
      return sub_6FABE0(a1, a2, a3);
    case 0x55:
      return sub_6FAAA0(a1, a2, a3);
    case 0x56:
      return sub_6FA960(a1, a2, a3);
    case 0x57:
      return sub_6FA820(a1, a2, a3);
    case 0x58:
      return sub_6FA6E0(a1, a2, a3);
    case 0x59:
      return sub_6F37B0(a1, a2, a3);
    case 0x5A:
      return sub_6F36B0(a1, a2, a3);
    case 0x5B:
      return sub_6F35B0(a1, a2, a3);
    case 0x5C:
      return sub_6F34B0(a1, a2, a3);
    case 0x5D:
      return sub_6F33B0(a1, a2, a3);
    case 0x5E:
      return sub_6FA5A0(a1, a2, a3);
    case 0x5F:
      return sub_6FA460(a1, a2, a3);
    case 0x60:
      return sub_6FA320(a1, a2, a3);
    case 0x61:
      return sub_6F32B0(a1, a2, a3);
    case 0x62:
      return sub_6F31B0(a1, a2, a3);
    case 0x63:
      return sub_6F30B0(a1, a2, a3);
    case 0x64:
      return sub_6FA1E0(a1, a2, a3);
    case 0x65:
      sub_C6FDE0(v26);
      return (unsigned __int8)sub_6ED600(a1, v26[1], 0) && (unsigned __int8)sub_6ED600(a1, v26[2], 0);
    case 0x66:
      return sub_6FA060(a1, a2, a3);
    case 0x67:
      return sub_6F2FB0(a1, a2, a3);
    case 0x68:
      return sub_6F2EB0(a1, a2, a3);
    case 0x69:
      return sub_6F2DB0(a1, a2, a3);
    case 0x6A:
      return sub_6F9F20(a1, a2, a3);
    case 0x6B:
      return sub_6F2CB0(a1, a2, a3);
    case 0x6C:
      return sub_6F2BB0(a1, a2, a3);
    case 0x6D:
      return sub_6F92A0(a1, a2, a3);
    case 0x6E:
      return sub_6F2AB0(a1, a2, a3);
    case 0x6F:
      return sub_6F29B0(a1, a2, a3);
    case 0x70:
      return sub_6F28B0(a1, a2, a3);
    case 0x71:
      return sub_6F27B0(a1, a2, a3);
    case 0x72:
      return sub_6F9DE0(a1, a2, a3);
    case 0x73:
      return sub_6F26B0(a1, a2, a3);
    case 0x74:
      return sub_6F25B0(a1, a2, a3);
    case 0x75:
      v18 = *(_QWORD *)(a2 + 16);
      if ( !v18 )
        return 1;
      return sub_6E9260(a1, v18, a4, a5, a6, a7, a8, a9, a10, a11);
    case 0x76:
      return sub_6F24B0(a1, a2, a3);
    case 0x77:
      return sub_6F23B0(a1, a2, a3);
    case 0x78:
      return sub_6F22B0(a1, a2, a3);
    case 0x79:
      return sub_6F21B0(a1, a2, a3);
    case 0x7A:
      return sub_6F9CA0(a1, a2, a3);
    case 0x7B:
      return sub_6F20B0(a1, a2, a3);
    case 0x7C:
      return sub_6F1FB0(a1, a2, a3);
    case 0x7D:
      return sub_6F1E70(a1, a2, a3);
    case 0x7E:
      return sub_6F1D70(a1, a2, a3);
    case 0x7F:
      return sub_6F1C70(a1, a2, a3);
    case 0x80:
      return sub_6F1B70(a1, a2, a3);
    case 0x81:
      return sub_6F1A70(a1, a2, a3);
    case 0x82:
      return sub_6F1970(a1, a2, a3);
    case 0x83:
      return sub_6F1870(a1, a2, a3);
    case 0x84:
      return sub_6F1770(a1, a2, a3);
    case 0x85:
      return sub_6F1670(a1, a2, a3);
    case 0x86:
      return sub_6F1570(a1, a2, a3);
    case 0x87:
      return sub_6F1470(a1, a2, a3);
    case 0x88:
      return sub_6F1370(a1, a2, a3);
    case 0x89:
      return sub_6F1270(a1, a2, a3);
    case 0x8A:
      return sub_6F1170(a1, a2, a3);
    case 0x8B:
      return sub_6F1070(a1, a2, a3);
    case 0x8C:
      return sub_6F0ED0(a1, a2, a3);
    case 0x8D:
      return sub_6F0D80(a1, a2, a3);
    case 0x8E:
      return sub_6F0C30(a1, a2, a3);
    case 0x8F:
      return sub_6F0AE0(a1, a2, a3);
    case 0x90:
      return sub_6F0990(a1, a2, a3);
    case 0x91:
      return sub_6F0840(a1, a2, a3);
    case 0x92:
      return sub_6F06F0(a1, a2, a3);
    case 0x93:
      return sub_6F05A0(a1, a2, a3);
    case 0x94:
      return sub_6F0470(a1, a2, a3);
    case 0x95:
      return sub_6F0340(a1, a2, a3);
    case 0x96:
      return sub_6F0210(a1, a2, a3);
    case 0x97:
      return sub_6F00E0(a1, a2, a3);
    case 0x98:
      return sub_6EFFB0(a1, a2, a3);
    case 0x99:
      return sub_6EFE80(a1, a2, a3);
    case 0x9A:
      return sub_6EFB60(a1, a2, a3);
    case 0x9B:
      return sub_6EFA60(a1, a2, a3);
    case 0x9C:
      return sub_6EF960(a1, a2, a3);
    case 0x9D:
      return sub_6EF860(a1, a2, a3);
    case 0x9E:
      return sub_6EF760(a1, a2, a3);
    case 0x9F:
      return sub_6EF660(a1, a2, a3);
    case 0xA0:
      return sub_6EF560(a1, a2, a3);
    case 0xA1:
      return sub_7089A0(a1, a2, a3);
    case 0xA2:
      return sub_708850(a1, a2, a3);
    case 0xA3:
      return sub_708700(a1, a2, a3);
    case 0xA4:
      return sub_7085B0(a1, a2, a3);
    case 0xA5:
      return sub_708460(a1, a2, a3);
    case 0xA6:
      return sub_708310(a1, a2, a3);
    case 0xA7:
      return sub_7081C0(a1, a2, a3);
    case 0xA8:
      return sub_708070(a1, a2, a3);
    case 0xA9:
      return sub_707F20(a1, a2, a3);
    case 0xAA:
      return sub_707DD0(a1, a2, a3);
    case 0xAB:
      return sub_707C80(a1, a2, a3);
    case 0xAC:
      return sub_707B30(a1, a2, a3);
    case 0xAD:
      return sub_7079E0(a1, a2, a3);
    case 0xAE:
      return sub_707890(a1, a2, a3);
    case 0xAF:
      return sub_707740(a1, a2, a3);
    case 0xB0:
      return sub_7075F0(a1, a2, a3);
    case 0xB1:
      return sub_7074A0(a1, a2, a3);
    case 0xB2:
      return sub_707350(a1, a2, a3);
    case 0xB3:
      return sub_707200(a1, a2, a3);
    case 0xB4:
      return sub_7070B0(a1, a2, a3);
    case 0xB5:
      return sub_706F60(a1, a2, a3);
    case 0xB6:
      return sub_706E10(a1, a2, a3);
    case 0xB7:
      return sub_706CC0(a1, a2, a3);
    case 0xB8:
      return sub_706B70(a1, a2, a3);
    case 0xB9:
      return sub_706A20(a1, a2, a3);
    case 0xBA:
      return sub_7068D0(a1, a2, a3);
    case 0xBB:
      return sub_706780(a1, a2, a3);
    case 0xBC:
      return sub_706630(a1, a2, a3);
    case 0xBD:
      return sub_7064E0(a1, a2, a3);
    case 0xBE:
      return sub_706390(a1, a2, a3);
    case 0xBF:
      return sub_706240(a1, a2, a3);
    case 0xC0:
      return sub_7060F0(a1, a2, a3);
    case 0xC1:
      return sub_705FA0(a1, a2, a3);
    case 0xC2:
      return sub_705E50(a1, a2, a3);
    case 0xC3:
      return sub_705D00(a1, a2, a3);
    case 0xC4:
      return sub_705BB0(a1, a2, a3);
    case 0xC5:
      return sub_705A60(a1, a2, a3);
    case 0xC6:
      return sub_705910(a1, a2, a3);
    case 0xC7:
      return sub_7057C0(a1, a2, a3);
    case 0xC8:
      return sub_705670(a1, a2, a3);
    case 0xC9:
      return sub_705520(a1, a2, a3);
    case 0xCA:
      return sub_7053D0(a1, a2, a3);
    case 0xCB:
      return sub_705280(a1, a2, a3);
    case 0xCC:
      return sub_705130(a1, a2, a3);
    case 0xCD:
      return sub_704FE0(a1, a2, a3);
    case 0xCE:
      return sub_704E90(a1, a2, a3);
    case 0xCF:
      return sub_704D40(a1, a2, a3);
    case 0xD0:
      return sub_704BF0(a1, a2, a3);
    case 0xD1:
      return sub_704AA0(a1, a2, a3);
    case 0xD2:
      return sub_704950(a1, a2, a3);
    case 0xD3:
      return sub_704800(a1, a2, a3);
    case 0xD4:
      return sub_7046B0(a1, a2, a3);
    case 0xD5:
      return sub_704560(a1, a2, a3);
    case 0xD6:
      return sub_704410(a1, a2, a3);
    case 0xD7:
      return sub_7042C0(a1, a2, a3);
    case 0xD8:
      return sub_704170(a1, a2, a3);
    case 0xD9:
      return sub_704020(a1, a2, a3);
    case 0xDA:
      return sub_703ED0(a1, a2, a3);
    case 0xDB:
      return sub_703D80(a1, a2, a3);
    case 0xDC:
      return sub_703C30(a1, a2, a3);
    case 0xDD:
      return sub_703AE0(a1, a2, a3);
    case 0xDE:
      return sub_703990(a1, a2, a3);
    case 0xDF:
      return sub_703840(a1, a2, a3);
    case 0xE0:
      return sub_7036F0(a1, a2, a3);
    case 0xE1:
      return sub_7035A0(a1, a2, a3);
    case 0xE2:
      return sub_703450(a1, a2, a3);
    case 0xE3:
      return sub_703300(a1, a2, a3);
    case 0xE4:
      return sub_7031B0(a1, a2, a3);
    case 0xE5:
      return sub_703060(a1, a2, a3);
    case 0xE6:
      return sub_702F10(a1, a2, a3);
    case 0xE7:
      return sub_702700(a1, a2, a3);
    case 0xE8:
      return sub_702DC0(a1, a2, a3);
    case 0xE9:
      return sub_702C70(a1, a2, a3);
    case 0xEA:
      return sub_702B20(a1, a2, a3);
    case 0xEB:
      return sub_7029D0(a1, a2, a3);
    case 0xEC:
      return sub_702880(a1, a2, a3);
    case 0xED:
      return sub_6ED600(a1, *(_QWORD *)(a2 + 8), 0);
    case 0xEE:
      return sub_6EEF80(a1, a2, a3);
    case 0xEF:
      return sub_6F8E70(a1, a2, a3);
    case 0xF0:
      return sub_6EE500(a1, a2, a3);
    case 0xF1:
      return sub_6EE400(a1, a2, a3);
    case 0xF2:
      return sub_6EE300(a1, a2, a3);
    case 0xF3:
      return sub_6EE200(a1, a2, a3);
    case 0xF4:
      return sub_6EE100(a1, a2, a3);
    case 0xF5:
      v14 = *(_QWORD *)(a2 + 8);
      if ( (v14 & 1) != 0 )
      {
        v15 = (unsigned int *)(v14 & 0xFFFFFFFFFFFFFFFELL);
        v16 = (__int64 *)(v15 + 2);
        v17 = (__int64)&v15[2 * *v15 + 2];
      }
      else
      {
        v17 = a2 + 16;
        v16 = (__int64 *)(a2 + 8);
        if ( !v14 )
          return 1;
      }
      if ( v16 == (__int64 *)v17 )
        return 1;
      while ( !*v16 || (unsigned __int8)sub_6E9260(a1, *v16, a4, a5, a6, a7, a8, a9, a10, a11) )
      {
        if ( (__int64 *)v17 == ++v16 )
          return 1;
      }
      return 0;
    case 0xF6:
    case 0xF7:
      return sub_6ED600(a1, *(_QWORD *)(a2 + 16), a3);
    case 0xF8:
      return sub_6EE000(a1, a2, a3);
    case 0xF9:
      return sub_6EDF00(a1, a2, a3);
    case 0xFA:
      return sub_6EDDC0(a1, a2, a3);
    case 0xFB:
      return sub_6EDCC0(a1, a2, a3);
    case 0xFC:
      v19 = *(_QWORD *)(a2 + 8);
      if ( v19 && !(unsigned __int8)sub_6ED600(a1, v19, a3) )
        return 0;
      if ( !(unsigned __int8)sub_6ED600(a1, *(_QWORD *)(v12 + 56), a3) )
        return 0;
      v20 = sub_ECE610(v12);
      if ( !(unsigned __int8)sub_6ED600(a1, v20, a3) )
        return 0;
      return sub_6ED600(a1, *(_QWORD *)(v12 + 64), a3);
    case 0xFD:
      return sub_6EDB90(a1, a2, a3);
    case 0xFE:
      return sub_6EDA90(a1, a2, a3);
    case 0xFF:
      return sub_6ED990(a1, a2, a3);
    case 0x100:
      return sub_6ED7B0(a1, a2, a3);
    default:
      return 1;
  }
}

