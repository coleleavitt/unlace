__int64 __fastcall sub_58B7DD(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  int v4; // [rsp+10h] [rbp-10h]
  unsigned int i; // [rsp+18h] [rbp-8h]
  unsigned __int8 v6; // [rsp+1Eh] [rbp-2h]
  unsigned __int8 v7; // [rsp+1Fh] [rbp-1h]

  v7 = 0;
  while ( 2 )
  {
    v6 = 0;
    v4 = *(_DWORD *)a1;
    (*(void (__fastcall **)(__int64))(a1 + 40))(a1);
    switch ( a2 )
    {
      case 0:
        switch ( v4 )
        {
          case 'F':
            a2 = 1;
            goto LABEL_2;
          case 'N':
            a2 = 2;
            goto LABEL_2;
          case 'T':
            a2 = 3;
            goto LABEL_2;
          case '\\':
            v6 = 1;
            a2 = 4;
            goto LABEL_2;
          case '_':
            a2 = 5;
            goto LABEL_2;
          case 'a':
            a2 = 6;
            goto LABEL_2;
          case 'b':
            a2 = 7;
            goto LABEL_2;
          case 'c':
            a2 = 8;
            goto LABEL_2;
          case 'd':
            a2 = 9;
            goto LABEL_2;
          case 'e':
            a2 = 10;
            goto LABEL_2;
          case 'f':
            a2 = 11;
            goto LABEL_2;
          case 'g':
            a2 = 12;
            goto LABEL_2;
          case 'i':
            a2 = 13;
            goto LABEL_2;
          case 'l':
            a2 = 14;
            goto LABEL_2;
          case 'm':
            a2 = 15;
            goto LABEL_2;
          case 'n':
            a2 = 16;
            goto LABEL_2;
          case 'o':
            a2 = 17;
            goto LABEL_2;
          case 'p':
            a2 = 18;
            goto LABEL_2;
          case 'r':
            a2 = 19;
            goto LABEL_2;
          case 's':
            a2 = 20;
            goto LABEL_2;
          case 't':
            a2 = 21;
            goto LABEL_2;
          case 'u':
            a2 = 22;
            goto LABEL_2;
          case 'v':
            a2 = 23;
            goto LABEL_2;
          case 'w':
            a2 = 24;
            goto LABEL_2;
        }
        if ( v4 > 8 && v4 <= 13 || v4 == 32 )
        {
          v6 = 1;
          a2 = 0;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 1:
        if ( v4 == 65 )
        {
          a2 = 25;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 2:
        if ( v4 == 85 )
        {
          a2 = 26;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 3:
        if ( v4 == 82 )
        {
          a2 = 27;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 4:
        if ( v4 == 10 )
        {
          v6 = 1;
          a2 = 0;
          goto LABEL_2;
        }
        if ( v4 == 13 )
        {
          v6 = 1;
          a2 = 28;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 5:
        switch ( v4 )
        {
          case 'A':
            a2 = 29;
            goto LABEL_2;
          case 'G':
            a2 = 30;
            goto LABEL_2;
          case 'N':
            a2 = 31;
            goto LABEL_2;
          case '_':
            a2 = 32;
            goto LABEL_2;
          case 'a':
            a2 = 33;
            goto LABEL_2;
          case 'u':
            a2 = 34;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 6:
        switch ( v4 )
        {
          case 'l':
            a2 = 35;
            goto LABEL_2;
          case 's':
            a2 = 36;
            goto LABEL_2;
          case 'u':
            a2 = 37;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 7:
        if ( v4 == 111 )
        {
          a2 = 38;
          goto LABEL_2;
        }
        if ( v4 == 114 )
        {
          a2 = 39;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 8:
        switch ( v4 )
        {
          case 'a':
            a2 = 40;
            goto LABEL_2;
          case 'h':
            a2 = 41;
            goto LABEL_2;
          case 'o':
            a2 = 42;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 9:
        if ( v4 == 101 )
        {
          a2 = 43;
          goto LABEL_2;
        }
        if ( v4 == 111 )
        {
          a2 = 44;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 10:
        switch ( v4 )
        {
          case 'l':
            a2 = 45;
            goto LABEL_2;
          case 'n':
            a2 = 46;
            goto LABEL_2;
          case 'x':
            a2 = 47;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 11:
        switch ( v4 )
        {
          case 'a':
            a2 = 48;
            goto LABEL_2;
          case 'l':
            a2 = 49;
            goto LABEL_2;
          case 'o':
            a2 = 50;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 12:
        if ( v4 == 111 )
        {
          a2 = 51;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 13:
        if ( v4 == 102 )
        {
          a2 = 52;
          goto LABEL_2;
        }
        if ( v4 == 110 )
        {
          a2 = 53;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 14:
        if ( v4 == 111 )
        {
          a2 = 54;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 15:
        if ( v4 == 97 )
        {
          a2 = 55;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 16:
        if ( v4 == 111 )
        {
          a2 = 56;
          goto LABEL_2;
        }
        if ( v4 == 117 )
        {
          a2 = 57;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 17:
        if ( v4 == 102 )
        {
          a2 = 58;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 18:
        if ( v4 == 116 )
        {
          a2 = 59;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 19:
        if ( v4 == 101 )
        {
          a2 = 60;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 20:
        switch ( v4 )
        {
          case 'h':
            a2 = 61;
            goto LABEL_2;
          case 'i':
            a2 = 62;
            goto LABEL_2;
          case 's':
            a2 = 63;
            goto LABEL_2;
          case 't':
            a2 = 64;
            goto LABEL_2;
          case 'w':
            a2 = 65;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 21:
        switch ( v4 )
        {
          case 'h':
            a2 = 66;
            goto LABEL_2;
          case 'r':
            a2 = 67;
            goto LABEL_2;
          case 'y':
            a2 = 68;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 22:
        if ( v4 == 105 )
        {
          a2 = 69;
          goto LABEL_2;
        }
        if ( v4 == 110 )
        {
          a2 = 70;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 23:
        if ( v4 == 111 )
        {
          a2 = 71;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 24:
        if ( v4 == 104 )
        {
          a2 = 72;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 25:
        if ( v4 == 76 )
        {
          a2 = 73;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 26:
        if ( v4 == 76 )
        {
          a2 = 74;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 27:
        if ( v4 == 85 )
        {
          a2 = 75;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 28:
        if ( v4 == 10 )
        {
          v6 = 1;
          a2 = 0;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 29:
        if ( v4 == 108 )
        {
          a2 = 76;
          goto LABEL_2;
        }
        if ( v4 == 116 )
        {
          a2 = 77;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 30:
        if ( v4 == 101 )
        {
          a2 = 78;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 31:
        if ( v4 == 111 )
        {
          a2 = 79;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 32:
        for ( i = 0; i <= 0x19; i += 2 )
        {
          if ( v4 == (unsigned __int16)aApbqcrdsetfuiv[i] )
          {
            a2 = aApbqcrdsetfuiv[i + 1];
            goto LABEL_2;
          }
        }
        result = v7;
        break;
      case 33:
        if ( v4 == 108 )
        {
          a2 = 93;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 34:
        if ( v4 == 110 )
        {
          a2 = 94;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 35:
        if ( v4 == 105 )
        {
          a2 = 95;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 36:
        if ( v4 == 109 )
        {
          a2 = 96;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 37:
        if ( v4 == 116 )
        {
          a2 = 97;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 38:
        if ( v4 == 111 )
        {
          a2 = 98;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 39:
        if ( v4 == 101 )
        {
          a2 = 99;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 40:
        if ( v4 == 115 )
        {
          a2 = 100;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 41:
        if ( v4 == 97 )
        {
          a2 = 101;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 42:
        if ( v4 == 110 )
        {
          a2 = 102;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 43:
        if ( v4 == 102 )
        {
          a2 = 103;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 44:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 104;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 117 )
        {
          a2 = 104;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 45:
        if ( v4 == 115 )
        {
          a2 = 105;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 46:
        if ( v4 == 117 )
        {
          a2 = 106;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 47:
        if ( v4 == 116 )
        {
          a2 = 107;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 48:
        if ( v4 == 108 )
        {
          a2 = 108;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 49:
        if ( v4 == 111 )
        {
          a2 = 109;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 50:
        if ( v4 == 114 )
        {
          a2 = 110;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 51:
        if ( v4 == 116 )
        {
          a2 = 111;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 52:
        *(_WORD *)(a1 + 4) = 98;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 53:
        if ( v4 == 108 )
        {
          a2 = 112;
          goto LABEL_2;
        }
        if ( v4 == 116 )
        {
          a2 = 113;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 54:
        if ( v4 == 110 )
        {
          a2 = 114;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 55:
        if ( v4 == 120 )
        {
          a2 = 115;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 56:
        if ( v4 == 114 )
        {
          a2 = 116;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 57:
        if ( v4 == 108 )
        {
          a2 = 117;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 58:
        if ( v4 == 102 )
        {
          a2 = 118;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 59:
        if ( v4 == 114 )
        {
          a2 = 119;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 60:
        switch ( v4 )
        {
          case 'g':
            a2 = 120;
            goto LABEL_2;
          case 's':
            a2 = 121;
            goto LABEL_2;
          case 't':
            a2 = 122;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 61:
        if ( v4 == 111 )
        {
          a2 = 123;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 62:
        if ( v4 == 103 )
        {
          a2 = 124;
          goto LABEL_2;
        }
        if ( v4 == 122 )
        {
          a2 = 125;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 63:
        if ( v4 == 105 )
        {
          a2 = 126;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 64:
        if ( v4 == 97 )
        {
          a2 = 127;
          goto LABEL_2;
        }
        if ( v4 == 114 )
        {
          a2 = 128;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 65:
        if ( v4 == 105 )
        {
          a2 = 129;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 66:
        if ( v4 == 114 )
        {
          a2 = 130;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 67:
        if ( v4 == 117 )
        {
          a2 = 131;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 68:
        if ( v4 == 112 )
        {
          a2 = 132;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 69:
        if ( v4 == 110 )
        {
          a2 = 133;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 70:
        if ( v4 == 105 )
        {
          a2 = 134;
          goto LABEL_2;
        }
        if ( v4 == 115 )
        {
          a2 = 135;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 71:
        if ( v4 == 105 )
        {
          a2 = 136;
          goto LABEL_2;
        }
        if ( v4 == 108 )
        {
          a2 = 137;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 72:
        if ( v4 == 105 )
        {
          a2 = 138;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 73:
        if ( v4 == 83 )
        {
          a2 = 139;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 74:
        if ( v4 == 76 )
        {
          a2 = 140;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 75:
        if ( v4 == 69 )
        {
          a2 = 141;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 76:
        if ( v4 == 105 )
        {
          a2 = 142;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 77:
        if ( v4 == 111 )
        {
          a2 = 143;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 78:
        if ( v4 == 110 )
        {
          a2 = 144;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 79:
        if ( v4 == 110 )
        {
          a2 = 145;
          goto LABEL_2;
        }
        if ( v4 == 114 )
        {
          a2 = 146;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 80:
        switch ( v4 )
        {
          case 'l':
            a2 = 147;
            goto LABEL_2;
          case 's':
            a2 = 148;
            goto LABEL_2;
          case 't':
            a2 = 149;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 81:
        if ( v4 == 97 )
        {
          a2 = 150;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 82:
        if ( v4 == 100 )
        {
          a2 = 151;
          goto LABEL_2;
        }
        if ( v4 == 108 )
        {
          a2 = 152;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 83:
        if ( v4 == 101 )
        {
          a2 = 153;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 84:
        if ( v4 == 120 )
        {
          a2 = 154;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 85:
        switch ( v4 )
        {
          case 'a':
            a2 = 155;
            goto LABEL_2;
          case 'i':
            a2 = 156;
            goto LABEL_2;
          case 'o':
            a2 = 157;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 86:
        if ( v4 == 110 )
        {
          a2 = 158;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 87:
        if ( v4 == 101 )
        {
          a2 = 159;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 88:
        if ( v4 == 101 )
        {
          a2 = 160;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 89:
        if ( v4 == 112 )
        {
          a2 = 161;
          goto LABEL_2;
        }
        if ( v4 == 116 )
        {
          a2 = 162;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 90:
        if ( v4 == 104 )
        {
          a2 = 163;
          goto LABEL_2;
        }
        if ( v4 == 114 )
        {
          a2 = 164;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 91:
        if ( v4 == 110 )
        {
          a2 = 165;
          goto LABEL_2;
        }
        if ( v4 == 112 )
        {
          a2 = 166;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 92:
        if ( v4 == 101 )
        {
          a2 = 167;
          goto LABEL_2;
        }
        if ( v4 == 111 )
        {
          a2 = 168;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 93:
        if ( v4 == 105 )
        {
          a2 = 169;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 94:
        if ( v4 == 97 )
        {
          a2 = 170;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 95:
        if ( v4 == 103 )
        {
          a2 = 171;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 96:
        *(_WORD *)(a1 + 4) = 135;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 97:
        if ( v4 == 111 )
        {
          a2 = 172;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 98:
        if ( v4 == 108 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 99:
        if ( v4 == 97 )
        {
          a2 = 174;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 100:
        if ( v4 == 101 )
        {
          a2 = 175;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 101:
        if ( v4 == 114 )
        {
          a2 = 176;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 102:
        if ( v4 == 115 )
        {
          a2 = 177;
          goto LABEL_2;
        }
        if ( v4 == 116 )
        {
          a2 = 178;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 103:
        if ( v4 == 97 )
        {
          a2 = 179;
          goto LABEL_2;
        }
        if ( v4 == 105 )
        {
          a2 = 180;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 104:
        if ( v4 == 98 )
        {
          a2 = 181;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 105:
        if ( v4 == 101 )
        {
          a2 = 182;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 106:
        if ( v4 == 109 )
        {
          a2 = 183;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 107:
        if ( v4 == 101 )
        {
          a2 = 184;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 108:
        if ( v4 == 115 )
        {
          a2 = 185;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 109:
        if ( v4 == 97 )
        {
          a2 = 186;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 110:
        *(_WORD *)(a1 + 4) = 105;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 111:
        if ( v4 == 111 )
        {
          a2 = 187;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 112:
        if ( v4 == 105 )
        {
          a2 = 188;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 113:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 93;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        switch ( v4 )
        {
          case '1':
            a2 = 189;
            goto LABEL_2;
          case '3':
            a2 = 190;
            goto LABEL_2;
          case '6':
            a2 = 191;
            goto LABEL_2;
          case '8':
            a2 = 192;
            goto LABEL_2;
          case 'p':
            a2 = 193;
            goto LABEL_2;
        }
        result = 1;
        break;
      case 114:
        if ( v4 == 103 )
        {
          a2 = 194;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 115:
        if ( v4 == 95 )
        {
          a2 = 195;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 116:
        if ( v4 == 101 )
        {
          a2 = 196;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 117:
        if ( v4 == 108 )
        {
          a2 = 197;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 118:
        if ( v4 == 115 )
        {
          a2 = 198;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 119:
        if ( v4 == 100 )
        {
          a2 = 199;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 120:
        if ( v4 == 105 )
        {
          a2 = 200;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 121:
        if ( v4 == 116 )
        {
          a2 = 201;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 122:
        if ( v4 == 117 )
        {
          a2 = 202;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 123:
        if ( v4 == 114 )
        {
          a2 = 203;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 124:
        if ( v4 == 110 )
        {
          a2 = 204;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 125:
        if ( v4 == 101 )
        {
          a2 = 205;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 126:
        if ( v4 == 122 )
        {
          a2 = 206;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 127:
        if ( v4 == 116 )
        {
          a2 = 207;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 128:
        if ( v4 == 117 )
        {
          a2 = 208;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 129:
        if ( v4 == 116 )
        {
          a2 = 209;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 130:
        if ( v4 == 101 )
        {
          a2 = 210;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 131:
        if ( v4 == 101 )
        {
          a2 = 141;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 132:
        if ( v4 == 101 )
        {
          a2 = 211;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 133:
        if ( v4 == 116 )
        {
          a2 = 212;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 134:
        if ( v4 == 111 )
        {
          a2 = 213;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 135:
        if ( v4 == 105 )
        {
          a2 = 214;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 136:
        if ( v4 == 100 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 137:
        if ( v4 == 97 )
        {
          a2 = 215;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 138:
        if ( v4 == 108 )
        {
          a2 = 216;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 139:
        if ( v4 == 69 )
        {
          a2 = 217;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 140:
        *(_WORD *)(a1 + 4) = 158;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 141:
        *(_WORD *)(a1 + 4) = 156;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 142:
        if ( v4 == 103 )
        {
          a2 = 218;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 143:
        if ( v4 == 109 )
        {
          a2 = 219;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 144:
        if ( v4 == 101 )
        {
          a2 = 220;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 145:
        if ( v4 == 110 )
        {
          a2 = 221;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 146:
        if ( v4 == 101 )
        {
          a2 = 222;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 147:
        if ( v4 == 105 )
        {
          a2 = 223;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 148:
        if ( v4 == 109 )
        {
          a2 = 224;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 149:
        if ( v4 == 116 )
        {
          a2 = 225;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 150:
        if ( v4 == 115 )
        {
          a2 = 226;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 151:
        if ( v4 == 101 )
        {
          a2 = 227;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 152:
        if ( v4 == 114 )
        {
          a2 = 228;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 153:
        if ( v4 == 99 )
        {
          a2 = 229;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 154:
        if ( v4 == 99 )
        {
          a2 = 230;
          goto LABEL_2;
        }
        if ( v4 == 116 )
        {
          a2 = 231;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 155:
        if ( v4 == 115 )
        {
          a2 = 232;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 156:
        if ( v4 == 110 )
        {
          a2 = 233;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 157:
        if ( v4 == 114 )
        {
          a2 = 234;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 158:
        if ( v4 == 108 )
        {
          a2 = 235;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 159:
        if ( v4 == 97 )
        {
          a2 = 236;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 160:
        if ( v4 == 115 )
        {
          a2 = 237;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 161:
        if ( v4 == 116 )
        {
          a2 = 238;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 162:
        if ( v4 == 100 )
        {
          a2 = 239;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 163:
        if ( v4 == 105 )
        {
          a2 = 240;
          goto LABEL_2;
        }
        if ( v4 == 114 )
        {
          a2 = 241;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 164:
        if ( v4 == 121 )
        {
          a2 = 242;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 165:
        if ( v4 == 97 )
        {
          a2 = 243;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 166:
        if ( v4 == 116 )
        {
          a2 = 244;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 167:
        if ( v4 == 99 )
        {
          a2 = 245;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 168:
        if ( v4 == 108 )
        {
          a2 = 246;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 169:
        if ( v4 == 103 )
        {
          a2 = 247;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 170:
        if ( v4 == 108 )
        {
          a2 = 248;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 171:
        if ( v4 == 110 )
        {
          a2 = 249;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 172:
        *(_WORD *)(a1 + 4) = 74;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 173:
        *(_WORD *)(a1 + 4) = 93;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 174:
        if ( v4 == 107 )
        {
          a2 = 250;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 175:
        *(_WORD *)(a1 + 4) = 101;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 176:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 93;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        switch ( v4 )
        {
          case '1':
            a2 = 251;
            goto LABEL_2;
          case '3':
            a2 = 252;
            goto LABEL_2;
          case '6':
            a2 = 253;
            goto LABEL_2;
          case '8':
            a2 = 254;
            goto LABEL_2;
          case 'p':
            a2 = 255;
            goto LABEL_2;
        }
        result = 1;
        break;
      case 177:
        if ( v4 == 116 )
        {
          a2 = 256;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 178:
        if ( v4 == 105 )
        {
          a2 = 257;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 179:
        if ( v4 == 117 )
        {
          a2 = 258;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 180:
        if ( v4 == 110 )
        {
          a2 = 259;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 181:
        if ( v4 == 108 )
        {
          a2 = 260;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 182:
        *(_WORD *)(a1 + 4) = 99;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 183:
        *(_WORD *)(a1 + 4) = 94;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 184:
        if ( v4 == 114 )
        {
          a2 = 261;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 185:
        if ( v4 == 101 )
        {
          a2 = 217;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 186:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 187:
        *(_WORD *)(a1 + 4) = 109;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 188:
        if ( v4 == 110 )
        {
          a2 = 262;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 189:
        if ( v4 == 54 )
        {
          a2 = 263;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 190:
        if ( v4 == 50 )
        {
          a2 = 264;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 191:
        if ( v4 == 52 )
        {
          a2 = 265;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 192:
        if ( v4 == 95 )
        {
          a2 = 266;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 193:
        if ( v4 == 116 )
        {
          a2 = 267;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 194:
        *(_WORD *)(a1 + 4) = 68;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 195:
        if ( v4 == 97 )
        {
          a2 = 268;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 196:
        if ( v4 == 116 )
        {
          a2 = 269;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 197:
        if ( v4 == 112 )
        {
          a2 = 270;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 198:
        if ( v4 == 101 )
        {
          a2 = 271;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 199:
        if ( v4 == 105 )
        {
          a2 = 272;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 200:
        if ( v4 == 115 )
        {
          a2 = 273;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 201:
        if ( v4 == 114 )
        {
          a2 = 274;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 202:
        if ( v4 == 114 )
        {
          a2 = 275;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 203:
        if ( v4 == 116 )
        {
          a2 = 276;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 204:
        if ( v4 == 101 )
        {
          a2 = 277;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 205:
        if ( v4 == 95 )
        {
          a2 = 278;
          goto LABEL_2;
        }
        if ( v4 == 111 )
        {
          a2 = 279;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 206:
        if ( v4 == 101 )
        {
          a2 = 280;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 207:
        if ( v4 == 105 )
        {
          a2 = 281;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 208:
        if ( v4 == 99 )
        {
          a2 = 282;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 209:
        if ( v4 == 99 )
        {
          a2 = 283;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 210:
        if ( v4 == 97 )
        {
          a2 = 284;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 211:
        if ( v4 == 100 )
        {
          a2 = 285;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 212:
        switch ( v4 )
        {
          case '1':
            a2 = 286;
            goto LABEL_2;
          case '3':
            a2 = 287;
            goto LABEL_2;
          case '6':
            a2 = 288;
            goto LABEL_2;
          case '8':
            a2 = 289;
            goto LABEL_2;
          case 'p':
            a2 = 290;
            goto LABEL_2;
        }
        result = v7;
        break;
      case 213:
        if ( v4 == 110 )
        {
          a2 = 291;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 214:
        if ( v4 == 103 )
        {
          a2 = 292;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 215:
        if ( v4 == 116 )
        {
          a2 = 293;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 216:
        if ( v4 == 101 )
        {
          a2 = 294;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 217:
        *(_WORD *)(a1 + 4) = 157;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 218:
        if ( v4 == 110 )
        {
          a2 = 295;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 219:
        if ( v4 == 105 )
        {
          a2 = 296;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 220:
        if ( v4 == 114 )
        {
          a2 = 297;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 221:
        if ( v4 == 117 )
        {
          a2 = 298;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 222:
        if ( v4 == 116 )
        {
          a2 = 299;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 223:
        if ( v4 == 103 )
        {
          a2 = 300;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 224:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 137;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 95 )
        {
          a2 = 301;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 225:
        if ( v4 == 114 )
        {
          a2 = 302;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 226:
        if ( v4 == 101 )
        {
          a2 = 303;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 227:
        if ( v4 == 99 )
        {
          a2 = 304;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 228:
        if ( v4 == 99 )
        {
          a2 = 305;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 229:
        if ( v4 == 108 )
        {
          a2 = 306;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 230:
        if ( v4 == 101 )
        {
          a2 = 307;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 231:
        if ( v4 == 101 )
        {
          a2 = 308;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 232:
        if ( v4 == 116 )
        {
          a2 = 309;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 233:
        if ( v4 == 97 )
        {
          a2 = 310;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 234:
        if ( v4 == 99 )
        {
          a2 = 311;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 235:
        if ( v4 == 105 )
        {
          a2 = 312;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 236:
        if ( v4 == 118 )
        {
          a2 = 313;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 237:
        if ( v4 == 116 )
        {
          a2 = 314;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 238:
        if ( v4 == 114 )
        {
          a2 = 315;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 239:
        if ( v4 == 99 )
        {
          a2 = 316;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 240:
        if ( v4 == 115 )
        {
          a2 = 317;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 241:
        if ( v4 == 101 )
        {
          a2 = 318;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 242:
        *(_WORD *)(a1 + 4) = 110;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 243:
        if ( v4 == 108 )
        {
          a2 = 319;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 244:
        if ( v4 == 114 )
        {
          a2 = 320;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 245:
        if ( v4 == 116 )
        {
          a2 = 321;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 246:
        if ( v4 == 97 )
        {
          a2 = 322;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 247:
        if ( v4 == 110 )
        {
          a2 = 323;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 248:
        if ( v4 == 105 )
        {
          a2 = 324;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 249:
        if ( v4 == 97 )
        {
          a2 = 325;
          goto LABEL_2;
        }
        if ( v4 == 111 )
        {
          a2 = 326;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 250:
        *(_WORD *)(a1 + 4) = 107;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 251:
        if ( v4 == 54 )
        {
          a2 = 327;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 252:
        if ( v4 == 50 )
        {
          a2 = 328;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 253:
        if ( v4 == 52 )
        {
          a2 = 329;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 254:
        if ( v4 == 95 )
        {
          a2 = 330;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 255:
        if ( v4 == 116 )
        {
          a2 = 331;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 256:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 82;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 101 )
        {
          a2 = 332;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 257:
        if ( v4 == 110 )
        {
          a2 = 333;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 258:
        if ( v4 == 108 )
        {
          a2 = 334;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 259:
        if ( v4 == 101 )
        {
          a2 = 335;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 260:
        if ( v4 == 101 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 261:
        if ( v4 == 110 )
        {
          a2 = 336;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 262:
        if ( v4 == 101 )
        {
          a2 = 337;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 263:
        if ( v4 == 95 )
        {
          a2 = 338;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 264:
        if ( v4 == 95 )
        {
          a2 = 339;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 265:
        if ( v4 == 95 )
        {
          a2 = 340;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 266:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 267:
        if ( v4 == 114 )
        {
          a2 = 341;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 268:
        if ( v4 == 108 )
        {
          a2 = 342;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 269:
        if ( v4 == 117 )
        {
          a2 = 343;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 270:
        if ( v4 == 116 )
        {
          a2 = 344;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 271:
        if ( v4 == 116 )
        {
          a2 = 345;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 272:
        if ( v4 == 102 )
        {
          a2 = 346;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 273:
        if ( v4 == 116 )
        {
          a2 = 347;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 274:
        if ( v4 == 105 )
        {
          a2 = 348;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 275:
        if ( v4 == 110 )
        {
          a2 = 349;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 276:
        *(_WORD *)(a1 + 4) = 69;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 277:
        if ( v4 == 100 )
        {
          a2 = 350;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 278:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 279:
        if ( v4 == 102 )
        {
          a2 = 351;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 280:
        if ( v4 == 95 )
        {
          a2 = 352;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 281:
        if ( v4 == 99 )
        {
          a2 = 353;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 282:
        if ( v4 == 116 )
        {
          a2 = 354;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 283:
        if ( v4 == 104 )
        {
          a2 = 355;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 284:
        if ( v4 == 100 )
        {
          a2 = 356;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 285:
        if ( v4 == 101 )
        {
          a2 = 357;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 286:
        if ( v4 == 54 )
        {
          a2 = 358;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 287:
        if ( v4 == 50 )
        {
          a2 = 359;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 288:
        if ( v4 == 52 )
        {
          a2 = 360;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 289:
        if ( v4 == 95 )
        {
          a2 = 361;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 290:
        if ( v4 == 116 )
        {
          a2 = 362;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 291:
        *(_WORD *)(a1 + 4) = 97;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 292:
        if ( v4 == 110 )
        {
          a2 = 363;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 293:
        if ( v4 == 105 )
        {
          a2 = 364;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 294:
        *(_WORD *)(a1 + 4) = 103;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 295:
        if ( v4 == 97 )
        {
          a2 = 365;
          goto LABEL_2;
        }
        if ( v4 == 111 )
        {
          a2 = 366;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 296:
        if ( v4 == 99 )
        {
          a2 = 367;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 297:
        if ( v4 == 105 )
        {
          a2 = 368;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 298:
        if ( v4 == 108 )
        {
          a2 = 369;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 299:
        if ( v4 == 117 )
        {
          a2 = 370;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 300:
        if ( v4 == 110 )
        {
          a2 = 371;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 301:
        if ( v4 == 95 )
        {
          a2 = 372;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 302:
        if ( v4 == 105 )
        {
          a2 = 373;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 303:
        if ( v4 == 100 )
        {
          a2 = 374;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 304:
        if ( v4 == 108 )
        {
          a2 = 375;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 305:
        if ( v4 == 97 )
        {
          a2 = 376;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 306:
        if ( v4 == 115 )
        {
          a2 = 377;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 307:
        if ( v4 == 112 )
        {
          a2 = 378;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 308:
        if ( v4 == 110 )
        {
          a2 = 379;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 309:
        if ( v4 == 99 )
        {
          a2 = 380;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 310:
        if ( v4 == 108 )
        {
          a2 = 381;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 311:
        if ( v4 == 101 )
        {
          a2 = 382;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 312:
        if ( v4 == 110 )
        {
          a2 = 383;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 313:
        if ( v4 == 101 )
        {
          a2 = 384;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 314:
        if ( v4 == 114 )
        {
          a2 = 385;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 315:
        *(_WORD *)(a1 + 4) = 61;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 316:
        if ( v4 == 97 )
        {
          a2 = 386;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 317:
        if ( v4 == 99 )
        {
          a2 = 387;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 318:
        if ( v4 == 97 )
        {
          a2 = 388;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 319:
        if ( v4 == 105 )
        {
          a2 = 389;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 320:
        *(_WORD *)(a1 + 4) = 60;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 321:
        if ( v4 == 111 )
        {
          a2 = 390;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 322:
        if ( v4 == 116 )
        {
          a2 = 391;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 323:
        if ( v4 == 111 )
        {
          a2 = 392;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 324:
        if ( v4 == 103 )
        {
          a2 = 393;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 325:
        if ( v4 == 115 )
        {
          a2 = 394;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 326:
        if ( v4 == 102 )
        {
          a2 = 395;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 327:
        if ( v4 == 95 )
        {
          a2 = 396;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 328:
        if ( v4 == 95 )
        {
          a2 = 397;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 329:
        if ( v4 == 95 )
        {
          a2 = 398;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 330:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 331:
        if ( v4 == 114 )
        {
          a2 = 399;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 332:
        if ( v4 == 120 )
        {
          a2 = 400;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 333:
        if ( v4 == 117 )
        {
          a2 = 401;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 334:
        if ( v4 == 116 )
        {
          a2 = 402;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 335:
        if ( v4 == 100 )
        {
          a2 = 403;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 336:
        *(_WORD *)(a1 + 4) = 45;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 337:
        *(_WORD *)(a1 + 4) = 76;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 338:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 339:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 340:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 341:
        if ( v4 == 95 )
        {
          a2 = 404;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 342:
        if ( v4 == 105 )
        {
          a2 = 405;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 343:
        if ( v4 == 114 )
        {
          a2 = 406;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 344:
        if ( v4 == 114 )
        {
          a2 = 407;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 345:
        if ( v4 == 111 )
        {
          a2 = 408;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 346:
        if ( v4 == 102 )
        {
          a2 = 409;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 347:
        if ( v4 == 101 )
        {
          a2 = 410;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 348:
        if ( v4 == 99 )
        {
          a2 = 411;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 349:
        *(_WORD *)(a1 + 4) = 106;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 350:
        *(_WORD *)(a1 + 4) = 66;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 351:
        *(_WORD *)(a1 + 4) = 127;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 352:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 353:
        *(_WORD *)(a1 + 4) = 71;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 354:
        *(_WORD *)(a1 + 4) = 96;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 355:
        *(_WORD *)(a1 + 4) = 100;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 356:
        if ( v4 == 95 )
        {
          a2 = 412;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 357:
        if ( v4 == 102 )
        {
          a2 = 413;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 358:
        if ( v4 == 95 )
        {
          a2 = 414;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 359:
        if ( v4 == 95 )
        {
          a2 = 415;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 360:
        if ( v4 == 95 )
        {
          a2 = 416;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 361:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 362:
        if ( v4 == 114 )
        {
          a2 = 417;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 363:
        if ( v4 == 101 )
        {
          a2 = 418;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 364:
        if ( v4 == 108 )
        {
          a2 = 419;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 365:
        if ( v4 == 115 )
        {
          a2 = 420;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 366:
        if ( v4 == 102 )
        {
          a2 = 421;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 367:
        *(_WORD *)(a1 + 4) = 87;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 368:
        if ( v4 == 99 )
        {
          a2 = 422;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 369:
        if ( v4 == 108 )
        {
          a2 = 423;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 370:
        if ( v4 == 114 )
        {
          a2 = 424;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 371:
        if ( v4 == 111 )
        {
          a2 = 425;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 372:
        *(_WORD *)(a1 + 4) = 136;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 373:
        if ( v4 == 98 )
        {
          a2 = 426;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 374:
        *(_WORD *)(a1 + 4) = 52;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 375:
        *(_WORD *)(a1 + 4) = 53;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 376:
        if ( v4 == 108 )
        {
          a2 = 427;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 377:
        if ( v4 == 112 )
        {
          a2 = 428;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 378:
        if ( v4 == 116 )
        {
          a2 = 429;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 379:
        if ( v4 == 115 )
        {
          a2 = 430;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 380:
        if ( v4 == 97 )
        {
          a2 = 431;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 381:
        if ( v4 == 108 )
        {
          a2 = 432;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 382:
        if ( v4 == 105 )
        {
          a2 = 433;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 383:
        if ( v4 == 101 )
        {
          a2 = 434;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 384:
        *(_WORD *)(a1 + 4) = 113;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 385:
        if ( v4 == 105 )
        {
          a2 = 435;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 386:
        if ( v4 == 108 )
        {
          a2 = 436;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 387:
        if ( v4 == 97 )
        {
          a2 = 437;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 388:
        if ( v4 == 100 )
        {
          a2 = 438;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 389:
        if ( v4 == 103 )
        {
          a2 = 439;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 390:
        if ( v4 == 114 )
        {
          a2 = 440;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 391:
        if ( v4 == 105 )
        {
          a2 = 441;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 392:
        if ( v4 == 102 )
        {
          a2 = 442;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 393:
        if ( v4 == 110 )
        {
          a2 = 443;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 394:
        *(_WORD *)(a1 + 4) = 91;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 395:
        *(_WORD *)(a1 + 4) = 131;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 396:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 397:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 398:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 399:
        if ( v4 == 95 )
        {
          a2 = 444;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 400:
        if ( v4 == 112 )
        {
          a2 = 445;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 401:
        if ( v4 == 101 )
        {
          a2 = 446;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 402:
        *(_WORD *)(a1 + 4) = 102;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 403:
        *(_WORD *)(a1 + 4) = 21;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 404:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 405:
        if ( v4 == 103 )
        {
          a2 = 447;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 406:
        if ( v4 == 110 )
        {
          a2 = 448;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 407:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 159;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 95 )
        {
          a2 = 449;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 408:
        if ( v4 == 102 )
        {
          a2 = 450;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 409:
        if ( v4 == 95 )
        {
          a2 = 451;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 410:
        if ( v4 == 114 )
        {
          a2 = 452;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 411:
        if ( v4 == 116 )
        {
          a2 = 453;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 412:
        if ( v4 == 108 )
        {
          a2 = 454;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 413:
        *(_WORD *)(a1 + 4) = 44;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 414:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 415:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 416:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 417:
        if ( v4 == 95 )
        {
          a2 = 455;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 418:
        if ( v4 == 100 )
        {
          a2 = 456;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 419:
        if ( v4 == 101 )
        {
          a2 = 457;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 420:
        *(_WORD *)(a1 + 4) = 92;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 421:
        *(_WORD *)(a1 + 4) = 132;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 422:
        *(_WORD *)(a1 + 4) = 134;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 423:
        *(_WORD *)(a1 + 4) = 90;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 424:
        if ( v4 == 110 )
        {
          a2 = 458;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 425:
        if ( v4 == 102 )
        {
          a2 = 459;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 426:
        if ( v4 == 117 )
        {
          a2 = 460;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 427:
        if ( v4 == 108 )
        {
          a2 = 461;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 428:
        if ( v4 == 101 )
        {
          a2 = 462;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 429:
        *(_WORD *)(a1 + 4) = 111;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 430:
        if ( v4 == 105 )
        {
          a2 = 463;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 431:
        if ( v4 == 108 )
        {
          a2 = 464;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 432:
        if ( v4 == 121 )
        {
          a2 = 465;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 433:
        if ( v4 == 110 )
        {
          a2 = 466;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 434:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 77;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 95 )
        {
          a2 = 467;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 435:
        if ( v4 == 99 )
        {
          a2 = 468;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 436:
        if ( v4 == 108 )
        {
          a2 = 469;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 437:
        if ( v4 == 108 )
        {
          a2 = 470;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 438:
        *(_WORD *)(a1 + 4) = 81;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 439:
        if ( v4 == 110 )
        {
          a2 = 471;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 440:
        if ( v4 == 99 )
        {
          a2 = 472;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 441:
        if ( v4 == 108 )
        {
          a2 = 473;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 442:
        *(_WORD *)(a1 + 4) = 130;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 443:
        if ( v4 == 101 )
        {
          a2 = 474;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 444:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 445:
        if ( v4 == 114 )
        {
          a2 = 475;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 446:
        *(_WORD *)(a1 + 4) = 108;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 447:
        if ( v4 == 110 )
        {
          a2 = 476;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 448:
        *(_WORD *)(a1 + 4) = 89;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 449:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 450:
        *(_WORD *)(a1 + 4) = 133;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 451:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 452:
        *(_WORD *)(a1 + 4) = 75;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 453:
        *(_WORD *)(a1 + 4) = 85;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 454:
        if ( v4 == 111 )
        {
          a2 = 477;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 455:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 456:
        *(_WORD *)(a1 + 4) = 67;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 457:
        *(_WORD *)(a1 + 4) = 84;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 458:
        *(_WORD *)(a1 + 4) = 88;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 459:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 129;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 95 )
        {
          a2 = 478;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 460:
        if ( v4 == 116 )
        {
          a2 = 479;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 461:
        *(_WORD *)(a1 + 4) = 54;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 462:
        if ( v4 == 99 )
        {
          a2 = 480;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 463:
        if ( v4 == 111 )
        {
          a2 = 481;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 464:
        if ( v4 == 108 )
        {
          a2 = 482;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 465:
        *(_WORD *)(a1 + 4) = 112;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 466:
        if ( v4 == 108 )
        {
          a2 = 483;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 467:
        if ( v4 == 95 )
        {
          a2 = 484;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 468:
        if ( v4 == 116 )
        {
          a2 = 485;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 469:
        *(_WORD *)(a1 + 4) = 55;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 470:
        if ( v4 == 108 )
        {
          a2 = 486;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 471:
        if ( v4 == 101 )
        {
          a2 = 487;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 472:
        if ( v4 == 97 )
        {
          a2 = 488;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 473:
        if ( v4 == 101 )
        {
          a2 = 489;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 474:
        if ( v4 == 100 )
        {
          a2 = 490;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 475:
        *(_WORD *)(a1 + 4) = 83;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 476:
        if ( v4 == 95 )
        {
          a2 = 491;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 477:
        if ( v4 == 99 )
        {
          a2 = 492;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 478:
        if ( v4 == 95 )
        {
          a2 = 493;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 479:
        if ( v4 == 101 )
        {
          a2 = 494;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 480:
        *(_WORD *)(a1 + 4) = 51;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 481:
        if ( v4 == 110 )
        {
          a2 = 495;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 482:
        *(_WORD *)(a1 + 4) = 56;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 483:
        if ( v4 == 105 )
        {
          a2 = 496;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 484:
        *(_WORD *)(a1 + 4) = 78;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 485:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 59;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 95 )
        {
          a2 = 497;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 486:
        *(_WORD *)(a1 + 4) = 57;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 487:
        if ( v4 == 100 )
        {
          a2 = 498;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 488:
        if ( v4 == 108 )
        {
          a2 = 499;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 489:
        if ( v4 == 95 )
        {
          a2 = 500;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 490:
        *(_WORD *)(a1 + 4) = 62;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 491:
        if ( v4 == 116 )
        {
          a2 = 173;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 492:
        if ( v4 == 97 )
        {
          a2 = 501;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 493:
        *(_WORD *)(a1 + 4) = 128;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 494:
        v7 = 1;
        *(_WORD *)(a1 + 4) = 47;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        if ( v4 == 95 )
        {
          a2 = 502;
          goto LABEL_2;
        }
        result = 1;
        break;
      case 495:
        if ( v4 == 95 )
        {
          a2 = 503;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 496:
        if ( v4 == 110 )
        {
          a2 = 504;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 497:
        if ( v4 == 95 )
        {
          a2 = 505;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 498:
        *(_WORD *)(a1 + 4) = 63;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 499:
        if ( v4 == 108 )
        {
          a2 = 506;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 500:
        if ( v4 == 95 )
        {
          a2 = 507;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 501:
        if ( v4 == 108 )
        {
          a2 = 508;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 502:
        if ( v4 == 95 )
        {
          a2 = 509;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 503:
        if ( v4 == 95 )
        {
          a2 = 510;
          goto LABEL_2;
        }
        result = v7;
        break;
      case 504:
        if ( v4 == 101 )
        {
          a2 = 511;
LABEL_2:
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1, v6);
          continue;
        }
        result = v7;
        break;
      case 505:
        *(_WORD *)(a1 + 4) = 86;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 506:
        *(_WORD *)(a1 + 4) = 58;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 507:
        *(_WORD *)(a1 + 4) = 138;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 508:
        *(_WORD *)(a1 + 4) = 80;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 509:
        *(_WORD *)(a1 + 4) = 46;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 510:
        *(_WORD *)(a1 + 4) = 43;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      case 511:
        *(_WORD *)(a1 + 4) = 79;
        (*(void (__fastcall **)(__int64))(a1 + 16))(a1);
        result = 1;
        break;
      default:
        result = 0;
        break;
    }
    return result;
  }
}
