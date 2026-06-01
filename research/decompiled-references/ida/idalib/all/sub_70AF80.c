__int64 __fastcall sub_70AF80(
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
      return sub_717780(a1, a2, a3);
    case 2:
      return sub_717680(a1, a2, a3);
    case 3:
      return sub_71C9E0(a1, a2, a3);
    case 4:
      return sub_717580(a1, a2, a3);
    case 5:
      return sub_71C8A0(a1, a2, a3);
    case 6:
      return sub_71C720(a1, a2, a3);
    case 7:
      return sub_717480(a1, a2, a3);
    case 8:
      return sub_717380(a1, a2, a3);
    case 9:
      return sub_717280(a1, a2, a3);
    case 0xA:
      return sub_717180(a1, a2, a3);
    case 0xB:
      return sub_717080(a1, a2, a3);
    case 0xC:
      return sub_716F80(a1, a2, a3);
    case 0xD:
      return sub_716E80(a1, a2, a3);
    case 0xE:
      return sub_71C5E0(a1, a2, a3);
    case 0xF:
      return sub_71A060(a1, a2, a3);
    case 0x10:
      return sub_716D80(a1, a2, a3);
    case 0x11:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 16), a3) )
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
        if ( !(unsigned __int8)sub_70DBE0(a1, v25, a3) )
          break;
        if ( (_QWORD *)v24 == ++v22 )
          return 1;
      }
      return 0;
    case 0x12:
      return sub_716C80(a1, a2, a3);
    case 0x13:
      return sub_716B80(a1, a2, a3);
    case 0x14:
      return sub_716A80(a1, a2, a3);
    case 0x15:
      return sub_716980(a1, a2, a3);
    case 0x16:
      return sub_716880(a1, a2, a3);
    case 0x17:
      return sub_718CA0(a1, a2, a3);
    case 0x18:
      return sub_718AD0(a1, a2, a3);
    case 0x19:
      return sub_716780(a1, a2, a3);
    case 0x1A:
      return sub_716680(a1, a2, a3);
    case 0x1B:
      return sub_71C4A0(a1, a2, a3);
    case 0x1C:
      return sub_716580(a1, a2, a3);
    case 0x1D:
      return sub_716480(a1, a2, a3);
    case 0x1E:
      return sub_716380(a1, a2, a3);
    case 0x1F:
      return sub_716280(a1, a2, a3);
    case 0x20:
      return sub_71C330(a1, a2, a3);
    case 0x21:
      return sub_71C1F0(a1, a2, a3);
    case 0x22:
      return sub_716180(a1, a2, a3);
    case 0x23:
      return sub_716080(a1, a2, a3);
    case 0x24:
      return sub_715F80(a1, a2, a3);
    case 0x25:
      return sub_71C0B0(a1, a2, a3);
    case 0x26:
      return sub_715E80(a1, a2, a3);
    case 0x27:
      return sub_715D80(a1, a2, a3);
    case 0x28:
      return sub_715C80(a1, a2, a3);
    case 0x29:
      return sub_715B80(a1, a2, a3);
    case 0x2A:
      return sub_715A80(a1, a2, a3);
    case 0x2B:
      return sub_715980(a1, a2, a3);
    case 0x2C:
      return sub_715880(a1, a2, a3);
    case 0x2D:
      return sub_715780(a1, a2, a3);
    case 0x2E:
      return sub_719E30(a1, a2, a3);
    case 0x2F:
      return sub_715680(a1, a2, a3);
    case 0x30:
      return sub_71D860(a1, a2, a3);
    case 0x31:
      return sub_715580(a1, a2, a3);
    case 0x32:
      return sub_718440(a1, a2, a3);
    case 0x33:
      return sub_71BBC0(a1, a2, a3);
    case 0x34:
      return sub_7153D0(a1, a2, a3);
    case 0x35:
      v21 = *(_QWORD *)(a2 + 48);
      if ( (v21 & 4) == 0 )
        return sub_7152C0(a1, v12, a3);
      if ( v21 <= 7 )
        return sub_7152C0(a1, a2, a3);
      v12 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      return sub_7152C0(a1, v12, a3);
    case 0x36:
      return sub_7151C0(a1, a2, a3);
    case 0x37:
      return sub_7150C0(a1, a2, a3);
    case 0x38:
      return sub_714FC0(a1, a2, a3);
    case 0x39:
      return sub_71B940(a1, a2, a3);
    case 0x3A:
      return sub_714EC0(a1, a2, a3);
    case 0x3B:
      return sub_714DC0(a1, a2, a3);
    case 0x3C:
      return sub_714CC0(a1, a2, a3);
    case 0x3D:
      return sub_714BC0(a1, a2, a3);
    case 0x3E:
      return sub_714AC0(a1, a2, a3);
    case 0x3F:
      return sub_7149C0(a1, a2, a3);
    case 0x40:
      return sub_7148C0(a1, a2, a3);
    case 0x41:
      return sub_714790(a1, a2, a3);
    case 0x42:
      return sub_714490(a1, a2, a3);
    case 0x43:
      return sub_714390(a1, a2, a3);
    case 0x44:
      return sub_714290(a1, a2, a3);
    case 0x45:
      return sub_719C70(a1, a2, a3);
    case 0x46:
    case 0x48:
    case 0x49:
      return sub_70DBE0(a1, *(_QWORD *)(a2 + 24), a3);
    case 0x47:
      return sub_719A40(a1, a2, a3);
    case 0x4A:
      return sub_714190(a1, a2, a3);
    case 0x4B:
      return sub_7192C0(a1, a2, a3);
    case 0x4C:
      return sub_71B800(a1, a2, a3);
    case 0x4D:
      return sub_714090(a1, a2, a3);
    case 0x4E:
      return sub_713F90(a1, a2, a3);
    case 0x4F:
      return sub_713E90(a1, a2, a3);
    case 0x50:
      return sub_71B6C0(a1, a2, a3);
    case 0x51:
      return sub_71B580(a1, a2, a3);
    case 0x52:
      return sub_71B440(a1, a2, a3);
    case 0x53:
      return sub_71B300(a1, a2, a3);
    case 0x54:
      return sub_71B1C0(a1, a2, a3);
    case 0x55:
      return sub_71B080(a1, a2, a3);
    case 0x56:
      return sub_71AF40(a1, a2, a3);
    case 0x57:
      return sub_71AE00(a1, a2, a3);
    case 0x58:
      return sub_71ACC0(a1, a2, a3);
    case 0x59:
      return sub_713D90(a1, a2, a3);
    case 0x5A:
      return sub_713C90(a1, a2, a3);
    case 0x5B:
      return sub_713B90(a1, a2, a3);
    case 0x5C:
      return sub_713A90(a1, a2, a3);
    case 0x5D:
      return sub_713990(a1, a2, a3);
    case 0x5E:
      return sub_71AB80(a1, a2, a3);
    case 0x5F:
      return sub_71AA40(a1, a2, a3);
    case 0x60:
      return sub_71A900(a1, a2, a3);
    case 0x61:
      return sub_713890(a1, a2, a3);
    case 0x62:
      return sub_713790(a1, a2, a3);
    case 0x63:
      return sub_713690(a1, a2, a3);
    case 0x64:
      return sub_71A7C0(a1, a2, a3);
    case 0x65:
      sub_C93B20(v26);
      return (unsigned __int8)sub_70DBE0(a1, v26[1], 0) && (unsigned __int8)sub_70DBE0(a1, v26[2], 0);
    case 0x66:
      return sub_71A640(a1, a2, a3);
    case 0x67:
      return sub_713590(a1, a2, a3);
    case 0x68:
      return sub_713490(a1, a2, a3);
    case 0x69:
      return sub_713390(a1, a2, a3);
    case 0x6A:
      return sub_71A500(a1, a2, a3);
    case 0x6B:
      return sub_713290(a1, a2, a3);
    case 0x6C:
      return sub_713190(a1, a2, a3);
    case 0x6D:
      return sub_719880(a1, a2, a3);
    case 0x6E:
      return sub_713090(a1, a2, a3);
    case 0x6F:
      return sub_712F90(a1, a2, a3);
    case 0x70:
      return sub_712E90(a1, a2, a3);
    case 0x71:
      return sub_712D90(a1, a2, a3);
    case 0x72:
      return sub_71A3C0(a1, a2, a3);
    case 0x73:
      return sub_712C90(a1, a2, a3);
    case 0x74:
      return sub_712B90(a1, a2, a3);
    case 0x75:
      v18 = *(_QWORD *)(a2 + 16);
      if ( !v18 )
        return 1;
      return sub_709840(a1, v18, a4, a5, a6, a7, a8, a9, a10, a11);
    case 0x76:
      return sub_712A90(a1, a2, a3);
    case 0x77:
      return sub_712990(a1, a2, a3);
    case 0x78:
      return sub_712890(a1, a2, a3);
    case 0x79:
      return sub_712790(a1, a2, a3);
    case 0x7A:
      return sub_71A280(a1, a2, a3);
    case 0x7B:
      return sub_712690(a1, a2, a3);
    case 0x7C:
      return sub_712590(a1, a2, a3);
    case 0x7D:
      return sub_712450(a1, a2, a3);
    case 0x7E:
      return sub_712350(a1, a2, a3);
    case 0x7F:
      return sub_712250(a1, a2, a3);
    case 0x80:
      return sub_712150(a1, a2, a3);
    case 0x81:
      return sub_712050(a1, a2, a3);
    case 0x82:
      return sub_711F50(a1, a2, a3);
    case 0x83:
      return sub_711E50(a1, a2, a3);
    case 0x84:
      return sub_711D50(a1, a2, a3);
    case 0x85:
      return sub_711C50(a1, a2, a3);
    case 0x86:
      return sub_711B50(a1, a2, a3);
    case 0x87:
      return sub_711A50(a1, a2, a3);
    case 0x88:
      return sub_711950(a1, a2, a3);
    case 0x89:
      return sub_711850(a1, a2, a3);
    case 0x8A:
      return sub_711750(a1, a2, a3);
    case 0x8B:
      return sub_711650(a1, a2, a3);
    case 0x8C:
      return sub_7114B0(a1, a2, a3);
    case 0x8D:
      return sub_711360(a1, a2, a3);
    case 0x8E:
      return sub_711210(a1, a2, a3);
    case 0x8F:
      return sub_7110C0(a1, a2, a3);
    case 0x90:
      return sub_710F70(a1, a2, a3);
    case 0x91:
      return sub_710E20(a1, a2, a3);
    case 0x92:
      return sub_710CD0(a1, a2, a3);
    case 0x93:
      return sub_710B80(a1, a2, a3);
    case 0x94:
      return sub_710A50(a1, a2, a3);
    case 0x95:
      return sub_710920(a1, a2, a3);
    case 0x96:
      return sub_7107F0(a1, a2, a3);
    case 0x97:
      return sub_7106C0(a1, a2, a3);
    case 0x98:
      return sub_710590(a1, a2, a3);
    case 0x99:
      return sub_710460(a1, a2, a3);
    case 0x9A:
      return sub_710140(a1, a2, a3);
    case 0x9B:
      return sub_710040(a1, a2, a3);
    case 0x9C:
      return sub_70FF40(a1, a2, a3);
    case 0x9D:
      return sub_70FE40(a1, a2, a3);
    case 0x9E:
      return sub_70FD40(a1, a2, a3);
    case 0x9F:
      return sub_70FC40(a1, a2, a3);
    case 0xA0:
      return sub_70FB40(a1, a2, a3);
    case 0xA1:
      return sub_728F80(a1, a2, a3);
    case 0xA2:
      return sub_728E30(a1, a2, a3);
    case 0xA3:
      return sub_728CE0(a1, a2, a3);
    case 0xA4:
      return sub_728B90(a1, a2, a3);
    case 0xA5:
      return sub_728A40(a1, a2, a3);
    case 0xA6:
      return sub_7288F0(a1, a2, a3);
    case 0xA7:
      return sub_7287A0(a1, a2, a3);
    case 0xA8:
      return sub_728650(a1, a2, a3);
    case 0xA9:
      return sub_728500(a1, a2, a3);
    case 0xAA:
      return sub_7283B0(a1, a2, a3);
    case 0xAB:
      return sub_728260(a1, a2, a3);
    case 0xAC:
      return sub_728110(a1, a2, a3);
    case 0xAD:
      return sub_727FC0(a1, a2, a3);
    case 0xAE:
      return sub_727E70(a1, a2, a3);
    case 0xAF:
      return sub_727D20(a1, a2, a3);
    case 0xB0:
      return sub_727BD0(a1, a2, a3);
    case 0xB1:
      return sub_727A80(a1, a2, a3);
    case 0xB2:
      return sub_727930(a1, a2, a3);
    case 0xB3:
      return sub_7277E0(a1, a2, a3);
    case 0xB4:
      return sub_727690(a1, a2, a3);
    case 0xB5:
      return sub_727540(a1, a2, a3);
    case 0xB6:
      return sub_7273F0(a1, a2, a3);
    case 0xB7:
      return sub_7272A0(a1, a2, a3);
    case 0xB8:
      return sub_727150(a1, a2, a3);
    case 0xB9:
      return sub_727000(a1, a2, a3);
    case 0xBA:
      return sub_726EB0(a1, a2, a3);
    case 0xBB:
      return sub_726D60(a1, a2, a3);
    case 0xBC:
      return sub_726C10(a1, a2, a3);
    case 0xBD:
      return sub_726AC0(a1, a2, a3);
    case 0xBE:
      return sub_726970(a1, a2, a3);
    case 0xBF:
      return sub_726820(a1, a2, a3);
    case 0xC0:
      return sub_7266D0(a1, a2, a3);
    case 0xC1:
      return sub_726580(a1, a2, a3);
    case 0xC2:
      return sub_726430(a1, a2, a3);
    case 0xC3:
      return sub_7262E0(a1, a2, a3);
    case 0xC4:
      return sub_726190(a1, a2, a3);
    case 0xC5:
      return sub_726040(a1, a2, a3);
    case 0xC6:
      return sub_725EF0(a1, a2, a3);
    case 0xC7:
      return sub_725DA0(a1, a2, a3);
    case 0xC8:
      return sub_725C50(a1, a2, a3);
    case 0xC9:
      return sub_725B00(a1, a2, a3);
    case 0xCA:
      return sub_7259B0(a1, a2, a3);
    case 0xCB:
      return sub_725860(a1, a2, a3);
    case 0xCC:
      return sub_725710(a1, a2, a3);
    case 0xCD:
      return sub_7255C0(a1, a2, a3);
    case 0xCE:
      return sub_725470(a1, a2, a3);
    case 0xCF:
      return sub_725320(a1, a2, a3);
    case 0xD0:
      return sub_7251D0(a1, a2, a3);
    case 0xD1:
      return sub_725080(a1, a2, a3);
    case 0xD2:
      return sub_724F30(a1, a2, a3);
    case 0xD3:
      return sub_724DE0(a1, a2, a3);
    case 0xD4:
      return sub_724C90(a1, a2, a3);
    case 0xD5:
      return sub_724B40(a1, a2, a3);
    case 0xD6:
      return sub_7249F0(a1, a2, a3);
    case 0xD7:
      return sub_7248A0(a1, a2, a3);
    case 0xD8:
      return sub_724750(a1, a2, a3);
    case 0xD9:
      return sub_724600(a1, a2, a3);
    case 0xDA:
      return sub_7244B0(a1, a2, a3);
    case 0xDB:
      return sub_724360(a1, a2, a3);
    case 0xDC:
      return sub_724210(a1, a2, a3);
    case 0xDD:
      return sub_7240C0(a1, a2, a3);
    case 0xDE:
      return sub_723F70(a1, a2, a3);
    case 0xDF:
      return sub_723E20(a1, a2, a3);
    case 0xE0:
      return sub_723CD0(a1, a2, a3);
    case 0xE1:
      return sub_723B80(a1, a2, a3);
    case 0xE2:
      return sub_723A30(a1, a2, a3);
    case 0xE3:
      return sub_7238E0(a1, a2, a3);
    case 0xE4:
      return sub_723790(a1, a2, a3);
    case 0xE5:
      return sub_723640(a1, a2, a3);
    case 0xE6:
      return sub_7234F0(a1, a2, a3);
    case 0xE7:
      return sub_722CE0(a1, a2, a3);
    case 0xE8:
      return sub_7233A0(a1, a2, a3);
    case 0xE9:
      return sub_723250(a1, a2, a3);
    case 0xEA:
      return sub_723100(a1, a2, a3);
    case 0xEB:
      return sub_722FB0(a1, a2, a3);
    case 0xEC:
      return sub_722E60(a1, a2, a3);
    case 0xED:
      return sub_70DBE0(a1, *(_QWORD *)(a2 + 8), 0);
    case 0xEE:
      return sub_70F560(a1, a2, a3);
    case 0xEF:
      return sub_719450(a1, a2, a3);
    case 0xF0:
      return sub_70EAE0(a1, a2, a3);
    case 0xF1:
      return sub_70E9E0(a1, a2, a3);
    case 0xF2:
      return sub_70E8E0(a1, a2, a3);
    case 0xF3:
      return sub_70E7E0(a1, a2, a3);
    case 0xF4:
      return sub_70E6E0(a1, a2, a3);
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
      while ( !*v16 || (unsigned __int8)sub_709840(a1, *v16, a4, a5, a6, a7, a8, a9, a10, a11) )
      {
        if ( (__int64 *)v17 == ++v16 )
          return 1;
      }
      return 0;
    case 0xF6:
    case 0xF7:
      return sub_70DBE0(a1, *(_QWORD *)(a2 + 16), a3);
    case 0xF8:
      return sub_70E5E0(a1, a2, a3);
    case 0xF9:
      return sub_70E4E0(a1, a2, a3);
    case 0xFA:
      return sub_70E3A0(a1, a2, a3);
    case 0xFB:
      return sub_70E2A0(a1, a2, a3);
    case 0xFC:
      v19 = *(_QWORD *)(a2 + 8);
      if ( v19 && !(unsigned __int8)sub_70DBE0(a1, v19, a3) )
        return 0;
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(v12 + 56), a3) )
        return 0;
      v20 = sub_EF2350(v12);
      if ( !(unsigned __int8)sub_70DBE0(a1, v20, a3) )
        return 0;
      return sub_70DBE0(a1, *(_QWORD *)(v12 + 64), a3);
    case 0xFD:
      return sub_70E170(a1, a2, a3);
    case 0xFE:
      return sub_70E070(a1, a2, a3);
    case 0xFF:
      return sub_70DF70(a1, a2, a3);
    case 0x100:
      return sub_70DD90(a1, a2, a3);
    default:
      return 1;
  }
}
