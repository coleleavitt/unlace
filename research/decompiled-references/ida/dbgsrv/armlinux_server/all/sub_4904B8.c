/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4904B8
// Address: 0x00000000004904B8

//----- (00000000004904B8) ----------------------------------------------------
size_t __fastcall sub_4904B8(FILE *stream, void *ptr, size_t a3)
{
  size_t v5; // x21
  __int64 v6; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1225);
  }
  if ( stream )
  {
    v5 = 0;
    if ( a3 )
    {
      v5 = fread(ptr, 1u, a3, stream);
      if ( a3 != v5 )
      {
        if ( feof(stream) )
          v6 = 3;
        else
          v6 = 1;
        sub_4869C8(v6);
      }
    }
  }
  else
  {
    sub_4869C8(1);
    v5 = -1;
    *__errno_location() = 9;
    sub_4869C8(1);
  }
  return v5;
}
// 52451C: using guessed type char under_debugger;
