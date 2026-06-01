/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77620
// Address: 0x00077620

//----- (00077620) --------------------------------------------------------
size_t __fastcall sub_77620(FILE *stream, void *ptr, signed int a3)
{
  size_t v5; // r6
  int v6; // r0

  if ( a3 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1225);
  }
  if ( stream )
  {
    v5 = a3;
    if ( a3 )
    {
      v5 = fread(ptr, 1u, a3, stream);
      if ( a3 != v5 )
      {
        if ( feof(stream) )
          v6 = 3;
        else
          v6 = 1;
        sub_70A2C(v6);
      }
    }
  }
  else
  {
    v5 = -1;
    sub_70A2C(1);
    *_errno_location() = 9;
    sub_70A2C(1);
  }
  return v5;
}
// D5C00: using guessed type char under_debugger;
