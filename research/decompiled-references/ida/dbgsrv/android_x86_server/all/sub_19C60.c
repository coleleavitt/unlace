/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19C60
// Address: 0x00019C60

//----- (00019C60) --------------------------------------------------------
int __cdecl sub_19C60(int a1, int a2, int *a3)
{
  *a3 = ps_getpid(*(_DWORD *)(a1 + 4));
  a3[1] = a2;
  return 0;
}
