/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_511B4
// Address: 0x000511B4

//----- (000511B4) --------------------------------------------------------
int __fastcall sub_511B4(int a1, char **a2)
{
  int v2; // r7
  char *v4; // r4
  char *v5; // r0
  const char *v6; // r6
  const char *v7; // r0
  int v8; // r6
  const char *v9; // r0
  _BYTE *i; // r1
  char *v11; // r6
  char *v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r4
  char v17; // r6
  void *v18; // r1
  int v19; // r7
  unsigned int v20; // r4
  void *v21; // r0
  unsigned __int8 *v22; // r3
  int v23; // r4
  _BYTE *j; // r0
  char *v25; // r1
  time_t v26; // r0
  _BYTE *v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r4
  int v31; // r2
  _BYTE *v32; // r0
  const void *v33; // r5
  size_t v34; // r0
  size_t v35; // r6
  int v36; // r4
  unsigned int v37; // r7
  void *v38; // r0
  char v39; // r0
  char v40; // r1
  char v41; // r2
  _BYTE *v42; // r5
  _BYTE *v43; // r3
  char *v44; // r1
  int v46; // [sp+Ch] [bp-102Ch]
  int v47; // [sp+10h] [bp-1028h]
  int v48; // [sp+14h] [bp-1024h]
  int v49; // [sp+14h] [bp-1024h]
  int v50; // [sp+20h] [bp-1018h]
  void *ptr; // [sp+28h] [bp-1010h] BYREF
  unsigned int v52; // [sp+2Ch] [bp-100Ch]
  unsigned int v53; // [sp+30h] [bp-1008h]
  unsigned __int8 v54[4]; // [sp+34h] [bp-1004h] BYREF
  int v55; // [sp+38h] [bp-1000h] BYREF
  _BYTE v56[4089]; // [sp+3Fh] [bp-FF9h] BYREF

  v2 = (int)a2;
  v4 = a2[1];
  if ( v4 )
    v5 = *a2;
  else
    v5 = byte_DE331;
  if ( *v5 != 95 )
    goto LABEL_12;
  v6 = *a2;
  if ( (*a2)[1] != 95 )
    goto LABEL_12;
  if ( !v4 )
    v6 = &byte_B3CBE;
  if ( !strcmp(v6, "__LINE__") )
  {
    v14 = *(_DWORD *)(a1 + 148);
    *(_WORD *)(v2 + 12) = 3;
    *(_DWORD *)(v2 + 16) = v14;
    return 1;
  }
  if ( !strcmp(v6, "__FILE__") )
  {
    v33 = *(const void **)(a1 + 144);
    if ( v33 && (v34 = strlen((const char *)v33)) != 0 )
    {
      v35 = v34;
      v36 = v2;
      v37 = v34 + 1;
      if ( *(_DWORD *)(v36 + 8) >= v34 + 1 )
      {
        v38 = *(void **)v36;
      }
      else
      {
        v38 = qvector_reserve(v36, *(void **)v36, v37, 1u);
        *(_DWORD *)v36 = v38;
      }
      *(_DWORD *)(v36 + 4) = v37;
      memmove(v38, v33, v35);
      *(_BYTE *)(*(_DWORD *)v36 + v35) = 0;
      v2 = v36;
    }
    else
    {
      *(_DWORD *)(v2 + 4) = 0;
    }
LABEL_85:
    *(_BYTE *)(v2 + 20) = 0;
    *(_WORD *)(v2 + 12) = 4;
    return 1;
  }
  if ( !strcmp(v6, "__DATE__") || !strcmp(v6, "__TIME__") )
  {
    v26 = time(nullptr);
    qctime((unsigned int)v54, 0x28u, v26);
    v27 = *(_BYTE **)v2;
    v28 = *(unsigned __int8 *)(*(_DWORD *)v2 + 2);
    *(_DWORD *)(v2 + 4) = 0;
    if ( v28 == 68 )
    {
      if ( *(_DWORD *)(v2 + 8) <= 7u )
      {
        v27 = qvector_reserve(v2, v27, 8u, 1u);
        *(_DWORD *)v2 = v27;
      }
      *(_DWORD *)(v2 + 4) = 8;
      v27[7] = 0;
      memmove(*(void **)v2, &v55, 7u);
      v29 = *(_DWORD *)(v2 + 4);
      v30 = v29 - 1;
      if ( !v29 )
        v30 = 0;
      v31 = v30 + 4;
      if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v30 + 5) )
      {
        v32 = *(_BYTE **)v2;
      }
      else
      {
        v32 = qvector_reserve(v2, *(void **)v2, v30 + 5, 1u);
        v31 = v30 + 4;
        *(_DWORD *)v2 = v32;
      }
      *(_DWORD *)(v2 + 4) = v30 + 5;
      v32[v31] = 0;
      v39 = v56[10];
      v40 = v56[11];
      v41 = v56[12];
      v42 = *(_BYTE **)v2;
      v42[v30] = v56[9];
      v43 = &v42[v30];
      v43[3] = v41;
      v43[2] = v40;
      v43[1] = v39;
    }
    else
    {
      if ( *(_DWORD *)(v2 + 8) <= 8u )
      {
        v27 = qvector_reserve(v2, v27, 9u, 1u);
        *(_DWORD *)v2 = v27;
      }
      *(_DWORD *)(v2 + 4) = 9;
      v27[8] = 0;
      memmove(*(void **)v2, v56, 8u);
    }
    goto LABEL_85;
  }
