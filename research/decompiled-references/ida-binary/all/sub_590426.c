__int64 __fastcall sub_590426(__int64 a1)
{
  char v2; // [rsp+17h] [rbp-9h] BYREF
  __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0; ; ++i )
  {
    v2 = 0;
    if ( (unsigned __int8)sub_59046C(i + a1, &v2) == 1 )
      break;
  }
  return i;
}
