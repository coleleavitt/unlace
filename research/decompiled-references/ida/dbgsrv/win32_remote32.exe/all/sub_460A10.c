/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460A10
// Address: 0x00460A10

//----- (00460A10) --------------------------------------------------------
void __stdcall sub_460A10(int a1, __int128 *a2, int a3)
{
  int i; // ebx
  __int128 v5; // xmm0
  int v6; // ebp
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax

  for ( i = a3; i; --i )
  {
    v5 = *a2;
    v6 = *((_DWORD *)a2 + 4);
    v7 = *(_DWORD *)(a1 + 4) + 1;
    if ( v7 > *(_DWORD *)(a1 + 8) )
    {
      v5 = *a2;
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v7, 0x14u);
    }
    a2 = (__int128 *)((char *)a2 + 20);
    v8 = 5 * *(_DWORD *)(a1 + 4);
    v9 = *(_DWORD **)a1;
    *(_OWORD *)&v9[v8] = v5;
    v9[v8 + 4] = v6;
    ++*(_DWORD *)(a1 + 4);
  }
}
