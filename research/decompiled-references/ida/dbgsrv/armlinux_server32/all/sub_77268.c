/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77268
// Address: 0x00077268

//----- (00077268) --------------------------------------------------------
ssize_t __fastcall sub_77268(int a1, void *a2, signed int a3)
{
  ssize_t v4; // r0
  ssize_t v5; // r4
  int v6; // r0

  if ( a3 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
  }
  v4 = read(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
  {
    if ( v4 == -1 )
      v6 = 1;
    else
      v6 = 3;
    sub_70B98(v6);
  }
  return v5;
}
// D6C20: using guessed type char under_debugger;
