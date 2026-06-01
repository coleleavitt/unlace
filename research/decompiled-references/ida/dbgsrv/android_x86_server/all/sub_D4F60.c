/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4F60
// Address: 0x000D4F60

//----- (000D4F60) --------------------------------------------------------
_DWORD *__userpurge sub_D4F60@<eax>(_DWORD *a1, int a2)
{
  int v3; // edx
  int v4; // ecx

  v3 = *(_DWORD *)(a2 + 8);
  v4 = (int)*(&off_13AB90 + v3);
  *a1 = off_13AB70[v3];
  a1[1] = v4;
  return a1;
}
// 13AB70: using guessed type char *off_13AB70[6];
// 13AB90: using guessed type _UNKNOWN *off_13AB90;
