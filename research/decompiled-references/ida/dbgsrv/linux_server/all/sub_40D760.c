/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D760
// Address: 0x000000000040D760

//----- (000000000040D760) ----------------------------------------------------
int __fastcall sub_40D760(unsigned int pid, unsigned int sig)
{
  int *v2; // rax
  bool v3; // zf
  int *v5; // rbx
  int v6; // edx

  v2 = __errno_location();
  v3 = byte_4C8074 == 0;
  *v2 = 0;
  if ( !v3 )
    return kill(pid, sig);
  v5 = v2;
  v6 = syscall(200, pid, sig);
  if ( v6 && *v5 == 38 )
  {
    *v5 = 0;
    byte_4C8074 = 1;
    return kill(pid, sig);
  }
  if ( byte_4C8074 )
    return kill(pid, sig);
  return v6;
}
// 4C8074: using guessed type char byte_4C8074;
