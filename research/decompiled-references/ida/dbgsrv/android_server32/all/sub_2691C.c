/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2691C
// Address: 0x0002691C

//----- (0002691C) --------------------------------------------------------
int __fastcall sub_2691C(int a1, const char *a2, int a3, int a4, char a5, int a6, int a7)
{
  int v7; // r5
  unsigned int v8; // r4
  unsigned int *v9; // r7
  _DWORD *v10; // r3
  int v11; // r4
  char **v12; // r0
  int v13; // r1
  char *v14; // r0
  int v15; // r1
  int v16; // r6
  char *v17; // r0
  int v18; // r5
  int v19; // r1
  unsigned int v20; // r2
  void *v21; // r0
  int v22; // r4
  unsigned int *v23; // r7
  const char *v24; // r0
  size_t v25; // r0
  const void *v26; // r1
  size_t v27; // r2
  unsigned int v28; // r3
  unsigned int v29; // r5
  void *v30; // r0
  char *v31; // r0
  size_t v32; // r5
  int v33; // r1
  unsigned int v34; // r2
  _DWORD *v35; // r4
  void *v36; // r0
  int v37; // r6
  unsigned int *v38; // r5
  size_t v39; // r0
  const char *v40; // r1
  size_t v41; // r4
  unsigned int v42; // r2
  unsigned int v43; // r7
  void *v44; // r0
  int v45; // r1
  unsigned int v46; // r2
  _DWORD *v47; // r0
  char *v48; // r2
  char *v49; // r0
  char v52; // [sp+Ch] [bp-3Ch]
  size_t v55; // [sp+18h] [bp-30h]
  unsigned int *v56; // [sp+20h] [bp-28h]
  char *v57; // [sp+24h] [bp-24h]
  void **v58; // [sp+28h] [bp-20h]
  const void *v59; // [sp+34h] [bp-14h]
  _DWORD *v60; // [sp+38h] [bp-10h]
  int v61; // [sp+3Ch] [bp-Ch]
  int v62; // [sp+3Ch] [bp-Ch]
  _DWORD v63[2]; // [sp+40h] [bp-8h] BYREF

  v52 = a4;
  v7 = a1;
  if ( a6 )
  {
    v8 = 1;
    if ( (a3 & 0x100) == 0 )
    {
      v8 = 16;
      if ( a4 != 1 )
      {
        if ( a4 == 7 )
        {
          v8 = 64;
        }
        else
        {
          if ( a4 != 2 )
          {
            if ( !under_debugger )
              interr(1795);
            __debugbreak();
          }
          v8 = 32;
        }
      }
    }
    v12 = (char **)(a1 + 36);
    v13 = *(_DWORD *)(v7 + 40);
    if ( *(_DWORD *)(v7 + 44) >= (unsigned int)(v13 + 1) )
    {
      v14 = *v12;
    }
    else
    {
      v14 = (char *)qvector_reserve((int)v12, *(void **)(v7 + 36), v13 + 1, 0xCu);
      *(_DWORD *)(v7 + 36) = v14;
      v13 = *(_DWORD *)(v7 + 40);
    }
    v15 = 12 * v13;
    v16 = 0;
    *(_DWORD *)&v14[v15] = 0;
    v17 = &v14[v15];
    *((_DWORD *)v17 + 1) = 0;
    *((_DWORD *)v17 + 2) = 0;
    ++*(_DWORD *)(v7 + 40);
    v63[0] = 0;
    v57 = v17;
    sub_26B98((void **)v17, v8, v63);
    v61 = 4 * v8;
    v9 = (unsigned int *)(v7 + 20);
    v10 = (_DWORD *)(v7 + 16);
    v58 = (void **)(v7 + 12);
    v18 = a6;
    v60 = v10;
    v56 = v9;
    do
    {
      if ( *(_DWORD *)(v18 + v16) )
      {
        v19 = *v10;
        v20 = *v10 + 1;
        if ( *v9 >= v20 )
        {
          v21 = *v58;
        }
        else
        {
          v21 = qvector_reserve((int)v58, *v58, v20, 0xCu);
          v10 = v60;
          *v58 = v21;
          v19 = *v60;
        }
        v22 = (int)v21 + 12 * v19;
        *(_DWORD *)(v22 + 8) = 0;
        *(_DWORD *)v22 = 0;
        v23 = (unsigned int *)(v22 + 4);
        *(_DWORD *)(v22 + 4) = 0;
        ++*v10;
        v24 = *(const char **)(v18 + v16);
        if ( v24 && (v59 = *(const void **)(v18 + v16), v25 = strlen(v24), v26 = v59, v10 = v60, v25) )
        {
          v27 = v25;
          v28 = v25 + 1;
          if ( *(_DWORD *)(v22 + 8) >= v25 + 1 )
          {
            v30 = *(void **)v22;
          }
          else
          {
            v29 = v25 + 1;
            v55 = v25;
            v30 = qvector_reserve(v22, *(void **)v22, v28, 1u);
            v28 = v29;
            v27 = v55;
            v26 = v59;
            *(_DWORD *)v22 = v30;
          }
          *v23 = v28;
          v32 = v27;
          memmove(v30, v26, v27);
          *(_BYTE *)(*(_DWORD *)v22 + v32) = 0;
          if ( *v23 )
            v31 = *(char **)v22;
          else
            v31 = &byte_B3CBE;
          v10 = v60;
          v9 = v56;
          v18 = a6;
        }
        else
        {
          *v23 = 0;
          v31 = &byte_B3CBE;
          v18 = a6;
          v9 = v56;
        }
        *(_DWORD *)(*(_DWORD *)v57 + v16) = v31;
      }
      v16 += 4;
    }
    while ( v61 != v16 );
    v11 = *(_DWORD *)v57;
    v7 = a1;
  }
  else
  {
    v9 = (unsigned int *)(a1 + 20);
    v10 = (_DWORD *)(a1 + 16);
    v58 = (void **)(a1 + 12);
    v11 = 0;
  }
  v33 = *v10;
  v34 = *v10 + 1;
  v62 = v11;
  if ( *v9 >= v34 )
  {
    v36 = *(void **)(v7 + 12);
  }
  else
  {
    v35 = v10;
    v36 = qvector_reserve((int)v58, *v58, v34, 0xCu);
    v10 = v35;
    *v58 = v36;
    v33 = *v35;
  }
  v37 = (int)v36 + 12 * v33;
  *(_DWORD *)(v37 + 8) = 0;
  *(_DWORD *)v37 = 0;
  v38 = (unsigned int *)(v37 + 4);
  *(_DWORD *)(v37 + 4) = 0;
  ++*v10;
  if ( a2 && (v39 = strlen(a2), v40 = a2, v39) )
  {
    v41 = v39;
    v42 = v39 + 1;
    if ( *(_DWORD *)(v37 + 8) >= v39 + 1 )
    {
      v44 = *(void **)v37;
    }
    else
    {
      v43 = v39 + 1;
      v44 = qvector_reserve(v37, *(void **)v37, v42, 1u);
      v42 = v43;
      v40 = a2;
      *(_DWORD *)v37 = v44;
    }
    *v38 = v42;
    memmove(v44, v40, v41);
    *(_BYTE *)(*(_DWORD *)v37 + v41) = 0;
  }
  else
  {
    *v38 = 0;
  }
  v45 = *(_DWORD *)(a1 + 4);
  v46 = v45 + 1;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v45 + 1) )
  {
    v47 = *(_DWORD **)a1;
  }
  else
  {
    v47 = qvector_reserve(a1, *(void **)a1, v46, 0x14u);
    *(_DWORD *)a1 = v47;
    v45 = *(_DWORD *)(a1 + 4);
    v46 = v45 + 1;
  }
  *(_DWORD *)(a1 + 4) = v46;
  if ( *v38 )
    v48 = *(char **)v37;
  else
    v48 = &byte_B3CBE;
  v47[5 * v45] = v48;
  v49 = (char *)&v47[5 * v45];
  *((_DWORD *)v49 + 1) = a3;
  v49[9] = v52;
  v49[8] = a5;
  *((_DWORD *)v49 + 3) = v62;
  *((_DWORD *)v49 + 4) = a7;
  return _stack_chk_guard - v63[1];
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
