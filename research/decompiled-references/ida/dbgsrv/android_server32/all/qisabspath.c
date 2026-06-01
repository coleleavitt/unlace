/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisabspath
// Address: 0x0007D3B0

//----- (0007D3B0) --------------------------------------------------------
int __fastcall qisabspath(unsigned __int8 *a1)
{
  int v1; // r1
  int result; // r0

  v1 = *a1;
  result = 1;
  if ( v1 != 47 && v1 != 92 )
    return 0;
  return result;
}
