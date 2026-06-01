/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B470
// Address: 0x0041B470

//----- (0041B470) --------------------------------------------------------
int __userpurge sub_41B470@<eax>(int *a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  unsigned int v4; // ecx
  int v5; // eax

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < dword_4B6B24 && *(_DWORD *)(dword_4B6B20 + 4 * v4) )
  {
    v5 = sub_45D3D0(a1, a2, *(_DWORD **)(dword_4B6B20 + 4 * v4));
    if ( v5 == -1 )
      *(_DWORD *)(a4 + 8) = -1;
    else
      *(_DWORD *)(a4 + 8) = (unsigned __int8)v5;
    return 0;
  }
  else
  {
    *(_DWORD *)(a4 + 8) = -1;
    return 0;
  }
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
