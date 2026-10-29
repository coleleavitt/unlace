/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46DBC1
// Address: 0x0046DBC1

//----- (0046DBC1) --------------------------------------------------------
char __cdecl sub_46DBC1(char *a1, int a2)
{
  char v2; // bl
  int v3; // esi

  v2 = 0;
  v3 = 0;
  while ( *a1 == byte_4A6510[v3] || *a1 == byte_4A6518[v3] )
  {
    ++v3;
    *a1 = sub_470F48(a2);
    if ( v3 == 5 )
      return 1;
  }
  return v2;
}
