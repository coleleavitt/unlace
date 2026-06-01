/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77E0C
// Address: 0x00077E0C

//----- (00077E0C) --------------------------------------------------------
void *__fastcall sub_77E0C(void *a1, signed int a2)
{
  void *v2; // r4

  v2 = (void *)a2;
  if ( !a2 )
  {
    sub_77E08(a1);
    return v2;
  }
  if ( a2 > 0 )
  {
    v2 = realloc(a1, a2);
    if ( !v2 )
      sub_70A2C(1);
    return v2;
  }
  *_errno_location() = 12;
  sub_70A2C(1);
  return nullptr;
}
