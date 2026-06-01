/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B420
// Address: 0x0041B420

//----- (0041B420) --------------------------------------------------------
int __userpurge sub_41B420@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  unsigned int v4; // ecx
  int v6; // edx
  unsigned int *v7; // [esp-4h] [ebp-8h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < dword_4B6B24 && *(_DWORD *)(dword_4B6B20 + 4 * v4) )
  {
    v7 = *(unsigned int **)(dword_4B6B20 + 4 * v4);
    *(_BYTE *)a4 = 9;
    *(_DWORD *)(a4 + 8) = sub_45D030(a1, a2, v7);
    *(_DWORD *)(a4 + 12) = v6;
    return 0;
  }
  else
  {
    *(_DWORD *)(a4 + 8) = -1;
    return 0;
  }
}
// 41B44E: variable 'v6' is possibly undefined
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
