/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480FB8
// Address: 0x0000000000480FB8

//----- (0000000000480FB8) ----------------------------------------------------
__int64 __fastcall sub_480FB8(__int64 a1, unsigned __int8 *a2)
{
  _BOOL4 v3; // w20
  char *v5; // x0
  char *v6; // x21
  char *v7; // x24
  int v8; // w0
  int v9; // w26
  char *v10; // x0
  int v11; // w1
  char *v12; // x25
  char *v13; // x0
  bool v14; // zf
  char *v15; // x0
  char *v16; // x0
  int v17; // w1
  int v18; // w27
  int v19; // w28
  size_t v20; // x0
  size_t v21; // x4
  size_t v22; // x0
  size_t v23; // x23
  size_t v24; // x0
  size_t v25; // x23
  size_t v26; // x0
  size_t v27; // x21
  char *v28; // x0
  char *v29; // x1
  int v30; // w2
  char *v31; // x21
  char *v32; // x0
  char *v33; // x0
  char *v34; // x1
  int v35; // w2
  unsigned __int64 v37; // x5
  void *v38; // x0
  unsigned __int64 v39; // x24
  void *v40; // x0
  unsigned __int64 v41; // x4
  void *v42; // x0
  __int64 v43; // x4
  unsigned __int64 v44; // x5
  void *v45; // x0
  int v46; // w0
  size_t v47; // [xsp+60h] [xbp-420h]
  unsigned __int64 v48; // [xsp+60h] [xbp-420h]
  unsigned __int64 v49; // [xsp+60h] [xbp-420h]
  unsigned __int64 v50; // [xsp+68h] [xbp-418h]
  size_t v51; // [xsp+68h] [xbp-418h]
  char *s; // [xsp+70h] [xbp-410h] BYREF
  char v53[1024]; // [xsp+78h] [xbp-408h] BYREF

  v3 = a1 == 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
    return 0;
  sub_493350((unsigned __int64)v53, a2, 1024);
  s = v53;
  v5 = strchr(v53, 64);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 1;
    v8 = (unsigned __int8)v5[1];
    s = v7;
    *v6 = 0;
    if ( v8 == 91 )
    {
      v28 = strchr(v7, 93);
      if ( !v28 )
        return 0;
      v29 = v28;
      v6[1] = 0;
      v7 = v6 + 2;
      v9 = 0;
      v10 = v28 + 2;
      *v29 = 0;
      v30 = (unsigned __int8)*v10;
      s = v29 + 1;
      if ( v30 != 58 )
      {
LABEL_11:
        v12 = strchr(v53, 123);
        v13 = strchr(v53, 58);
        if ( v12 )
          v14 = v13 == nullptr;
        else
          v14 = 1;
        if ( v14 )
        {
          if ( !v12 )
            goto LABEL_17;
          *v12 = 0;
          v31 = v12 + 1;
          if ( !v13 )
            v13 = &v31[strlen(v12 + 1)];
        }
        else
        {
          if ( v13 < v12 )
          {
            v12 = nullptr;
LABEL_17:
            v6 = nullptr;
            if ( v13 )
            {
              v6 = v13 + 1;
              *v13 = 0;
            }
            v15 = s;
            if ( !v9 )
              v9 = 23946;
            goto LABEL_21;
          }
          v31 = v12 + 1;
          *v12 = 0;
        }
        if ( *(v13 - 1) != 125 )
          return 0;
        *(v13 - 1) = 0;
        v12 = v31;
        v13 = strchr(v13, 58);
        goto LABEL_17;
      }
    }
    else
    {
      v9 = 0;
      v10 = strchr(v7, 58);
      if ( !v10 )
        goto LABEL_11;
    }
    v11 = (unsigned __int8)v10[1];
    v9 = v11 & 0xFFFFFF80;
    if ( (v11 & 0x80) != 0 )
    {
      v9 = 0;
    }
    else if ( (unsigned int)(v11 - 48) <= 9 )
    {
      *v10 = 0;
      s = v10 + 1;
      v9 = strtol(v10 + 1, nullptr, 10);
    }
    goto LABEL_11;
  }
  v32 = strchr(v53, 123);
  v7 = v32;
  if ( v32 )
  {
    *v32 = 0;
    v12 = v32 + 1;
    v33 = strchr(v32 + 1, 125);
    v34 = v33;
    if ( !v33 )
      return 0;
    v35 = (unsigned __int8)v33[1];
    v15 = v33 + 1;
    *v34 = 0;
    s = v15;
    if ( v35 != 43 && v35 != 0 )
      return 0;
    v7 = nullptr;
    v9 = 23946;
  }
  else
  {
    v6 = nullptr;
    v15 = v53;
    v12 = nullptr;
    v9 = 23946;
  }
