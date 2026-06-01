/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_dbgopts
// Address: 0x00072B8C

//----- (00072B8C) --------------------------------------------------------
int __fastcall parse_dbgopts(int a1, unsigned __int8 *a2)
{
  int v3; // r7
  char v4; // r6
  char *v5; // r0
  char *v6; // r5
  const char *v7; // r7
  char *v8; // r0
  char *v9; // r0
  char *v10; // r0
  const char *v11; // r5
  char *v12; // r0
  int v13; // r0
  const char *v14; // r5
  char *v15; // r5
  char *v16; // r0
  char *v17; // r1
  char *v18; // r0
  unsigned int v19; // r5
  int v20; // r2
  const char *v21; // r7
  unsigned int v22; // r6
  int v23; // r0
  int v24; // r0
  size_t v25; // r6
  unsigned int v26; // r5
  void *v27; // r0
  void **v28; // r5
  size_t v29; // r0
  size_t v30; // r6
  unsigned int v31; // r7
  void *v32; // r0
  void **v33; // r6
  size_t v34; // r0
  char *v35; // r1
  size_t v36; // r5
  unsigned int v37; // r7
  void *v38; // r0
  void **v39; // r6
  size_t v40; // r0
  size_t v41; // r5
  unsigned int v42; // r7
  void *v43; // r0
  char v45; // [sp+4h] [bp-434h]
  int v46; // [sp+8h] [bp-430h]
  char *v47; // [sp+Ch] [bp-42Ch]
  const char *v48; // [sp+14h] [bp-424h]
  int v49; // [sp+14h] [bp-424h]
  const char *v50; // [sp+18h] [bp-420h]
  int v51; // [sp+1Ch] [bp-41Ch]
  char *v52; // [sp+28h] [bp-410h]
  char *endptr; // [sp+30h] [bp-408h] BYREF
  char s[1028]; // [sp+34h] [bp-404h] BYREF

  v3 = 0;
  if ( !a1 || !a2 )
    return v3;
  v4 = 1;
  qstrncpy((unsigned int)s, a2, 1024);
  endptr = s;
  v5 = strchr(s, 64);
  if ( !v5 )
  {
    v48 = s;
    v10 = strchr(s, 123);
    v11 = nullptr;
    v50 = nullptr;
    v52 = nullptr;
    if ( v10 )
    {
      v3 = 0;
      *v10 = 0;
      v11 = v10 + 1;
      v12 = strchr(v10 + 1, 125);
      endptr = v12;
      if ( !v12 )
        return v3;
      v48 = v12 + 1;
      endptr = v12 + 1;
      v3 = 0;
      *v12 = 0;
      v13 = (unsigned __int8)v12[1];
      v50 = nullptr;
      if ( v13 )
      {
        v52 = nullptr;
        if ( v13 != 43 )
          return v3;
      }
      else
      {
        v52 = nullptr;
      }
    }
LABEL_32:
    v51 = 23946;
LABEL_33:
    v47 = (char *)v11;
    v18 = strchr(v48, 43);
    v19 = -1;
    if ( v18 )
    {
      v20 = (unsigned __int8)v18[1];
      v21 = v50;
      if ( (v20 & 0x80u) != 0 )
      {
        v45 = 0;
        v49 = -1;
        v46 = -1;
        goto LABEL_49;
      }
      if ( (unsigned int)(v20 - 48) > 9 )
      {
        v49 = -1;
        if ( (_BYTE)v20 )
        {
          v45 = 0;
        }
        else
        {
          *v18 = 0;
          v45 = 1;
        }
        v46 = -1;
LABEL_49:
        v24 = _strlen_chk(s, 1024);
        if ( v24 )
        {
          v25 = v24;
          v26 = v24 + 1;
          if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v24 + 1) )
          {
            v27 = *(void **)a1;
          }
          else
          {
            v27 = qvector_reserve(a1, *(void **)a1, v26, 1u);
            *(_DWORD *)a1 = v27;
          }
          *(_DWORD *)(a1 + 4) = v26;
          memmove(v27, s, v25);
          *(_BYTE *)(*(_DWORD *)a1 + v25) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
        v28 = (void **)(a1 + 24);
        if ( v21 && (v29 = strlen(v21)) != 0 )
        {
          v30 = v29;
          v31 = v29 + 1;
          if ( *(_DWORD *)(a1 + 32) >= v29 + 1 )
          {
            v32 = *v28;
          }
          else
          {
            v32 = qvector_reserve(a1 + 24, *v28, v31, 1u);
            *v28 = v32;
          }
          *(_DWORD *)(a1 + 28) = v31;
          memmove(v32, v50, v30);
          *(_BYTE *)(*(_DWORD *)(a1 + 24) + v30) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 28) = 0;
        }
        v33 = (void **)(a1 + 36);
        if ( v52 && (v34 = strlen(v52), v35 = v52, v34) )
        {
          v36 = v34;
          v37 = v34 + 1;
          if ( *(_DWORD *)(a1 + 44) >= v34 + 1 )
          {
            v38 = *v33;
          }
          else
          {
            v38 = qvector_reserve(a1 + 36, *v33, v37, 1u);
            v35 = v52;
            *v33 = v38;
          }
          *(_DWORD *)(a1 + 40) = v37;
          memmove(v38, v35, v36);
          *(_BYTE *)(*(_DWORD *)(a1 + 36) + v36) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 40) = 0;
        }
        v39 = (void **)(a1 + 12);
        if ( v47 && (v40 = strlen(v47)) != 0 )
        {
          v41 = v40;
          v42 = v40 + 1;
          if ( *(_DWORD *)(a1 + 20) >= v40 + 1 )
          {
            v43 = *v39;
          }
          else
          {
            v43 = qvector_reserve(a1 + 12, *v39, v42, 1u);
            *v39 = v43;
          }
          *(_DWORD *)(a1 + 16) = v42;
          memmove(v43, v47, v41);
          *(_BYTE *)(*(_DWORD *)(a1 + 12) + v41) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        *(_BYTE *)(a1 + 60) = v45;
        *(_DWORD *)(a1 + 48) = v51;
        *(_DWORD *)(a1 + 52) = v46;
        *(_DWORD *)(a1 + 56) = v49;
        return 1;
      }
      v3 = 0;
      *v18 = 0;
      v22 = strtoul(v18 + 1, &endptr, 10);
      if ( v22 == -1 )
        return v3;
      v23 = (unsigned __int8)*endptr;
      if ( v23 == 44 )
      {
        ++endptr;
        v19 = strtoul(endptr, &endptr, 10);
        if ( v19 == -1 )
          return v3;
        v23 = (unsigned __int8)*endptr;
      }
      if ( v23 )
        return v3;
      v45 = 1;
      v46 = v22;
      v49 = v19;
    }
    else
    {
      v45 = 0;
      v49 = -1;
      v46 = -1;
    }
    v21 = v50;
    goto LABEL_49;
  }
  v6 = v5;
  *v5 = 0;
  v7 = v5 + 1;
  endptr = v5 + 1;
  if ( v5[1] != 91 )
  {
    v9 = strchr(v7, 58);
    v48 = v7;
LABEL_14:
    v51 = 0;
    if ( v9 )
    {
      v14 = v9 + 1;
      if ( v9[1] >= 0 && (unsigned int)(unsigned __int8)v9[1] - 48 <= 9 )
      {
        *v9 = 0;
        endptr = v9 + 1;
        v51 = atoi(v9 + 1);
        v48 = v14;
      }
    }
    goto LABEL_18;
  }
  v8 = strchr(v7, 93);
  v3 = 0;
  if ( !v8 )
    return v3;
  v6[1] = 0;
  v51 = 0;
  *v8 = 0;
  v48 = v8 + 1;
  endptr = v8 + 1;
  v9 = v8 + 2;
  v7 = v6 + 2;
  if ( *v9 == 58 )
    goto LABEL_14;
LABEL_18:
  v50 = v7;
  v15 = strchr(s, 123);
  v16 = strchr(s, 58);
  if ( !v16 )
    v4 = 0;
  if ( !v15 || ((v15 > v16) & (unsigned __int8)v4) != 0 )
  {
    v17 = nullptr;
    v11 = nullptr;
    if ( !v16 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v3 = 0;
  *v15 = 0;
  v11 = v15 + 1;
  if ( !v16 )
    v16 = (char *)&v11[strlen(v11)];
  if ( *(v16 - 1) == 125 )
  {
    *(v16 - 1) = 0;
    v16 = strchr(v16, 58);
    v17 = nullptr;
    if ( !v16 )
    {
LABEL_29:
      v52 = v17;
      if ( v51 )
        goto LABEL_33;
      goto LABEL_32;
    }
LABEL_28:
    *v16 = 0;
    v17 = v16 + 1;
    goto LABEL_29;
  }
  return v3;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
