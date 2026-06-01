/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77EFC
// Address: 0x00077EFC

//----- (00077EFC) --------------------------------------------------------
void *__fastcall sub_77EFC(signed int a1)
{
  void *v1; // r4

  v1 = (void *)a1;
  if ( !a1 )
    return v1;
  if ( a1 > 0 )
  {
    v1 = malloc(a1);
    if ( !v1 )
      sub_70B98(1);
    return v1;
  }
  *_errno_location() = 12;
  sub_70B98(1);
  return nullptr;
}
