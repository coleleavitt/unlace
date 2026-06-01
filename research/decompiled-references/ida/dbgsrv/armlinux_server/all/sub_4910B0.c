/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4910B0
// Address: 0x00000000004910B0

//----- (00000000004910B0) ----------------------------------------------------
void *__fastcall sub_4910B0(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // x2
  bool v3; // zf
  void *result; // x0

  v2 = a1 * a2;
  if ( !(a1 * a2) )
    return nullptr;
  if ( a1 )
    v3 = a2 == 0;
  else
    v3 = 1;
  if ( v3 )
  {
    if ( v2 == 3735928559LL )
    {
LABEL_9:
      *__errno_location() = 12;
      sub_4869C8(1);
LABEL_10:
      sub_4869C8(1);
      return nullptr;
    }
  }
  else if ( !is_mul_ok(a1, a2) || v2 == 3735928559LL )
  {
    goto LABEL_9;
  }
  if ( v2 <= 0 )
    goto LABEL_9;
  result = calloc(v2, 1u);
  if ( !result )
    goto LABEL_10;
  return result;
}
