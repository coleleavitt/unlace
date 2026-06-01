__int64 __fastcall sub_C0EF10(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-Ch] BYREF

  v7 = 0;
  if ( !a3 )
    a3 = &v7;
  v5 = sub_C0EB40(a1, a2, a3, a4, a5);
  switch ( v5 )
  {
    case 1LL:
    case 3LL:
      result = 4;
      break;
    case 2LL:
LABEL_4:
      result = 1;
      break;
    case 4LL:
      result = 2;
      break;
    case 5LL:
      result = 3;
      break;
    case 6LL:
      result = 12;
      break;
    case 7LL:
      result = 13;
      break;
    case 8LL:
      result = 15;
      break;
    case 9LL:
      result = 16;
      break;
    case 10LL:
      result = 14;
      break;
    case 11LL:
      result = (unsigned int)(WORD1(v5) == 4) + 4;
      break;
    default:
      switch ( WORD1(v5) )
      {
        case 0:
        case 2:
        case 4:
        case 0xA:
          result = 6;
          break;
        case 1:
          result = 0;
          break;
        case 3:
          goto LABEL_4;
        case 5:
          result = 11;
          break;
        case 6:
          result = 7;
          break;
        case 7:
          result = 8;
          break;
        case 8:
          result = 9;
          break;
        case 9:
          result = 10;
          break;
      }
      break;
  }
  return result;
}
