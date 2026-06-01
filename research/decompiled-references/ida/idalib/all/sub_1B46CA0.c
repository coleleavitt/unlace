unsigned __int64 __fastcall sub_1B46CA0(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        unsigned int *a10,
        __int64 a11,
        unsigned int a12,
        int a13)
{
  unsigned __int64 result; // rax

  switch ( a2 )
  {
    case 21:
      result = sub_1B1BE10(a1, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), a6, a9, *a10, a10[1], a13);
      break;
    case 22:
    case 23:
    case 24:
    case 25:
    case 27:
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
    case 41:
    case 42:
    case 43:
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
    case 71:
    case 73:
    case 74:
    case 75:
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
      result = sub_1B1B1D0(
                 a1,
                 *(_DWORD *)a3,
                 *(_DWORD *)(a3 + 4),
                 *(_DWORD *)(a3 + 8),
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 *a10,
                 a10[1],
                 a10[2],
                 a12,
                 a13);
      break;
    case 26:
      result = sub_1B46880(a1, *(_DWORD *)(a3 + 4 * a4 - 4), (__int64)a5, a6, a9, a10[a11 - 1], a7, a8, a13);
      break;
    case 28:
      result = sub_1B1C360(a1, *(unsigned int *)(a3 + 4 * a4 - 4), a5, a6, a9, a10[a11 - 1], a7, a8, a12, a13);
      break;
    case 40:
      result = sub_1B1B990(a1, *(_DWORD *)(a3 + 4 * a4 - 4), (__int64)a5, a6, a9, a10[a11 - 1], a7, a8, a13);
      break;
    case 44:
      result = sub_1B00950(a1, *(_DWORD *)(a3 + 4 * a4 - 4), a5, a6, a9, a10[a11 - 1], a7, a8, a12, a13);
      break;
    case 70:
      result = sub_1B1BBD0(a1, *(_DWORD *)(a3 + 4 * a4 - 4), (__int64)a5, a6, a9, a10[a11 - 1], a7, a8, a13);
      break;
    case 72:
      result = sub_1B1AE80(a1, *(_DWORD *)(a3 + 4 * a4 - 4), (__int64)a5, a6, a9, a10[a11 - 1], a7, a8, a13);
      break;
    case 76:
      result = (unsigned __int64)sub_1B098F0(a1, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), a6, a9, *a10, a10[1], a13);
      break;
  }
  return result;
}
