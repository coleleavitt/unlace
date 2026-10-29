/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B4C0
// Address: 0x0041B4C0

//----- (0041B4C0) --------------------------------------------------------
int __userpurge sub_41B4C0@<eax>(int *a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  unsigned int v4; // edx

  v4 = *(_DWORD *)(a3 + 32);
  if ( v4 < dword_4B6B24 && *(_DWORD *)(dword_4B6B20 + 4 * v4) )
  {
    *(_DWORD *)(a4 + 8) = sub_45D410(a1, a2, *(char *)(a3 + 8), *(_DWORD **)(dword_4B6B20 + 4 * v4));
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
