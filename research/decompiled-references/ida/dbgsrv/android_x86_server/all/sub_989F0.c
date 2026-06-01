/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_989F0
// Address: 0x000989F0

//----- (000989F0) --------------------------------------------------------
int __cdecl sub_989F0(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // eax

  result = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = -1;
  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      a1[1] = a3;
      a1[2] = a4;
      a1[3] = a2;
    }
  }
  return result;
}
