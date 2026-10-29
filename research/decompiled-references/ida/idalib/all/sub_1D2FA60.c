__int64 __fastcall sub_1D2FA60(
        __int64 *a1,
        unsigned __int16 *a2,
        void *a3,
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
        result = sub_1D30F60();
        break;
      case 2:
        result = sub_1D31180();
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
        v21 = (int)a3;
        v16 = sub_1D11200(a1, a2, a4, a5, (__int64)a3, (unsigned __int16)v15, a13);
        v20 = v21;
        if ( v21 == 2 )
        {
          v16 = sub_190AD40(*a1, v16, (__m128i)a4, a5, 2, v17, v18, v19);
          v20 = 2;
        }
        result = sub_1C36190(*a1, v16, v20 == 0, v17, v18, a4, a5);
        break;
      case 130:
        result = sub_1D311F0();
        break;
      case 131:
        result = sub_1D31380();
        break;
      case 132:
        result = sub_1D314B0();
        break;
      case 133:
        result = sub_1D31500();
        break;
      case 134:
        JUMPOUT(0x2EABBE);
      case 135:
        result = sub_1D30C20();
        break;
      case 136:
        result = sub_1CB01B0((__int64)a2);
        break;
      case 137:
        result = sub_1D30B80();
        break;
      case 138:
        result = sub_1D30BC0();
        break;
      case 139:
        result = sub_1D11CF0(a1, (__int64)a2, a4, a5, (__int64)a3, (unsigned __int16)v15, a13, a14);
        break;
      case 140:
        result = sub_1D1ED50(a1, (__int64)a2, a4, a5);
        break;
      case 141:
        result = sub_1D1E870(a1, (__int64)a2, a4, a5);
        break;
      case 142:
        result = sub_1D1E940(a1, (__int64)a2, a4, a5);
        break;
      case 143:
        result = sub_1D1EA10(a1, (__int64)a2, a4, a5);
        break;
      case 144:
        result = sub_1D1EAE0(a1, (__int64)a2, a4, a5);
        break;
      case 145:
        result = sub_1D1EBB0(a1, (__int64)a2, a4, a5);
        break;
      case 146:
        result = sub_1D1EC80(a1, (__int64)a2, a4, a5);
        break;
      case 147:
        result = sub_1D129B0(a1, (__int64)a2, a4, a5);
        break;
      case 148:
        result = sub_1D31650();
        break;
      case 149:
        result = sub_1D317A0();
        break;
      case 150:
        result = sub_1D318F0();
        break;
      case 151:
        result = sub_1D31A40();
        break;
      case 152:
        result = sub_1D31B90();
        break;
      case 153:
        result = sub_1D31CE0();
        break;
      case 154:
        result = sub_1D31E30();
        break;
      case 155:
        result = sub_1D31F10();
        break;
      case 156:
        result = sub_1D31F70();
        break;
      case 157:
        result = sub_1D12B00(a1, (__int64)a2, a4, a5, (__int64)a3, (unsigned __int16)v15, a13);
        break;
      case 158:
        result = sub_1D32150();
        break;
      case 159:
        result = sub_1D32200();
        break;
      case 160:
        result = sub_1D32260();
        break;
      case 161:
        result = sub_1D32750();
        break;
      case 162:
        result = sub_1D327C0();
        break;
      case 163:
        result = sub_1D32830();
        break;
      case 164:
        result = sub_1D328A0();
        break;
      case 165:
        result = sub_1D32910();
        break;
      case 166:
        result = sub_1D32980();
        break;
      case 167:
        result = sub_1D329F0();
        break;
      case 168:
        result = sub_1D32A60();
        break;
      case 169:
        result = sub_1D32AD0();
        break;
      case 170:
        result = sub_1D32B40();
        break;
      case 171:
        result = sub_1D32BB0();
        break;
      case 172:
        result = sub_1D32C20();
        break;
      case 173:
        result = sub_1D32C90();
        break;
      case 174:
        result = sub_1D32D00();
        break;
      case 175:
        result = sub_1D32D70();
        break;
      case 176:
        result = sub_1D32DE0();
        break;
      case 177:
        result = sub_1D32E50();
        break;
      case 178:
        result = sub_1D32EC0();
        break;
      case 179:
        result = sub_1D32F30();
        break;
      case 180:
        result = sub_1D32FA0();
        break;
      case 181:
        result = sub_1D33010();
        break;
      case 182:
        result = sub_1D33080();
        break;
      case 183:
        result = sub_1D330F0();
        break;
      case 184:
        result = sub_1CBDE80((__int64)a1, (__int64)a2);
        break;
      case 185:
        result = sub_1D33160();
        break;
      case 186:
        result = sub_1D331D0();
        break;
      case 187:
        result = sub_1D33240();
        break;
      case 188:
        result = sub_1D332B0();
        break;
      case 189:
        result = sub_1D33320();
        break;
      case 190:
        result = sub_1D33390();
        break;
      case 191:
        result = sub_1D33400();
        break;
      case 192:
        result = sub_1D33470();
        break;
      case 193:
        result = sub_1D334E0();
        break;
      case 194:
        result = sub_1D33550();
        break;
      case 195:
        result = sub_1D335C0();
        break;
      case 196:
        result = sub_1D33630();
        break;
      case 197:
        result = sub_1D336A0();
        break;
      case 198:
        result = sub_1D33710();
        break;
      case 199:
        result = sub_1D33780();
        break;
      case 200:
        result = sub_1D337F0();
        break;
      case 201:
        result = sub_1D33860();
        break;
      case 202:
        result = sub_1D338D0();
        break;
      case 203:
        result = sub_1D33940();
        break;
      case 204:
        result = sub_1D339B0();
        break;
      case 205:
        result = sub_1D33A20();
        break;
      case 206:
        result = sub_1D33A90();
        break;
      case 207:
        result = sub_1D33B00();
        break;
      case 208:
        result = sub_1D33B70();
        break;
      case 209:
        result = sub_1D33BE0();
        break;
      case 210:
        result = sub_1D33C50();
        break;
      case 211:
        result = sub_1D33CC0();
        break;
      case 212:
        result = sub_1D33D30();
        break;
      case 213:
        result = sub_1D33DA0();
        break;
      case 214:
        result = sub_1D33E10();
        break;
      case 215:
        result = sub_1D33E80();
        break;
      case 216:
        result = sub_1D33EF0();
        break;
      case 217:
        result = sub_1D33F60();
        break;
      case 218:
        result = sub_1D33FD0();
        break;
      case 219:
        result = sub_1D34040();
        break;
      case 220:
        result = sub_1D340B0();
        break;
      case 221:
        result = sub_1D34120();
        break;
      case 222:
        result = sub_1D34190();
        break;
      case 223:
        result = sub_1D34200();
        break;
      case 224:
        result = sub_1D34270();
        break;
      case 225:
        result = sub_1D342E0();
        break;
      case 226:
        result = sub_1D34350();
        break;
      case 227:
        result = sub_1D343C0();
        break;
      case 228:
        result = sub_1D34430();
        break;
      case 229:
        result = sub_1D344A0();
        break;
      case 230:
        result = sub_1D34510();
        break;
      case 231:
        result = sub_1D34580();
        break;
      case 232:
        result = sub_1D345F0();
        break;
      case 233:
        result = sub_1D34660();
        break;
      case 234:
        result = sub_1D346D0();
        break;
      case 235:
        result = sub_1D34740();
        break;
      case 236:
        result = sub_1D347B0();
        break;
      case 237:
        result = sub_1D34B00();
        break;
      case 238:
        result = sub_1CB01C0((__int64)a2);
        break;
      case 239:
        result = sub_1D30CC0();
        break;
      case 240:
        result = sub_1D15BA0(a1, (__int64)a2, (__int64)a3, (unsigned __int16)v15, a13, a4, a5);
        break;
      case 241:
        result = sub_1D34B10();
        break;
      case 242:
        result = sub_1D1BC50(a1, (__int64)a2, (__int64)a3, (unsigned __int16)v15, a13, a14, a4, a5);
        break;
      case 243:
        result = sub_1D35130();
        break;
      case 244:
        result = sub_1D35440();
        break;
      case 245:
        result = sub_1D1B9E0(a1, (__int64)a2, (__int64)a3, (unsigned __int16)v15, a13, a14, a4, a5);
        break;
      case 246:
        result = sub_1D35720();
        break;
      case 247:
        result = sub_1D11D40(a1, (__int64)a2, a4, a5, (__int64)a3, (unsigned __int16)v15, a13, a14);
        break;
      case 248:
        result = sub_1CB01D0((__int64)a2);
        break;
      case 249:
        result = sub_1D30B70();
        break;
      case 250:
        result = sub_1D35A70();
        break;
      case 251:
        result = sub_1D35F20();
        break;
      case 252:
        result = sub_1D30000();
        break;
      case 253:
        result = sub_1D35DA0();
        break;
      case 254:
        result = sub_1CB01E0((__int64)a2);
        break;
      case 255:
        result = sub_1D15C10(a1, (__int64)a2, a3, (unsigned __int16)v15, a13, a4, a5);
        break;
      case 256:
        result = sub_1D2F290(a1, (__int64)a2, a4, a5, a6, a7, a8, a9, a10, a11, (__int64)a3, (unsigned __int16)v15, a13);
        break;
      default:
        return result;
    }
  }
  return result;
}
