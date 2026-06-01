/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491148
// Address: 0x0000000000491148

//----- (0000000000491148) ----------------------------------------------------
void *__fastcall sub_491148(void *a1, signed __int64 a2)
{
  void *v2; // x19

  if ( !a2 )
  {
    j__free(a1);
    return nullptr;
  }
  if ( a2 != 3735928559LL && a2 > 0 )
  {
    v2 = realloc(a1, a2);
    if ( !v2 )
      sub_4869C8(1);
    return v2;
  }
  *__errno_location() = 12;
  sub_4869C8(1);
  return nullptr;
}
