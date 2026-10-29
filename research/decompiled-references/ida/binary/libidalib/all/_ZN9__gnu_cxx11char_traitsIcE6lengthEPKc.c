__int64 __fastcall __gnu_cxx::char_traits<char>::length(__int64 a1)
{
  char v2; // [rsp+17h] [rbp-9h] BYREF
  __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0; ; ++i )
  {
    v2 = 0;
    if ( (unsigned __int8)__gnu_cxx::char_traits<char>::eq(i + a1, &v2) == 1 )
      break;
  }
  return i;
}

