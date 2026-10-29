const char *__fastcall sub_2183E50(__int64 *a1)
{
  bool v1; // zf
  __int64 v2; // rax
  int v3; // eax
  const char *v4; // rbx

  v1 = (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 560))(a1) == 7;
  v2 = *a1;
  if ( v1 )
    v3 = (*(unsigned __int8 (**)(void))(v2 + 536))();
  else
    v3 = (unsigned __int8)((*(unsigned __int16 (**)(void))(v2 + 536))() >> 8);
  switch ( v3 )
  {
    case 20:
      v4 = "sm_20";
      j__strlen("sm_20");
      return v4;
    case 21:
      v4 = "sm_21";
      j__strlen("sm_21");
      return v4;
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 31:
    case 33:
    case 34:
    case 36:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 51:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 71:
    case 73:
    case 74:
    case 76:
    case 77:
    case 78:
    case 79:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 102:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 121:
      v4 = "sm_121";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 8) != 0 )
        v4 = "sm_121a";
      goto LABEL_7;
    case 30:
      v4 = "sm_30";
      j__strlen("sm_30");
      return v4;
    case 32:
      v4 = "sm_32";
      j__strlen("sm_32");
      return v4;
    case 35:
      v4 = "sm_35";
      j__strlen("sm_35");
      return v4;
    case 37:
      v4 = "sm_37";
      j__strlen("sm_37");
      return v4;
    case 50:
      v4 = "sm_50";
      j__strlen("sm_50");
      return v4;
    case 52:
      v4 = "sm_52";
      j__strlen("sm_52");
      return v4;
    case 53:
      v4 = "sm_53";
      j__strlen("sm_53");
      return v4;
    case 60:
      v4 = "sm_60";
      j__strlen("sm_60");
      return v4;
    case 61:
      v4 = "sm_61";
      j__strlen("sm_61");
      return v4;
    case 62:
      v4 = "sm_62";
      j__strlen("sm_62");
      return v4;
    case 70:
      v4 = "sm_70";
      j__strlen("sm_70");
      return v4;
    case 72:
      v4 = "sm_72";
      j__strlen("sm_72");
      return v4;
    case 75:
      v4 = "sm_75";
      j__strlen("sm_75");
      return v4;
    case 80:
      v4 = "sm_80";
      j__strlen("sm_80");
      return v4;
    case 86:
      v4 = "sm_86";
      j__strlen("sm_86");
      return v4;
    case 87:
      v4 = "sm_87";
      j__strlen("sm_87");
      return v4;
    case 88:
      v4 = "sm_88";
      j__strlen("sm_88");
      return v4;
    case 89:
      v4 = "sm_89";
      j__strlen("sm_89");
      return v4;
    case 90:
      v4 = "sm_90";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 0x800) != 0 )
        v4 = "sm_90a";
      goto LABEL_7;
    case 100:
      v4 = "sm_100";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 8) != 0 )
        v4 = "sm_100a";
      goto LABEL_7;
    case 101:
      v4 = "sm_101";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 8) != 0 )
        v4 = "sm_101a";
      goto LABEL_7;
    case 103:
      v4 = "sm_103";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 8) != 0 )
        v4 = "sm_103a";
      goto LABEL_7;
    case 110:
      v4 = "sm_110";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 8) != 0 )
        v4 = "sm_110a";
      goto LABEL_7;
    case 120:
      v4 = "sm_120";
      if ( ((*(__int64 (__fastcall **)(__int64 *))(*a1 + 536))(a1) & 8) != 0 )
        v4 = "sm_120a";
LABEL_7:
      j__strlen(v4);
      return v4;
  }
}
