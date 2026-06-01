/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65D60
// Address: 0x00065D60

//----- (00065D60) --------------------------------------------------------
int __fastcall sub_65D60(int *a1, int a2)
{
  int *v4; // r1
  int *v5; // r4
  int result; // r0
  int *v7; // r5
  int v8; // r2
  int **v9; // r3
  int v10; // r0
  int v11; // r7
  int v12; // r0
  int v13; // r0
  int v14; // [sp+10h] [bp-30h]
  int v15; // [sp+14h] [bp-2Ch]
  int v16; // [sp+18h] [bp-28h]
  int v17; // [sp+1Ch] [bp-24h]
  void *v18[6]; // [sp+24h] [bp-1Ch] BYREF

  v4 = (int *)a1[41];
  v5 = a1 + 41;
  result = -1;
  if ( !v4 )
    return result;
  v17 = -1;
  v7 = v5;
  do
  {
    v8 = v4[4];
    if ( v8 >= a2 )
      v7 = v4;
    v9 = (int **)(v4 + 1);
    if ( v8 >= a2 )
      v9 = (int **)v4;
    v4 = *v9;
  }
  while ( *v9 );
  if ( v7 == v5 )
    return v17;
  if ( v7[4] > a2 )
    return v17;
  v10 = v7[6];
  if ( !v10 )
    return v17;
  v15 = 24 * (v10 - 1);
  v14 = v7[5];
  v16 = v14 + v15;
  if ( !(*(int (__fastcall **)(int *, int))(*a1 + 240))(a1, a2) )
    return v17;
  (*(void (__fastcall **)(int *, int, _DWORD, int, int))(*a1 + 160))(a1, 4, *(_DWORD *)(v16 + 16), a1[53], a1[54]);
  if ( *(_BYTE *)(v16 + 20)
    && !(*(int (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD))(*a1 + 220))(
          a1,
          a2,
          0,
          *(_DWORD *)(v14 + v15 + 4),
          *(_DWORD *)v16) )
  {
    sub_1BC48((int)a1, "Failed to restore %zu registers!\n", *(_DWORD *)(v14 + v15 + 4));
    return v17;
  }
  v11 = v7[5] + 24 * v7[6];
  v17 = 3;
  *((_BYTE *)sub_6737C((int **)v18, (int *)(v11 - 24)) + 20) = *(_BYTE *)(v11 - 4);
  v18[4] = *(void **)(v11 - 8);
  v18[3] = *(void **)(v11 - 12);
  v12 = v7[6];
  if ( v12 )
  {
    v13 = v12 - 1;
    v7[6] = v13;
    sub_5F79C((void **)(v7[5] + 24 * v13));
  }
  sub_5F79C(v18);
  if ( !v7[6] )
    sub_67406((int)(a1 + 40), v7);
  result = 1;
  if ( a1[19] )
    return v17;
  return result;
}
