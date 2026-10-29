/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054B10
// Address: 0x08054B10

//----- (08054B10) --------------------------------------------------------
int __usercall sub_8054B10@<eax>(__pid_t a1@<eax>, int a2@<edx>)
{
  int *v4; // eax
  bool v5; // zf
  int result; // eax
  int *v7; // ebp

  v4 = __errno_location();
  v5 = byte_811E600 == 0;
  *v4 = 0;
  if ( !v5 )
    return kill(a1, a2);
  v7 = v4;
  result = syscall(238, a1, a2);
  if ( result && *v7 == 38 )
  {
    *v7 = 0;
    byte_811E600 = 1;
    return kill(a1, a2);
  }
  if ( byte_811E600 )
    return kill(a1, a2);
  return result;
}
// 811E600: using guessed type char byte_811E600;
