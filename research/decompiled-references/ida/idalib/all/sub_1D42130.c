__int64 __fastcall sub_1D42130(
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
  unsigned __int64 v10; // rax
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
        result = sub_1D649E0();
        break;
      case 2:
        result = sub_1D42AD0();
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
        v10 = sub_1D434A0();
        v14 = v15;
        if ( v15 == 2 )
        {
          v10 = sub_190AD40(*a1, v10, (__m128i)a4, a5, 2, v11, v12, v13);
          v14 = 2;
        }
        result = sub_1C36190(*a1, v10, v14 == 0, v11, v12, a4, a5);
        break;
      case 130:
        result = sub_1D42B40();
        break;
      case 131:
        result = sub_1D64DA0();
        break;
      case 132:
        result = sub_1D42CD0();
        break;
      case 133:
        result = sub_1D654F0();
        break;
      case 134:
        sub_2EABD4();
      case 135:
        result = sub_1D43D60();
        break;
      case 136:
        result = sub_1D37930((__int64)a2);
        break;
      case 137:
        result = sub_1D42A90();
        break;
      case 138:
        result = sub_1D43D00();
        break;
      case 139:
        result = sub_1D443C0();
        break;
      case 140:
        result = sub_1D48400();
        break;
      case 141:
        result = sub_1D47F20();
        break;
      case 142:
        result = sub_1D47FF0();
        break;
      case 143:
        result = sub_1D480C0();
        break;
      case 144:
        result = sub_1D48190();
        break;
      case 145:
        result = sub_1D48260();
        break;
      case 146:
        result = sub_1D48330();
        break;
      case 147:
        result = sub_1D48790();
        break;
      case 148:
        result = sub_1D65640();
        break;
      case 149:
        result = sub_1D65790();
        break;
      case 150:
        result = sub_1D658E0();
        break;
      case 151:
        result = sub_1D65A30();
        break;
      case 152:
        result = sub_1D65B80();
        break;
      case 153:
        result = sub_1D65CD0();
        break;
      case 154:
        result = sub_1D65E20();
        break;
      case 155:
        result = sub_1D42D20();
        break;
      case 156:
        result = sub_1D42D80();
        break;
      case 157:
        result = sub_1D488E0();
        break;
      case 158:
        result = sub_1D65F00();
        break;
      case 159:
        result = sub_1D42F60();
        break;
      case 160:
        result = sub_1D67380();
        break;
      case 161:
        result = sub_1D5DAD0();
        break;
      case 162:
        result = sub_1D5DB40();
        break;
      case 163:
        result = sub_1D5DBB0();
        break;
      case 164:
        result = sub_1D5DC20();
        break;
      case 165:
        result = sub_1D5DC90();
        break;
      case 166:
        result = sub_1D5DD00();
        break;
      case 167:
        result = sub_1D5DD70();
        break;
      case 168:
        result = sub_1D5DDE0();
        break;
      case 169:
        result = sub_1D5DE50();
        break;
      case 170:
        result = sub_1D5DEC0();
        break;
      case 171:
        result = sub_1D5DF30();
        break;
      case 172:
        result = sub_1D5DFA0();
        break;
      case 173:
        result = sub_1D5E010();
        break;
      case 174:
        result = sub_1D5E080();
        break;
      case 175:
        result = sub_1D5E0F0();
        break;
      case 176:
        result = sub_1D5E160();
        break;
      case 177:
        result = sub_1D5E1D0();
        break;
      case 178:
        result = sub_1D5E240();
        break;
      case 179:
        result = sub_1D5E2B0();
        break;
      case 180:
        result = sub_1D5E320();
        break;
      case 181:
        result = sub_1D5E390();
        break;
      case 182:
        result = sub_1D5E400();
        break;
      case 183:
        result = sub_1D5E470();
        break;
      case 184:
        result = sub_1D3EB50((__int64)a1, (__int64)a2);
        break;
      case 185:
        result = sub_1D5E4E0();
        break;
      case 186:
        result = sub_1D5E550();
        break;
      case 187:
        result = sub_1D5E5C0();
        break;
      case 188:
        result = sub_1D5E630();
        break;
      case 189:
        result = sub_1D5E6A0();
        break;
      case 190:
        result = sub_1D5E710();
        break;
      case 191:
        result = sub_1D5E780();
        break;
      case 192:
        result = sub_1D5E7F0();
        break;
      case 193:
        result = sub_1D5E860();
        break;
      case 194:
        result = sub_1D5E8D0();
        break;
      case 195:
        result = sub_1D5E940();
        break;
      case 196:
        result = sub_1D5E9B0();
        break;
      case 197:
        result = sub_1D5EA20();
        break;
      case 198:
        result = sub_1D5EA90();
        break;
      case 199:
        result = sub_1D5EB00();
        break;
      case 200:
        result = sub_1D5EB70();
        break;
      case 201:
        result = sub_1D5EBE0();
        break;
      case 202:
        result = sub_1D5EC50();
        break;
      case 203:
        result = sub_1D5ECC0();
        break;
      case 204:
        result = sub_1D5ED30();
        break;
      case 205:
        result = sub_1D5EDA0();
        break;
      case 206:
        result = sub_1D5EE10();
        break;
      case 207:
        result = sub_1D5EE80();
        break;
      case 208:
        result = sub_1D5EEF0();
        break;
      case 209:
        result = sub_1D5EF60();
        break;
      case 210:
        result = sub_1D5EFD0();
        break;
      case 211:
        result = sub_1D5F040();
        break;
      case 212:
        result = sub_1D5F0B0();
        break;
      case 213:
        result = sub_1D5F120();
        break;
      case 214:
        result = sub_1D5F190();
        break;
      case 215:
        result = sub_1D5F200();
        break;
      case 216:
        result = sub_1D5F270();
        break;
      case 217:
        result = sub_1D5F2E0();
        break;
      case 218:
        result = sub_1D5F350();
        break;
      case 219:
        result = sub_1D5F3C0();
        break;
      case 220:
        result = sub_1D5F430();
        break;
      case 221:
        result = sub_1D5F4A0();
        break;
      case 222:
        result = sub_1D5F510();
        break;
      case 223:
        result = sub_1D5F580();
        break;
      case 224:
        result = sub_1D5F5F0();
        break;
      case 225:
        result = sub_1D5F660();
        break;
      case 226:
        result = sub_1D5F6D0();
        break;
      case 227:
        result = sub_1D5F740();
        break;
      case 228:
        result = sub_1D5F7B0();
        break;
      case 229:
        result = sub_1D5F820();
        break;
      case 230:
        result = sub_1D5F890();
        break;
      case 231:
        result = sub_1D5F900();
        break;
      case 232:
        result = sub_1D5F970();
        break;
      case 233:
        result = sub_1D5F9E0();
        break;
      case 234:
        result = sub_1D5FA50();
        break;
      case 235:
        result = sub_1D5FAC0();
        break;
      case 236:
        result = sub_1D5FB30();
        break;
      case 237:
        result = sub_1D42FC0();
        break;
      case 238:
        result = sub_1D37940((__int64)a2);
        break;
      case 239:
        result = sub_1D58DC0();
        break;
      case 240:
        result = sub_1D4B710();
        break;
      case 241:
        result = sub_1D64ED0();
        break;
      case 242:
        result = sub_1D41490(a1, (__int64)a2);
        break;
      case 243:
        result = sub_1D65FB0();
        break;
      case 244:
        result = sub_1D662C0();
        break;
      case 245:
        result = sub_1D41DB0(a1, (__int64)a2, a3, (unsigned __int16)v9, a7, a8, a4);
        break;
      case 246:
        result = sub_1D665A0();
        break;
      case 247:
        result = sub_1D44410();
        break;
      case 248:
        result = sub_1D37950((__int64)a2);
        break;
      case 249:
        result = sub_1D42A80();
        break;
      case 250:
        result = sub_1D67050();
        break;
      case 251:
        result = sub_1D67610();
        break;
      case 252:
        result = sub_1D66A20();
        break;
      case 253:
        result = sub_1D67490();
        break;
      case 254:
        result = sub_1D37960((__int64)a2);
        break;
      case 255:
        result = sub_1D4B780();
        break;
      case 256:
        result = sub_1D64280();
        break;
      default:
        return result;
    }
  }
  return result;
}
