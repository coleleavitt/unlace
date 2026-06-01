/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15E08
// Address: 0x00015E08

//----- (00015E08) --------------------------------------------------------
int __fastcall sub_15E08(__pid_t a1, int a2)
{
  int *v4; // r0
  int v5; // r8
  int result; // r0
  int *v7; // r4

  v4 = _errno_location();
  v5 = (unsigned __int8)byte_D49E0;
  *v4 = 0;
  if ( v5 )
    return j_kill(a1, a2);
  v7 = v4;
  result = syscall(238, a1, a2);
  if ( result && *v7 == 38 )
  {
    *v7 = 0;
    byte_D49E0 = 1;
    return j_kill(a1, a2);
  }
  if ( byte_D49E0 )
    return j_kill(a1, a2);
  return result;
}
// BE810: using guessed type int[512];
// D49E0: using guessed type char byte_D49E0;
