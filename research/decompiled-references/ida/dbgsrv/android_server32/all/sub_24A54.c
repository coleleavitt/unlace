/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24A54
// Address: 0x00024A54

//----- (00024A54) --------------------------------------------------------
int __fastcall sub_24A54(int a1, int *a2)
{
  size_t v4; // r7
  void *v5; // r4
  size_t v6; // r4
  int v7; // r1
  _DWORD *v8; // r0
  char *v9; // r0
  int v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]
  void *v13; // [sp+14h] [bp-14h]
  void *v14; // [sp+18h] [bp-10h]
  int v15; // [sp+1Ch] [bp-Ch]
  __int16 v16; // [sp+20h] [bp-8h]
  int v17; // [sp+24h] [bp-4h]

  v11 = *a2;
  v12 = a2[1];
  v4 = a2[3];
  v5 = nullptr;
  v14 = nullptr;
  if ( v4 )
  {
    v5 = qalloc_or_throw(v4);
    qmemcpy(v5, (const void *)a2[2], v4);
  }
  v13 = v5;
  v6 = a2[6];
  if ( v6 )
  {
    v14 = qalloc_or_throw(a2[6]);
    qmemcpy(v14, (const void *)a2[5], v6);
  }
  v16 = *((_WORD *)a2 + 18);
  v15 = a2[8];
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_DWORD **)a1;
  }
  else
  {
    v8 = qvector_reserve(a1, *(void **)a1, v7 + 1, 0x28u);
    *(_DWORD *)a1 = v8;
    v7 = *(_DWORD *)(a1 + 4);
  }
  v8[10 * v7] = v11;
  v9 = (char *)&v8[10 * v7];
  *((_WORD *)v9 + 18) = v16;
  *((_DWORD *)v9 + 1) = v12;
  *((_DWORD *)v9 + 2) = v13;
  *((_DWORD *)v9 + 3) = v4;
  *((_DWORD *)v9 + 4) = v4;
  *((_DWORD *)v9 + 5) = v14;
  *((_DWORD *)v9 + 6) = v6;
  *((_DWORD *)v9 + 7) = v6;
  *((_DWORD *)v9 + 8) = v15;
  ++*(_DWORD *)(a1 + 4);
  return _stack_chk_guard - v17;
}
// 24AFE: variable 'v17' is possibly undefined
