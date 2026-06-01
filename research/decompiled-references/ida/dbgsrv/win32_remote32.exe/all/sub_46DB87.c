/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DB87
// Address: 0x0046DB87

//----- (0046DB87) --------------------------------------------------------
char __cdecl sub_46DB87(char *a1, int a2)
{
  char v2; // bl
  int v3; // esi

  v2 = 0;
  v3 = 0;
  while ( *a1 == byte_4A6520[v3] || *a1 == byte_4A6524[v3] )
  {
    ++v3;
    *a1 = sub_470F48(a2);
    if ( v3 == 4 )
      return 1;
  }
  return v2;
}
