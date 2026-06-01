/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77788
// Address: 0x00077788

//----- (00077788) --------------------------------------------------------
size_t __fastcall sub_77788(FILE *stream, void *ptr, signed int a3)
{
  size_t v5; // r6
  int v6; // r0

  if ( a3 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
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
        sub_70B98(v6);
      }
    }
  }
  else
  {
    v5 = -1;
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
  }
  return v5;
}
// D6C20: using guessed type char under_debugger;
