__int64 __fastcall sub_1B71AD0(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  int v15; // [rsp+0h] [rbp-Ch]

  result = (__int64)a2;
  if ( a2 )
  {
    v9 = a2->m128i_i16[0] & 0x1FF;
    switch ( (__int16)v9 )
    {
      case 1:
        result = sub_1BC3FA0();
        break;
      case 2:
        result = sub_1B72470();
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
        v10 = sub_1B73BE0();
        v14 = v15;
        if ( v15 == 2 )
        {
          v10 = sub_190AD40(*a1, v10, (__m128i)a4, a5, 2, v11, v12, v13);
          v14 = 2;
        }
        result = sub_1C36190(*a1, v10, v14 == 0);
        break;
      case 130:
        result = sub_1B724E0();
        break;
      case 131:
        result = sub_1BC41C0();
        break;
      case 132:
        result = sub_1B72670();
        break;
      case 133:
        result = sub_1BC48D0();
        break;
      case 134:
        sub_2EA2AA();
      case 135:
        result = sub_1BA5280();
        break;
      case 136:
        result = sub_1AE8080((__int64)a2);
        break;
      case 137:
        result = sub_1B72430();
        break;
      case 138:
        result = sub_1BA5220();
        break;
      case 139:
        result = sub_1BA58E0();
        break;
      case 140:
        result = sub_1BA95C0();
        break;
      case 141:
        result = sub_1BA90E0();
        break;
      case 142:
        result = sub_1BA91B0();
        break;
      case 143:
        result = sub_1BA9280();
        break;
      case 144:
        result = sub_1BA9350();
        break;
      case 145:
        result = sub_1BA9420();
        break;
      case 146:
        result = sub_1BA94F0();
        break;
      case 147:
        result = sub_1BA9880();
        break;
      case 148:
        result = sub_1BC4A20();
        break;
      case 149:
        result = sub_1BC4B70();
        break;
      case 150:
        result = sub_1BC4CC0();
        break;
      case 151:
        result = sub_1BC4E10();
        break;
      case 152:
        result = sub_1BC4F60();
        break;
      case 153:
        result = sub_1BC50B0();
        break;
      case 154:
        result = sub_1BC5200();
        break;
      case 155:
        result = sub_1B726C0();
        break;
      case 156:
        result = sub_1B72720();
        break;
      case 157:
        result = sub_1BA99D0();
        break;
      case 158:
        result = sub_1BC52E0();
        break;
      case 159:
        result = sub_1B72900();
        break;
      case 160:
        result = sub_1BC3B90();
        break;
      case 161:
        result = sub_1B6F130(a1, a2, a4, a5);
        break;
      case 162:
        result = sub_1B6F1C0(a1, a2, a4, a5);
        break;
      case 163:
        result = sub_1B6F250(a1, a2, a4, a5);
        break;
      case 164:
        result = sub_1B6F2E0(a1, a2, a4, a5);
        break;
      case 165:
        result = sub_1B6F370(a1, a2, a4, a5);
        break;
      case 166:
        result = sub_1B6F400(a1, a2, a4, a5);
        break;
      case 167:
        result = sub_1B6F490(a1, a2, a4, a5);
        break;
      case 168:
        result = sub_1B6F520(a1, a2, a4, a5);
        break;
      case 169:
        result = sub_1B6F5B0(a1, a2, a4, a5);
        break;
      case 170:
        result = sub_1B6F640(a1, a2, a4, a5);
        break;
      case 171:
        result = sub_1B6F6D0(a1, a2, a4, a5);
        break;
      case 172:
        result = sub_1B6F760(a1, a2, a4, a5);
        break;
      case 173:
        result = sub_1B6F7F0(a1, a2, a4, a5);
        break;
      case 174:
        result = sub_1B6F880(a1, a2, a4, a5);
        break;
      case 175:
        result = sub_1B6F910(a1, a2, a4, a5);
        break;
      case 176:
        result = sub_1B6F9A0(a1, a2, a4, a5);
        break;
      case 177:
        result = sub_1B6FA30(a1, a2, a4, a5);
        break;
      case 178:
        result = sub_1B6FAC0(a1, a2, a4, a5);
        break;
      case 179:
        result = sub_1B6FB50(a1, a2, a4, a5);
        break;
      case 180:
        result = sub_1B6FBE0(a1, a2, a4, a5);
        break;
      case 181:
        result = sub_1B6FC70(a1, a2, a4, a5);
        break;
      case 182:
        result = sub_1B6FD00(a1, a2, a4, a5);
        break;
      case 183:
        result = sub_1B6FD90(a1, a2, a4, a5);
        break;
      case 184:
        result = sub_1B26210((__int64)a1, (__int64)a2);
        break;
      case 185:
        result = sub_1B6FE20(a1, a2, a4, a5);
        break;
      case 186:
        result = sub_1B6FEB0(a1, a2, a4, a5);
        break;
      case 187:
        result = sub_1B6FF40(a1, a2, a4, a5);
        break;
      case 188:
        result = sub_1B6FFD0(a1, a2, a4, a5);
        break;
      case 189:
        result = sub_1B70060(a1, a2, a4, a5);
        break;
      case 190:
        result = sub_1B700F0(a1, a2, a4, a5);
        break;
      case 191:
        result = sub_1B70180(a1, a2, a4, a5);
        break;
      case 192:
        result = sub_1B70210(a1, a2, a4, a5);
        break;
      case 193:
        result = sub_1B702A0(a1, a2, a4, a5);
        break;
      case 194:
        result = sub_1B70330(a1, a2, a4, a5);
        break;
      case 195:
        result = sub_1B703C0(a1, a2, a4, a5);
        break;
      case 196:
        result = sub_1B70450(a1, a2, a4, a5);
        break;
      case 197:
        result = sub_1B704E0(a1, a2, a4, a5);
        break;
      case 198:
        result = sub_1B70570(a1, a2, a4, a5);
        break;
      case 199:
        result = sub_1B70600(a1, a2, a4, a5);
        break;
      case 200:
        result = sub_1B70690(a1, a2, a4, a5);
        break;
      case 201:
        result = sub_1B70720(a1, a2, a4, a5);
        break;
      case 202:
        result = sub_1B707B0(a1, a2, a4, a5);
        break;
      case 203:
        result = sub_1B70840(a1, a2, a4, a5);
        break;
      case 204:
        result = sub_1B708D0(a1, a2, a4, a5);
        break;
      case 205:
        result = sub_1B70960(a1, a2, a4, a5);
        break;
      case 206:
        result = sub_1B709F0(a1, a2, a4, a5);
        break;
      case 207:
        result = sub_1B70A80(a1, a2, a4, a5);
        break;
      case 208:
        result = sub_1B70B10(a1, a2, a4, a5);
        break;
      case 209:
        result = sub_1B70BA0(a1, a2, a4, a5);
        break;
      case 210:
        result = sub_1B70C30(a1, a2, a4, a5);
        break;
      case 211:
        result = sub_1B70CC0(a1, a2, a4, a5);
        break;
      case 212:
        result = sub_1B70D50(a1, a2, a4, a5);
        break;
      case 213:
        result = sub_1B70DE0(a1, a2, a4, a5);
        break;
      case 214:
        result = sub_1B70E70(a1, a2, a4, a5);
        break;
      case 215:
        result = sub_1B70F00(a1, a2, a4, a5);
        break;
      case 216:
        result = sub_1B70F90(a1, a2, a4, a5);
        break;
      case 217:
        result = sub_1B71020(a1, a2, a4, a5);
        break;
      case 218:
        result = sub_1B710B0(a1, a2, a4, a5);
        break;
      case 219:
        result = sub_1B71140(a1, a2, a4, a5);
        break;
      case 220:
        result = sub_1B711D0(a1, a2, a4, a5);
        break;
      case 221:
        result = sub_1B71260(a1, a2, a4, a5);
        break;
      case 222:
        result = sub_1B712F0(a1, a2, a4, a5);
        break;
      case 223:
        result = sub_1B71380(a1, a2, a4, a5);
        break;
      case 224:
        result = sub_1B71410(a1, a2, a4, a5);
        break;
      case 225:
        result = sub_1B714A0(a1, a2, a4, a5);
        break;
      case 226:
        result = sub_1B71530(a1, a2, a4, a5);
        break;
      case 227:
        result = sub_1B715C0(a1, a2, a4, a5);
        break;
      case 228:
        result = sub_1B71650(a1, a2, a4, a5);
        break;
      case 229:
        result = sub_1B716E0(a1, a2, a4, a5);
        break;
      case 230:
        result = sub_1B71770(a1, a2, a4, a5);
        break;
      case 231:
        result = sub_1B71800(a1, a2, *(double *)a4.m128_u64, a5);
        break;
      case 232:
        result = sub_1B71890(a1, a2, a4, a5);
        break;
      case 233:
        result = sub_1B71920(a1, a2, a4, a5);
        break;
      case 234:
        result = sub_1B719B0(a1, a2, a4, a5);
        break;
      case 235:
        result = sub_1B71A40(a1, a2, a4, a5);
        break;
      case 236:
        result = sub_1BC5390();
        break;
      case 237:
        result = sub_1B72960();
        break;
      case 238:
        result = sub_1AE8090((__int64)a2);
        break;
      case 239:
        result = sub_1BBC1F0();
        break;
      case 240:
        result = sub_1BACFC0();
        break;
      case 241:
        result = sub_1BC42F0();
        break;
      case 242:
        result = sub_1B03F50(a1, (__int64)a2);
        break;
      case 243:
        result = sub_1BC5700();
        break;
      case 244:
        result = sub_1BC5A70();
        break;
      case 245:
        result = sub_1B04790(a1, (__int64)a2, a3, (unsigned __int16)v9, a7, a8, a4);
        break;
      case 246:
        result = sub_1BC5BD0();
        break;
      case 247:
        result = sub_1BA5930();
        break;
      case 248:
        result = sub_1AE80A0((__int64)a2);
        break;
      case 249:
        result = sub_1B72420();
        break;
      case 250:
        result = sub_1BC3860();
        break;
      case 251:
        result = sub_1BC3E20();
        break;
      case 252:
        result = sub_1BC5F20();
        break;
      case 253:
        result = sub_1BC3CA0();
        break;
      case 254:
        result = sub_1AE80B0((__int64)a2);
        break;
      case 255:
        result = sub_1BAD030();
        break;
      case 256:
        result = sub_1BC3100();
        break;
      default:
        return result;
    }
  }
  return result;
}
