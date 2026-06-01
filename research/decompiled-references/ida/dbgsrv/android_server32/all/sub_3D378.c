/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D378
// Address: 0x0003D378

//----- (0003D378) --------------------------------------------------------
int __fastcall sub_3D378(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r6
  int v5; // r1
  int *v6; // r7
  void **v7; // r5
  char *v8; // r0
  int v9; // r1
  char *v10; // r0
  _DWORD *v12; // [sp+0h] [bp-1Ch]
  int v13; // [sp+8h] [bp-14h]
  int v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 204);
  v3 = 16 * (*(_DWORD *)(a1 + 208) - 1);
  v13 = *(_DWORD *)(v2 + v3);
  v4 = v2 + v3;
  v14 = *(_DWORD *)(v2 + v3 + 4);
  v15 = *(_DWORD *)(v2 + v3 + 8);
  v16 = *(_DWORD *)(v2 + v3 + 12);
  v5 = *(_DWORD *)(a1 + 220);
  v6 = (int *)(a1 + 220);
  v7 = (void **)(a1 + 216);
  v12 = (_DWORD *)(a1 + 208);
  if ( *(_DWORD *)(a1 + 224) >= (unsigned int)(v5 + 1) )
  {
    v8 = (char *)*v7;
  }
  else
  {
    v8 = (char *)qvector_reserve(a1 + 216, *v7, v5 + 1, 0x10u);
    *v7 = v8;
    v5 = *v6;
  }
  v9 = 16 * v5;
  *(_DWORD *)&v8[v9] = v13;
  v10 = &v8[v9];
  *((_DWORD *)v10 + 1) = v14;
  *((_DWORD *)v10 + 2) = v15;
  *((_DWORD *)v10 + 3) = v16;
  ++*v6;
  sub_4022C(*(int **)(a1 + 112), *(_DWORD *)(v4 + 4) - 4, *(_DWORD *)(a1 + 116) - *(_DWORD *)(v4 + 4));
  if ( *v12 )
    --*v12;
  return 0;
}
