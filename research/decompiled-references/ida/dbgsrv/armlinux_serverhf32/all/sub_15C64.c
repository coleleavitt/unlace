/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15C64
// Address: 0x00015C64

//----- (00015C64) --------------------------------------------------------
int __fastcall sub_15C64(__pid_t a1, int a2)
{
  int *v4; // r0
  int v5; // r8
  int result; // r0
  int *v7; // r4

  v4 = _errno_location();
  v5 = (unsigned __int8)byte_D39C0;
  *v4 = 0;
  if ( v5 )
    return j_kill(a1, a2);
  v7 = v4;
  result = syscall(238, a1, a2);
  if ( result && *v7 == 38 )
  {
    *v7 = 0;
    byte_D39C0 = 1;
    return j_kill(a1, a2);
  }
  if ( byte_D39C0 )
    return j_kill(a1, a2);
  return result;
}
// BD810: using guessed type int[512];
// D39C0: using guessed type char byte_D39C0;
