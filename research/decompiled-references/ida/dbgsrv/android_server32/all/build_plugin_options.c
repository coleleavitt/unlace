/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: build_plugin_options
// Address: 0x00073518

//----- (00073518) --------------------------------------------------------
int __fastcall build_plugin_options(int a1, int *a2, const char *a3)
{
  char *v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r4
  int v10; // r2
  unsigned int v11; // r1
  void *v12; // r0
  int v13; // r5
  unsigned int *v14; // r2
  _DWORD *v15; // r3
  unsigned int v16; // r0
  size_t v17; // r6
  int v18; // r7
  unsigned int v19; // r1
  _BYTE *v20; // r0
  size_t v21; // r3
  void *v22; // r0
  unsigned int *v23; // r7
  int v24; // r7
  _BYTE *v25; // r0
  unsigned int v26; // r0
  size_t v27; // r6
  int v28; // r7
  unsigned int v29; // r1
  _BYTE *v30; // r0
  size_t v31; // r3
  void *v32; // r0
  int v33; // r1
  int v34; // r2
  char *v35; // r4
  unsigned int v36; // r6
  int i; // r5
  void *v38; // r0
  unsigned int v41; // [sp+Ch] [bp-34h]
  unsigned int v42; // [sp+10h] [bp-30h]
  unsigned int *v43; // [sp+14h] [bp-2Ch]
  unsigned int *v44; // [sp+14h] [bp-2Ch]
  _DWORD *v45; // [sp+18h] [bp-28h]
  int v46; // [sp+1Ch] [bp-24h]
  unsigned int v47; // [sp+1Ch] [bp-24h]
  void *v48; // [sp+24h] [bp-1Ch] BYREF
  int v49; // [sp+28h] [bp-18h]
  int v50; // [sp+2Ch] [bp-14h]
  void *ptr; // [sp+30h] [bp-10h] BYREF
  unsigned int v52; // [sp+34h] [bp-Ch]
  unsigned int v53; // [sp+38h] [bp-8h]
  int v54; // [sp+3Ch] [bp-4h]

  v52 = 0;
  ptr = nullptr;
  v53 = 0;
  if ( a3 )
  {
    v5 = (char *)qvector_reserve((int)&ptr, nullptr, 1u, 0xCu);
    ptr = v5;
    v6 = 12 * v52;
    *(_DWORD *)&v5[v6] = 0;
    v7 = (int)&v5[v6];
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    ++v52;
    sub_1DA58(v7, "-O%s", a3);
  }
  v8 = a2[1];
  if ( 24 * v8 )
  {
    v9 = *a2;
    v10 = 24 * v8;
    do
    {
      v46 = v10;
      v11 = v52;
      if ( v53 >= v52 + 1 )
      {
        v12 = ptr;
      }
      else
      {
        v12 = qvector_reserve((int)&ptr, ptr, v52 + 1, 0xCu);
        ptr = v12;
        v11 = v52;
      }
      v13 = (int)v12 + 12 * v11;
      *(_DWORD *)(v13 + 8) = 0;
      *(_DWORD *)v13 = 0;
      v14 = (unsigned int *)(v13 + 4);
      *(_DWORD *)(v13 + 4) = 0;
      ++v52;
      v15 = (_DWORD *)(v13 + 8);
      v16 = *(_DWORD *)(v9 + 4);
      v17 = v16 - 1;
      if ( v16 >= 2 )
      {
        v18 = *v14 - 1;
        if ( !*v14 )
          v18 = 0;
        v19 = v18 + v16;
        if ( *v15 >= v18 + v16 )
        {
          v20 = *(_BYTE **)v13;
          v21 = v18 + v17;
        }
        else
        {
          v41 = v18 + v16;
          v20 = qvector_reserve(v13, *(void **)v13, v19, 1u);
          *(_DWORD *)v13 = v20;
          v14 = (unsigned int *)(v13 + 4);
          v21 = v18 + v17;
          v19 = v41;
        }
        *v14 = v19;
        v20[v21] = 0;
        v22 = (void *)(*(_DWORD *)v13 + v18);
        v23 = v14;
        qmemcpy(v22, *(const void **)v9, v17);
        v14 = v23;
        v15 = (_DWORD *)(v13 + 8);
      }
      if ( *(_DWORD *)(v9 + 16) >= 2u )
      {
        v24 = *v14 - 1;
        if ( !*v14 )
          v24 = 0;
        if ( *v15 >= (unsigned int)(v24 + 2) )
        {
          v25 = *(_BYTE **)v13;
        }
        else
        {
          v45 = v15;
          v43 = v14;
          v25 = qvector_reserve(v13, *(void **)v13, v24 + 2, 1u);
          *(_DWORD *)v13 = v25;
          v14 = v43;
          v15 = v45;
        }
        *v14 = v24 + 2;
        v25[v24] = 61;
        *(_BYTE *)(*(_DWORD *)v13 + v24 + 1) = 0;
        v26 = *(_DWORD *)(v9 + 16);
        v27 = v26 - 1;
        if ( v26 >= 2 )
        {
          v28 = *v14 - 1;
          if ( !*v14 )
            v28 = 0;
          v29 = v28 + v26;
          if ( *v15 >= v28 + v26 )
          {
            v30 = *(_BYTE **)v13;
            v31 = v28 + v27;
          }
          else
          {
            v44 = v14;
            v42 = v28 + v26;
            v30 = qvector_reserve(v13, *(void **)v13, v29, 1u);
            *(_DWORD *)v13 = v30;
            v29 = v42;
            v14 = v44;
            v31 = v28 + v27;
          }
          *v14 = v29;
          v30[v31] = 0;
          qmemcpy((void *)(*(_DWORD *)v13 + v28), *(const void **)(v9 + 12), v27);
        }
      }
      v10 = v46 - 24;
      v9 += 24;
    }
    while ( v46 != 24 );
  }
  sub_737C4(&v48, (int *)&ptr, ":");
  v32 = *(void **)a1;
  *(_DWORD *)a1 = v48;
  v33 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v49;
  v34 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v50;
  v48 = v32;
  v49 = v33;
  v50 = v34;
  if ( v32 )
  {
    v49 = 0;
    qfree(v32);
    v50 = 0;
    v48 = nullptr;
  }
  v35 = (char *)ptr;
  if ( ptr )
  {
    v47 = v52;
    if ( v52 )
    {
      v36 = 1;
      for ( i = 8; ; i += 12 )
      {
        v38 = *(void **)&v35[i - 8];
        if ( v38 )
        {
          *(_DWORD *)&v35[i - 4] = 0;
          qfree(v38);
          *(_DWORD *)&v35[i - 8] = 0;
          *(_DWORD *)&v35[i] = 0;
        }
        if ( v36 >= v47 )
          break;
        ++v36;
        v35 = (char *)ptr;
      }
      v35 = (char *)ptr;
    }
    v52 = 0;
    qfree(v35);
    v53 = 0;
    ptr = nullptr;
  }
  return _stack_chk_guard - v54;
}
