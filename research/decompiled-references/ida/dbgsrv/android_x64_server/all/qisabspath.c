/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisabspath
// Address: 0x00000000000C10F0

//----- (00000000000C10F0) ----------------------------------------------------
char __fastcall qisabspath(_BYTE *a1)
{
  char result; // al

  result = 1;
  if ( *a1 != 47 && *a1 != 92 )
    return 0;
  return result;
}
