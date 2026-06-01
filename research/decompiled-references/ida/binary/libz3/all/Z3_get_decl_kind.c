__int64 __fastcall Z3_get_decl_kind(_DWORD *a1, __int64 a2)
{
  char v2; // r12
  int *v3; // rax
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A080();
    a1[380] = 0;
    if ( !a2 )
    {
      result = 45102;
      goto LABEL_24;
    }
  }
  else
  {
    a1[380] = 0;
    if ( !a2 )
      return 45102;
  }
  v3 = *(int **)(a2 + 24);
  if ( !v3 || (v4 = *v3, *v3 == -1) )
  {
LABEL_19:
    result = 45102;
    goto LABEL_20;
  }
  if ( !v4 )
  {
    switch ( v3[1] )
    {
      case 0:
        result = 256;
        break;
      case 1:
        result = 257;
        break;
      case 2:
        result = 258;
        break;
      case 3:
        result = 259;
        break;
      case 4:
        result = 260;
        break;
      case 5:
        result = 261;
        break;
      case 6:
        result = 262;
        break;
      case 7:
        result = 264;
        break;
      case 8:
        result = 265;
        break;
      case 9:
        result = 266;
        break;
      case 10:
        result = 267;
        break;
      case 12:
        result = 1280;
        break;
      case 13:
        result = 1281;
        break;
      case 14:
        result = 1282;
        break;
      case 15:
        result = 1283;
        break;
      case 16:
        result = 1284;
        break;
      case 17:
        result = 1285;
        break;
      case 18:
        result = 1286;
        break;
      case 19:
        result = 1287;
        break;
      case 20:
        result = 1288;
        break;
      case 21:
        result = 1289;
        break;
      case 22:
        result = 1290;
        break;
      case 23:
        result = 1291;
        break;
      case 24:
        result = 1292;
        break;
      case 25:
        result = 1293;
        break;
      case 26:
        result = 1294;
        break;
      case 27:
        result = 1295;
        break;
      case 28:
        result = 1296;
        break;
      case 29:
        result = 1297;
        break;
      case 30:
        result = 1298;
        break;
      case 31:
        result = 1299;
        break;
      case 32:
        result = 1300;
        break;
      case 33:
        result = 1301;
        break;
      case 34:
        result = 1302;
        break;
      case 35:
        result = 1303;
        break;
      case 36:
        result = 1304;
        break;
      case 37:
        result = 1305;
        break;
      case 38:
        result = 1306;
        break;
      case 39:
        result = 1307;
        break;
      case 40:
        result = 1308;
        break;
      case 41:
        result = 1309;
        break;
      case 43:
        result = 1310;
        break;
      case 45:
        result = 1311;
        break;
      case 46:
        result = 1312;
        break;
      case 47:
        result = 1313;
        break;
      case 48:
        result = 1314;
        break;
      case 49:
        result = 1315;
        break;
      case 50:
        result = 1316;
        break;
      case 51:
        result = 1317;
        break;
      case 52:
        result = 1318;
        break;
      case 53:
        result = 1319;
        break;
      case 54:
        result = 1320;
        break;
      case 55:
        result = 1321;
        break;
      default:
        goto LABEL_31;
    }
    goto LABEL_20;
  }
  if ( v4 == 5 )
  {
    switch ( v3[1] )
    {
      case 0:
        result = 512;
        break;
      case 1:
        result = 513;
        break;
      case 2:
        result = 514;
        break;
      case 3:
        result = 515;
        break;
      case 4:
        result = 516;
        break;
      case 5:
        result = 517;
        break;
      case 6:
        result = 518;
        break;
      case 7:
        result = 519;
        break;
      case 8:
        result = 520;
        break;
      case 9:
        result = 521;
        break;
      case 10:
        result = 522;
        break;
      case 11:
        result = 523;
        break;
      case 15:
        result = 524;
        break;
      case 16:
        result = 525;
        break;
      case 18:
        result = 526;
        break;
      case 19:
        result = 527;
        break;
      case 20:
        result = 528;
        break;
      case 21:
        result = 530;
        break;
      case 22:
        result = 529;
        break;
      default:
        goto LABEL_31;
    }
  }
  else
  {
    if ( a1[360] == v4 )
    {
      v6 = (unsigned int)v3[1];
      if ( (unsigned int)v6 <= 0xD )
      {
        result = *((unsigned int *)qword_18B7520 + v6);
        goto LABEL_20;
      }
      goto LABEL_31;
    }
    if ( a1[368] == v4 )
    {
      v9 = v3[1];
      if ( v9 > 4 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1209);
      }
      result = v9 + 40960;
    }
    else if ( v4 == a1[361] )
    {
      switch ( v3[1] )
      {
        case 0:
          result = 1024;
          break;
        case 1:
          result = 1025;
          break;
        case 2:
          result = 1026;
          break;
        case 3:
          result = 1027;
          break;
        case 4:
          result = 1028;
          break;
        case 5:
          result = 1029;
          break;
        case 6:
          result = 1030;
          break;
        case 7:
          result = 1031;
          break;
        case 8:
          result = 1032;
          break;
        case 9:
          result = 1033;
          break;
        case 10:
          result = 1034;
          break;
        case 11:
          result = 1035;
          break;
        case 12:
          result = 1036;
          break;
        case 13:
          result = 1037;
          break;
        case 14:
          result = 1038;
          break;
        case 15:
          result = 1039;
          break;
        case 16:
          result = 1040;
          break;
        case 17:
          result = 1080;
          break;
        case 18:
          result = 1081;
          break;
        case 19:
          result = 1082;
          break;
        case 20:
          result = 1083;
          break;
        case 21:
          result = 1084;
          break;
        case 22:
          result = 1041;
          break;
        case 23:
          result = 1042;
          break;
        case 24:
          result = 1043;
          break;
        case 25:
          result = 1044;
          break;
        case 26:
          result = 1045;
          break;
        case 27:
          result = 1046;
          break;
        case 28:
          result = 1047;
          break;
        case 29:
          result = 1048;
          break;
        case 30:
          result = 1049;
          break;
        case 31:
          result = 1050;
          break;
        case 32:
          result = 1051;
          break;
        case 33:
          result = 1052;
          break;
        case 34:
          result = 1053;
          break;
        case 35:
          result = 1054;
          break;
        case 36:
          result = 1055;
          break;
        case 37:
          result = 1056;
          break;
        case 38:
          result = 1057;
          break;
        case 39:
          result = 1058;
          break;
        case 40:
          result = 1059;
          break;
        case 41:
          result = 1060;
          break;
        case 42:
          result = 1061;
          break;
        case 43:
          result = 1062;
          break;
        case 44:
          result = 1063;
          break;
        case 45:
          result = 1064;
          break;
        case 46:
          result = 1065;
          break;
        case 47:
          result = 1066;
          break;
        case 48:
          result = 1067;
          break;
        case 49:
          result = 1068;
          break;
        case 50:
          result = 1069;
          break;
        case 51:
          result = 1070;
          break;
        case 52:
          result = 1078;
          break;
        case 53:
          result = 1077;
          break;
        case 54:
          result = 1079;
          break;
        case 63:
          result = 1071;
          break;
        case 65:
          result = 1072;
          break;
        case 66:
          result = 1073;
          break;
        case 67:
          result = 1074;
          break;
        case 68:
          result = 1075;
          break;
        case 69:
          result = 1076;
          break;
        default:
          goto LABEL_31;
      }
    }
    else
    {
      if ( v4 == a1[362] )
      {
        v8 = v3[1];
        if ( v8 <= 4 )
        {
          result = v8 + 2048;
          goto LABEL_20;
        }
        goto LABEL_31;
      }
      if ( v4 == a1[363] )
      {
        v10 = v3[1];
        if ( v10 <= 0xE )
        {
          result = v10 + 1536;
          goto LABEL_20;
        }
        goto LABEL_31;
      }
      if ( v4 == a1[366] )
      {
        switch ( v3[1] )
        {
          case 0:
            result = 1551;
            break;
          case 1:
            result = 1552;
            break;
          case 2:
          case 53:
            result = 1553;
            break;
          case 3:
          case 56:
            result = 1554;
            break;
          case 4:
          case 57:
            result = 1555;
            break;
          case 5:
          case 55:
            result = 1556;
            break;
          case 6:
          case 61:
            result = 1557;
            break;
          case 7:
          case 52:
            result = 1558;
            break;
          case 8:
          case 60:
            result = 1562;
            break;
          case 9:
            result = 1563;
            break;
          case 12:
          case 54:
            result = 1564;
            break;
          case 13:
          case 62:
            result = 1565;
            break;
          case 15:
          case 59:
            result = 1567;
            break;
          case 16:
          case 58:
            result = 1568;
            break;
          case 17:
            result = 1560;
            break;
          case 18:
            result = 1559;
            break;
          case 19:
            result = 1561;
            break;
          case 20:
            result = 1569;
            break;
          case 21:
            result = 1570;
            break;
          case 22:
            result = 1571;
            break;
          case 23:
            result = 1572;
            break;
          case 24:
            result = 1581;
            break;
          case 25:
            result = 1582;
            break;
          case 26:
            result = 1583;
            break;
          case 27:
            result = 1586;
            break;
          case 28:
            result = 1584;
            break;
          case 29:
            result = 1585;
            break;
          case 30:
            result = 1587;
            break;
          case 31:
            result = 1588;
            break;
          case 32:
            result = 1589;
            break;
          case 33:
            result = 1590;
            break;
          case 34:
            result = 1591;
            break;
          case 35:
          case 63:
            result = 1592;
            break;
          case 36:
          case 64:
            result = 1593;
            break;
          case 37:
            result = 1594;
            break;
          case 38:
            result = 1595;
            break;
          case 39:
            result = 1596;
            break;
          case 40:
            result = 1597;
            break;
          case 42:
            result = 1574;
            break;
          case 43:
            result = 1573;
            break;
          case 44:
            result = 1575;
            break;
          case 45:
            result = 1576;
            break;
          case 46:
            result = 1579;
            break;
          case 47:
            result = 1580;
            break;
          case 49:
            result = 1577;
            break;
          case 50:
            result = 1578;
            break;
          default:
            goto LABEL_31;
        }
      }
      else
      {
        if ( v4 == a1[367] )
        {
          v11 = v3[1];
          if ( v11 <= 5 )
          {
            result = v11 + 1598;
            goto LABEL_20;
          }
          goto LABEL_31;
        }
        if ( v4 != a1[365] )
        {
          if ( *v3 == 1 )
          {
            v7 = v3[1];
            result = 1792;
            if ( !v7 )
              goto LABEL_20;
            result = 1793;
            if ( v7 == 1 )
              goto LABEL_20;
          }
          else
          {
            if ( a1[364] != v4 )
            {
              result = 45101;
              if ( a1[144] == v4 )
                goto LABEL_20;
              goto LABEL_19;
            }
            v12 = v3[1];
            if ( v12 <= 4 )
            {
              result = v12 + 2304;
              goto LABEL_20;
            }
          }
LABEL_31:
          result = 45100;
          goto LABEL_20;
        }
        switch ( v3[1] )
        {
          case 0:
            result = 45056;
            break;
          case 1:
            result = 45057;
            break;
          case 2:
            result = 45058;
            break;
          case 3:
            result = 45059;
            break;
          case 4:
            result = 45060;
            break;
          case 5:
            result = 45061;
            break;
          case 6:
            result = 45062;
            break;
          case 7:
            result = 45063;
            break;
          case 8:
            result = 45064;
            break;
          case 9:
            result = 45065;
            break;
          case 10:
            result = 45066;
            break;
          case 11:
            result = 45067;
            break;
          case 12:
            result = 45068;
            break;
          case 13:
            result = 45069;
            break;
          case 14:
            result = 45070;
            break;
          case 15:
            result = 45071;
            break;
          case 16:
            result = 45072;
            break;
          case 17:
            result = 45073;
            break;
          case 18:
            result = 45074;
            break;
          case 19:
            result = 45075;
            break;
          case 22:
            result = 45076;
            break;
          case 23:
            result = 45077;
            break;
          case 24:
            result = 45078;
            break;
          case 25:
            result = 45079;
            break;
          case 26:
            result = 45080;
            break;
          case 27:
            result = 45081;
            break;
          case 28:
            result = 45082;
            break;
          case 29:
            result = 45083;
            break;
          case 30:
            result = 45084;
            break;
          case 31:
            result = 45085;
            break;
          case 32:
            result = 45086;
            break;
          case 33:
            result = 45087;
            break;
          case 34:
            result = 45088;
            break;
          case 35:
            result = 45089;
            break;
          case 36:
            result = 45090;
            break;
          case 37:
            result = 45091;
            break;
          case 38:
            result = 45092;
            break;
          case 39:
            result = 45093;
            break;
          case 40:
            result = 45094;
            break;
          case 41:
            result = 45095;
            break;
          case 42:
            result = 45096;
            break;
          case 46:
            result = 45097;
            break;
          case 48:
            result = 45098;
            break;
          case 49:
            result = 45099;
            break;
          default:
            goto LABEL_31;
        }
      }
    }
  }
LABEL_20:
  if ( v2 )
LABEL_24:
    byte_1C7EBA0 = 1;
  return result;
}

