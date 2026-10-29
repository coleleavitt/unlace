/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B510
// Address: 0x0041B510

//----- (0041B510) --------------------------------------------------------
int __userpurge sub_41B510@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  unsigned int v3; // edx
  int v4; // edx

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 < dword_4B6B24 && (v4 = *(_DWORD *)(dword_4B6B20 + 4 * v3)) != 0 )
  {
    --*(_DWORD *)(a3 + 8);
    *(_DWORD *)(a3 + 8) = sub_42F530(a3, a1, (int (__cdecl *)(int, CHAR))sub_41BC60, v4, a2 + 24, a3);
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
