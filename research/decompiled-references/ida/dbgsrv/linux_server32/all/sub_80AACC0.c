/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AACC0
// Address: 0x080AACC0

//----- (080AACC0) --------------------------------------------------------
int __cdecl sub_80AACC0(int a1, int a2, unsigned int *a3)
{
  int v4; // esi
  int v5; // edi
  char v6; // al
  int v7; // edx
  int v9; // [esp+0h] [ebp-24h]
  int v10; // [esp+4h] [ebp-20h]

  v4 = sub_80CDEC0(a3, a3[1]);
  v9 = sub_80CDEC0(a3, a3[1]);
  v5 = sub_80CDEC0(a3, a3[1]);
  v6 = sub_80AA920(a1, v4);
  v7 = 1;
  if ( !v6 )
    v7 = (*(int (__cdecl **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 + 244) + 72))(
           *(_DWORD *)(a1 + 244),
           v4,
           v9,
           v5,
           a2);
  if ( !*(_BYTE *)(a1 + 96) )
    return v7;
  v10 = v7;
  sub_8058290();
  return v10;
}
