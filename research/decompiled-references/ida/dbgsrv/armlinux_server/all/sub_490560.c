/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490560
// Address: 0x0000000000490560

//----- (0000000000490560) ----------------------------------------------------
__int64 __fastcall sub_490560(FILE *s, void *ptr, size_t a3)
{
  __int64 v4; // x19
  signed __int64 v6; // x0

  if ( !s )
  {
    sub_4869C8(1);
    v4 = -1;
    *__errno_location() = 9;
    sub_4869C8(1);
    return v4;
  }
  v4 = 0;
  if ( !a3 )
    return v4;
  v6 = fwrite(ptr, 1u, a3, s);
  v4 = v6;
  if ( a3 == v6 )
    return v4;
  sub_4869C8((unsigned int)(v6 > 0) + 1);
  return v4;
}
