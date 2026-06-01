/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD880
// Address: 0x080CD880

//----- (080CD880) --------------------------------------------------------
_DWORD *__cdecl sub_80CD880(int a1, int a2)
{
  int *v2; // eax

  v2 = (int *)operator new(0x14u);
  *v2 = (int)&off_811C8EC;
  v2[1] = a2;
  v2[4] = a1;
  v2[2] = 0;
  v2[3] = 0;
  return sub_80CD580(v2);
}
// 811C8EC: using guessed type int (__cdecl *off_811C8EC)(int, int, int, void *dest, int);