LABEL_12:
  v50 = 0;
  if ( !*(_BYTE *)(a1 + 44) )
    return v50;
  v7 = v4 ? *(const char **)v2 : &byte_B3CBE;
  v8 = strcmp(v7, "defined");
  if ( v8 )
  {
    v9 = v4 ? *(const char **)v2 : &byte_B3CBE;
    if ( strcmp(v9, "__has_include") )
      return v50;
  }
  for ( i = *(_BYTE **)(a1 + 4); (unsigned int)(unsigned __int8)*i - 9 < 5 || *i == 32; *(_DWORD *)(a1 + 4) = i )
    ++i;
  v48 = v8;
  v47 = v2;
  v11 = i + 1;
  *(_DWORD *)(a1 + 4) = i + 1;
  v12 = i + 2;
  v50 = 0;
  v13 = (unsigned __int8)*i;
  if ( v13 == 40 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = v12;
      if ( (unsigned int)(unsigned __int8)*(v12 - 1) - 9 >= 5 && *(v12 - 1) != 32 )
        break;
      ++v12;
    }
    v46 = 1;
    v11 = v12;
  }
  else if ( (v13 & 0x80u) == 0 && isalpha(v13) || v13 == 36 )
  {
    v46 = 0;
  }
  else
  {
    v46 = 0;
    if ( v13 != 95 )
      return v50;
  }
  if ( v48 )
  {
    v15 = (unsigned __int8)*(v11 - 1);
    v49 = 62;
    if ( v15 != 60 )
    {
      if ( v15 != 34 )
        return v50;
      v49 = 34;
    }
    v52 = 0;
    ptr = nullptr;
    v50 = 0;
    v53 = 0;
    while ( *v11 && *v11 != 41 )
    {
      *(_DWORD *)(a1 + 4) = v11 + 1;
      v16 = v52 - 1;
      if ( !v52 )
        v16 = 0;
      v17 = *v11;
      v18 = ptr;
      if ( v53 < v16 + 2 )
      {
        v18 = qvector_reserve((int)&ptr, ptr, v16 + 2, 1u);
        ptr = v18;
      }
      v52 = v16 + 2;
      *((_BYTE *)v18 + v16) = v17;
      *((_BYTE *)ptr + v16 + 1) = 0;
      v11 = *(char **)(a1 + 4);
    }
    v19 = 1;
    if ( v46 )
    {
      *(_DWORD *)(a1 + 4) = v11 + 1;
      if ( *v11 == 41 )
      {
        v20 = v52;
        if ( v52 >= 2 )
        {
          v21 = ptr;
          v19 = 1;
          if ( (unsigned __int8)*((char *)ptr + v52 - 2) != v49 )
            goto LABEL_93;
          if ( (int)(v52 - 1) > 1 )
          {
            v44 = (char *)ptr;
            if ( v53 < v52 - 1 )
            {
              v44 = (char *)qvector_reserve((int)&ptr, ptr, v52 - 1, 1u);
              ptr = v44;
            }
            v52 = v20 - 1;
            v44[v20 - 2] = 0;
            v22 = (unsigned __int8 *)ptr;
          }
          else
          {
            v22 = nullptr;
            if ( ptr )
            {
              v52 = 0;
              qfree(ptr);
              v22 = nullptr;
              v53 = 0;
              ptr = nullptr;
            }
          }
          if ( !v52 )
            v22 = (unsigned __int8 *)&byte_B3CBE;
          *(_DWORD *)(v47 + 16) = sub_515F4(a1, v54, 4096, v22, v49, 0) != nullptr;
          v19 = 0;
        }
      }
    }
    v21 = ptr;
LABEL_93:
    if ( v21 )
    {
      v52 = 0;
      qfree(v21);
      v53 = 0;
      ptr = nullptr;
    }
    v23 = v47;
    if ( !v19 )
      goto LABEL_96;
    return v50;
  }
  v23 = v2;
  sub_50E30(a1, v2);
  if ( !v46 )
    goto LABEL_101;
  for ( j = *(_BYTE **)(a1 + 4); (unsigned int)(unsigned __int8)*j - 9 < 5 || *j == 32; *(_DWORD *)(a1 + 4) = ++j )
    ;
  *(_DWORD *)(a1 + 4) = j + 1;
  if ( *j == 41 )
  {
LABEL_101:
    if ( *(_DWORD *)(v2 + 4) )
      v25 = *(char **)v2;
    else
      v25 = &byte_B3CBE;
    *(_DWORD *)(v2 + 16) = sub_4F0A0(a1, v25) != nullptr;
LABEL_96:
    *(_WORD *)(v23 + 12) = 3;
    return 1;
  }
  return v50;
}
// B3CBE: using guessed type char byte_B3CBE;
