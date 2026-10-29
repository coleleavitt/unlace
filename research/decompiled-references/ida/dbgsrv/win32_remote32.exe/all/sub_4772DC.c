/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4772DC
// Address: 0x004772DC

//----- (004772DC) --------------------------------------------------------
int __cdecl sub_4772DC(char a1, char a2)
{
  _DWORD *v3[2]; // [esp+0h] [ebp-14h] BYREF
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v3[0] = &a1;
  v3[1] = &a2;
  v5 = 2;
  v4 = 2;
  return sub_477012(&v4, v3, &v5);
}
