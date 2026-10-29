/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CF18
// Address: 0x0006CF18

//----- (0006CF18) --------------------------------------------------------
int __fastcall sub_6CF18(int a1, unsigned __int8 *a2)
{
  _BOOL4 v2; // r4
  char *v5; // r0
  char *v6; // r6
  int v7; // r3
  char *v8; // r8
  char *v9; // r0
  int v10; // r3
  unsigned int v11; // r11
  char *v12; // r9
  char *v13; // r0
  int v14; // r2
  char *v15; // r3
  char *v16; // r0
  char *v17; // r0
  int v18; // r3
  size_t v19; // r0
  size_t v20; // r10
  size_t v21; // r0
  size_t v22; // r7
  size_t v23; // r0
  size_t v24; // r7
  size_t v25; // r0
  size_t v26; // r6
  char *v27; // r0
  int v28; // r2
  char *v29; // r6
  char *v30; // r0
  char *v31; // r0
  char *v32; // r3
  int v33; // r2
  bool v34; // zf
  unsigned int v35; // r2
  void *v36; // r0
  unsigned int v37; // r7
  void *v38; // r0
  unsigned int v39; // r8
  void *v40; // r0
  unsigned int v41; // r10
  void *v42; // r0
  char *v43; // r2
  unsigned int v44; // r0
  unsigned int v45; // [sp+4h] [bp-418h]
  int v46; // [sp+8h] [bp-414h]
  unsigned int v47; // [sp+Ch] [bp-410h]
  char *v48; // [sp+10h] [bp-40Ch] BYREF
  char v49[1024]; // [sp+14h] [bp-408h] BYREF

  v2 = a2 == nullptr;
  if ( !a1 )
    v2 = 1;
  if ( v2 )
    return 0;
  sub_79524(v49, a2, 1024);
  v48 = v49;
  v5 = strchr(v49, 64);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int8)v5[1];
    v8 = v5 + 1;
    *v5 = 0;
    v48 = v5 + 1;
    if ( v7 == 91 )
    {
      v27 = strchr(v5 + 1, 93);
      if ( !v27 )
        return 0;
      v6[1] = 0;
      *v27 = 0;
      v8 = v6 + 2;
      v28 = (unsigned __int8)v27[2];
      v48 = v27 + 1;
      if ( v28 != 58 )
        goto LABEL_43;
      v9 = v27 + 2;
    }
    else
    {
      v9 = strchr(v5 + 1, 58);
      if ( !v9 )
        goto LABEL_43;
    }
    v10 = (unsigned __int8)v9[1];
    v11 = v10 & 0xFFFFFF80;
    if ( (v10 & 0xFFFFFF80) == 0 )
    {
      if ( (unsigned int)(v10 - 48) <= 9 )
      {
        *v9 = 0;
        v48 = v9 + 1;
        v11 = strtol(v9 + 1, nullptr, 10);
      }
LABEL_11:
      v12 = strchr(v49, 123);
      v13 = strchr(v49, 58);
      v14 = (int)v13;
      v15 = v13;
      if ( v13 )
        v14 = 1;
      if ( !v12 )
        v14 = 0;
      if ( v14 )
      {
        if ( v13 < v12 )
        {
          v12 = nullptr;
LABEL_18:
          v6 = v15;
          if ( v15 )
          {
            v6 = v15 + 1;
            *v15 = 0;
          }
          v16 = v48;
          if ( !v11 )
            v11 = 23946;
          goto LABEL_22;
        }
        v29 = v12 + 1;
        *v12 = 0;
      }
      else
      {
        if ( !v12 )
          goto LABEL_18;
        *v12 = 0;
        v29 = v12 + 1;
        if ( !v13 )
          v15 = &v29[strlen(v12 + 1)];
      }
      if ( *(v15 - 1) != 125 )
        return 0;
      *(v15 - 1) = 0;
      v12 = v29;
      v15 = strchr(v15, 58);
      goto LABEL_18;
    }
