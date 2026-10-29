/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A6D0
// Address: 0x0008A6D0

//----- (0008A6D0) --------------------------------------------------------
int __cdecl sub_8A6D0(int a1, int *a2, signed int a3)
{
  void **v4; // [esp+8h] [ebp-14h]

  v4 = (void **)(a1 + 20);
  sub_1C390((int *)(a1 + 20), 0);
  if ( *(_DWORD *)(a1 + 28) < (unsigned int)a3 )
    *v4 = qvector_reserve((int)v4, *v4, a3, 0x20u);
  if ( a3 <= 0 )
    JUMPOUT(0x8A74C);
  return sub_8A730((int)v4, a2, a3, a1, (int)a2);
}
// 8A722: control flows out of bounds to 8A74C
