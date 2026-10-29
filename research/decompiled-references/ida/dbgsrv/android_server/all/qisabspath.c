/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisabspath
// Address: 0x00000000000BC400

//----- (00000000000BC400) ----------------------------------------------------
__int64 __fastcall qisabspath(unsigned __int8 *a1)
{
  int v1; // w8
  __int64 result; // x0

  v1 = *a1;
  result = 1;
  if ( v1 != 47 && v1 != 92 )
    return 0;
  return result;
}