LABEL_43:
    v11 = 0;
    goto LABEL_11;
  }
  v30 = strchr(v49, 123);
  v8 = v30;
  if ( v30 )
  {
    v12 = v30 + 1;
    *v30 = 0;
    v31 = strchr(v30 + 1, 125);
    v32 = v31;
    if ( !v31 )
      return 0;
    v33 = (unsigned __int8)v31[1];
    v16 = v31 + 1;
    *v32 = 0;
    v48 = v16;
    v34 = v33 == 43;
    if ( v33 != 43 )
      v34 = v33 == 0;
    if ( !v34 )
      return 0;
    v8 = nullptr;
    v11 = 23946;
  }
  else
  {
    v12 = nullptr;
    v6 = nullptr;
    v11 = 23946;
    v16 = v49;
  }
LABEL_22:
  v17 = strchr(v16, 43);
  if ( !v17 )
    goto LABEL_44;
  v18 = (unsigned __int8)v17[1];
  if ( (v18 & 0xFFFFFF80) != 0 )
    goto LABEL_44;
  if ( (unsigned int)(v18 - 48) <= 9 )
  {
    *v17 = 0;
    v45 = strtoul(v17 + 1, &v48, 10);
    if ( v45 != -1 )
    {
      v43 = v48;
      if ( *v48 == 44 )
      {
        ++v48;
        v44 = strtoul(v43 + 1, &v48, 10);
        v46 = v44;
        if ( v44 != -1 && !*v48 )
          goto LABEL_27;
      }
      else
      {
        v46 = -1;
        if ( !*v48 )
          goto LABEL_27;
      }
    }
    return 0;
  }
  if ( v17[1] )
  {
LABEL_44:
    v45 = -1;
    v46 = -1;
    goto LABEL_28;
  }
  *v17 = 0;
  v45 = -1;
  v46 = -1;
LABEL_27:
  LOBYTE(v2) = 1;
LABEL_28:
  v19 = strlen(v49);
  v20 = v19;
  if ( v19 )
  {
    v35 = v19 + 1;
    v47 = v35;
    v36 = *(void **)a1;
    if ( v35 > *(_DWORD *)(a1 + 8) )
    {
      v36 = sub_77EB0(a1, *(void **)a1, v35, 1u);
      *(_DWORD *)a1 = v36;
    }
    *(_DWORD *)(a1 + 4) = v47;
    memmove(v36, v49, v20);
    *(_BYTE *)(*(_DWORD *)a1 + v20) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  if ( v8 && (v21 = strlen(v8), (v22 = v21) != 0) )
  {
    v41 = v21 + 1;
    v42 = *(void **)(a1 + 24);
    if ( v41 > *(_DWORD *)(a1 + 32) )
    {
      v42 = sub_77EB0(a1 + 24, *(void **)(a1 + 24), v41, 1u);
      *(_DWORD *)(a1 + 24) = v42;
    }
    *(_DWORD *)(a1 + 28) = v41;
    memmove(v42, v8, v22);
    *(_BYTE *)(*(_DWORD *)(a1 + 24) + v22) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 0;
  }
  if ( v6 && (v23 = strlen(v6), (v24 = v23) != 0) )
  {
    v39 = v23 + 1;
    v40 = *(void **)(a1 + 36);
    if ( v39 > *(_DWORD *)(a1 + 44) )
    {
      v40 = sub_77EB0(a1 + 36, *(void **)(a1 + 36), v39, 1u);
      *(_DWORD *)(a1 + 36) = v40;
    }
    *(_DWORD *)(a1 + 40) = v39;
    memmove(v40, v6, v24);
    *(_BYTE *)(*(_DWORD *)(a1 + 36) + v24) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v12 && (v25 = strlen(v12), (v26 = v25) != 0) )
  {
    v37 = v25 + 1;
    v38 = *(void **)(a1 + 12);
    if ( v37 > *(_DWORD *)(a1 + 20) )
    {
      v38 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v37, 1u);
      *(_DWORD *)(a1 + 12) = v38;
    }
    *(_DWORD *)(a1 + 16) = v37;
    memmove(v38, v12, v26);
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v26) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  *(_DWORD *)(a1 + 48) = v11;
  *(_BYTE *)(a1 + 60) = v2;
  *(_DWORD *)(a1 + 52) = v45;
  *(_DWORD *)(a1 + 56) = v46;
  return 1;
}
