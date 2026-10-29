/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60780
// Address: 0x00060780

//----- (00060780) --------------------------------------------------------
int __cdecl sub_60780(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // edx
  int v7; // edi
  char *v8; // esi

  result = a2;
  if ( a4 )
  {
    v6 = a5 + a2 - a3;
    if ( v6 < 0 || v6 >= a5 )
    {
      return a3;
    }
    else
    {
      v7 = a3 - a2;
      v8 = (char *)(a4 + 20 * v6);
      do
      {
        sub_4E740(a1 + 12, v8);
        v8 += 20;
        --v7;
      }
      while ( v7 );
      return a3;
    }
  }
  return result;
}
