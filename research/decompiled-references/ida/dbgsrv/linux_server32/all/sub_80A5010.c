/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5010
// Address: 0x080A5010

//----- (080A5010) --------------------------------------------------------
int __cdecl sub_80A5010(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  char v5; // [esp+1h] [ebp-11h] BYREF
  unsigned int v6; // [esp+2h] [ebp-10h]

  v6 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 24);
  v3 = sub_80A4C20();
  *(_DWORD *)(a2 + 4) = (*(int (__cdecl **)(int, int, char *, int, _DWORD))(*(_DWORD *)v3 + 148))(v3, v2, &v5, 1, 0);
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
