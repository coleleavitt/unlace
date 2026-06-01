/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C12C
// Address: 0x0003C12C

//----- (0003C12C) --------------------------------------------------------
int __fastcall sub_3C12C(int a1, int a2)
{
  int v3; // r2
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  size_t v7; // r5
  const void *v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r6
  char *v11; // r1
  int v12; // r0
  size_t v13; // r0
  unsigned int v14; // r5
  void **v15; // r6
  unsigned int v16; // r2
  char *v17; // r1
  int v19; // [sp+4h] [bp-1Ch]
  unsigned int v20; // [sp+4h] [bp-1Ch]
  unsigned int v21; // [sp+4h] [bp-1Ch]
  int v22; // [sp+8h] [bp-18h]
  const void *v23; // [sp+8h] [bp-18h]
  const void *v24; // [sp+8h] [bp-18h]
  char v26[4]; // [sp+14h] [bp-Ch] BYREF
  char v27[4]; // [sp+18h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 148);
  v22 = *(_DWORD *)(*(_DWORD *)(a1 + 144) + 4 * (v3 - 1));
  if ( v3 )
    *(_DWORD *)(a1 + 148) = v3 - 1;
  v19 = *(_DWORD *)(a1 + 116);
  v4 = operator new(0x10u);
  v4[3] = 0;
  *v4 = a2;
  v5 = qalloc_or_throw(12);
  v6 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v4[1] = v5;
  v7 = v19 - v22;
  v8 = (const void *)(**(_DWORD **)(a1 + 112) + v22);
  if ( v19 != v22 )
  {
    v9 = v5[1];
    v10 = v9 + v7;
    if ( v9 + v7 < v9 )
      v10 = 0x7FFFFFFF;
    if ( v9 >= v10 )
    {
      if ( v9 != v10 )
      {
        v21 = v5[1];
        v27[0] = 0;
        v24 = v8;
        sub_370F6((void **)v5, v10, v27);
        v9 = v21;
        v8 = v24;
      }
    }
    else
    {
      v23 = (const void *)(**(_DWORD **)(a1 + 112) + v22);
      v11 = (char *)*v5;
      v20 = v5[1];
      if ( v5[2] < v10 )
      {
        v11 = (char *)qvector_reserve((int)v5, v11, v10, 1u);
        *v6 = v11;
        v9 = v6[1];
      }
      memset(&v11[v9], 0, v10 - v9);
      v6[1] = v10;
      v8 = v23;
      v9 = v20;
    }
    qmemcpy((void *)(*v6 + v9), v8, v7);
  }
  v12 = *(_DWORD *)(a1 + 192) + 4 * *(_DWORD *)(a1 + 196);
  v4[2] = *(_DWORD *)(v12 - 4);
  *(_DWORD *)(v12 - 4) = v4;
  if ( v7 )
  {
    v13 = *(_DWORD *)(a1 + 116);
    if ( v13 < v7 )
    {
      if ( !under_debugger )
        interr(708);
      __debugbreak();
    }
    v14 = v13 - v7;
    *(_DWORD *)(a1 + 116) = v14;
    v15 = *(void ***)(a1 + 112);
    v16 = (unsigned int)v15[1];
    if ( v16 >= v14 )
    {
      if ( v16 != v14 )
      {
        v26[0] = 0;
        sub_370F6(v15, v14, v26);
      }
    }
    else
    {
      v17 = (char *)*v15;
      if ( (unsigned int)v15[2] < v14 )
      {
        v17 = (char *)qvector_reserve(*(_DWORD *)(a1 + 112), v17, v14, 1u);
        *v15 = v17;
        v16 = (unsigned int)v15[1];
      }
      memset(&v17[v16], 0, v14 - v16);
      v15[1] = (void *)v14;
    }
  }
  *(_BYTE *)(a1 + 120) = -87;
  return 0;
}
// E0550: using guessed type char under_debugger;
