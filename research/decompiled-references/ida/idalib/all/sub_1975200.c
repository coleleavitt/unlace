__int64 __fastcall sub_1975200(
        __int64 *a1,
        _WORD *a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  int v15; // [rsp+0h] [rbp-Ch]

  result = (__int64)a2;
  if ( a2 )
  {
    v9 = *a2 & 0x1FF;
    switch ( (__int16)v9 )
    {
      case 1:
        result = sub_1976340();
        break;
      case 2:
        result = sub_19764E0();
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
        v15 = a3;
        v10 = sub_1933BC0(a1, (unsigned __int64)a2, *(double *)a4.m128_u64, a5);
        v14 = v15;
        if ( v15 == 2 )
        {
          v10 = sub_190AD40(*a1, v10, (__m128i)a4, a5, 2, v11, v12, v13);
          v14 = 2;
        }
        result = sub_1C36190(*a1, v10, v14 == 0);
        break;
      case 130:
        result = sub_1976550();
        break;
      case 131:
        result = sub_19766E0();
        break;
      case 132:
        result = sub_1976810();
        break;
      case 133:
        result = sub_1976860();
        break;
      case 134:
        JUMPOUT(0x2E9CB2);
      case 135:
        result = sub_1976060();
        break;
      case 136:
        result = sub_18BBB60((__int64)a2);
        break;
      case 137:
        result = sub_1975FC0();
        break;
      case 138:
        result = sub_1976000();
        break;
      case 139:
        result = sub_1934DD0(a1, (__int64)a2, a4, a5, a3, (unsigned __int16)v9, a7, a8);
        break;
      case 140:
        result = sub_19387B0(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 141:
        result = sub_19382D0(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 142:
        result = sub_19383A0(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 143:
        result = sub_1938470(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 144:
        result = sub_1938540(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 145:
        result = sub_1938610(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 146:
        result = sub_19386E0(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 147:
        result = sub_1938A70(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 148:
        result = sub_19769B0();
        break;
      case 149:
        result = sub_1976B00();
        break;
      case 150:
        result = sub_1976C50();
        break;
      case 151:
        result = sub_1976DA0();
        break;
      case 152:
        result = sub_1976EF0();
        break;
      case 153:
        result = sub_1977040();
        break;
      case 154:
        result = sub_1977190();
        break;
      case 155:
        result = sub_1977240();
        break;
      case 156:
        result = sub_1977290();
        break;
      case 157:
        result = sub_1938BC0(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 158:
        result = sub_1977440();
        break;
      case 159:
        result = sub_19774D0();
        break;
      case 160:
        result = sub_1977520();
        break;
      case 161:
        result = sub_1977A10();
        break;
      case 162:
        result = sub_1977A80();
        break;
      case 163:
        result = sub_1977AF0();
        break;
      case 164:
        result = sub_1977B60();
        break;
      case 165:
        result = sub_1977BD0();
        break;
      case 166:
        result = sub_1977C40();
        break;
      case 167:
        result = sub_1977CB0();
        break;
      case 168:
        result = sub_1977D20();
        break;
      case 169:
        result = sub_1977D90();
        break;
      case 170:
        result = sub_1977E00();
        break;
      case 171:
        result = sub_1977E70();
        break;
      case 172:
        result = sub_1977EE0();
        break;
      case 173:
        result = sub_1977F50();
        break;
      case 174:
        result = sub_1977FC0();
        break;
      case 175:
        result = sub_1978030();
        break;
      case 176:
        result = sub_19780A0();
        break;
      case 177:
        result = sub_1978110();
        break;
      case 178:
        result = sub_1978180();
        break;
      case 179:
        result = sub_19781F0();
        break;
      case 180:
        result = sub_1978260();
        break;
      case 181:
        result = sub_19782D0();
        break;
      case 182:
        result = sub_1978340();
        break;
      case 183:
        result = sub_19783B0();
        break;
      case 184:
        result = sub_18E17C0((__int64)a1, (__int64)a2);
        break;
      case 185:
        result = sub_1978420();
        break;
      case 186:
        result = sub_1978490();
        break;
      case 187:
        result = sub_1978500();
        break;
      case 188:
        result = sub_1978570();
        break;
      case 189:
        result = sub_19785E0();
        break;
      case 190:
        result = sub_1978650();
        break;
      case 191:
        result = sub_19786C0();
        break;
      case 192:
        result = sub_1978730();
        break;
      case 193:
        result = sub_19787A0();
        break;
      case 194:
        result = sub_1978810();
        break;
      case 195:
        result = sub_1978880();
        break;
      case 196:
        result = sub_19788F0();
        break;
      case 197:
        result = sub_1978960();
        break;
      case 198:
        result = sub_19789D0();
        break;
      case 199:
        result = sub_1978A40();
        break;
      case 200:
        result = sub_1978AB0();
        break;
      case 201:
        result = sub_1978B20();
        break;
      case 202:
        result = sub_1978B90();
        break;
      case 203:
        result = sub_1978C00();
        break;
      case 204:
        result = sub_1978C70();
        break;
      case 205:
        result = sub_1978CE0();
        break;
      case 206:
        result = sub_1978D50();
        break;
      case 207:
        result = sub_1978DC0();
        break;
      case 208:
        result = sub_1978E30();
        break;
      case 209:
        result = sub_1978EA0();
        break;
      case 210:
        result = sub_1978F10();
        break;
      case 211:
        result = sub_1978F80();
        break;
      case 212:
        result = sub_1978FF0();
        break;
      case 213:
        result = sub_1979060();
        break;
      case 214:
        result = sub_19790D0();
        break;
      case 215:
        result = sub_1979140();
        break;
      case 216:
        result = sub_19791B0();
        break;
      case 217:
        result = sub_1979220();
        break;
      case 218:
        result = sub_1979290();
        break;
      case 219:
        result = sub_1979300();
        break;
      case 220:
        result = sub_1979370();
        break;
      case 221:
        result = sub_19793E0();
        break;
      case 222:
        result = sub_1979450();
        break;
      case 223:
        result = sub_19794C0();
        break;
      case 224:
        result = sub_1979530();
        break;
      case 225:
        result = sub_19795A0();
        break;
      case 226:
        result = sub_1979610();
        break;
      case 227:
        result = sub_1979680();
        break;
      case 228:
        result = sub_19796F0();
        break;
      case 229:
        result = sub_1979760();
        break;
      case 230:
        result = sub_19797D0();
        break;
      case 231:
        result = sub_1979840();
        break;
      case 232:
        result = sub_19798B0();
        break;
      case 233:
        result = sub_1979920();
        break;
      case 234:
        result = sub_1979990();
        break;
      case 235:
        result = sub_1979A00();
        break;
      case 236:
        result = sub_1979A70();
        break;
      case 237:
        result = sub_1979DC0();
        break;
      case 238:
        result = sub_18BBB70((__int64)a2);
        break;
      case 239:
        result = sub_19760E0();
        break;
      case 240:
        result = sub_193BBE0(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 241:
        result = sub_1979DD0();
        break;
      case 242:
        result = sub_18CCD00((__int64)a1, (__int64)a2);
        break;
      case 243:
        result = sub_197A310();
        break;
      case 244:
        result = sub_197A5C0();
        break;
      case 245:
        result = sub_18CC180(a1, (__int64)a2, a3, (unsigned __int16)v9, a7, a8, a4);
        break;
      case 246:
        result = sub_197A870();
        break;
      case 247:
        result = sub_1934E20(a1, (__int64)a2, a4, a5, a3, (unsigned __int16)v9, a7, a8);
        break;
      case 248:
        result = sub_18BBB80((__int64)a2);
        break;
      case 249:
        result = sub_1975FB0();
        break;
      case 250:
        result = sub_197ABC0();
        break;
      case 251:
        result = sub_197B030();
        break;
      case 252:
        result = sub_19757A0();
        break;
      case 253:
        result = sub_197AEF0();
        break;
      case 254:
        result = sub_18BBB90((__int64)a2);
        break;
      case 255:
        result = sub_193BC40(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      case 256:
        result = sub_1974A90(a1, (__int64)a2, *(double *)a4.m128_u64, a5);
        break;
      default:
        return result;
    }
  }
  return result;
}
