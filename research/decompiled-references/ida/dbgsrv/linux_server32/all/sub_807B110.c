/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807B110
// Address: 0x0807B110

//----- (0807B110) --------------------------------------------------------
int __cdecl sub_807B110(int *a1)
{
  char *v1; // edx

  v1 = (char *)&dword_80DDFD8;
  if ( a1[6] )
    v1 = (char *)a1[5];
  return sub_807A930(a1, v1);
}
// 80DDFD8: using guessed type int dword_80DDFD8;
