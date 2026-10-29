/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77DC4
// Address: 0x00077DC4

//----- (00077DC4) --------------------------------------------------------
void *__fastcall sub_77DC4(unsigned int a1, unsigned int a2)
{
  signed int v2; // r4
  bool v3; // zf
  void *result; // r0

  v2 = a2 * a1;
  if ( !(a2 * a1) )
    return nullptr;
  v3 = a2 == 0;
  if ( a2 )
    v3 = a1 == 0;
  if ( !v3 && !is_mul_ok(a1, a2) || v2 <= 0 )
  {
    *_errno_location() = 12;
    sub_70A2C(1);
LABEL_8:
    sub_70A2C(1);
    return nullptr;
  }
  result = calloc(v2, 1u);
  if ( !result )
    goto LABEL_8;
  return result;
}
