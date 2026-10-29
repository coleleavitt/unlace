__int64 __fastcall sub_1C9AFD0(
        __int64 *a1,
        _WORD *a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128i a6,
        __m128i a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  int v21; // [rsp+0h] [rbp-Ch]

  result = (__int64)a2;
  if ( a2 )
  {
    v15 = *a2 & 0x1FF;
    switch ( (__int16)v15 )
    {
      case 1:
        result = sub_1C9C4D0();
        break;
      case 2:
        result = sub_1C9C810();
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
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
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
      case 128:
      case 129:
        v21 = a3;
        v16 = (__int64)sub_1C7CFE0(a1, (unsigned __int64)a2, a4, a5, a3, (unsigned __int16)v15, a13);
        v20 = v21;
        if ( v21 == 2 )
        {
          v16 = sub_190AD40(*a1, v16, (__m128i)a4, a5, 2, v17, v18, v19);
          v20 = 2;
        }
        result = sub_1C36190(*a1, v16, v20 == 0, v17, v18, a4, a5);
        break;
      case 130:
        result = sub_1C9C880();
        break;
      case 131:
        result = sub_1C9CA10();
        break;
      case 132:
        result = sub_1C9CB40();
        break;
      case 133:
        result = sub_1C9CB90();
        break;
      case 134:
        sub_2EA9FE((__int64)a1, (__int64)a2, a3, (unsigned __int16)v15);
      case 135:
        result = sub_1CA12E0();
        break;
      case 136:
        result = sub_1C73560((__int64)a2);
        break;
      case 137:
        result = sub_1CA1240();
        break;
      case 138:
        result = sub_1CA1280();
        break;
      case 139:
        result = sub_1C7DD90(a1, (__int64)a2, a4, a5, a3, (unsigned __int16)v15, a13, a14);
        break;
      case 140:
        result = sub_1C81FC0(a1, (__int64)a2, a4, a5);
        break;
      case 141:
        result = sub_1C81AE0(a1, (__int64)a2, a4, a5);
        break;
      case 142:
        result = sub_1C81BB0(a1, (__int64)a2, a4, a5);
        break;
      case 143:
        result = sub_1C81C80(a1, (__int64)a2, a4, a5);
        break;
      case 144:
        result = sub_1C81D50(a1, (__int64)a2, a4, a5);
        break;
      case 145:
        result = sub_1C81E20(a1, (__int64)a2, a4, a5);
        break;
      case 146:
        result = sub_1C81EF0(a1, (__int64)a2, a4, a5);
        break;
      case 147:
        result = sub_1C82330(a1, (__int64)a2, a4, a5);
        break;
      case 148:
        result = sub_1C9CCE0();
        break;
      case 149:
        result = sub_1C9CE30();
        break;
      case 150:
        result = sub_1C9CF80();
        break;
      case 151:
        result = sub_1C9D0D0();
        break;
      case 152:
        result = sub_1C9D220();
        break;
      case 153:
        result = sub_1C9D370();
        break;
      case 154:
        result = sub_1C9D4C0();
        break;
      case 155:
        result = sub_1C9D570();
        break;
      case 156:
        result = sub_1C9D5C0();
        break;
      case 157:
        result = sub_1C82480(a1, (__int64)a2, a4, a5, a3, (unsigned __int16)v15, a13);
        break;
      case 158:
        result = sub_1C9D770();
        break;
      case 159:
        result = sub_1C9D800();
        break;
      case 160:
        result = sub_1C9D850();
        break;
      case 161:
        result = sub_1C9DD40();
        break;
      case 162:
        result = sub_1C9DDB0();
        break;
      case 163:
        result = sub_1C9DE20();
        break;
      case 164:
        result = sub_1C9DE90();
        break;
      case 165:
        result = sub_1C9DF00();
        break;
      case 166:
        result = sub_1C9DF70();
        break;
      case 167:
        result = sub_1C9DFE0();
        break;
      case 168:
        result = sub_1C9E050();
        break;
      case 169:
        result = sub_1C9E0C0();
        break;
      case 170:
        result = sub_1C9E130();
        break;
      case 171:
        result = sub_1C9E1A0();
        break;
      case 172:
        result = sub_1C9E210();
        break;
      case 173:
        result = sub_1C9E280();
        break;
      case 174:
        result = sub_1C9E2F0();
        break;
      case 175:
        result = sub_1C9E360();
        break;
      case 176:
        result = sub_1C9E3D0();
        break;
      case 177:
        result = sub_1C9E440();
        break;
      case 178:
        result = sub_1C9E4B0();
        break;
      case 179:
        result = sub_1C9E520();
        break;
      case 180:
        result = sub_1C9E590();
        break;
      case 181:
        result = sub_1C9E600();
        break;
      case 182:
        result = sub_1C9E670();
        break;
      case 183:
        result = sub_1C9E6E0();
        break;
      case 184:
        result = sub_1C744B0((__int64)a1, (__int64)a2);
        break;
      case 185:
        result = sub_1C9E750();
        break;
      case 186:
        result = sub_1C9E7C0();
        break;
      case 187:
        result = sub_1C9E830();
        break;
      case 188:
        result = sub_1C9E8A0();
        break;
      case 189:
        result = sub_1C9E910();
        break;
      case 190:
        result = sub_1C9E980();
        break;
      case 191:
        result = sub_1C9E9F0();
        break;
      case 192:
        result = sub_1C9EA60();
        break;
      case 193:
        result = sub_1C9EAD0();
        break;
      case 194:
        result = sub_1C9EB40();
        break;
      case 195:
        result = sub_1C9EBB0();
        break;
      case 196:
        result = sub_1C9EC20();
        break;
      case 197:
        result = sub_1C9EC90();
        break;
      case 198:
        result = sub_1C9ED00();
        break;
      case 199:
        result = sub_1C9ED70();
        break;
      case 200:
        result = sub_1C9EDE0();
        break;
      case 201:
        result = sub_1C9EE50();
        break;
      case 202:
        result = sub_1C9EEC0();
        break;
      case 203:
        result = sub_1C9EF30();
        break;
      case 204:
        result = sub_1C9EFA0();
        break;
      case 205:
        result = sub_1C9F010();
        break;
      case 206:
        result = sub_1C9F080();
        break;
      case 207:
        result = sub_1C9F0F0();
        break;
      case 208:
        result = sub_1C9F160();
        break;
      case 209:
        result = sub_1C9F1D0();
        break;
      case 210:
        result = sub_1C9F240();
        break;
      case 211:
        result = sub_1C9F2B0();
        break;
      case 212:
        result = sub_1C9F320();
        break;
      case 213:
        result = sub_1C9F390();
        break;
      case 214:
        result = sub_1C9F400();
        break;
      case 215:
        result = sub_1C9F470();
        break;
      case 216:
        result = sub_1C9F4E0();
        break;
      case 217:
        result = sub_1C9F550();
        break;
      case 218:
        result = sub_1C9F5C0();
        break;
      case 219:
        result = sub_1C9F630();
        break;
      case 220:
        result = sub_1C9F6A0();
        break;
      case 221:
        result = sub_1C9F710();
        break;
      case 222:
        result = sub_1C9F780();
        break;
      case 223:
        result = sub_1C9F7F0();
        break;
      case 224:
        result = sub_1C9F860();
        break;
      case 225:
        result = sub_1C9F8D0();
        break;
      case 226:
        result = sub_1C9F940();
        break;
      case 227:
        result = sub_1C9F9B0();
        break;
      case 228:
        result = sub_1C9FA20();
        break;
      case 229:
        result = sub_1C9FA90();
        break;
      case 230:
        result = sub_1C9FB00();
        break;
      case 231:
        result = sub_1C9FB70();
        break;
      case 232:
        result = sub_1C9FBE0();
        break;
      case 233:
        result = sub_1C9FC50();
        break;
      case 234:
        result = sub_1C9FCC0();
        break;
      case 235:
        result = sub_1C9FD30();
        break;
      case 236:
        result = sub_1C9FDA0();
        break;
      case 237:
        result = sub_1CA00F0();
        break;
      case 238:
        result = sub_1C73570((__int64)a2);
        break;
      case 239:
        result = sub_1CA1360();
        break;
      case 240:
        result = sub_1C854A0(a1, (__int64)a2, a3, (unsigned __int16)v15, a13, a4, a5);
        break;
      case 241:
        result = sub_1CA0100();
        break;
      case 242:
        result = sub_1C7B7A0((__int64)a1, (__int64)a2);
        break;
      case 243:
        result = sub_1CA0670();
        break;
      case 244:
        result = sub_1CA0920();
        break;
      case 245:
        result = sub_1C7B320(a1, (__int64)a2, a3, (unsigned __int16)v15, a13, a14, a4);
        break;
      case 246:
        result = sub_1CA0BD0();
        break;
      case 247:
        result = sub_1C7DDE0(a1, (__int64)a2, a4, a5, a3, (unsigned __int16)v15, a13, a14);
        break;
      case 248:
        result = sub_1C73580((__int64)a2);
        break;
      case 249:
        result = sub_1CA1230();
        break;
      case 250:
        result = sub_1CA1630();
        break;
      case 251:
        result = sub_1CA1AA0();
        break;
      case 252:
        result = sub_1C9B570();
        break;
      case 253:
        result = sub_1CA1960();
        break;
      case 254:
        result = sub_1C73590((__int64)a2);
        break;
      case 255:
        result = sub_1C85500(a1, (__int64)a2, a4, a5, a3, (unsigned __int16)v15, a13);
        break;
      case 256:
        result = sub_1C9A860(a1, (__int64)a2, a4, a5, a6, a7, a8, a9, a10, a11, a3, (unsigned __int16)v15, a13);
        break;
      default:
        return result;
    }
  }
  return result;
}
