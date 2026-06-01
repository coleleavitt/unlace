/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22244
// Address: 0x00022244

//----- (00022244) --------------------------------------------------------
int __fastcall sub_22244(int a1, unsigned int **a2, int a3)
{
  int v3; // r4
  const char *v4; // r0
  const char *v5; // r4
  size_t v6; // r0
  size_t v7; // r7
  unsigned int v8; // r6
  void *v9; // r1
  char **v10; // r4
  char *v11; // r0
  unsigned int *v12; // r6
  unsigned int *v13; // r4
  unsigned int v14; // r5
  const char *v15; // r0
  unsigned int v16; // r2
  char *v17; // r0
  char *v18; // r3
  const char *v19; // r1
  const char *v20; // r2
  const char *v21; // r4
  int v22; // r0
  char *v23; // r2
  void *v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r1
  size_t v27; // r4
  unsigned int v28; // r2
  void *v29; // r0
  void **v30; // r7
  int v31; // r5
  int v32; // r4
  int v33; // r0
  _DWORD *v34; // r0
  const char **v35; // r7
  unsigned int *v36; // r4
  int v37; // r3
  const char *v38; // r6
  int v39; // r4
  int v40; // r5
  int v41; // r0
  _DWORD *v42; // r0
  unsigned int v43; // r7
  const char **v44; // r5
  int v45; // r4
  int v46; // r7
  int v47; // r5
  unsigned int *v49; // r4
  int v50; // r5
  int v51; // r0
  int v52; // r2
  int v53; // r1
  int v54; // r5
  int v55; // r7
  unsigned int v56; // r0
  unsigned int v57; // r0
  int i; // r1
  int v59; // r4
  int v60; // r7
  int v61; // [sp+24h] [bp-1064h]
  char v62; // [sp+28h] [bp-1060h]
  _DWORD *v64; // [sp+34h] [bp-1054h]
  unsigned int v65; // [sp+38h] [bp-1050h]
  unsigned int *v66; // [sp+38h] [bp-1050h]
  int v67; // [sp+38h] [bp-1050h]
  unsigned int *v69; // [sp+50h] [bp-1038h]
  int *v70; // [sp+50h] [bp-1038h]
  void **v71; // [sp+54h] [bp-1034h]
  const char **v72; // [sp+54h] [bp-1034h]
  unsigned int v73; // [sp+54h] [bp-1034h]
  int v74; // [sp+54h] [bp-1034h]
  _DWORD *v75; // [sp+54h] [bp-1034h]
  char *s2; // [sp+5Ch] [bp-102Ch]
  char *s2a; // [sp+5Ch] [bp-102Ch]
  _DWORD v79[2]; // [sp+64h] [bp-1024h] BYREF
  void *v80; // [sp+6Ch] [bp-101Ch]
  unsigned int v81; // [sp+70h] [bp-1018h]
  unsigned int v82; // [sp+74h] [bp-1014h]
  void *ptr; // [sp+78h] [bp-1010h] BYREF
  unsigned int v84; // [sp+7Ch] [bp-100Ch]
  unsigned int v85; // [sp+80h] [bp-1008h]
  _BYTE v86[8]; // [sp+84h] [bp-1004h] BYREF
  int v87; // [sp+8Ch] [bp-FFCh]

  v3 = 1;
  if ( *(_DWORD *)(a1 + 824) )
    return v3;
  v64 = (_DWORD *)(a1 + 824);
  v84 = 0;
  ptr = nullptr;
  v85 = 0;
  v69 = (unsigned int *)(a1 + 1028);
  v71 = (void **)(a1 + 1024);
  if ( *(_DWORD *)(a1 + 1028) > 1u )
  {
    v4 = qbasename(*(_BYTE **)(a1 + 1024));
    v5 = v4;
    if ( v4 && (v6 = strlen(v4)) != 0 )
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = ptr;
      if ( v85 < v6 + 1 )
      {
        v9 = qvector_reserve((int)&ptr, ptr, v8, 1u);
        ptr = v9;
      }
      v84 = v8;
      memmove(v9, v5, v7);
      *((_BYTE *)ptr + v7) = 0;
    }
    else
    {
      v84 = 0;
    }
    v10 = (char **)v71;
  }
  else
  {
    v79[1] = 2;
    v80 = nullptr;
    v81 = 0;
    v82 = 0;
    v79[0] = &off_D631C;
    if ( *(_DWORD *)(a1 + 1040) )
      v21 = *(const char **)(a1 + 1036);
    else
      v21 = &byte_B3CBE;
    v22 = sub_35628(v21, v79, 0);
    if ( v22 != 2 )
    {
      if ( v22 )
      {
        sub_20D34(a1, "%s: could not read symbols on remote computer", v21);
      }
      else if ( !*(_BYTE *)(a1 + 836) )
      {
        *(_BYTE *)(a1 + 836) = 1;
        sub_20D34(
          a1,
          "AUTOHIDE DATABASE\n%s:\nCould not find the elf interpreter name,\nshared object events will not be reported",
          v21);
      }
      v79[0] = &off_D631C;
      if ( v80 )
      {
        v81 = 0;
        qfree(v80);
        v82 = 0;
        v80 = nullptr;
      }
      v3 = 0;
      goto LABEL_88;
    }
    if ( v81 )
      v23 = (char *)v80;
    else
      v23 = &byte_B3CBE;
    qmake_full_path((unsigned int)v86, 4096, v23);
    v24 = ptr;
    ptr = v80;
    v25 = v81;
    v81 = v84;
    v84 = v25;
    v26 = v82;
    v82 = v85;
    v85 = v26;
    v80 = v24;
    v27 = _strlen_chk(v86, 4096);
    if ( v27 )
    {
      v28 = v27 + 1;
      if ( *(_DWORD *)(a1 + 1032) >= v27 + 1 )
      {
        v30 = v71;
        v29 = *v71;
      }
      else
      {
        v29 = qvector_reserve((int)v71, *v71, v28, 1u);
        v30 = v71;
        *v71 = v29;
        v28 = v27 + 1;
      }
      *v69 = v28;
      memmove(v29, v86, v27);
      v71 = v30;
      *((_BYTE *)*v30 + v27) = 0;
    }
    else
    {
      *v69 = 0;
    }
    v79[0] = &off_D631C;
    v10 = (char **)v71;
    if ( v80 )
    {
      v81 = 0;
      qfree(v80);
      v82 = 0;
      v80 = nullptr;
    }
  }
  v72 = (const char **)v10;
  sub_64B30(a1, "INTERP: %s, SONAME: %s\n");
  v65 = *v69;
  if ( *v69 )
    v11 = *v10;
  else
    v11 = &byte_B3CBE;
  s2 = v11;
  v12 = a2[1];
  if ( !v12 )
    goto LABEL_30;
  v13 = *a2;
  v14 = 0;
  while ( 1 )
  {
    v15 = &byte_B3CBE;
    if ( v13[3] )
      v15 = (const char *)v13[2];
    ++v14;
    if ( !strcmp(v15, s2) )
      break;
    v13 += 10;
    if ( v14 >= (unsigned int)v12 )
      goto LABEL_30;
  }
  if ( !v13 )
  {
LABEL_30:
    if ( v65 )
      v20 = *v72;
    else
      v20 = &byte_B3CBE;
    v3 = 0;
    sub_20D34(a1, "%s: could not find in process memory", v20);
    goto LABEL_88;
  }
  v16 = sub_22890(0, a2, v13);
  v17 = &byte_B3CBE;
  v18 = &byte_B3CBE;
  if ( *v69 )
    v18 = (char *)*v72;
  if ( v84 )
    v17 = (char *)ptr;
  sub_20F58(a1, *v13, v16, v18, v17);
  if ( v84 )
    v19 = (const char *)ptr;
  else
    v19 = &byte_B3CBE;
  sub_1C304(a1, v19);
  s2a = (char *)(a1 + 852);
  v70 = (int *)(a1 + 844);
  v31 = *(_DWORD *)(a1 + 844);
  v32 = 4 * v31 - 4;
  while ( --v31 >= 0 )
  {
    v33 = strcmp(*(const char **)(*(_DWORD *)s2a + v32), "_r_debug");
    v32 -= 4;
    if ( !v33 )
    {
      v34 = (_DWORD *)(a1 + 840);
      goto LABEL_64;
    }
  }
  v73 = *(_DWORD *)(a1 + 868);
  if ( !v73 )
    goto LABEL_66;
  v35 = *(const char ***)(a1 + 876);
  v31 = 0;
  while ( strcmp(*v35, "_r_debug") )
  {
    ++v35;
    if ( ++v31 >= v73 )
      goto LABEL_66;
  }
  v34 = (_DWORD *)(a1 + 864);
