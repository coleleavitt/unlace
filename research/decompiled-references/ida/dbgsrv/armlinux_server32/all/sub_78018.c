/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78018
// Address: 0x00078018

//----- (00078018) --------------------------------------------------------
void *__fastcall sub_78018(int a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r1
  unsigned int v7; // r5
  bool v8; // zf
  void *result; // r0

  if ( !a1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(2676);
  }
  v6 = 2 * *(_DWORD *)(a1 + 8);
  v7 = v6;
  if ( v6 < a3 )
    v7 = a3;
  v8 = a4 == 0;
  if ( a4 )
    v8 = v7 == 0;
  if ( v8 || is_mul_ok(v7, a4) )
  {
    result = sub_77FFC(a2, v7 * a4);
    *(_DWORD *)(a1 + 8) = v7;
  }
  else
  {
    if ( v6 <= a3 || a3 && !is_mul_ok(a3, a4) )
      sub_83C64();
    result = sub_77FFC(a2, a3 * a4);
    *(_DWORD *)(a1 + 8) = a3;
  }
  return result;
}
// D6C20: using guessed type char under_debugger;
