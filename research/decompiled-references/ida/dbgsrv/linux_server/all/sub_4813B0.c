/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4813B0
// Address: 0x00000000004813B0

//----- (00000000004813B0) ----------------------------------------------------
void *__fastcall sub_4813B0(signed __int64 a1)
{
  void *v1; // rbx

  if ( !a1 )
    return nullptr;
  if ( a1 == 3735928559LL || a1 <= 0 )
  {
    *__errno_location() = 12;
    sub_479EB0(1u);
    return nullptr;
  }
  v1 = malloc(a1);
  if ( !v1 )
    sub_479EB0(1u);
  return v1;
}
