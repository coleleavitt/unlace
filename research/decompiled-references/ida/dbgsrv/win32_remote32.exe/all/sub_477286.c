/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477286
// Address: 0x00477286

//----- (00477286) --------------------------------------------------------
int __cdecl sub_477286(char a1)
{
  int v2; // [esp+0h] [ebp-10h] BYREF
  char *v3; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+8h] [ebp-8h] BYREF

  v3 = &a1;
  v4 = 2;
  v2 = 2;
  return sub_476FB7(&v2, (_DWORD **)&v3, &v4);
}
