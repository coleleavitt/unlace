__int64 __fastcall sub_5ADF4D(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 i; // [rsp+18h] [rbp-10h]
  __int64 v5; // [rsp+20h] [rbp-8h]

  v5 = 0;
  for ( i = 0; *(_BYTE *)(a2 + i); ++i )
  {
    if ( a3 > v5 + 1 )
      *(_BYTE *)(a1 + v5++) = *(_BYTE *)(a2 + i);
  }
  if ( a3 )
    *(_BYTE *)(a1 + v5) = 0;
  return i;
}
