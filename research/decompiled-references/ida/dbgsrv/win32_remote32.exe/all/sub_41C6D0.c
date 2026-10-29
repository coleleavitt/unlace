/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C6D0
// Address: 0x0041C6D0

//----- (0041C6D0) --------------------------------------------------------
int __cdecl sub_41C6D0(int a1, int a2, unsigned int *a3)
{
  unsigned int *v3; // eax
  unsigned int v4; // edi
  LPVOID v5; // eax

  v3 = a3;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v5 = sub_4539E0(a3[1]);
    *(_DWORD *)a2 = v5;
    *(_DWORD *)(a2 + 8) = v4;
    sub_464310((unsigned int)v5, *a3, v4);
    v3 = a3;
    *(_DWORD *)(a2 + 4) = v4;
  }
  *(_BYTE *)(a2 + 16) = 2;
  *(_OWORD *)(a2 + 24) = 0;
  return sub_423670((char *)(a2 + 16), (char *)v3 + 16);
}
