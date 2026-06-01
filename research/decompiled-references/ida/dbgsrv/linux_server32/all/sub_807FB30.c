/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FB30
// Address: 0x0807FB30

//----- (0807FB30) --------------------------------------------------------
int __cdecl sub_807FB30(int *a1, int a2, __int16 a3)
{
  int result; // eax

  if ( a1[1] - a2 <= 1 )
    sub_807E130();
  *(_BYTE *)(*a1 + a2) = a3;
  result = *a1;
  *(_BYTE *)(*a1 + a2 + 1) = HIBYTE(a3);
  return result;
}
