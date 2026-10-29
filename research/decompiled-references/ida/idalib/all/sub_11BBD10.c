__int64 __fastcall sub_11BBD10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 2LL:
      result = sub_10DC5D0(a1, (__int64)"-debug-info-kind=line-directives-only");
      break;
    case 3LL:
      result = sub_10DC5D0(a1, (__int64)"-debug-info-kind=line-tables-only");
      break;
    case 4LL:
      result = sub_10DC5D0(a1, (__int64)"-debug-info-kind=constructor");
      break;
    case 5LL:
      result = sub_10DC5D0(a1, (__int64)"-debug-info-kind=limited");
      break;
    case 6LL:
      result = sub_10DC5D0(a1, (__int64)"-debug-info-kind=standalone");
      break;
    case 7LL:
      result = sub_10DC5D0(a1, (__int64)"-debug-info-kind=unused-types");
      break;
    default:
      return result;
  }
  return result;
}
