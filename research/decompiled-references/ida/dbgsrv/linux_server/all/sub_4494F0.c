/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4494F0
// Address: 0x00000000004494F0

//----- (00000000004494F0) ----------------------------------------------------
__int64 __fastcall sub_4494F0(unsigned __int8 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  LODWORD(result) = (char)a1;
  if ( (unsigned int)(char)a1 > 0x7F || (a3 = isalnum(a1), result = 1, !a3) )
  {
    LOBYTE(result) = a1 == 95;
    LOBYTE(a3) = a1 == 36;
    return a3 | (unsigned int)result;
  }
  return result;
}