LABEL_64:
  if ( *(_DWORD *)(*v34 + 4 * v31) != -1 && !*(_BYTE *)(a1 + 977) )
  {
    v61 = *(_DWORD *)(a1 + 968);
    if ( v61 != -1 )
    {
      v49 = (unsigned int *)v86;
      v50 = *(_DWORD *)(*v34 + 4 * v31);
      v51 = _errno(v61 + 1);
      v52 = v50;
      v75 = (_DWORD *)v51;
      v53 = 0;
      while ( 1 )
      {
        *v75 = 0;
        v67 = v53;
        v54 = 20 - v53;
        if ( 4 - (v52 & 3) <= 20 - v53 )
          v54 = 4 - (v52 & 3);
        v55 = v52;
        v62 = v52 & 3;
        v56 = ptrace(PTRACE_PEEKTEXT, v61, v52 - (v52 & 3));
        if ( *v75 )
          break;
        if ( v54 == 4 )
        {
          *v49 = v56;
        }
        else if ( v54 >= 1 )
        {
          v57 = v56 >> (8 * v62);
          for ( i = 0; i < v54; ++i )
          {
            *((_BYTE *)v49 + i) = v57;
            v57 >>= 8;
          }
        }
        v53 = v54 + v67;
        v52 = v54 + v55;
        v49 = (unsigned int *)((char *)v49 + v54);
        if ( v54 + v67 >= 20 )
        {
          if ( v54 + v67 == 20 && v87 )
          {
            v59 = v87 - (v87 & 1);
            v60 = 4;
            if ( (v87 & 1) != 0 )
              v60 = 2;
            if ( sub_1EE24(a1, -1, v87 - (v87 & 1), (unsigned int *)(a1 + 828), v60, 0) == v60
              && (*(int (__fastcall **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v59, v60) )
            {
              *v64 = v59;
              *(_BYTE *)(a1 + 832) = v60;
            }
            else
            {
              sub_64B30(a1, "%a: could not set shlib bpt\n");
            }
          }
          break;
        }
      }
    }
  }
LABEL_66:
  v36 = (unsigned int *)a1;
  if ( *v64 )
    goto LABEL_87;
  v66 = (unsigned int *)(a1 + 868);
  v37 = 0;
  while ( 2 )
  {
    v38 = off_D6280[v37];
    if ( v37 != 5 )
    {
      v74 = v37;
      v39 = *v70;
      v40 = 4 * *v70 - 4;
      while ( --v39 >= 0 )
      {
        v41 = strcmp(*(const char **)(*(_DWORD *)s2a + v40), v38);
        v40 -= 4;
        if ( !v41 )
        {
          v42 = (_DWORD *)(a1 + 840);
          goto LABEL_79;
        }
      }
      v43 = *v66;
      if ( !*v66 )
        goto LABEL_85;
      v44 = *(const char ***)(a1 + 876);
      v39 = 0;
      while ( strcmp(*v44, v38) )
      {
        ++v44;
        if ( ++v39 >= v43 )
          goto LABEL_85;
      }
      v42 = (_DWORD *)(a1 + 864);
LABEL_79:
      v45 = *(_DWORD *)(*v42 + 4 * v39);
      if ( (unsigned int)(v45 + 1) < 2 )
      {
LABEL_85:
        v37 = v74 + 1;
        v36 = (unsigned int *)a1;
        if ( (unsigned int)(v74 + 1) < 6 )
          continue;
        break;
      }
      v46 = v45 - (v45 & 1);
      v47 = 4;
      if ( (v45 & 1) != 0 )
        v47 = 2;
      if ( sub_1EE24(a1, -1, v45 - (v45 & 1), (unsigned int *)(a1 + 828), v47, 0) != v47
        || !(*(int (__fastcall **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v46, v47) )
      {
        sub_64B30(a1, "%a: could not set shlib bpt (name=%s)\n");
        goto LABEL_85;
      }
      *v64 = v46;
      v36 = (unsigned int *)a1;
      *(_BYTE *)(a1 + 832) = v47;
      if ( v46 )
        goto LABEL_87;
      goto LABEL_110;
    }
    break;
  }
  if ( *v64 )
  {
LABEL_87:
    sub_64B30((int)v36, "%a: added shlib bpt (%s)\n");
    v3 = 1;
    goto LABEL_88;
  }
LABEL_110:
  v3 = sub_1B9C8(v36, (int *)a2, a3);
LABEL_88:
  if ( ptr )
  {
    v84 = 0;
    qfree(ptr);
    v85 = 0;
    ptr = nullptr;
  }
  return v3;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// D6280: using guessed type char *off_D6280[5];
// D631C: using guessed type _UNKNOWN *off_D631C;
