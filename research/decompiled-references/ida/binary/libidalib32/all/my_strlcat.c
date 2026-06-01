unsigned __int64 __fastcall my_strlcat(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  for ( i = 0; i < a3 && *(_BYTE *)(a1 + i); ++i )
    ;
  if ( i == a3 )
    return i;
  else
    return my_strlcpy(i + a1, a2, a3 - i) + i;
}

