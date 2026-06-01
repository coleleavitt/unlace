unsigned __int64 __fastcall sub_1B79680(
        __int64 *a1,
        int a2,
        void *a3,
        unsigned __int64 a4,
        int *a5,
        _DWORD **a6,
        __m128 a7,
        __m128 a8,
        __m128i a9)
{
  unsigned int v10; // r11d
  unsigned int v11; // r13d
  unsigned int v12; // r10d
  int v13; // ebx
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  unsigned __int64 result; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // r14
  int v19; // eax
  int v20; // esi
  __int64 v21; // r8
  int v22; // r11d
  unsigned int *v23; // r15
  unsigned int *v24; // r14
  int v25; // r9d
  unsigned int v26; // r13d
  _DWORD v29[18]; // [rsp+10h] [rbp-48h] BYREF

  v10 = *((_DWORD *)a6 + 24);
  v11 = *((_DWORD *)a6 + 63);
  v12 = *((_DWORD *)a6 + 4);
  v13 = *a5;
  v14 = a5[1];
  v15 = a5[2];
  switch ( a2 )
  {
    case 4:
      result = sub_1B270B0(a1, v13, v14, v12, v15, (__int64)*a6, a7, a8, a3, a4);
      break;
    case 5:
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
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 30:
    case 31:
    case 33:
    case 34:
    case 35:
    case 39:
    case 40:
    case 42:
    case 43:
    case 44:
    case 46:
    case 48:
    case 49:
    case 50:
    case 54:
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
    case 68:
    case 69:
    case 70:
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
    case 83:
    case 84:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 95:
    case 96:
    case 97:
    case 100:
    case 101:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 111:
      result = (unsigned __int64)sub_1B5BEF0(a1, (unsigned __int64 *)a3, a4, (__int64)a5, a7, a8);
      break;
    case 6:
      result = sub_1B3C110(a1, (__int64 *)a3, a4, (unsigned __int64)*a6, v13, v14, a7, a8, v12, a5[2]);
      break;
    case 7:
      v20 = *((_DWORD *)a6 + 70);
      v21 = 0;
      v22 = 0;
      if ( v20 )
      {
        v23 = a6[34];
        v24 = a6[37];
        v25 = 2;
        v26 = *v23;
        v21 = *v24;
        if ( v20 == 2 )
        {
          v25 = v23[1];
          v22 = v24[1];
        }
      }
      else
      {
        v25 = 2;
        v26 = 2;
      }
      result = sub_1B3BC90(a1, *a6, (__int64)a6[40], v26, v21, v25, a7, a8, v22, (__int64 *)a3, a4, v13, v14, v12, v15);
      break;
    case 18:
      result = sub_1B3AFD0(a1, (unsigned __int64 *)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 19:
      result = sub_1B27580(a1, (__int64 *)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 22:
      v18 = (unsigned __int64)*a6;
      v29[0] = *((_DWORD *)a6 + 24);
      v19 = *((_DWORD *)a6 + 65);
      v29[1] = v11;
      v29[2] = v12;
      v29[3] = v19;
      result = (unsigned __int64)sub_1B39770(a1, (__int64)v29, v18, (unsigned __int64 *)a3, a4, v13, a7, a8, v14, v15);
      break;
    case 29:
      result = sub_1B3A940(a1, v10, v11, v12, (unsigned __int64 *)a3, a4, a7, a8, v13, v14, a5[2]);
      break;
    case 32:
      result = sub_1B23EA0(a1, (unsigned __int64 *)a3, a4, v13, v14, v15, *(double *)a7.m128_u64);
      break;
    case 36:
      result = sub_1B37A60(a1, (unsigned __int64 *)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 37:
      result = 0;
      if ( a4 )
      {
        v17 = (_QWORD *)sub_168B6C0((__int64)a1);
        result = sub_EC0A10(v17, v13, v14, v15, (__int64)a3, a4);
      }
      break;
    case 38:
      result = sub_1B61280(
                 a1,
                 a6[25],
                 *((_DWORD *)a6 + 52),
                 a6[28],
                 a7,
                 a8,
                 a9,
                 *((unsigned int *)a6 + 58),
                 (__int64)(a6 + 3),
                 (__int64)(a6 + 9),
                 (__int64)a3,
                 a4,
                 a5,
                 0,
                 nullptr);
      break;
    case 41:
      result = sub_1B65430(a1, (unsigned __int64 *)a3, a4, a5, a7, a8);
      break;
    case 45:
      result = sub_1B79350(
                 a1,
                 (int)a3,
                 a4,
                 v13,
                 v14,
                 v12,
                 a7,
                 a8,
                 v15,
                 (__int64)(a6 + 3),
                 (const __m128i *)(a6 + 9),
                 0,
                 0);
      break;
    case 47:
      result = sub_1B250D0(a1, (unsigned __int64 *)a3, a4, v13, v14, v15, (__m128i)a7);
      break;
    case 51:
      result = sub_1B66580(a1, (unsigned __int64 *)a3, a4, a5, *(double *)a7.m128_u64);
      break;
    case 52:
      result = sub_1B36CE0(a1, (__int64 *)a3, a4, v10, v11, v12, a7, a8, v13, v14, v15);
      break;
    case 53:
      result = sub_1B43520(a1, (__int64 *)a3, a4, *a6, v13, v14, a7, a8, v10, v11, v12, *((_DWORD *)a6 + 66), v15);
      break;
    case 55:
      result = sub_1B64980(
                 a1,
                 (unsigned __int64)a6[1],
                 (__int64)a6[13],
                 *((unsigned int *)a6 + 28),
                 (__int64)a6[19],
                 *(double *)a7.m128_u64,
                 a8,
                 a9,
                 *((unsigned int *)a6 + 40),
                 (__int64)(a6 + 3),
                 (__int64)(a6 + 9),
                 v10,
                 *((_BYTE *)a6 + 248),
                 v11,
                 (__int64)a3,
                 a4,
                 a5,
                 0,
                 nullptr);
      break;
    case 67:
      result = sub_1B35BA0((__int64)a1, (unsigned __int64 *)a3, a4, v13, v14, v15, a7);
      break;
    case 71:
      result = sub_1B129B0(a1, (__int64)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 82:
      result = sub_1B35270(a1, (unsigned __int64 *)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 85:
      result = sub_1B78AF0(
                 a1,
                 (int)a3,
                 a4,
                 (__int64)a6[12],
                 v13,
                 v14,
                 a7,
                 a8,
                 v11,
                 v12,
                 v15,
                 (__int64)(a6 + 3),
                 (const __m128i *)(a6 + 9),
                 0,
                 0);
      break;
    case 94:
      result = sub_1B34800(a1, (__int64 *)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 98:
      result = sub_1B79040(
                 a1,
                 (int)a3,
                 a4,
                 v13,
                 v14,
                 v12,
                 a7,
                 a8,
                 v15,
                 (__int64)(a6 + 3),
                 (const __m128i *)(a6 + 9),
                 0,
                 0);
      break;
    case 99:
      result = sub_1B12460(a1, (__int64)a3, a4, v13, v14, v15, a7, a8);
      break;
    case 102:
      result = sub_1B61A20(
                 a1,
                 a6[25],
                 *((_DWORD *)a6 + 52),
                 a6[28],
                 a7,
                 a8,
                 a9,
                 *((unsigned int *)a6 + 58),
                 (__int64)(a6 + 3),
                 (__int64)(a6 + 9),
                 (__int64)a3,
                 a4,
                 a5,
                 0,
                 nullptr);
      break;
    case 110:
      result = sub_1B5CA20(a1, (__int64)a3, a4, a5, a7, a8);
      break;
  }
  return result;
}
