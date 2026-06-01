/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417EF0
// Address: 0x00417EF0

//----- (00417EF0) --------------------------------------------------------
int __cdecl sub_417EF0(int a1, int *a2, int a3)
{
  int *v3; // esi

  v3 = a2 + 2;
  if ( *a2 >= -1 )
    v3 = (int *)*v3;
  *(_OWORD *)(a1 + 16 * (a3 + 17)) = *(_OWORD *)v3;
  *(_OWORD *)(a1 + 16 * (a3 + 33)) = *((_OWORD *)v3 + 1);
  return 2 * (a3 + 33);
}
