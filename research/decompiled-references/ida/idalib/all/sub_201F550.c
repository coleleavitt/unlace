__int64 __fastcall sub_201F550(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // al
  int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  char v11; // dl
  int v12; // edx
  int v13; // eax
  __m128i si128; // [rsp+0h] [rbp-28h]

  if ( a2 <= 3 )
    return 0;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      if ( *(_DWORD *)a1 == -65536 )
      {
        if ( a2 <= 0x1B )
          return 26;
        v4 = *(_QWORD *)(a1 + 12);
        v5 = *(_QWORD *)(a1 + 20);
        if ( !(v4 ^ 0x4BA9BAEED1BAA1C7LL | v5 ^ 0xB8DCA46AF6FA20AFLL) )
          return 25;
        if ( v4 ^ 0x4DABD9A50CB3FE38LL | v5 ^ 0xC2532622B6D69BACLL )
          return 26;
        else
          return 24;
      }
      if ( a2 > 0xF && !(*(_QWORD *)a1 ^ 0x2000000000LL | *(_QWORD *)(a1 + 8) ^ 0xFFFF0000FFFFLL) )
        return 28;
      if ( !*(_BYTE *)(a1 + 1) )
        return 25;
      result = 31;
      if ( *(_DWORD *)a1 != 1836278016 )
        return 0;
      return result;
    case 1:
      if ( *(_WORD *)a1 == 0xDF01 )
        return 29;
      if ( *(_WORD *)a1 != 0xF701 )
        return 0;
      return 30;
    case 3:
      if ( *(_WORD *)a1 == 0xF003 && !*(_BYTE *)(a1 + 2) )
        return 9;
      if ( *(_DWORD *)a1 != 119734787 )
        return 0;
      return 39;
    case 7:
      if ( *(_DWORD *)a1 != 50471687 )
        return 0;
      return 39;
    case 0x10:
      if ( *(_DWORD *)a1 != -1391395056 )
        return 0;
      return 35;
    case 0x21:
      if ( a2 <= 7 || *(_QWORD *)a1 != 0xA3E686372613C21LL && *(_QWORD *)a1 != 0xA3E6E6968743C21LL )
        return 0;
      return 3;
    case 0x2D:
      if ( a2 <= 8
        || (*(_QWORD *)a1 != 0x70617421202D2D2DLL || *(_BYTE *)(a1 + 8) != 105)
        && (a2 == 9 || *(_QWORD *)a1 != 0x686372610A2D2D2DLL || *(_WORD *)(a1 + 8) != 14963) )
      {
        return 0;
      }
      return 33;
    case 0x3C:
      if ( a2 <= 7 || *(_QWORD *)a1 != 0xA3E66616769623CLL )
        return 0;
      return 3;
    case 0x41:
    case 0x4E:
      if ( *(_BYTE *)(a1 + 1) != 0xA6 )
        return 0;
      return 25;
    case 0x42:
      return *(_DWORD *)a1 == -557825214;
    case 0x43:
      if ( *(_DWORD *)a1 == 1112490819 )
        return 38;
      if ( *(_DWORD *)a1 != 1212371011 )
        return 0;
      return 2;
    case 0x44:
      if ( *(_DWORD *)a1 != 1128421444 )
        return 0;
      return 36;
    case 0x4C:
    case 0xC4:
      goto LABEL_13;
    case 0x4D:
      if ( *(_WORD *)a1 == 23117 && a2 > 0x3F )
      {
        v6 = *(unsigned int *)(a1 + 60);
        if ( v6 <= a2 && a2 - v6 >= 4 && *(_DWORD *)(a1 + v6) == 17744 )
          return 27;
      }
      else if ( a2 <= 0x19 )
      {
        goto LABEL_100;
      }
      if ( !(*(_QWORD *)a1 ^ 0x666F736F7263694DLL | *(_QWORD *)(a1 + 8) ^ 0x202B2B432F432074LL)
        && *(_QWORD *)(a1 + 16) == 0x30302E372046534DLL
        && *(_WORD *)(a1 + 24) == 2573 )
      {
        return 32;
      }
LABEL_100:
      result = 23;
      if ( *(_DWORD *)a1 != 1347241037 )
        return 0;
      return result;
    case 0x50:
    case 0x66:
    case 0x83:
    case 0x84:
    case 0xF0:
      if ( *(_DWORD *)a1 == -1168773808 )
        return 34;
LABEL_13:
      v3 = *(_BYTE *)(a1 + 1);
      if ( v3 == 1 )
        return 25;
LABEL_14:
      if ( v3 == 2 )
        return 25;
      return 0;
    case 0x5F:
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AAF60);
      if ( a2 <= 0x18 || *(_OWORD *)&si128 != *(_OWORD *)a1 || *(_QWORD *)(a1 + 16) != 0x5F5F454C444E5542LL )
        return 0;
      return 37;
    case 0x64:
      v7 = *(_BYTE *)(a1 + 1);
      if ( v7 != -86 && v7 != -122 )
        return 0;
      return 25;
    case 0x68:
    case 0x90:
      v3 = *(_BYTE *)(a1 + 1);
      goto LABEL_14;
    case 0x7B:
      return 33;
    case 0x7F:
      if ( *(_DWORD *)a1 != 1179403647 || a2 <= 0x11 )
        return 0;
      result = 4;
      if ( *(_BYTE *)((*(_BYTE *)(a1 + 5) != 2) + a1 + 16) )
        return result;
      v11 = *(_BYTE *)(a1 + (*(_BYTE *)(a1 + 5) == 2) + 16LL);
      if ( v11 == 2 )
        return 6;
      if ( v11 <= 2 )
      {
        result = 5;
        if ( v11 == 1 )
          return result;
        return 4;
      }
      result = 7;
      if ( v11 != 3 )
      {
        result = 8;
        if ( v11 != 4 )
          return 4;
      }
      return result;
    case 0xCA:
      if ( *(_DWORD *)a1 != -1095041334 && *(_DWORD *)a1 != -1078264118 || a2 <= 7 || *(char *)(a1 + 7) > 42 )
        return 0;
      return 21;
    case 0xCE:
    case 0xCF:
    case 0xFE:
      if ( *(_DWORD *)a1 == -822415874 || *(_DWORD *)a1 == -805638658 )
      {
        if ( 4 * (unsigned __int64)(*(_BYTE *)(a1 + 3) != 0xCE) + 28 > a2 )
          return 0;
        v12 = *(char *)(a1 + 14) << 8;
        v13 = v12 | (*(char *)(a1 + 13) << 12);
        LOWORD(v12) = *(char *)(a1 + 15);
        v10 = v12 | (unsigned int)v13;
      }
      else
      {
        if ( *(_DWORD *)a1 != -17958194 && *(_DWORD *)a1 != -17958193
          || 4 * (unsigned __int64)(*(_BYTE *)a1 != 0xCE) + 28 > a2 )
        {
          return 0;
        }
        v8 = *(char *)(a1 + 13) << 8;
        v9 = v8 | (*(char *)(a1 + 14) << 12);
        LOWORD(v8) = *(char *)(a1 + 12);
        v10 = v8 | (unsigned int)v9;
      }
      switch ( v10 )
      {
        case 1LL:
          result = 10;
          break;
        case 2LL:
          result = 11;
          break;
        case 3LL:
          result = 12;
          break;
        case 4LL:
          result = 13;
          break;
        case 5LL:
          result = 14;
          break;
        case 6LL:
          result = 15;
          break;
        case 7LL:
          result = 16;
          break;
        case 8LL:
          result = 17;
          break;
        case 9LL:
          result = 18;
          break;
        case 10LL:
          result = 19;
          break;
        case 11LL:
          result = 20;
          break;
        case 12LL:
          result = 22;
          break;
        default:
          return 0;
      }
      return result;
    case 0xDE:
      return *(_DWORD *)a1 == 186106078;
    default:
      return 0;
  }
}
