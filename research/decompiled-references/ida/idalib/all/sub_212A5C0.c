__int64 __fastcall sub_212A5C0(__int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v4; // ebp
  size_t v7; // rax
  size_t v8; // rdx

  switch ( a2 )
  {
    case 12:
      *a3 = 0;
      v4 = 4;
      break;
    case 13:
      *a3 = 18;
      v4 = 4;
      break;
    case 15:
      *a3 = 2;
      v4 = 6;
      break;
    case 24:
      *a3 = 11;
      v4 = 6;
      break;
    case 29:
      *a3 = 3;
      v4 = 3;
      break;
    case 30:
      *a3 = 13;
      v4 = 5;
      break;
    case 31:
      *a3 = 7;
      v4 = 1;
      break;
    case 32:
      *a3 = 19;
      v4 = 5;
      break;
    case 33:
      *a3 = 1;
      v4 = 5;
      break;
    case 34:
      *a3 = 6;
      v4 = 2;
      break;
    case 35:
      v7 = j__strlen("@");
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 != v7 || (v4 = 0, v8) && memcmp(*(const void **)(a1 + 48), "@", v8) )
      {
        *a3 = 14;
        v4 = 5;
      }
      break;
    case 36:
    case 42:
      *a3 = 12;
      v4 = 3;
      break;
    case 37:
      *a3 = 10;
      v4 = 6;
      break;
    case 39:
      *a3 = 8;
      v4 = 3;
      break;
    case 40:
      *a3 = 9;
      v4 = 3;
      break;
    case 41:
      *a3 = 15;
      v4 = 6;
      break;
    case 43:
      *a3 = 4;
      v4 = 3;
      break;
    case 44:
      *a3 = 5;
      v4 = 3;
      break;
    case 45:
      v4 = 6;
      *a3 = (a4 != 0) + 16;
      break;
    default:
      v4 = 0;
      break;
  }
  return v4;
}
