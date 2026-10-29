/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F980
// Address: 0x0008F980

//----- (0008F980) --------------------------------------------------------
int __cdecl sub_8F980(_DWORD *a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v7; // [esp+8h] [ebp-14h]

  v2 = a1[7];
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  v7 = a1[1];
  v4 = a1[6];
  v5 = sub_8EB10();
  *(_DWORD *)(a2 + 4) = (*(int (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)v5 + 148))(v5, v7, v4, v3, 0);
  return 0;
}
