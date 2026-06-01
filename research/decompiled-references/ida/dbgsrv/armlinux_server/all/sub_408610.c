/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408610
// Address: 0x0000000000408610

//----- (0000000000408610) ----------------------------------------------------
__int64 __fastcall sub_408610(unsigned int a1, unsigned int a2)
{
  int *v4; // x20
  int v5; // w0
  __int64 result; // x0

  v4 = __errno_location();
  v5 = (unsigned __int8)byte_522110;
  *v4 = 0;
  if ( v5 )
    return kill(a1, a2);
  result = syscall(130, a1, a2);
  if ( (_DWORD)result && *v4 == 38 )
  {
    *v4 = 0;
    byte_522110 = 1;
    return kill(a1, a2);
  }
  if ( byte_522110 )
    return kill(a1, a2);
  return result;
}
// 522110: using guessed type char byte_522110;
