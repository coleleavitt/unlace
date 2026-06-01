/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_swap
// Address: 0x000839CC

//----- (000839CC) --------------------------------------------------------
int __fastcall rangeset_t_swap(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  int *v6; // r7
  unsigned int v7; // r6
  int v8; // r0
  int v9; // r2
  int *v10; // r7
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r2
  int *v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r0
  void *v19; // [sp+8h] [bp-28h] BYREF
  int v20; // [sp+Ch] [bp-24h]
  int v21; // [sp+10h] [bp-20h]
  int v22; // [sp+14h] [bp-1Ch]
  unsigned __int8 v23; // [sp+18h] [bp-18h]
  int v24; // [sp+1Ch] [bp-14h] BYREF
  int v25; // [sp+20h] [bp-10h]
  char v26; // [sp+24h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-4h]

  v4 = *(_DWORD *)(a1 + 16);
  v5 = 0;
  v20 = 0;
  v19 = nullptr;
  v21 = 0;
  v22 = v4;
  if ( v4 != -1 )
    v5 = must_journal();
  v23 = v5;
  v6 = *(int **)a1;
  v7 = *(_DWORD *)a1 + 8 * *(_DWORD *)(a1 + 4);
  if ( v5 && (unsigned int)v6 < v7 )
  {
    do
    {
      v8 = *v6;
      v9 = v6[1];
      v26 = 1;
      v25 = v9;
      v24 = v8;
      sub_83AD8(&v19, &v24);
      v6 += 2;
    }
    while ( (unsigned int)v6 < v7 );
    v5 = v23;
  }
  v10 = *(int **)a2;
  v11 = *(_DWORD *)a2 + 8 * *(_DWORD *)(a2 + 4);
  if ( v5 && (unsigned int)v10 < v11 )
  {
    do
    {
      v12 = *v10;
      v13 = v10[1];
      v26 = 0;
      v25 = v13;
      v24 = v12;
      sub_83AD8(&v19, &v24);
      v10 += 2;
    }
    while ( (unsigned int)v10 < v11 );
    v10 = *(int **)a2;
  }
  v14 = *(int **)a1;
  *(_DWORD *)a1 = v10;
  v15 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  v16 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)a2 = v14;
  *(_DWORD *)(a2 + 4) = v15;
  *(_DWORD *)(a2 + 8) = v16;
  v17 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v17;
  if ( v19 )
  {
    v20 = 0;
    qfree(v19);
    v21 = 0;
    v19 = nullptr;
  }
  return _stack_chk_guard - v27;
}
