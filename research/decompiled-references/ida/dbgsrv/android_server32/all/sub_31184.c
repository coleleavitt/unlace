/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31184
// Address: 0x00031184

//----- (00031184) --------------------------------------------------------
int __fastcall sub_31184(int a1, unsigned int *a2, unsigned int *a3, int a4, int a5)
{
  int v6; // r2

  v6 = 1;
  if ( *(_QWORD *)(a4 + 56) )
    v6 = *(_DWORD *)(a4 + 56);
  *a3 = v6;
  *(_QWORD *)a2 = *(_QWORD *)(a4 + 32) / (unsigned __int64)(unsigned int)v6;
  return sub_311D8(*(_DWORD *)(a1 + 364), a2, *a3, a5, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), -1, 0xFFFFFFFF);
}
