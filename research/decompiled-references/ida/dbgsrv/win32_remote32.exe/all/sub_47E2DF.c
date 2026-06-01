/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E2DF
// Address: 0x0047E2DF

//----- (0047E2DF) --------------------------------------------------------
int __usercall sub_47E2DF@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  v2 = sub_4782C6();
  v4 = *(_DWORD *)(v2 + 76);
  sub_4785BA(a2, v2, &v4);
  return *(_DWORD *)(v4 + 8);
}
