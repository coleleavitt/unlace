/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD130
// Address: 0x080BD130

//----- (080BD130) --------------------------------------------------------
_DWORD *__cdecl sub_80BD130(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = a1;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = -1;
  if ( a3 )
  {
    if ( a2 >= 0 )
    {
      a1[1] = a3;
      a1[3] = a2;
      a1[2] = a4;
    }
  }
  return result;
}
