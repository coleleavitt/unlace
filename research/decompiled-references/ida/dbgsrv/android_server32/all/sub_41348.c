/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41348
// Address: 0x00041348

//----- (00041348) --------------------------------------------------------
int __fastcall sub_41348(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r6
  const char *v5; // r5
  const char *v6; // r0
  int v7; // r0
  int *v8; // r1
  const char *v9; // r1
  void *v10; // r7
  size_t v11; // r6
  size_t v12; // r4
  unsigned int v13; // r0
  size_t v14; // r7
  size_t v15; // r5
  unsigned int v16; // r6
  size_t v17; // r2
  void *v18; // r1
  const char *v19; // r1
  int v20; // r6
  size_t v21; // r5
  char *v22; // r0
  int v24; // r4
  _DWORD *v25; // [sp+0h] [bp-3Ch]
  char *v29; // [sp+14h] [bp-28h] BYREF
  size_t v30; // [sp+18h] [bp-24h]
  size_t v31; // [sp+1Ch] [bp-20h]
  int v32; // [sp+20h] [bp-1Ch]
  void *ptr; // [sp+24h] [bp-18h] BYREF
  size_t v34; // [sp+28h] [bp-14h]
  unsigned int v35; // [sp+2Ch] [bp-10h]
  char v36[8]; // [sp+30h] [bp-Ch] BYREF

  v3 = (_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
    goto LABEL_17;
  v5 = &byte_B3CBE;
  if ( *(_DWORD *)(a3 + 4) )
    v5 = *(const char **)a3;
  v25 = (_DWORD *)(a1 + 4);
  do
  {
    v6 = &byte_B3CBE;
    if ( *(_DWORD *)(v4 + 20) )
      v6 = *(const char **)(v4 + 16);
    v7 = strcmp(v6, v5);
    if ( v7 >= 0 )
      v3 = (_DWORD *)v4;
    v8 = (int *)(v4 + 4);
    if ( v7 >= 0 )
      v8 = (int *)v4;
    v4 = *v8;
  }
  while ( *v8 );
  if ( v3 != v25 && (!v3[5] ? (v9 = &byte_B3CBE) : (v9 = (const char *)v3[4]), strcmp(v5, v9) >= 0) )
  {
    v20 = v3[7];
    v24 = *(_DWORD *)(*a2 + 4 * v20);
    if ( *(_DWORD *)(v24 + 68) )
    {
      return -1;
    }
    else
    {
      sub_40AE0(*(_DWORD **)(*a2 + 4 * v20));
      *(_DWORD *)(v24 + 68) = -1;
    }
  }
  else
  {
LABEL_17:
    v10 = nullptr;
    v34 = 0;
    ptr = nullptr;
    v35 = 0;
    v11 = *(_DWORD *)(a1 + 24);
    if ( v11 )
    {
      v10 = qalloc_or_throw(*(_DWORD *)(a1 + 24));
      ptr = v10;
      v35 = v11;
      qmemcpy(v10, *(const void **)(a1 + 20), v11);
      v34 = v11;
      v12 = v11 - 1;
    }
    else
    {
      v12 = 0;
    }
    if ( v11 < v12 + 2 )
    {
      v10 = qvector_reserve((int)&ptr, v10, v12 + 2, 1u);
      ptr = v10;
    }
    v34 = v12 + 2;
    *((_BYTE *)v10 + v12) = 46;
    *((_BYTE *)ptr + v12 + 1) = 0;
    v13 = *(_DWORD *)(a3 + 4);
    v14 = v13 - 1;
    if ( v13 >= 2 )
    {
      v15 = v34 - 1;
      if ( !v34 )
        v15 = 0;
      v16 = v15 + v13;
      v17 = v15 + v14;
      v18 = ptr;
      if ( v35 < v15 + v13 )
      {
        v18 = qvector_reserve((int)&ptr, ptr, v16, 1u);
        ptr = v18;
        v17 = v15 + v14;
      }
      v34 = v16;
      *((_BYTE *)v18 + v17) = 0;
      qmemcpy((char *)ptr + v15, *(const void **)a3, v14);
    }
    if ( v34 )
      v19 = (const char *)ptr;
    else
      v19 = &byte_B3CBE;
    v20 = sub_409E4((int)a2, v19);
    v30 = 0;
    v29 = nullptr;
    v31 = 0;
    v21 = *(_DWORD *)(a3 + 4);
    if ( v21 )
    {
      v22 = (char *)qalloc_or_throw(*(_DWORD *)(a3 + 4));
      v31 = v21;
      v29 = v22;
      qmemcpy(v22, *(const void **)a3, v21);
      v30 = v21;
    }
    v32 = v20;
    sub_42C08((int)v36, (_DWORD **)a1, (int)&v29, &v29);
    if ( v29 )
    {
      v30 = 0;
      qfree(v29);
      v31 = 0;
      v29 = nullptr;
    }
    if ( ptr )
    {
      v34 = 0;
      qfree(ptr);
      v35 = 0;
      ptr = nullptr;
    }
  }
  return v20;
}
// B3CBE: using guessed type char byte_B3CBE;