LABEL_21:
  v16 = strchr(v15, 43);
  if ( !v16 || (v17 = (unsigned __int8)v16[1], (v17 & 0x80) != 0) )
  {
    v18 = -1;
    goto LABEL_48;
  }
  if ( (unsigned int)(v17 - 48) <= 9 )
  {
    *v16 = 0;
    v18 = strtoul(v16 + 1, &s, 10);
    if ( v18 != -1 )
    {
      v19 = -1;
      v46 = (unsigned __int8)*s;
      if ( v46 == 44 )
      {
        ++s;
        v19 = strtoul(s, &s, 10);
        if ( v19 == -1 )
          return 0;
        v46 = (unsigned __int8)*s;
      }
      if ( !v46 )
        goto LABEL_26;
    }
    return 0;
  }
  v18 = -1;
  if ( v16[1] )
  {
LABEL_48:
    v19 = -1;
    goto LABEL_27;
  }
  v19 = -1;
  *v16 = 0;
LABEL_26:
  LOBYTE(v3) = 1;
LABEL_27:
  v20 = strlen(v53);
  v21 = v20;
  if ( v20 )
  {
    v37 = v20 + 1;
    v38 = *(void **)a1;
    if ( v37 > *(_QWORD *)(a1 + 16) )
    {
      v49 = v37;
      v51 = v21;
      v38 = sub_491288(a1, *(void **)a1, v37, 1u);
      v37 = v49;
      v21 = v51;
      *(_QWORD *)a1 = v38;
    }
    *(_QWORD *)(a1 + 8) = v37;
    v47 = v21;
    memmove(v38, v53, v21);
    *(_BYTE *)(*(_QWORD *)a1 + v47) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( v7 && (v22 = strlen(v7), (v23 = v22) != 0) )
  {
    v43 = a1 + 48;
    v44 = v22 + 1;
    v45 = *(void **)(a1 + 48);
    if ( v44 > *(_QWORD *)(a1 + 64) )
    {
      v50 = v44;
      v45 = sub_491288(a1 + 48, *(void **)(a1 + 48), v44, 1u);
      v43 = a1 + 48;
      v44 = v50;
      *(_QWORD *)(a1 + 48) = v45;
    }
    *(_QWORD *)(v43 + 8) = v44;
    memmove(v45, v7, v23);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v23) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0;
  }
  if ( v6 && (v24 = strlen(v6), (v25 = v24) != 0) )
  {
    v41 = v24 + 1;
    v42 = *(void **)(a1 + 72);
    if ( v41 > *(_QWORD *)(a1 + 88) )
    {
      v48 = v41;
      v42 = sub_491288(a1 + 72, *(void **)(a1 + 72), v41, 1u);
      v41 = v48;
      *(_QWORD *)(a1 + 72) = v42;
    }
    *(_QWORD *)(a1 + 80) = v41;
    memmove(v42, v6, v25);
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + v25) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = 0;
  }
  if ( v12 && (v26 = strlen(v12), (v27 = v26) != 0) )
  {
    v39 = v26 + 1;
    v40 = *(void **)(a1 + 24);
    if ( v39 > *(_QWORD *)(a1 + 40) )
    {
      v40 = sub_491288(a1 + 24, *(void **)(a1 + 24), v39, 1u);
      *(_QWORD *)(a1 + 24) = v40;
    }
    *(_QWORD *)(a1 + 32) = v39;
    memmove(v40, v12, v27);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v27) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_DWORD *)(a1 + 96) = v9;
  *(_DWORD *)(a1 + 100) = v18;
  *(_DWORD *)(a1 + 104) = v19;
  *(_BYTE *)(a1 + 108) = v3;
  return 1;
}
// 480FB8: could not find valid save-restore pair for x21
// 480FB8: could not find valid save-restore pair for x23
// 480FB8: could not find valid save-restore pair for x24
// 480FB8: could not find valid save-restore pair for x25
// 480FB8: could not find valid save-restore pair for x26
// 480FB8: could not find valid save-restore pair for x27
// 480FB8: could not find valid save-restore pair for x28
