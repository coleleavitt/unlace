/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4420
// Address: 0x000D4420

//----- (000D4420) --------------------------------------------------------
_DWORD *__userpurge sub_D4420@<eax>(_DWORD *a1, int a2)
{
  int v3; // edx
  int v4; // ecx

  v3 = *(_DWORD *)(a2 + 8);
  v4 = (int)*(&off_13AB50 + v3);
  *a1 = off_13AB30[v3];
  a1[1] = v4;
  return a1;
}
// 13AB30: using guessed type char *off_13AB30[6];
// 13AB50: using guessed type _UNKNOWN *off_13AB50;
