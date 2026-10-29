__int64 __fastcall sub_7E2410(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // r15
  _QWORD *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rbx
  _WORD *v22; // rsi
  __int64 v23; // rax
  unsigned int *v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // r12
  __int64 v27; // r9
  __int64 v28[8]; // [rsp+10h] [rbp-40h] BYREF

  v6 = *(_WORD *)a2 & 0x1FF;
  v28[4] = v5;
  v28[3] = v4;
  v28[2] = v3;
  v8 = a2;
  switch ( (__int16)v6 )
  {
    case 0:
      return 1;
    case 1:
      return sub_7EB9A0(a1, a2, a3);
    case 2:
      return sub_7EB8C0(a1, a2, a3);
    case 3:
      return sub_7FBAD0(a1, a2, a3);
    case 4:
      return sub_7EB7E0(a1, a2, a3);
    case 5:
      return sub_7F0B00(a1, a2, a3);
    case 6:
      return sub_7EB700(a1, a2, a3);
    case 7:
      return sub_7F7900(a1, a2, a3);
    case 8:
      return sub_7EB620(a1, a2, a3);
    case 9:
      return sub_7EB540(a1, a2, a3);
    case 10:
      return sub_7EB460(a1, a2, a3);
    case 11:
      return sub_7EB380(a1, a2, a3);
    case 12:
      return sub_7EB2A0(a1, a2, a3);
    case 13:
      return sub_7EB1C0(a1, a2, a3);
    case 14:
      return sub_7EB0E0(a1, a2, a3);
    case 15:
      return sub_7FB310(a1, a2, a3);
    case 16:
      return sub_7EFB40(a1, a2, a3);
    case 17:
      return sub_7EB000(a1, a2, a3);
    case 18:
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)(a2 + 16), a3) )
        return 0;
      v19 = (_QWORD *)(a2 + 24);
      v20 = 8LL * *(unsigned __int16 *)(a2 + 4);
      v21 = a2 + v20 + 16;
      if ( v20 == 8 )
        return 1;
      do
      {
        v22 = (_WORD *)*v19;
        if ( (*(_WORD *)*v19 & 0x1FF) == 0x1B )
          v22 = *((_WORD **)v22 + 2);
        if ( !(unsigned __int8)sub_7E3C00(a1, v22, a3) )
          return 0;
        ++v19;
      }
      while ( (_QWORD *)v21 != v19 );
      return 1;
    case 19:
      return sub_7EAF20(a1, a2, a3);
    case 20:
      return sub_7EAE40(a1, a2, a3);
    case 21:
      return sub_7EAD60(a1, a2, a3);
    case 22:
      return sub_7EAC80(a1, a2, a3);
    case 23:
      return sub_7EABA0(a1, a2, a3);
    case 24:
      return sub_7EF800(a1, a2, a3);
    case 25:
      return sub_7EF650(a1, a2, a3);
    case 26:
      return sub_7EAAC0(a1, a2, a3);
    case 27:
      return sub_7EA9E0(a1, a2, a3);
    case 28:
      return sub_7FB070(a1, a2, a3);
    case 29:
      return sub_7EA900(a1, a2, a3);
    case 30:
      return sub_7EA820(a1, a2, a3);
    case 31:
      return sub_7EA740(a1, a2, a3);
    case 32:
      return sub_7EA660(a1, a2, a3);
    case 33:
      return sub_7F09B0(a1, a2, a3);
    case 34:
      return sub_7F0890(a1, a2, a3);
    case 35:
      return sub_7EA580(a1, a2, a3);
    case 36:
      return sub_7EA4A0(a1, a2, a3);
    case 37:
      return sub_7EA3C0(a1, a2, a3);
    case 38:
      return sub_7F0770(a1, a2, a3);
    case 39:
      return sub_7EA2E0(a1, a2, a3);
    case 40:
      return sub_7EA200(a1, a2, a3);
    case 41:
      return sub_7EA120(a1, a2, a3);
    case 42:
      return sub_7EA040(a1, a2, a3);
    case 43:
      return sub_7E9F60(a1, a2, a3);
    case 44:
      return sub_7E9E80(a1, a2, a3);
    case 45:
      return sub_7E9DA0(a1, a2, a3);
    case 46:
      return sub_7E9CC0(a1, a2, a3);
    case 47:
      return sub_7F1130(a1, a2, a3);
    case 48:
      return sub_7E9BE0(a1, a2, a3);
    case 49:
      return sub_7F3390(a1, a2, a3);
    case 50:
      return sub_7E9B00(a1, a2, a3);
    case 51:
      return sub_7EF410(a1, a2, a3);
    case 52:
      v13 = *(unsigned __int16 *)(a2 + 4);
      if ( !*(_WORD *)(a2 + 4) )
        goto LABEL_285;
      v14 = 0;
      break;
    case 53:
      return sub_7E9A20(a1, a2, a3);
    case 54:
      v12 = *(_QWORD *)(a2 + 48);
      if ( (v12 & 4) == 0 )
        goto LABEL_281;
      if ( v12 <= 7 )
        return sub_7E9920(a1, a2, a3);
      a2 = v12 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_281:
      if ( !(unsigned __int8)sub_7E9920(a1, a2, a3) )
        return 0;
      if ( (*(_QWORD *)(v8 + 48) & 4) == 0 )
        v8 = *(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF8LL;
      return sub_7E9920(a1, v8, a3);
    case 55:
      return sub_7E9840(a1, a2, a3);
    case 56:
      return sub_7E9760(a1, a2, a3);
    case 57:
      return sub_7E9680(a1, a2, a3);
    case 58:
      return sub_7F8000(a1, a2, a3);
    case 59:
      return sub_7E95A0(a1, a2, a3);
    case 60:
      return sub_7E94C0(a1, a2, a3);
    case 61:
      return sub_7E93E0(a1, a2, a3);
    case 62:
      return sub_7E9300(a1, a2, a3);
    case 63:
      return sub_7E9220(a1, a2, a3);
    case 64:
      return sub_7E9140(a1, a2, a3);
    case 65:
      return sub_7E9060(a1, a2, a3);
    case 66:
      return sub_7E8F50(a1, a2, a3);
    case 67:
      return sub_7E8CC0(a1, a2, a3);
    case 68:
      return sub_7E8BE0(a1, a2, a3);
    case 69:
      return sub_7E8B00(a1, a2, a3);
    case 70:
      return sub_7F1300(a1, a2, a3);
    case 71:
      return sub_7E8A20(a1, a2, a3);
    case 72:
      return sub_7F1490(a1, a2, a3);
    case 73:
      return sub_7E8940(a1, a2, a3);
    case 74:
      return sub_7E8860(a1, a2, a3);
    case 75:
      return sub_7E8780(a1, a2, a3);
    case 76:
      return sub_7F1C30(a1, a2, a3);
    case 77:
      return sub_7FB840(a1, a2, a3);
    case 78:
      return sub_7E86A0(a1, a2, a3);
    case 79:
      return sub_7E85C0(a1, a2, a3);
    case 80:
      return sub_7E84E0(a1, a2, a3);
    case 81:
      return sub_7FADD0(a1, a2, a3);
    case 82:
      return sub_7FAB30(a1, a2, a3);
    case 83:
      return sub_7FA890(a1, a2, a3);
    case 84:
      return sub_7FA5F0(a1, a2, a3);
    case 85:
      return sub_7FA350(a1, a2, a3);
    case 86:
      return sub_7FA0B0(a1, a2, a3);
    case 87:
      return sub_7F9E10(a1, a2, a3);
    case 88:
      return sub_7F9B70(a1, a2, a3);
    case 89:
      return sub_7F98D0(a1, a2, a3);
    case 90:
      return sub_7E8400(a1, a2, a3);
    case 91:
      return sub_7E8320(a1, a2, a3);
    case 92:
      return sub_7E8240(a1, a2, a3);
    case 93:
      return sub_7E8160(a1, a2, a3);
    case 94:
      return sub_7E8080(a1, a2, a3);
    case 95:
      return sub_7F0070(a1, a2, a3);
    case 96:
      return sub_7FB5B0(a1, a2, a3);
    case 97:
      return sub_7EFF50(a1, a2, a3);
    case 98:
      return sub_7E7FA0(a1, a2, a3);
    case 99:
      return sub_7E7EC0(a1, a2, a3);
    case 100:
      return sub_7E7DE0(a1, a2, a3);
    case 101:
      return sub_7F9630(a1, a2, a3);
    case 102:
      return sub_7E7D00(a1, a2, a3);
    case 103:
      return sub_7EFDD0(a1, a2, a3);
    case 104:
      return sub_7E7C20(a1, a2, a3);
    case 105:
      return sub_7E7B40(a1, a2, a3);
    case 106:
      return sub_7E7A60(a1, a2, a3);
    case 107:
      return sub_7F9390(a1, a2, a3);
    case 108:
      return sub_7E7980(a1, a2, a3);
    case 109:
      return sub_7E78A0(a1, a2, a3);
    case 110:
      return sub_7F1660(a1, a2, a3);
    case 111:
      return sub_7E77C0(a1, a2, a3);
    case 112:
      return sub_7EDE20(a1, a2, a3);
    case 113:
      return sub_7EDD10(a1, a2, a3);
    case 114:
      return sub_7E76E0(a1, a2, a3);
    case 115:
      return sub_7F90F0(a1, a2, a3);
    case 116:
      return sub_7E7600(a1, a2, a3);
    case 117:
      return sub_7E7520(a1, a2, a3);
    case 118:
      goto LABEL_3;
    case 119:
      return sub_7E7440(a1, a2, a3);
    case 120:
      return sub_7E7360(a1, a2, a3);
    case 121:
      return sub_7E7280(a1, a2, a3);
    case 122:
      return sub_7E71A0(a1, a2, a3);
    case 123:
      return sub_7F8E50(a1, a2, a3);
    case 124:
      return sub_7E70C0(a1, a2, a3);
    case 125:
      return sub_7E6FE0(a1, a2, a3);
    case 126:
      return sub_7E6ED0(a1, a2, a3);
    case 127:
      return sub_7E6DF0(a1, a2, a3);
    case 128:
      return sub_7E6D10(a1, a2, a3);
    case 129:
      return sub_7E6C30(a1, a2, a3);
    case 130:
      return sub_7E6B50(a1, a2, a3);
    case 131:
      return sub_7E6A70(a1, a2, a3);
    case 132:
      return sub_7E6990(a1, a2, a3);
    case 133:
      return sub_7E68B0(a1, a2, a3);
    case 134:
      return sub_7E67D0(a1, a2, a3);
    case 135:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 8)) )
        return 0;
