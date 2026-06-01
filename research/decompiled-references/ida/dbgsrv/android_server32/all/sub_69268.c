/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69268
// Address: 0x00069268

//----- (00069268) --------------------------------------------------------
int __fastcall sub_69268(int a1, int a2, int a3, unsigned int *a4)
{
  unsigned int v6; // r0
  size_t v7; // r7
  unsigned int v8; // r1
  char *v9; // r0
  const void *v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r3
  void *v13; // r0
  unsigned int v14; // r0
  size_t v15; // r7
  void **v16; // r5
  unsigned int v17; // r1
  char *v18; // r0
  const void *v19; // r1
  unsigned int v20; // r2
  void *v21; // r0
  char v24[4]; // [sp+Ch] [bp-Ch] BYREF
  char v25[4]; // [sp+10h] [bp-8h] BYREF
  int v26; // [sp+14h] [bp-4h]

  sub_69104(a1, 1, a4);
  v6 = unpack_dd(a4, a4[1]);
  v7 = v6;
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 >= v6 )
  {
    if ( v8 != v6 )
    {
      v24[0] = 0;
      sub_370F6((void **)a2, v6, v24);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) >= v6 )
    {
      v9 = *(char **)a2;
    }
    else
    {
      v9 = (char *)qvector_reserve(a2, *(void **)a2, v6, 1u);
      *(_DWORD *)a2 = v9;
      v8 = *(_DWORD *)(a2 + 4);
    }
    memset(&v9[v8], 0, v7 - v8);
    *(_DWORD *)(a2 + 4) = v7;
  }
  v10 = (const void *)*a4;
  v11 = a4[1];
  v12 = *a4 + v7;
  if ( v12 >= *a4 && v12 <= v11 )
  {
    v13 = *(void **)a2;
    *a4 = v12;
    qmemcpy(v13, v10, v7);
    v11 = a4[1];
  }
  *(_DWORD *)(a2 + 12) = unpack_dq(a4, v11) - 1;
  v14 = unpack_dd(a4, a4[1]);
  v15 = v14;
  v16 = (void **)(a2 + 16);
  v17 = *(_DWORD *)(a2 + 20);
  if ( v17 >= v14 )
  {
    if ( v17 != v14 )
    {
      v25[0] = 0;
      sub_370F6((void **)(a2 + 16), v14, v25);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) >= v14 )
    {
      v18 = (char *)*v16;
    }
    else
    {
      v18 = (char *)qvector_reserve(a2 + 16, *(void **)(a2 + 16), v14, 1u);
      *(_DWORD *)(a2 + 16) = v18;
      v17 = *(_DWORD *)(a2 + 20);
    }
    memset(&v18[v17], 0, v15 - v17);
    *(_DWORD *)(a2 + 20) = v15;
  }
  v19 = (const void *)*a4;
  v20 = *a4 + v15;
  if ( v20 >= *a4 && v20 <= a4[1] )
  {
    v21 = *v16;
    *a4 = v20;
    qmemcpy(v21, v19, v15);
  }
  if ( a3 )
    sub_69104(a3, 0, a4);
  return _stack_chk_guard - v26;
}
