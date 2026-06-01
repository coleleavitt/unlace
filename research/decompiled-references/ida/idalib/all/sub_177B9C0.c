__int64 __fastcall sub_177B9C0(
        __int64 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // [rsp+0h] [rbp-Ch]

  result = (__int64)a2;
  if ( a2 )
  {
    v8 = *a2 & 0x1FF;
    switch ( (__int16)v8 )
    {
      case 1:
        result = sub_177CD30();
        break;
      case 2:
        result = sub_177D0F0();
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
        v11 = a3;
        v9 = sub_175B800(a1, a2);
        v10 = v11;
        if ( v11 == 2 )
        {
          v9 = sub_190AD40(*a1, v9, 2);
          v10 = 2;
        }
        result = sub_1C36190(*a1, v9, v10 == 0);
        break;
      case 130:
        result = sub_177D160();
        break;
      case 131:
        result = sub_177D2F0();
        break;
      case 132:
        result = sub_177D420();
        break;
      case 133:
        result = sub_177D470();
        break;
      case 134:
        JUMPOUT(0x2E957C);
      case 135:
        result = sub_177C9F0();
        break;
      case 136:
        result = sub_1741480((__int64)a2);
        break;
      case 137:
        result = sub_177C950();
        break;
      case 138:
        result = sub_177C990();
        break;
      case 139:
        result = sub_175CCA0(a1, (__int64)a2, a4);
        break;
      case 140:
        result = sub_1760E60(a1, (__int64)a2);
        break;
      case 141:
        result = sub_1760980(a1, (__int64)a2);
        break;
      case 142:
        result = sub_1760A50(a1, (__int64)a2);
        break;
      case 143:
        result = sub_1760B20(a1, (__int64)a2);
        break;
      case 144:
        result = sub_1760BF0(a1, (__int64)a2);
        break;
      case 145:
        result = sub_1760CC0(a1, (__int64)a2);
        break;
      case 146:
        result = sub_1760D90(a1, (__int64)a2);
        break;
      case 147:
        result = sub_17611D0(a1, (__int64)a2);
        break;
      case 148:
        result = sub_177D5C0();
        break;
      case 149:
        result = sub_177D710();
        break;
      case 150:
        result = sub_177D860();
        break;
      case 151:
        result = sub_177D9B0();
        break;
      case 152:
        result = sub_177DB00();
        break;
      case 153:
        result = sub_177DC50();
        break;
      case 154:
        result = sub_177DDA0();
        break;
      case 155:
        result = sub_177DE80();
        break;
      case 156:
        result = sub_177DEE0();
        break;
      case 157:
        result = sub_1761320(a1, (__int64)a2);
        break;
      case 158:
        result = sub_177E0C0();
        break;
      case 159:
        result = sub_177E170();
        break;
      case 160:
        result = sub_177E1D0();
        break;
      case 161:
        result = sub_177E6C0();
        break;
      case 162:
        result = sub_177E730();
        break;
      case 163:
        result = sub_177E7A0();
        break;
      case 164:
        result = sub_177E810();
        break;
      case 165:
        result = sub_177E880();
        break;
      case 166:
        result = sub_177E8F0();
        break;
      case 167:
        result = sub_177E960();
        break;
      case 168:
        result = sub_177E9D0();
        break;
      case 169:
        result = sub_177EA40();
        break;
      case 170:
        result = sub_177EAB0();
        break;
      case 171:
        result = sub_177EB20();
        break;
      case 172:
        result = sub_177EB90();
        break;
      case 173:
        result = sub_177EC00();
        break;
      case 174:
        result = sub_177EC70();
        break;
      case 175:
        result = sub_177ECE0();
        break;
      case 176:
        result = sub_177ED50();
        break;
      case 177:
        result = sub_177EDC0();
        break;
      case 178:
        result = sub_177EE30();
        break;
      case 179:
        result = sub_177EEA0();
        break;
      case 180:
        result = sub_177EF10();
        break;
      case 181:
        result = sub_177EF80();
        break;
      case 182:
        result = sub_177EFF0();
        break;
      case 183:
        result = sub_177F060();
        break;
      case 184:
        result = sub_174A570((__int64)a1, (__int64)a2);
        break;
      case 185:
        result = sub_177F0D0();
        break;
      case 186:
        result = sub_177F140();
        break;
      case 187:
        result = sub_177F1B0();
        break;
      case 188:
        result = sub_177F220();
        break;
      case 189:
        result = sub_177F290();
        break;
      case 190:
        result = sub_177F300();
        break;
      case 191:
        result = sub_177F370();
        break;
      case 192:
        result = sub_177F3E0();
        break;
      case 193:
        result = sub_177F450();
        break;
      case 194:
        result = sub_177F4C0();
        break;
      case 195:
        result = sub_177F530();
        break;
      case 196:
        result = sub_177F5A0();
        break;
      case 197:
        result = sub_177F610();
        break;
      case 198:
        result = sub_177F680();
        break;
      case 199:
        result = sub_177F6F0();
        break;
      case 200:
        result = sub_177F760();
        break;
      case 201:
        result = sub_177F7D0();
        break;
      case 202:
        result = sub_177F840();
        break;
      case 203:
        result = sub_177F8B0();
        break;
      case 204:
        result = sub_177F920();
        break;
      case 205:
        result = sub_177F990();
        break;
      case 206:
        result = sub_177FA00();
        break;
      case 207:
        result = sub_177FA70();
        break;
      case 208:
        result = sub_177FAE0();
        break;
      case 209:
        result = sub_177FB50();
        break;
      case 210:
        result = sub_177FBC0();
        break;
      case 211:
        result = sub_177FC30();
        break;
      case 212:
        result = sub_177FCA0();
        break;
      case 213:
        result = sub_177FD10();
        break;
      case 214:
        result = sub_177FD80();
        break;
      case 215:
        result = sub_177FDF0();
        break;
      case 216:
        result = sub_177FE60();
        break;
      case 217:
        result = sub_177FED0();
        break;
      case 218:
        result = sub_177FF40();
        break;
      case 219:
        result = sub_177FFB0();
        break;
      case 220:
        result = sub_1780020();
        break;
      case 221:
        result = sub_1780090();
        break;
      case 222:
        result = sub_1780100();
        break;
      case 223:
        result = sub_1780170();
        break;
      case 224:
        result = sub_17801E0();
        break;
      case 225:
        result = sub_1780250();
        break;
      case 226:
        result = sub_17802C0();
        break;
      case 227:
        result = sub_1780330();
        break;
      case 228:
        result = sub_17803A0();
        break;
      case 229:
        result = sub_1780410();
        break;
      case 230:
        result = sub_1780480();
        break;
      case 231:
        result = sub_17804F0();
        break;
      case 232:
        result = sub_1780560();
        break;
      case 233:
        result = sub_17805D0();
        break;
      case 234:
        result = sub_1780640();
        break;
      case 235:
        result = sub_17806B0();
        break;
      case 236:
        result = sub_1780720();
        break;
      case 237:
        result = sub_1780A70();
        break;
      case 238:
        result = sub_1741490((__int64)a2);
        break;
      case 239:
        result = sub_177CA90();
        break;
      case 240:
        result = sub_17643C0(a1, (__int64)a2);
        break;
      case 241:
        result = sub_1780A80();
        break;
      case 242:
        result = sub_17474C0(a1, (__int64)a2);
        break;
      case 243:
        result = sub_17810A0();
        break;
      case 244:
        result = sub_17813B0();
        break;
      case 245:
        result = sub_1747810(a1, (__int64)a2, a3, (unsigned __int16)v8, a6, a7);
        break;
      case 246:
        result = sub_1781690();
        break;
      case 247:
        result = sub_175CCF0(a1, (__int64)a2, a4);
        break;
      case 248:
        result = sub_17414A0((__int64)a2);
        break;
      case 249:
        result = sub_177C940();
        break;
      case 250:
        result = sub_17819E0();
        break;
      case 251:
        result = sub_1781E90();
        break;
      case 252:
        result = sub_177BF60();
        break;
      case 253:
        result = sub_1781D10();
        break;
      case 254:
        result = sub_17414B0((__int64)a2);
        break;
      case 255:
        result = sub_1764430(a1, (__int64)a2);
        break;
      case 256:
        result = sub_177B1F0(a1, (__int64)a2);
        break;
      default:
        return result;
    }
  }
  return result;
}
