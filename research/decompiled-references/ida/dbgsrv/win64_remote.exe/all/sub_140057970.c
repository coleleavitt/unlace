/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057970
// Address: 0x0000000140057970

//----- (0000000140057970) ----------------------------------------------------
__int64 __fastcall sub_140057970(__int64 *a1, int a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax

  if ( a1[22] )
    return 1;
  v4 = 0;
  do
  {
    if ( a1[19] )
    {
      if ( !sub_140058470((__int64)a1, a1 + 21, (__int64)(a1 + 18)) )
        return 0xFFFFFFFFLL;
      if ( a1[22] )
        return 1;
    }
    if ( a2 != -1 )
    {
      v5 = sub_14005A7C0();
      if ( v4 )
      {
        a2 -= (v5 - v4) / 0x3E8;
        if ( a2 <= 0 )
          a2 = 0;
      }
      v4 = v5;
    }
  }
  while ( sub_140059310(a1, (__int64)(a1 + 18)) );
  return 0xFFFFFFFFLL;
}
