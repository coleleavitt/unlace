/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477FDA
// Address: 0x00477FDA

//----- (00477FDA) --------------------------------------------------------
void __stdcall sub_477FDA(int *a1, int a2, int *a3)
{
  int *v3; // ecx

  sub_47A78B(*a1);
  v3 = *(int **)(**(_DWORD **)a2 + 72);
  if ( v3 && !_InterlockedExchangeAdd(v3, 0xFFFFFFFF) && v3 != dword_4B62D8 )
    sub_479216(v3);
  sub_47A7D3(*a3);
}
// 4B62D8: using guessed type int dword_4B62D8[22];
