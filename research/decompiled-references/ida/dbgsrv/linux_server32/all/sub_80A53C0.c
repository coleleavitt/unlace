/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A53C0
// Address: 0x080A53C0

//----- (080A53C0) --------------------------------------------------------
int __cdecl sub_80A53C0(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // eax

  v2 = a1[6];
  v3 = a1[1];
  v4 = (a1[7] == 0) + a1[7] - 1;
  v5 = sub_80A4C20();
  *(_DWORD *)(a2 + 4) = (*(int (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)v5 + 148))(v5, v3, v2, v4, 0);
  return 0;
}
