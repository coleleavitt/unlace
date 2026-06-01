/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisabspath
// Address: 0x000AE6C0

//----- (000AE6C0) --------------------------------------------------------
bool __cdecl qisabspath(_BYTE *a1)
{
  bool result; // al

  result = 1;
  if ( *a1 != 47 )
    return *a1 == 92;
  return result;
}
