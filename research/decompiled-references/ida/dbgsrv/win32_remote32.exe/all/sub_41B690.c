/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B690
// Address: 0x0041B690

//----- (0041B690) --------------------------------------------------------
int __userpurge sub_41B690@<eax>(int a1@<ebx>, _DWORD *a2, int a3)
{
  int v3; // esi
  unsigned int v4; // edx
  int v5; // edx

  v3 = a3;
  v4 = a2[2];
  if ( v4 < dword_4B6B24 && (v5 = *(_DWORD *)(dword_4B6B20 + 4 * v4)) != 0 )
  {
    a3 = a2[8];
    *(_DWORD *)(v3 + 8) = sub_45D330(a1, v5, (unsigned int)&a3, 4, a2[14] != 0);
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
