/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480BA0
// Address: 0x0000000000480BA0

//----- (0000000000480BA0) ----------------------------------------------------
size_t __fastcall sub_480BA0(FILE *stream, void *ptr, signed __int64 a3)
{
  size_t v4; // r12
  int v5; // eax

  if ( a3 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1225);
    BUG();
  }
  if ( stream )
  {
    v4 = 0;
    if ( a3 )
    {
      v4 = fread(ptr, 1u, a3, stream);
      if ( a3 != v4 )
      {
        v5 = feof(stream);
        sub_479EB0(v5 == 0 ? 1 : 3);
      }
    }
  }
  else
  {
    v4 = -1;
    sub_479EB0(1u);
    *__errno_location() = 9;
    sub_479EB0(1u);
  }
  return v4;
}
// 4C94E1: using guessed type char byte_4C94E1;
