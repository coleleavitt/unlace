__int64 __fastcall my_isspace(int a1)
{
  __int64 v2; // [rsp+4h] [rbp-10h]
  unsigned __int64 i; // [rsp+Ch] [rbp-8h]

  v2 = 0xB090D0A0C0920LL;
  for ( i = 0; i <= 7; ++i )
  {
    if ( a1 == *((char *)&v2 + i) )
      return 1;
  }
  return 0;
}

