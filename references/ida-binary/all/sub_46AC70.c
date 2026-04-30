unsigned __int64 __fastcall sub_46AC70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  unsigned __int64 result; // rax

  if ( !(_DWORD)a2 )
  {
    switch ( a3 )
    {
      case 0LL:
        result = sub_2F7630(a1, a7, a8, a9, a10, a11, a12, a13, a14, a2, (unsigned int)a3, a4, a5, a6, a15);
        break;
      case 1LL:
        result = sub_2F7610(a1);
        break;
      case 2LL:
        result = sub_2F7600(a1);
        break;
      case 3LL:
        result = sub_2F9720(a1);
        break;
      case 4LL:
        result = sub_2F9710(a1, **(_DWORD **)(a4 + 8));
        break;
      default:
        return result;
    }
  }
  return result;
}
