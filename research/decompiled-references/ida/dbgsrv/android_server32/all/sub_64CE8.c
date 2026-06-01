/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64CE8
// Address: 0x00064CE8

//----- (00064CE8) --------------------------------------------------------
int __fastcall sub_64CE8(int a1, int *a2)
{
  size_t v4; // r7
  void *v5; // r4
  size_t v6; // r4
  int v7; // r1
  char *v8; // r0
  int v9; // r1
  char *v10; // r0
  int result; // r0
  int v12; // [sp+8h] [bp-10h]
  int v13; // [sp+Ch] [bp-Ch]
  void *v14; // [sp+10h] [bp-8h]
  void *v15; // [sp+14h] [bp-4h]

  v12 = *a2;
  v13 = a2[1];
  v4 = a2[3];
  v5 = nullptr;
  v15 = nullptr;
  if ( v4 )
  {
    v5 = qalloc_or_throw(v4);
    qmemcpy(v5, (const void *)a2[2], v4);
  }
  v14 = v5;
  v6 = a2[6];
  if ( v6 )
  {
    v15 = qalloc_or_throw(a2[6]);
    qmemcpy(v15, (const void *)a2[5], v6);
  }
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(char **)a1;
  }
  else
  {
    v8 = (char *)qvector_reserve(a1, *(void **)a1, v7 + 1, 0x20u);
    *(_DWORD *)a1 = v8;
    v7 = *(_DWORD *)(a1 + 4);
  }
  v9 = 32 * v7;
  *(_DWORD *)&v8[v9] = v12;
  v10 = &v8[v9];
  *((_DWORD *)v10 + 1) = v13;
  *((_DWORD *)v10 + 2) = v14;
  *((_DWORD *)v10 + 3) = v4;
  *((_DWORD *)v10 + 4) = v4;
  *((_DWORD *)v10 + 5) = v15;
  *((_DWORD *)v10 + 6) = v6;
  *((_DWORD *)v10 + 7) = v6;
  result = *(_DWORD *)(a1 + 4) + 1;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
