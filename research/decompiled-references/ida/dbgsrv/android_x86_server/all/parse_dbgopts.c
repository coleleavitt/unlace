/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_dbgopts
// Address: 0x0009ED20

//----- (0009ED20) --------------------------------------------------------
const char *__cdecl parse_dbgopts(int a1, int a2)
{
  const char *v2; // ecx
  int v3; // eax
  _BYTE *v4; // esi
  char *v5; // eax
  char *v6; // eax
  char *v7; // ecx
  char *v8; // edx
  char *v9; // edi
  int v10; // eax
  char *v11; // eax
  char *v12; // edx
  char *v13; // eax
  char v14; // dl
  char *v15; // esi
  char *v16; // eax
  int v17; // eax
  char *v18; // edi
  char *v19; // eax
  const char *v20; // esi
  int v21; // esi
  char *v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // esi
  char v26; // cl
  unsigned int v27; // eax
  int v28; // eax
  size_t v29; // esi
  unsigned int v30; // edi
  _DWORD *v31; // ecx
  void *v32; // eax
  _DWORD *v33; // edi
  size_t v34; // eax
  const char *v35; // edx
  size_t v36; // edi
  void **v37; // ecx
  size_t v38; // esi
  void *v39; // eax
  int v40; // esi
  size_t v41; // eax
  size_t v42; // edi
  void **v43; // ecx
  void *v44; // eax
  size_t v45; // eax
  const char *v46; // edx
  size_t v47; // edi
  void **v48; // ecx
  void *v49; // eax
  const char *v51; // [esp+4h] [ebp-438h]
  const char *v52; // [esp+4h] [ebp-438h]
  char *v53; // [esp+8h] [ebp-434h]
  int v54; // [esp+8h] [ebp-434h]
  int v55; // [esp+Ch] [ebp-430h]
  int v56; // [esp+Ch] [ebp-430h]
  const void *v57; // [esp+10h] [ebp-42Ch]
  char v58; // [esp+14h] [ebp-428h]
  int v59; // [esp+18h] [ebp-424h]
  const char *v60; // [esp+1Ch] [ebp-420h]
  char *endptr; // [esp+24h] [ebp-418h] BYREF
  _BYTE src[1024]; // [esp+28h] [ebp-414h] BYREF
  unsigned int v63; // [esp+428h] [ebp-14h]

  v63 = __readgsdword(0x14u);
  v2 = nullptr;
  if ( !a1 || !a2 )
    return v2;
  qstrncpy((unsigned int)src, a2, 1024);
  endptr = src;
  v3 = __strchr_chk(src, 64, 1024);
  if ( v3 )
  {
    v4 = (_BYTE *)v3;
    v5 = (char *)(v3 + 1);
    *v4 = 0;
    endptr = v5;
    if ( v4[1] == 91 )
    {
      v6 = strchr(v5, 93);
      if ( !v6 )
        return nullptr;
      v7 = v4 + 2;
      v4[1] = 0;
      v8 = v6 + 1;
      *v6 = 0;
      endptr = v6 + 1;
      if ( v6[2] != 58 )
      {
        v53 = v6 + 1;
        v51 = v4 + 2;
        v55 = 0;
        goto LABEL_22;
      }
      v9 = v6 + 2;
    }
    else
    {
      v15 = v5;
      v16 = strchr(v5, 58);
      v8 = v15;
      v9 = v16;
      v7 = v15;
    }
    v51 = v7;
    if ( v9 && (v17 = (unsigned __int8)v9[1], (v17 & 0x80u) == 0) && (unsigned int)(v17 - 48) <= 9 )
    {
      *v9 = 0;
      endptr = v9 + 1;
      v55 = atoi(v9 + 1);
      v53 = v9 + 1;
    }
    else
    {
      v55 = 0;
      v53 = v8;
    }
LABEL_22:
    v18 = (char *)__strchr_chk(src, 123, 1024);
    v19 = (char *)__strchr_chk(src, 58, 1024);
    v57 = nullptr;
    if ( !v18 || v19 != nullptr && v18 > v19 )
    {
      v20 = nullptr;
      v2 = v51;
    }
    else
    {
      v20 = v18 + 1;
      *v18 = 0;
      if ( v19 )
      {
        if ( *(v19 - 1) != 125 )
          return nullptr;
      }
      else
      {
        v19 = (char *)&v20[strlen(v20)];
        if ( *(v19 - 1) != 125 )
          return nullptr;
      }
      *(v19 - 1) = 0;
      v19 = strchr(v19, 58);
      v2 = v51;
    }
    v60 = v20;
    v21 = v55;
    if ( v19 )
    {
      *v19 = 0;
      v57 = v19 + 1;
    }
    v13 = v53;
    if ( v55 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v10 = __strchr_chk(src, 123, 1024);
  if ( v10 )
  {
    *(_BYTE *)v10 = 0;
    v60 = (const char *)(v10 + 1);
    v11 = strchr((const char *)(v10 + 1), 125);
    endptr = v11;
    v2 = nullptr;
    if ( !v11 )
      return v2;
    v12 = v11;
    v13 = v11 + 1;
    endptr = v13;
    *v12 = 0;
    v14 = v12[1];
    if ( v14 )
    {
      v57 = nullptr;
      if ( v14 != 43 )
        return v2;
      goto LABEL_33;
    }
  }
  else
  {
    v2 = nullptr;
    v13 = src;
    v60 = nullptr;
  }
  v57 = nullptr;
LABEL_33:
  v21 = 23946;
LABEL_34:
  v52 = v2;
  v22 = strchr(v13, 43);
  v56 = v21;
  if ( !v22 )
    goto LABEL_44;
  v23 = (unsigned __int8)v22[1];
  if ( (v23 & 0x80u) != 0 )
    goto LABEL_44;
  if ( (unsigned int)(v23 - 48) <= 9 )
  {
    *v22 = 0;
    v24 = strtoul(v22 + 1, &endptr, 10);
    if ( v24 != -1 )
    {
      v25 = v24;
      v26 = *endptr;
      v27 = -1;
      if ( *endptr != 44 )
      {
LABEL_41:
        if ( v26 )
          return nullptr;
        v59 = v25;
        v54 = v27;
        v58 = 1;
        goto LABEL_46;
      }
      ++endptr;
      v27 = strtoul(endptr, &endptr, 10);
      if ( v27 != -1 )
      {
        v26 = *endptr;
        goto LABEL_41;
      }
    }
    return nullptr;
  }
  if ( !(_BYTE)v23 )
  {
    v54 = -1;
    *v22 = 0;
    v58 = 1;
  }
  else
  {
LABEL_44:
    v54 = -1;
    v58 = 0;
  }
  v59 = -1;
LABEL_46:
  v28 = __strlen_chk(src, 1024);
  if ( v28 )
  {
    v29 = v28;
    v30 = v28 + 1;
    v31 = (_DWORD *)a1;
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v28 + 1) )
    {
      v32 = *(void **)a1;
    }
    else
    {
      v32 = qvector_reserve(a1, *(void **)a1, v30, 1u);
      v31 = (_DWORD *)a1;
      *(_DWORD *)a1 = v32;
    }
    v31[1] = v30;
    v33 = v31;
    memmove(v32, src, v29);
    *(_BYTE *)(*v33 + v29) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  if ( v52 && (v34 = strlen(v52), v35 = v52, v34) )
  {
    v36 = v34;
    v37 = (void **)(a1 + 24);
    v38 = v34 + 1;
    if ( *(_DWORD *)(a1 + 32) >= v34 + 1 )
    {
      v39 = *v37;
    }
    else
    {
      v39 = qvector_reserve(a1 + 24, *v37, v34 + 1, 1u);
      v35 = v52;
      *(_DWORD *)(a1 + 24) = v39;
    }
    *(_DWORD *)(a1 + 28) = v38;
    v40 = a1;
    memmove(v39, v35, v36);
    *(_BYTE *)(*(_DWORD *)(a1 + 24) + v36) = 0;
  }
  else
  {
    v40 = a1;
    *(_DWORD *)(a1 + 28) = 0;
  }
  if ( v57 && (v41 = strlen((const char *)v57)) != 0 )
  {
    v42 = v41;
    v43 = (void **)(v40 + 36);
    if ( *(_DWORD *)(v40 + 44) >= v41 + 1 )
    {
      v44 = *v43;
    }
    else
    {
      v44 = qvector_reserve((int)v43, *v43, v41 + 1, 1u);
      *(_DWORD *)(v40 + 36) = v44;
    }
    *(_DWORD *)(a1 + 40) = v42 + 1;
    v40 = a1;
    memmove(v44, v57, v42);
    *(_BYTE *)(*(_DWORD *)(a1 + 36) + v42) = 0;
  }
  else
  {
    *(_DWORD *)(v40 + 40) = 0;
  }
  if ( v60 && (v45 = strlen(v60), v46 = v60, v45) )
  {
    v47 = v45;
    v48 = (void **)(v40 + 12);
    if ( *(_DWORD *)(v40 + 20) >= v45 + 1 )
    {
      v49 = *v48;
    }
    else
    {
      v49 = qvector_reserve((int)v48, *v48, v45 + 1, 1u);
      v46 = v60;
      *(_DWORD *)(v40 + 12) = v49;
    }
    *(_DWORD *)(a1 + 16) = v47 + 1;
    v40 = a1;
    memmove(v49, v46, v47);
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v47) = 0;
  }
  else
  {
    *(_DWORD *)(v40 + 16) = 0;
  }
  *(_DWORD *)(v40 + 48) = v56;
  *(_DWORD *)(v40 + 52) = v59;
  *(_DWORD *)(v40 + 56) = v54;
  *(_BYTE *)(v40 + 60) = v58;
  LOBYTE(v2) = 1;
  return v2;
}
// 9F213: variable 'v2' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
