/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A2F0
// Address: 0x0008A2F0

//----- (0008A2F0) --------------------------------------------------------
int __cdecl sub_8A2F0(int a1, int a2, char *a3, void *a4)
{
  if ( a2 && !*(_BYTE *)(a2 + 36) )
    return sub_95A70(a1, a2, (int)a3, (int)a4);
  else
    return sub_99010(a1, a3, a4);
}
