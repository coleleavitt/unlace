/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE930
// Address: 0x080CE930

//----- (080CE930) --------------------------------------------------------
int __usercall sub_80CE930@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // eax

  if ( a2 == 1 )
  {
    v3 = flock(a1, 5);
  }
  else
  {
    if ( a2 == 8 )
    {
      if ( flock(a1, 12) != -1 )
        return 0;
LABEL_9:
      sub_80C7880(1);
      return -1;
    }
    v3 = flock(a1, 6);
  }
  if ( v3 == -1 )
    goto LABEL_9;
  fcntl64(a1, 2, 1);
  return 0;
}
// 804BAE0: using guessed type int __cdecl fcntl64(_DWORD, _DWORD, _DWORD);
