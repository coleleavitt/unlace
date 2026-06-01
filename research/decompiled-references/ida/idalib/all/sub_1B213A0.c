unsigned __int64 __fastcall sub_1B213A0(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 result; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx

  switch ( a2 )
  {
    case 5:
      result = sub_1B117E0(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 24:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
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
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 67:
    case 68:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 76:
    case 78:
    case 80:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
      result = sub_1B11860(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 8:
      result = sub_1B13F10(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 15:
      result = sub_1B11A30(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 23:
      result = sub_1B14160(
                 (__int64)a1,
                 (unsigned __int64)a3,
                 a4,
                 a5,
                 a6,
                 *(double *)a7.m128_u64,
                 *(double *)a8.m128_u64);
      break;
    case 25:
      result = sub_1B20F10(a1, a3, a4, a5, a6, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      break;
    case 34:
      result = sub_1B011F0(a1, (unsigned __int64)a3, a4, a5, a6, a7, a8);
      break;
    case 35:
      result = sub_1B00B90(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 42:
      result = sub_1B11950(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 43:
      v13 = (_QWORD *)sub_168B6C0((__int64)a1);
      v16 = v13[294];
      v13[304] += 24LL;
      v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13[295] >= v17 + 24 && v16 )
      {
        v13[294] = v17 + 24;
        result = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        result = sub_986170((__int64)(v13 + 294), 24, 24, 3, v14, v15);
      }
      *(_DWORD *)result = a4;
      *(_DWORD *)(result + 4) = a6;
      *(_DWORD *)(result + 8) = 43;
      *(_DWORD *)(result + 12) = a5;
      *(_QWORD *)(result + 16) = a3;
      break;
    case 59:
      result = sub_1B097D0(a1, a3, a4, a5, a6, *(double *)a7.m128_u64);
      break;
    case 66:
      result = sub_1B00FD0(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 69:
      result = sub_1B00DB0(a1, a3, a4, a5, a6, a7, a8);
      break;
    case 75:
      result = sub_1B10D40(a1, (unsigned __int64)a3, a4, a5, a6, a7, a8);
      break;
    case 77:
      result = sub_1B116A0(a1, a4, a6, a5, (unsigned __int64)a3, a7, a8);
      break;
    case 79:
      result = sub_1B11630(a1, (unsigned __int64)a3, a4, a5, a6, a7, a8);
      break;
    case 81:
      result = sub_1B10BB0(a1, (unsigned __int64)a3, a4, a5, a6, a7, a8);
      break;
    case 89:
      result = sub_1B11B20(a1, a3, a4, a5, a6, a7, a8);
      break;
  }
  return result;
}
