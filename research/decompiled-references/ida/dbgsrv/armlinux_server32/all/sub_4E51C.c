/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E51C
// Address: 0x0004E51C

//----- (0004E51C) --------------------------------------------------------
int __fastcall sub_4E51C(int a1)
{
  int v1; // r2
  int v2; // r4

  v1 = *(unsigned __int8 *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(302);
  }
  v2 = *(_DWORD *)(a1 + 612);
  *(_DWORD *)(a1 + 612) = v1;
  sub_4E030(a1, v1, v1);
  return v2;
}
// D6C20: using guessed type char under_debugger;
