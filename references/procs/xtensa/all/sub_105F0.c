const char *__fastcall sub_105F0(__int64 a1, char a2, char a3)
{
  const char *result; // rax

  switch ( a2 )
  {
    case 0:
      result = ".lbeg";
      break;
    case 1:
      result = ".lend";
      break;
    case 2:
      result = ".lcount";
      break;
    case 3:
      result = ".sar";
      break;
    case 4:
      result = ".br";
      break;
    case 5:
      result = ".litbase";
      break;
    case 12:
      result = ".scompare1";
      break;
    case 16:
      result = ".acclo";
      break;
    case 17:
      result = ".acchi";
      break;
    case 32:
      result = ".m0";
      break;
    case 33:
      result = ".m1";
      break;
    case 34:
      result = ".m2";
      break;
    case 35:
      result = ".m3";
      break;
    case 40:
      result = ".prefctl";
      break;
    case 72:
      result = ".windowbase";
      break;
    case 73:
      result = ".windowstart";
      break;
    case 83:
      result = ".ptevaddr";
      break;
    case 89:
      result = ".mmid";
      break;
    case 90:
      result = ".rasid";
      if ( *(char *)(*(_QWORD *)(a1 + 616) + 598LL) < 0 )
        result = ".mpuenb";
      break;
    case 91:
      result = ".itlbcfg";
      break;
    case 92:
      result = ".dtlbcfg";
      if ( *(char *)(*(_QWORD *)(a1 + 616) + 598LL) < 0 )
        result = ".mpucfg";
      break;
    case 95:
      result = ".eraccess";
      break;
    case 96:
      result = ".ibreakenable";
      break;
    case 97:
      result = ".memctl";
      break;
    case 98:
      result = ".cacheattr";
      if ( *(char *)(*(_QWORD *)(a1 + 616) + 598LL) < 0 )
        result = ".cacheadrdis";
      break;
    case 99:
      result = ".atomctl";
      break;
    case 104:
      result = ".ddr";
      break;
    case 106:
      result = ".mepc";
      break;
    case 107:
      result = ".meps";
      break;
    case 108:
      result = ".mesave";
      break;
    case 109:
      result = ".mesr";
      break;
    case 110:
      result = ".mecr";
      break;
    case 111:
      result = ".mevaddr";
      break;
    case 119:
      result = ".opmode";
      break;
    case -128:
      result = ".ibreaka0";
      break;
    case -127:
      result = ".ibreaka1";
      break;
    case -112:
      result = ".dbreaka0";
      break;
    case -111:
      result = ".dbreaka1";
      break;
    case -96:
      result = ".dbreakc0";
      break;
    case -95:
      result = ".dbreakc1";
      break;
    case -80:
      result = ".configid0";
      break;
    case -79:
      result = ".epc1";
      break;
    case -78:
      result = ".epc2";
      break;
    case -77:
      result = ".epc3";
      break;
    case -76:
      result = ".epc4";
      break;
    case -75:
      result = ".epc5";
      break;
    case -74:
      result = ".epc6";
      break;
    case -73:
      result = ".epc7";
      break;
    case -64:
      result = ".ibreakc0";
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 616) + 598LL) & 4) != 0 )
        result = ".depc";
      break;
    case -63:
      result = ".ibreakc1";
      break;
    case -62:
      result = ".eps2";
      break;
    case -61:
      result = ".eps3";
      break;
    case -60:
      result = ".eps4";
      break;
    case -59:
      result = ".eps5";
      break;
    case -58:
      result = ".eps6";
      break;
    case -57:
      result = ".eps7";
      break;
    case -48:
      result = ".configid1";
      break;
    case -47:
      result = ".excsave1";
      break;
    case -46:
      result = ".excsave2";
      break;
    case -45:
      result = ".excsave3";
      break;
    case -44:
      result = ".excsave4";
      break;
    case -43:
      result = ".excsave5";
      break;
    case -42:
      result = ".excsave6";
      break;
    case -41:
      result = ".excsave7";
      break;
    case -32:
      result = ".cpenable";
      break;
    case -30:
      result = ".interrupt";
      if ( a3 )
        result = ".intset";
      break;
    case -29:
      result = ".intclear";
      break;
    case -28:
      result = ".intenable";
      break;
    case -26:
      result = ".ps";
      break;
    case -25:
      result = ".vecbase";
      break;
    case -24:
      result = ".exccause";
      break;
    case -23:
      result = ".debugcause";
      break;
    case -22:
      result = ".ccount";
      break;
    case -21:
      result = ".prid";
      break;
    case -20:
      result = ".icount";
      break;
    case -19:
      result = ".icountlevel";
      break;
    case -18:
      result = ".excvaddr";
      break;
    case -16:
      result = ".ccompare0";
      break;
    case -15:
      result = ".ccompare1";
      break;
    case -14:
      result = ".ccompare2";
      break;
    case -12:
      result = ".misc0";
      break;
    case -11:
      result = ".misc1";
      break;
    case -10:
      result = ".misc2";
      break;
    case -9:
      result = ".misc3";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
