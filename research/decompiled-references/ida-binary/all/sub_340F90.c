__int64 __fastcall sub_340F90(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax

  v4 = a1 + 40;
  switch ( a3 )
  {
    case 0LL:
      v5 = 2165563904LL;
      if ( a2 )
        v5 = 2165563911LL;
      goto LABEL_23;
    case 1LL:
      v5 = 2165563905LL;
      if ( a2 )
        v5 = 2165563912LL;
      goto LABEL_23;
    case 2LL:
      v5 = 2165563906LL;
      if ( a2 )
        v5 = 2165563913LL;
      goto LABEL_23;
    case 3LL:
      v5 = 2165563907LL;
      if ( a2 )
        v5 = 2165563914LL;
      goto LABEL_23;
    case 4LL:
      v5 = 2165563908LL;
      if ( a2 )
        v5 = 2165563915LL;
      goto LABEL_23;
    case 5LL:
      v5 = 2165563909LL;
      if ( a2 )
        v5 = 2165563916LL;
      goto LABEL_23;
    case 6LL:
      return sub_524F80(v4, 2165563919LL, 0);
    case 7LL:
      return sub_524F80(v4, 2165563920LL, 0);
    case 8LL:
      return sub_524F80(v4, 2165563921LL, 0);
    case 9LL:
      return sub_524F80(v4, 2165563922LL, 0);
    case 10LL:
      v5 = 2165563910LL;
      if ( a2 )
        v5 = 2165563917LL;
LABEL_23:
      result = sub_524F80(v4, v5, 0);
      break;
    case 11LL:
      result = sub_524F80(v4, 2165563918LL, 0);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
