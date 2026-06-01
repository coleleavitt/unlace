/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B630
// Address: 0x0041B630

//----- (0041B630) --------------------------------------------------------
int __userpurge sub_41B630@<eax>(int a1@<ebx>, int a2, int a3)
{
  int v3; // esi
  unsigned int v4; // edx
  int v5; // edx

  v3 = a3;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 < dword_4B6B24 && (v5 = *(_DWORD *)(dword_4B6B20 + 4 * v4)) != 0 )
  {
    a3 = *(unsigned __int16 *)(a2 + 32);
    *(_DWORD *)(v3 + 8) = sub_45D330(a1, v5, (unsigned int)&a3, 2, *(_DWORD *)(a2 + 56) != 0);
    return 0;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = -1;
    return 0;
  }
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
