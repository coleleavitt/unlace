/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476D4
// Address: 0x000476D4

//----- (000476D4) --------------------------------------------------------
int __fastcall sub_476D4(int a1)
{
  int *v2; // r5
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r0
  unsigned __int8 v8[8]; // [sp+4h] [bp-1Ch] BYREF
  void *v9; // [sp+Ch] [bp-14h]
  int v10; // [sp+10h] [bp-10h]
  int v11; // [sp+14h] [bp-Ch]
  int v12; // [sp+18h] [bp-8h]
  int v13; // [sp+1Ch] [bp-4h]

  v2 = *(int **)(loc_47760 + 292578);
  v13 = *v2;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 16);
  v8[0] = 2;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = nullptr;
  copy_idcv(v8, (unsigned __int8 *)(v3 + 24 * v4 - 24));
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = v5 - 1;
    *(_DWORD *)(a1 + 16) = v6;
    free_idcv((unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * v6));
  }
  if ( v8[0] == 5 )
  {
    sub_448A0((int)v9, v8);
  }
  else if ( v8[0] == 7 && v9 )
  {
    v10 = 0;
    qfree(v9);
    v11 = 0;
    v9 = nullptr;
  }
  return *v2 - v13;
}
