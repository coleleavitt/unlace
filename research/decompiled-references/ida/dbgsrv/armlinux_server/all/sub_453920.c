/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453920
// Address: 0x0000000000453920

//----- (0000000000453920) ----------------------------------------------------
bool __fastcall sub_453920(__int64 a1, __int64 a2)
{
  __int64 v4; // x20
  int v5; // w25
  const char *v6; // x20
  int v7; // w24
  unsigned __int8 *i; // x1
  int v9; // w0
  bool v10; // zf
  _BOOL4 v11; // w22
  char *v12; // x26
  int v13; // w20
  _BYTE *v16; // x22
  const char *v17; // x24
  bool v18; // zf
  int v19; // w0
  char *v21; // x0
  unsigned __int64 v22; // x1
  unsigned __int64 v23; // x24
  unsigned __int64 v24; // x26
  unsigned __int64 v25; // x24
  int v26; // w0
  bool v27; // zf
  char v28; // w27
  unsigned __int64 v29; // x1
  unsigned __int64 v30; // x22
  unsigned __int8 *v31; // x3
  char *v32; // x0
  void *v33; // x1
  char *v34; // x1
  __int64 v35; // x0
  const void *v36; // x19
  size_t v37; // x0
  size_t v38; // x20
  unsigned __int64 v39; // x24
  _BYTE *j; // x1
  int v41; // w0
  bool v42; // zf
  int v43; // w0
  _BYTE *v44; // x0
  int v45; // w1
  unsigned __int64 v46; // x1
  __int64 v47; // x19
  __int64 v48; // x20
  __int64 v49; // x22
  unsigned __int64 v50; // x19
  _BYTE *v51; // x0
  int v52; // [xsp+6Ch] [xbp-1024h]
  void *ptr; // [xsp+70h] [xbp-1020h] BYREF
  unsigned __int64 v54; // [xsp+78h] [xbp-1018h]
  unsigned __int64 v55; // [xsp+80h] [xbp-1010h]
  char v56[4]; // [xsp+88h] [xbp-1008h] BYREF
  _BYTE v57[16]; // [xsp+8Ch] [xbp-1004h] BYREF
  int v58; // [xsp+9Ch] [xbp-FF4h]

  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    if ( **(_BYTE **)a2 != 95 )
      goto LABEL_3;
  }
  else if ( byte_522118 != 95 )
  {
    goto LABEL_3;
  }
  v16 = *(_BYTE **)a2;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 1LL) == 95 )
  {
    v17 = (const char *)&qword_4B2D48;
    if ( v4 )
      v17 = *(const char **)a2;
    if ( !strcmp(v17, "__LINE__") )
    {
      v35 = *(int *)(a1 + 304);
      *(_WORD *)(a2 + 24) = 3;
      v11 = 1;
      *(_QWORD *)(a2 + 32) = v35;
      return v11;
    }
    if ( !strcmp(v17, "__FILE__") )
    {
      v36 = *(const void **)(a1 + 296);
      if ( v36 && (v37 = strlen((const char *)v36), (v38 = v37) != 0) )
      {
        v39 = v37 + 1;
        if ( v37 + 1 > *(_QWORD *)(a2 + 16) )
        {
          v16 = sub_491288(a2, v16, v39, 1u);
          *(_QWORD *)a2 = v16;
        }
        *(_QWORD *)(a2 + 8) = v39;
        memmove(v16, v36, v38);
        *(_BYTE *)(*(_QWORD *)a2 + v38) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    else
    {
      if ( strcmp(v17, "__DATE__") && strcmp(v17, "__TIME__") )
        goto LABEL_3;
      v43 = time(nullptr);
      sub_492708((unsigned __int64)v56, 0x28u, v43);
      v44 = *(_BYTE **)a2;
      v45 = *(unsigned __int8 *)(*(_QWORD *)a2 + 2LL);
      *(_QWORD *)(a2 + 8) = 0;
      v10 = v45 == 68;
      v46 = *(_QWORD *)(a2 + 16);
      if ( v10 )
      {
        if ( v46 <= 7 )
        {
          v44 = sub_491288(a2, v44, 8u, 1u);
          *(_QWORD *)a2 = v44;
        }
        *(_QWORD *)(a2 + 8) = 8;
        v44[7] = 0;
        memmove(*(void **)a2, v57, 7u);
        v47 = *(_QWORD *)(a2 + 8);
        if ( v47 )
        {
          v48 = v47 - 1;
          v49 = v47 + 3;
          v50 = v47 + 4;
        }
        else
        {
          v50 = 5;
          v49 = 4;
          v48 = 0;
        }
        v51 = *(_BYTE **)a2;
        if ( v50 > *(_QWORD *)(a2 + 16) )
        {
          v51 = sub_491288(a2, *(void **)a2, v50, 1u);
          *(_QWORD *)a2 = v51;
        }
        *(_QWORD *)(a2 + 8) = v50;
        v51[v49] = 0;
        *(_DWORD *)(*(_QWORD *)a2 + v48) = v58;
      }
      else
      {
        if ( v46 <= 8 )
        {
          v44 = sub_491288(a2, v44, 9u, 1u);
          *(_QWORD *)a2 = v44;
        }
        *(_QWORD *)(a2 + 8) = 9;
        v44[8] = 0;
        **(_QWORD **)a2 = *(_QWORD *)&v57[7];
      }
    }
    *(_WORD *)(a2 + 24) = 4;
    *(_BYTE *)(a2 + 40) = 0;
    return 1;
  }
LABEL_3:
  v5 = *(unsigned __int8 *)(a1 + 84);
  if ( !*(_BYTE *)(a1 + 84) )
    return 0;
  v6 = v4 ? *(const char **)a2 : (const char *)&qword_4B2D48;
  v7 = strcmp(v6, "defined");
  if ( v7 )
  {
    if ( strcmp(v6, "__has_include") )
      return 0;
  }
  for ( i = *(unsigned __int8 **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
  {
    v9 = *i;
    v10 = v9 == 32 || v9 == 9;
    if ( !v10 )
    {
      v11 = sub_450428(v9);
      if ( !v11 )
        break;
    }
    ++i;
  }
  v12 = (char *)(i + 1);
  *(_QWORD *)(a1 + 8) = i + 1;
  v13 = *i;
  if ( v13 == 40 )
  {
    do
    {
      *(_QWORD *)(a1 + 8) = ++v12;
      v13 = (unsigned __int8)*(v12 - 1);
      v18 = v13 == 32 || v13 == 9;
    }
    while ( v18 || sub_450428(v13) );
    if ( v7 )
    {
      v52 = v5;
      goto LABEL_42;
    }
    sub_451060(a1, a2);
    for ( j = *(_BYTE **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = j )
    {
      v41 = (unsigned __int8)*j;
      v42 = v41 == 32 || v41 == 9;
      if ( !v42 && !sub_450428(v41) )
        break;
      ++j;
    }
    *(_QWORD *)(a1 + 8) = j + 1;
    if ( *j == 41 )
    {
LABEL_79:
      if ( *(_QWORD *)(a2 + 8) )
        v34 = *(char **)a2;
      else
        v34 = (char *)&qword_4B2D48;
      *(_QWORD *)(a2 + 32) = sub_453858(a1, v34) != 0;
      goto LABEL_74;
    }
    return 0;
  }
  if ( (v13 & 0x80) != 0 || !isalpha(v13) )
  {
    if ( v13 == 95 || v13 == 36 )
    {
      v52 = 0;
      if ( v7 )
        goto LABEL_42;
      goto LABEL_78;
    }
    return 0;
  }
  if ( !v7 )
  {
LABEL_78:
    sub_451060(a1, a2);
    goto LABEL_79;
  }
  v52 = 0;
LABEL_42:
  if ( v13 == 60 )
  {
    v13 = 62;
  }
  else if ( v13 != 34 )
  {
    return v11;
  }
  ptr = nullptr;
  v54 = 0;
  v55 = 0;
  v19 = (unsigned __int8)*v12;
  if ( v19 == 41 || v19 == 0 )
  {
    if ( v52 )
      *(_QWORD *)(a1 + 8) = v12 + 1;
    return v11;
  }
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  while ( 1 )
  {
    *(_QWORD *)(a1 + 8) = v12 + 1;
    v28 = *v12;
    if ( v23 )
    {
      v24 = v23 - 1;
      v25 = v23 + 1;
      if ( v25 <= v22 )
        goto LABEL_54;
    }
    else
    {
      v25 = 2;
      v24 = 0;
      if ( v22 >= 2 )
        goto LABEL_54;
    }
    v21 = (char *)sub_491288((__int64)&ptr, v21, v25, 1u);
    ptr = v21;
LABEL_54:
    v54 = v25;
    v21[v24] = v28;
    *((_BYTE *)ptr + v24 + 1) = 0;
    v12 = *(char **)(a1 + 8);
    v26 = (unsigned __int8)*v12;
    v27 = v26 == 41 || v26 == 0;
    v21 = (char *)ptr;
    if ( v27 )
      break;
    v23 = v54;
    v22 = v55;
  }
  if ( v52
    && (*(_QWORD *)(a1 + 8) = v12 + 1, *v12 == 41)
    && (v29 = v54, v54 > 1)
    && (unsigned __int8)v21[v54 - 2] == v13 )
  {
    v30 = v54 - 1;
    if ( (__int64)(v54 - 1) <= 1 )
    {
      if ( v21 )
      {
        v54 = 0;
        j__free(v21);
        v29 = v54;
        ptr = nullptr;
        v55 = 0;
      }
    }
    else
    {
      if ( v30 > v55 )
      {
        v21 = (char *)sub_491288((__int64)&ptr, v21, v30, 1u);
        ptr = v21;
      }
      v54 = v30;
      v21[v30 - 1] = 0;
      v29 = v54;
    }
    v31 = (unsigned __int8 *)ptr;
    if ( !v29 )
      v31 = (unsigned __int8 *)&qword_4B2D48;
    v32 = sub_452298(a1, v56, 4096, v31, v13, 0);
    v33 = ptr;
    *(_QWORD *)(a2 + 32) = v32 != nullptr;
    if ( v33 )
    {
      v54 = 0;
      j__free(v33);
    }
LABEL_74:
    *(_WORD *)(a2 + 24) = 3;
    return v5;
  }
  else if ( v21 )
  {
    v54 = 0;
    j__free(v21);
  }
  return v11;
}
// 453920: could not find valid save-restore pair for x24
// 453920: could not find valid save-restore pair for x25
// 453920: could not find valid save-restore pair for x26
// 453920: could not find valid save-restore pair for x27
// 4539BC: variable 'i' is possibly undefined
// 453DD4: variable 'j' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522118: using guessed type char byte_522118;
