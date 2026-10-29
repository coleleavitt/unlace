/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_394EA
// Address: 0x000394EA

//----- (000394EA) --------------------------------------------------------
int __fastcall sub_394EA(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = *(unsigned __int8 *)(a1 + 120);
  result = 1;
  if ( v1 != 168 && v1 != 191 )
    return 0;
  return result;
}
