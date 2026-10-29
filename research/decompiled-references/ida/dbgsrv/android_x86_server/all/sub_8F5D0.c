/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F5D0
// Address: 0x0008F5D0

//----- (0008F5D0) --------------------------------------------------------
int __cdecl sub_8F5D0(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  char v5; // [esp+7h] [ebp-15h] BYREF
  unsigned int v6; // [esp+8h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  v5 = *(_BYTE *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 4);
  v3 = sub_8EB10();
  *(_DWORD *)(a2 + 4) = (*(int (__cdecl **)(int, int, char *, int, _DWORD))(*(_DWORD *)v3 + 148))(v3, v2, &v5, 1, 0);
  return 0;
}
