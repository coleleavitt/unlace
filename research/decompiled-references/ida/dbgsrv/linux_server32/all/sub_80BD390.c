/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD390
// Address: 0x080BD390

//----- (080BD390) --------------------------------------------------------
int __usercall sub_80BD390@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v4; // eax
  int v6; // ecx

  if ( a1 == -1 )
    return 0;
  v4 = fcntl(a1, 3, 0);
  if ( v4 == -1 )
    return 0;
  if ( ((v4 & 0x800) == 0) == a2 )
    return 1;
  BYTE1(v4) ^= 8u;
  LOBYTE(v6) = fcntl(a1, 4, v4) == 0;
  return v6;
}
// 80BD405: variable 'v6' is possibly undefined
