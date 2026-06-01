/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B810
// Address: 0x0041B810

//----- (0041B810) --------------------------------------------------------
int __userpurge sub_41B810@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3, int a4)
{
  unsigned int v4; // edx
  int v5; // edx
  const char *v6; // eax

  v4 = a3[2];
  if ( v4 < dword_4B6B24 && (v5 = *(_DWORD *)(dword_4B6B20 + 4 * v4)) != 0 )
  {
    v6 = MultiByteStr;
    if ( a3[9] )
      v6 = (const char *)a3[8];
    *(_DWORD *)(a4 + 8) = sub_45D450(a1, a2, v6, v5);
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
