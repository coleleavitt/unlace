/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491040
// Address: 0x0000000000491040

//----- (0000000000491040) ----------------------------------------------------
void *__fastcall sub_491040(signed __int64 a1)
{
  void *v1; // x19

  if ( !a1 )
    return nullptr;
  if ( a1 != 3735928559LL && a1 > 0 )
  {
    v1 = malloc(a1);
    if ( !v1 )
      sub_4869C8(1);
    return v1;
  }
  *__errno_location() = 12;
  sub_4869C8(1);
  return nullptr;
}
