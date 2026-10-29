/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77EB0
// Address: 0x00077EB0

//----- (00077EB0) --------------------------------------------------------
void *__fastcall sub_77EB0(int a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r1
  unsigned int v7; // r5
  bool v8; // zf
  void *result; // r0

  if ( !a1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(2676);
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
    result = sub_77E94(a2, v7 * a4);
    *(_DWORD *)(a1 + 8) = v7;
  }
  else
  {
    if ( v6 <= a3 || a3 && !is_mul_ok(a3, a4) )
      sub_8397C();
    result = sub_77E94(a2, a3 * a4);
    *(_DWORD *)(a1 + 8) = a3;
  }
  return result;
}
// D5C00: using guessed type char under_debugger;
