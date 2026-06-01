/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D4390
// Address: 0x080D4390

//----- (080D4390) --------------------------------------------------------
_BOOL4 __usercall sub_80D4390@<eax>(int a1@<eax>)
{
  _DWORD *v1; // edx
  _BOOL4 result; // eax

  v1 = *(_DWORD **)(a1 + 28);
  result = 1;
  if ( v1 )
  {
    if ( a1 == *v1 )
      return (unsigned int)(v1[1] - 16180) > 0x1F;
  }
  return result;
}