LABEL_3:
      v9 = *(_QWORD *)(a2 + 16);
      goto LABEL_4;
    case 136:
      return sub_7E66F0(a1, a2, a3);
    case 137:
      return sub_7E6610(a1, a2, a3);
    case 138:
      return sub_7E6530(a1, a2, a3);
    case 139:
      return sub_7E6450(a1, a2, a3);
    case 140:
      return sub_7E6370(a1, a2, a3);
    case 141:
      return sub_7EDB90(a1, a2, a3);
    case 142:
      return sub_7EDA60(a1, a2, a3);
    case 143:
      return sub_7ED930(a1, a2, a3);
    case 144:
      return sub_7ED800(a1, a2, a3);
    case 145:
      return sub_7ED6D0(a1, a2, a3);
    case 146:
      return sub_7ED5A0(a1, a2, a3);
    case 147:
      return sub_7ED470(a1, a2, a3);
    case 148:
      return sub_7ED330(a1, a2, a3);
    case 149:
      return sub_7FC9A0(a1, a2, a3);
    case 150:
      return sub_7FC860(a1, a2, a3);
    case 151:
      return sub_7FC720(a1, a2, a3);
    case 152:
      return sub_7FC5E0(a1, a2, a3);
    case 153:
      return sub_7E6290(a1, a2, a3);
    case 154:
      return sub_7E61B0(a1, a2, a3);
    case 155:
      return sub_7E60D0(a1, a2, a3);
    case 156:
      return sub_7E5FF0(a1, a2, a3);
    case 157:
      return sub_7E5F10(a1, a2, a3);
    case 158:
      return sub_7E5E30(a1, a2, a3);
    case 159:
      return sub_7E5D50(a1, a2, a3);
    case 160:
      return sub_803A60(a1, a2, a3);
    case 161:
      return sub_803930(a1, a2, a3);
    case 162:
      return sub_803800(a1, a2, a3);
    case 163:
      return sub_8036D0(a1, a2, a3);
    case 164:
      return sub_8035A0(a1, a2, a3);
    case 165:
      return sub_803470(a1, a2, a3);
    case 166:
      return sub_803340(a1, a2, a3);
    case 167:
      return sub_803210(a1, a2, a3);
    case 168:
      return sub_8030E0(a1, a2, a3);
    case 169:
      return sub_802FB0(a1, a2, a3);
    case 170:
      return sub_802E80(a1, a2, a3);
    case 171:
      return sub_802D50(a1, a2, a3);
    case 172:
      return sub_802C20(a1, a2, a3);
    case 173:
      return sub_802AF0(a1, a2, a3);
    case 174:
      return sub_8029C0(a1, a2, a3);
    case 175:
      return sub_802890(a1, a2, a3);
    case 176:
      return sub_802760(a1, a2, a3);
    case 177:
      return sub_802630(a1, a2, a3);
    case 178:
      return sub_802500(a1, a2, a3);
    case 179:
      return sub_8023D0(a1, a2, a3);
    case 180:
      return sub_8022A0(a1, a2, a3);
    case 181:
      return sub_802170(a1, a2, a3);
    case 182:
      return sub_802040(a1, a2, a3);
    case 183:
      return sub_801F10(a1, a2, a3);
    case 184:
      return sub_801DE0(a1, a2, a3);
    case 185:
      return sub_801CB0(a1, a2, a3);
    case 186:
      return sub_801B80(a1, a2, a3);
    case 187:
      return sub_801A50(a1, a2, a3);
    case 188:
      return sub_801920(a1, a2, a3);
    case 189:
      return sub_8017F0(a1, a2, a3);
    case 190:
      return sub_8016C0(a1, a2, a3);
    case 191:
      return sub_801590(a1, a2, a3);
    case 192:
      return sub_801460(a1, a2, a3);
    case 193:
      return sub_801330(a1, a2, a3);
    case 194:
      return sub_801200(a1, a2, a3);
    case 195:
      return sub_8010D0(a1, a2, a3);
    case 196:
      return sub_800FA0(a1, a2, a3);
    case 197:
      return sub_800E70(a1, a2, a3);
    case 198:
      return sub_800D40(a1, a2, a3);
    case 199:
      return sub_800C10(a1, a2, a3);
    case 200:
      return sub_800AE0(a1, a2, a3);
    case 201:
      return sub_8009B0(a1, a2, a3);
    case 202:
      return sub_800880(a1, a2, a3);
    case 203:
      return sub_800750(a1, a2, a3);
    case 204:
      return sub_800620(a1, a2, a3);
    case 205:
      return sub_8004F0(a1, a2, a3);
    case 206:
      return sub_8003C0(a1, a2, a3);
    case 207:
      return sub_800290(a1, a2, a3);
    case 208:
      return sub_800160(a1, a2, a3);
    case 209:
      return sub_800030(a1, a2, a3);
    case 210:
      return sub_7FFF00(a1, a2, a3);
    case 211:
      return sub_7FFDD0(a1, a2, a3);
    case 212:
      return sub_7FFCA0(a1, a2, a3);
    case 213:
      return sub_7FFB70(a1, a2, a3);
    case 214:
      return sub_7FFA40(a1, a2, a3);
    case 215:
      return sub_7FF910(a1, a2, a3);
    case 216:
      return sub_7FF7E0(a1, a2, a3);
    case 217:
      return sub_7FF6B0(a1, a2, a3);
    case 218:
      return sub_7FF580(a1, a2, a3);
    case 219:
      return sub_7FF450(a1, a2, a3);
    case 220:
      return sub_7FF320(a1, a2, a3);
    case 221:
      return sub_7FF1F0(a1, a2, a3);
    case 222:
      return sub_7FF0C0(a1, a2, a3);
    case 223:
      return sub_7FEF90(a1, a2, a3);
    case 224:
      return sub_7FEE60(a1, a2, a3);
    case 225:
      return sub_7FED30(a1, a2, a3);
    case 226:
      return sub_7FEC00(a1, a2, a3);
    case 227:
      return sub_7FEAD0(a1, a2, a3);
    case 228:
      return sub_7FE9A0(a1, a2, a3);
    case 229:
      return sub_7FE270(a1, a2, a3);
    case 230:
      return sub_7FE870(a1, a2, a3);
    case 231:
      return sub_7FE740(a1, a2, a3);
    case 232:
      return sub_7FE610(a1, a2, a3);
    case 233:
      return sub_7FE4E0(a1, a2, a3);
    case 234:
      return sub_7FE3B0(a1, a2, a3);
    case 235:
      return sub_7E5C70(a1, a2, a3);
    case 236:
      return sub_7E5B90(a1, a2, a3);
    case 237:
      return sub_7F1A70(a1, a2, a3);
    case 238:
      return sub_7E5AB0(a1, a2, a3);
    case 239:
      return sub_7E59D0(a1, a2, a3);
    case 240:
      return sub_7E58F0(a1, a2, a3);
    case 241:
      return sub_7E5810(a1, a2, a3);
    case 242:
      return sub_7E5730(a1, a2, a3);
    case 243:
      v23 = *(_QWORD *)(a2 + 8);
      if ( (v23 & 1) != 0 )
      {
        v24 = (unsigned int *)(v23 & 0xFFFFFFFFFFFFFFFELL);
        v25 = (__int64 *)(v24 + 2);
        v26 = (__int64)&v24[2 * *v24 + 2];
      }
      else
      {
        v26 = a2 + 16;
        v25 = (__int64 *)(a2 + 8);
        if ( !v23 )
          return 1;
      }
      if ( v25 == (__int64 *)v26 )
        return 1;
      while ( 1 )
      {
        v27 = *a1;
        v28[0] = *v25;
        if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v28[0], v28[0], v28, a1, v27) )
          break;
        if ( (__int64 *)v26 == ++v25 )
          return 1;
      }
      return 0;
    case 244:
      return sub_7E5650(a1, a2, a3);
    case 245:
      return sub_7E5570(a1, a2, a3);
    case 246:
      return sub_7E5490(a1, a2, a3);
    case 247:
      return sub_7E53B0(a1, a2, a3);
    case 248:
      return sub_7E5280(a1, a2, a3);
    case 249:
      return sub_7E51A0(a1, a2, a3);
    case 250:
      return sub_7E50C0(a1, a2, a3);
    case 251:
      return sub_7E4FA0(a1, a2, a3);
    case 252:
      return sub_7E4EC0(a1, a2, a3);
    case 253:
      return sub_7E4DE0(a1, a2, a3);
    case 254:
      return sub_7E4C20(a1, a2, a3);
    default:
      return 1;
  }
  do
  {
    v16 = sub_8C5580(a2);
    v17 = *(_QWORD *)(a2 + 8 * v14 + 32);
    v18 = (_QWORD *)(v16 + 16 * v14);
    if ( (unsigned __int8)sub_8C54E0(a2, v18) )
    {
      v15 = *a1;
      v28[0] = *v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v28[0], v28[0], v28, a1, v15) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_7EBA80(a1, v17) )
    {
      return 0;
    }
    ++v14;
  }
  while ( v13 != (_DWORD)v14 );
LABEL_285:
  v9 = sub_8C58C0(a2);
LABEL_4:
  v10 = *a1;
  v28[0] = v9;
  return sub_7E09C0((__int64)a1, v9, v9, v28, a1, v10);
}

