__int64 __fastcall sub_E3A240(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  const char *v4; // rsi
  __int64 v5; // rdi

  switch ( a2 )
  {
    case 1LL:
      return sub_995540(*a1, "nw");
    case 2LL:
      return sub_995540(*a1, "dl");
    case 3LL:
      return sub_995540(*a1, "na");
    case 4LL:
      return sub_995540(*a1, "da");
    case 5LL:
      v4 = "ps";
      v5 = *a1;
      if ( a3 != 1 )
        v4 = "pl";
      goto LABEL_50;
    case 6LL:
      v4 = "ng";
      v5 = *a1;
      if ( a3 != 1 )
        v4 = "mi";
      goto LABEL_50;
    case 7LL:
      v4 = "de";
      v5 = *a1;
      if ( a3 != 1 )
        v4 = "ml";
      goto LABEL_50;
    case 8LL:
      return sub_995540(*a1, "dv");
    case 9LL:
      return sub_995540(*a1, "rm");
    case 10LL:
      return sub_995540(*a1, "eo");
    case 11LL:
      v4 = "ad";
      v5 = *a1;
      if ( a3 != 1 )
        v4 = "an";
LABEL_50:
      result = sub_995540(v5, v4);
      break;
    case 12LL:
      result = sub_995540(*a1, "or");
      break;
    case 13LL:
      result = sub_995540(*a1, "co");
      break;
    case 14LL:
      result = sub_995540(*a1, "nt");
      break;
    case 15LL:
      result = sub_995540(*a1, "aS");
      break;
    case 16LL:
      result = sub_995540(*a1, "lt");
      break;
    case 17LL:
      result = sub_995540(*a1, "gt");
      break;
    case 18LL:
      result = sub_995540(*a1, "pL");
      break;
    case 19LL:
      result = sub_995540(*a1, "mI");
      break;
    case 20LL:
      result = sub_995540(*a1, "mL");
      break;
    case 21LL:
      result = sub_995540(*a1, "dV");
      break;
    case 22LL:
      result = sub_995540(*a1, "rM");
      break;
    case 23LL:
      result = sub_995540(*a1, "eO");
      break;
    case 24LL:
      result = sub_995540(*a1, "aN");
      break;
    case 25LL:
      result = sub_995540(*a1, "oR");
      break;
    case 26LL:
      result = sub_995540(*a1, "ls");
      break;
    case 27LL:
      result = sub_995540(*a1, "rs");
      break;
    case 28LL:
      result = sub_995540(*a1, "lS");
      break;
    case 29LL:
      result = sub_995540(*a1, "rS");
      break;
    case 30LL:
      result = sub_995540(*a1, "eq");
      break;
    case 31LL:
      result = sub_995540(*a1, "ne");
      break;
    case 32LL:
      result = sub_995540(*a1, "le");
      break;
    case 33LL:
      result = sub_995540(*a1, "ge");
      break;
    case 34LL:
      result = sub_995540(*a1, "ss");
      break;
    case 35LL:
      result = sub_995540(*a1, "aa");
      break;
    case 36LL:
      result = sub_995540(*a1, "oo");
      break;
    case 37LL:
      result = sub_995540(*a1, "pp");
      break;
    case 38LL:
      result = sub_995540(*a1, "mm");
      break;
    case 39LL:
      result = sub_995540(*a1, "cm");
      break;
    case 40LL:
      result = sub_995540(*a1, "pm");
      break;
    case 41LL:
      result = sub_995540(*a1, "pt");
      break;
    case 42LL:
      result = sub_995540(*a1, "cl");
      break;
    case 43LL:
      result = sub_995540(*a1, "ix");
      break;
    case 44LL:
      result = sub_995540(*a1, "qu");
      break;
    case 45LL:
      result = sub_995540(*a1, "aw");
      break;
    default:
      return result;
  }
  return result;
}
