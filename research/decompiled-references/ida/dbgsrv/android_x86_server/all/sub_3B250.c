/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B250
// Address: 0x0003B250

//----- (0003B250) --------------------------------------------------------
int __cdecl sub_3B250(int a1, __int64 *a2, unsigned int *a3, int a4, int a5)
{
  int v5; // ecx

  v5 = 1;
  if ( *(_QWORD *)(a4 + 56) )
    v5 = *(_DWORD *)(a4 + 56);
  *a3 = v5;
  *a2 = *(_QWORD *)(a4 + 32) / (unsigned __int64)(unsigned int)v5;
  return sub_3B2D0(*(_DWORD *)(a1 + 360), a2, *a3, a5, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), -1, 0xFFFFFFFF);
}
