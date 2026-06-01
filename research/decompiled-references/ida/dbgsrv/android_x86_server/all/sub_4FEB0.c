/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FEB0
// Address: 0x0004FEB0

//----- (0004FEB0) --------------------------------------------------------
int __cdecl sub_4FEB0(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-18h] BYREF
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  unsigned int v6; // [esp+Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  sub_4F1E0((int (__cdecl *)(int, int))sub_4FF80, (int)&v3, a1, a2);
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)(a2 + 8) = v4;
  *(_DWORD *)(a2 + 12) = v5;
  return 0;
}
