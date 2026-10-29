/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66A78
// Address: 0x00066A78

//----- (00066A78) --------------------------------------------------------
int __fastcall sub_66A78(int a1, int *a2)
{
  size_t v4; // r5
  void *v5; // r6
  int *v6; // r7
  int v7; // r1
  int v8; // r2
  int v9; // r1
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  int v13; // [sp+8h] [bp-20h]
  int v14; // [sp+10h] [bp-18h]
  int v15; // [sp+14h] [bp-14h]
  int v16; // [sp+18h] [bp-10h]
  int v17; // [sp+1Ch] [bp-Ch]
  int v18; // [sp+20h] [bp-8h]
  int v19; // [sp+24h] [bp-4h]

  v4 = a2[2];
  v13 = *a2;
  v5 = nullptr;
  if ( v4 )
  {
    v5 = qalloc_or_throw(v4);
    qmemcpy(v5, (const void *)a2[1], v4);
  }
  v6 = a2 + 4;
  v7 = *v6;
  v8 = v6[1];
  v6 += 2;
  v14 = v7;
  v15 = v8;
  v16 = *v6;
  v17 = v6[1];
  v18 = v6[2];
  v9 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v9 + 1) )
  {
    v10 = *(_DWORD **)a1;
  }
  else
  {
    v10 = qvector_reserve(a1, *(void **)a1, v9 + 1, 0x24u);
    *(_DWORD *)a1 = v10;
    v9 = *(_DWORD *)(a1 + 4);
  }
  v10[9 * v9] = v13;
  v11 = &v10[9 * v9];
  v11[1] = v5;
  v11[2] = v4;
  v11[3] = v4;
  v11 += 4;
  *v11 = v14;
  v11[1] = v15;
  v11 += 2;
  *v11 = v16;
  v11[1] = v17;
  v11[2] = v18;
  ++*(_DWORD *)(a1 + 4);
  return _stack_chk_guard - v19;
}
// 66AFC: variable 'v19' is possibly undefined
