/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AD40
// Address: 0x0003AD40

//----- (0003AD40) --------------------------------------------------------
int __fastcall sub_3AD40(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r5
  _DWORD *v6; // r1
  int v7; // r7
  int v8; // r2

  v2 = *(_DWORD *)(a1 + 168);
  v3 = *(_DWORD *)(a1 + 172);
  v4 = v3 - 1;
  v5 = *(_DWORD *)(v2 + 4 * (v3 - 1));
  v6 = (_DWORD *)(a1 + 172);
  if ( v3 )
  {
    *v6 = v4;
    v7 = v3 - 2;
    v8 = *(_DWORD *)(v2 + 4 * (v3 - 2));
    if ( !v4 )
      v7 = 0;
    *v6 = v7;
  }
  else
  {
    v8 = *(_DWORD *)(v2 - 4);
  }
  sub_3AB40(a1, 171, v8);
  if ( v5 )
    sub_4022C(*(int **)(a1 + 112), v5, -4 - v5 + *(_DWORD *)(a1 + 116));
  return 0;
}
