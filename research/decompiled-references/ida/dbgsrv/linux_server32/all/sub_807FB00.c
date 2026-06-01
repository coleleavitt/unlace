/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FB00
// Address: 0x0807FB00

//----- (0807FB00) --------------------------------------------------------
int __cdecl sub_807FB00(int *a1, int a2, char a3)
{
  int result; // eax

  if ( a1[1] - a2 <= 0 )
    sub_807E130();
  result = *a1;
  *(_BYTE *)(*a1 + a2) = a3;
  return result;
}
