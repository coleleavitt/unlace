/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qisabspath
// Address: 0x000000010007BD60

//----- (000000010007BD60) ----------------------------------------------------
__int64 __fastcall qisabspath(unsigned __int8 *a1)
{
  __int64 result; // rax

  result = *a1;
  LOBYTE(result) = (_BYTE)result == 47 || (_BYTE)result == 92;
  return result;
}
