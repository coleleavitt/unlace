/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4780F4
// Address: 0x004780F4

//----- (004780F4) --------------------------------------------------------
void __cdecl sub_4780F4(int a1, char a2)
{
  int v2; // [esp+0h] [ebp-14h] BYREF
  int v3; // [esp+4h] [ebp-10h] BYREF
  int *v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF

  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)a1 = dword_4A6528;
  *(_DWORD *)(a1 + 848) = 1;
  *(_DWORD *)(a1 + 72) = dword_4B62D8;
  *(_WORD *)(a1 + 108) = 67;
  *(_WORD *)(a1 + 370) = 67;
  *(_DWORD *)(a1 + 844) = 0;
  v3 = (int)&a1;
  v5 = 5;
  v2 = 5;
  sub_477F88(&v2, (int)&v3, &v5);
  v4 = &a1;
  v5 = (int)&a2;
  v2 = 4;
  v3 = 4;
  sub_47809A(&v3, (int)&v4, &v2);
}
// 4A6528: using guessed type int dword_4A6528[3];
// 4B62D8: using guessed type int dword_4B62D8[22];
