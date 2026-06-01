/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5776C
// Address: 0x0005776C

//----- (0005776C) --------------------------------------------------------
int __fastcall sub_5776C(_DWORD *a1, int a2)
{
  int v3; // r4
  int v4; // r8
  int v5; // r9
  int v6; // r0

  v3 = a1[9];
  v4 = a1[2];
  v5 = a1[8];
  if ( v3 )
    --v3;
  v6 = sub_570D8();
  *(_DWORD *)(a2 + 8) = (*(int (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v6 + 148))(v6, v4, v5, v3, 0);
  return 0;
}
