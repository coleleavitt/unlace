/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_266B0
// Address: 0x000266B0

//----- (000266B0) --------------------------------------------------------
int __cdecl sub_266B0(int a1, unsigned int **a2, char a3)
{
  int v3; // ecx
  char *v4; // esi
  const char *v5; // eax
  const char *v6; // esi
  size_t v7; // eax
  size_t v8; // edi
  unsigned int v9; // edx
  void *v10; // eax
  int v11; // edi
  char *v12; // eax
  char *v13; // ecx
  char *v14; // eax
  unsigned int *v15; // edi
  unsigned int v16; // esi
  const char *v17; // eax
  unsigned int v18; // eax
  char *v19; // edx
  char *v20; // esi
  char *v21; // eax
  char *v22; // eax
  int v23; // eax
  char *v24; // eax
  int v25; // esi
  void *v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int v30; // eax
  size_t v31; // esi
  int v32; // ecx
  void *v33; // eax
  int v34; // eax
  int v35; // esi
  bool v36; // zf
  _DWORD *v37; // eax
  int v38; // edi
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // edi
  int v42; // esi
  int v43; // ecx
  int v44; // eax
  int v45; // esi
  _DWORD *v46; // eax
  int v47; // edi
  int v48; // eax
  int v49; // [esp-10h] [ebp-106Ch]
  unsigned int v50; // [esp+8h] [ebp-1054h]
  const char *v51; // [esp+8h] [ebp-1054h]
  const char *v52; // [esp+8h] [ebp-1054h]
  void **v53; // [esp+Ch] [ebp-1050h]
  unsigned int *v54; // [esp+10h] [ebp-104Ch]
  unsigned int v55; // [esp+10h] [ebp-104Ch]
  unsigned int v56; // [esp+10h] [ebp-104Ch]
  int v57; // [esp+14h] [ebp-1048h]
  int v58; // [esp+18h] [ebp-1044h]
  _DWORD v59[2]; // [esp+20h] [ebp-103Ch] BYREF
  void *v60; // [esp+28h] [ebp-1034h]
  unsigned int v61; // [esp+2Ch] [ebp-1030h]
  unsigned int v62; // [esp+30h] [ebp-102Ch]
  int v63; // [esp+38h] [ebp-1024h] BYREF
  unsigned int v64; // [esp+3Ch] [ebp-1020h]
  unsigned int v65; // [esp+40h] [ebp-101Ch]
  unsigned int src[2]; // [esp+48h] [ebp-1014h] BYREF
  int v67; // [esp+50h] [ebp-100Ch]
  unsigned int v68; // [esp+1048h] [ebp-14h]

  v68 = __readgsdword(0x14u);
  LOBYTE(v3) = 1;
  if ( *(_DWORD *)(a1 + 484) )
    return v3;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v53 = (void **)(a1 + 680);
  if ( *(_DWORD *)(a1 + 684) > 1u )
  {
    v5 = qbasename(*(_BYTE **)(a1 + 680));
    v6 = v5;
    if ( v5 && (v7 = strlen(v5)) != 0 )
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = (void *)v63;
      if ( v65 < v9 )
      {
        v50 = v9;
        v10 = qvector_reserve((int)&v63, (void *)v63, v9, 1u);
        v63 = (int)v10;
        v9 = v50;
      }
      v64 = v9;
      memmove(v10, v6, v8);
      *(_BYTE *)(v63 + v8) = 0;
    }
    else
    {
      v64 = 0;
    }
    v11 = a1;
  }
  else
  {
    v59[1] = 2;
    v59[0] = &off_1346B4;
    v60 = nullptr;
    v61 = 0;
    v62 = 0;
    if ( *(_DWORD *)(a1 + 696) )
      v4 = *(char **)(a1 + 692);
    else
      v4 = byte_EF875;
    v23 = sub_40950(v4, v59, 0);
    if ( v23 != 2 )
    {
      if ( v23 )
      {
        sub_24410(a1, "%s: could not read symbols on remote computer", v4);
      }
      else if ( !*(_BYTE *)(a1 + 492) )
      {
        *(_BYTE *)(a1 + 492) = 1;
        sub_24410(
          a1,
          "AUTOHIDE DATABASE\n%s:\nCould not find the elf interpreter name,\nshared object events will not be reported",
          v4);
      }
      v59[0] = &off_1346B4;
      if ( v60 )
      {
        v61 = 0;
        qfree(v60);
        v60 = nullptr;
        v62 = 0;
      }
      goto LABEL_47;
    }
    if ( v61 )
      v24 = (char *)v60;
    else
      v24 = byte_EF875;
    qmake_full_path((unsigned int)src, 4096, v24);
    v27 = (void *)v63;
    v28 = v64;
    v29 = v65;
    v63 = (int)v60;
    v64 = v61;
    v65 = v62;
    v60 = v27;
    v61 = v28;
    v62 = v29;
    v30 = __strlen_chk(src, 4096);
    v31 = v30;
    if ( v30 )
    {
      v32 = v30 + 1;
      v11 = a1;
      if ( *(_DWORD *)(a1 + 688) >= (unsigned int)(v30 + 1) )
      {
        v33 = *v53;
      }
      else
      {
        v33 = qvector_reserve((int)v53, *v53, v30 + 1, 1u);
        *v53 = v33;
        v11 = a1;
        v32 = v31 + 1;
      }
      *(_DWORD *)(v11 + 684) = v32;
      memmove(v33, src, v31);
      *(_BYTE *)(*(_DWORD *)(v11 + 680) + v31) = 0;
    }
    else
    {
      v11 = a1;
      *(_DWORD *)(a1 + 684) = 0;
    }
    v59[0] = &off_1346B4;
    if ( v60 )
    {
      v61 = 0;
      qfree(v60);
      v60 = nullptr;
      v62 = 0;
    }
  }
  v12 = byte_EF875;
  v13 = byte_EF875;
  if ( *(_DWORD *)(v11 + 684) )
    v13 = (char *)*v53;
  if ( v64 )
    v12 = (char *)v63;
  sub_8A3F0(v11, "INTERP: %s, SONAME: %s\n", v13, v12);
  v57 = *(_DWORD *)(a1 + 684);
  if ( v57 )
    v14 = (char *)*v53;
  else
    v14 = byte_EF875;
  v51 = v14;
  v54 = a2[1];
  if ( v54 )
  {
    v15 = *a2;
    v16 = 0;
    while ( 1 )
    {
      v17 = byte_EF875;
      if ( v15[3] )
        v17 = (const char *)v15[2];
      if ( !strcmp(v17, v51) )
        break;
      ++v16;
      v15 += 10;
      if ( v16 >= (unsigned int)v54 )
        goto LABEL_33;
    }
    if ( v15 )
    {
      v18 = sub_26E90(v49, a2, v15);
      v19 = byte_EF875;
      v20 = byte_EF875;
      if ( *(_DWORD *)(a1 + 684) )
        v20 = (char *)*v53;
      if ( v64 )
        v19 = (char *)v63;
      sub_24780(a1, *v15, v18, v20, v19);
      if ( v64 )
        v21 = (char *)v63;
      else
        v21 = byte_EF875;
      sub_1D4A0((_DWORD *)a1, v21);
      v34 = *(_DWORD *)(a1 + 500);
      v52 = "_r_debug";
      v35 = v34;
      while ( --v35 >= 0 )
      {
        v36 = strcmp(*(const char **)(*(_DWORD *)(a1 + 508) + 4 * v34 - 4), "_r_debug") == 0;
        v34 = v35;
        if ( v36 )
        {
          v37 = (_DWORD *)(a1 + 496);
          goto LABEL_71;
        }
      }
      v55 = *(_DWORD *)(a1 + 524);
      if ( !v55 )
        goto LABEL_78;
      v38 = *(_DWORD *)(a1 + 532);
      v35 = 0;
      while ( strcmp(*(const char **)(v38 + 4 * v35), "_r_debug") )
      {
        if ( ++v35 >= v55 )
          goto LABEL_78;
      }
      v37 = (_DWORD *)(a1 + 520);
LABEL_71:
      v39 = *(_DWORD *)(*v37 + 4 * v35);
      if ( v39 != -1 && sub_21300(a1, -1, v39, src, 0x14u, 0) == 20 )
      {
        v40 = v67;
        if ( v67 )
        {
          if ( sub_21300(a1, -1, v67, (unsigned int *)(a1 + 488), 1u, 0) == 1
            && (*(int (__cdecl **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v40, -1) )
          {
            *(_DWORD *)(a1 + 484) = v40;
            *(_BYTE *)(a1 + 489) = 1;
          }
          else
          {
            sub_8A3F0(a1, "%a: could not set shlib bpt\n", v40);
          }
        }
      }
LABEL_78:
      v41 = (_DWORD *)a1;
      v42 = *(_DWORD *)(a1 + 484);
      if ( v42 )
        goto LABEL_97;
      v43 = 0;
      while ( 2 )
      {
        v52 = off_134610[v43];
        if ( v43 != 5 )
        {
          v58 = v43;
          v44 = v41[125];
          v45 = v44;
          while ( --v45 >= 0 )
          {
            v36 = strcmp(*(const char **)(v41[127] + 4 * v44 - 4), v52) == 0;
            v44 = v45;
            if ( v36 )
            {
              v46 = (_DWORD *)(a1 + 496);
              goto LABEL_91;
            }
          }
          v56 = v41[131];
          if ( !v56 )
            goto LABEL_95;
          v47 = *(_DWORD *)(a1 + 532);
          v45 = 0;
          while ( strcmp(*(const char **)(v47 + 4 * v45), v52) )
          {
            if ( ++v45 >= v56 )
              goto LABEL_95;
          }
          v46 = (_DWORD *)(a1 + 520);
LABEL_91:
          v42 = *(_DWORD *)(*v46 + 4 * v45);
          if ( (unsigned int)(v42 + 1) >= 2 )
          {
            if ( sub_21300(a1, -1, v42, (unsigned int *)(a1 + 488), 1u, 0) == 1
              && (*(int (__cdecl **)(int, _DWORD, int, int, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v42, -1) )
            {
              v41 = (_DWORD *)a1;
              *(_DWORD *)(a1 + 484) = v42;
              *(_BYTE *)(a1 + 489) = 1;
              goto LABEL_97;
            }
            sub_8A3F0(a1, "%a: could not set shlib bpt (name=%s)\n", v42, v52);
          }
LABEL_95:
          v43 = v58 + 1;
          v41 = (_DWORD *)a1;
          if ( (unsigned int)(v58 + 1) < 6 )
            continue;
        }
        break;
      }
      v42 = v41[121];
      if ( v42 )
      {
LABEL_97:
        sub_8A3F0((int)v41, "%a: added shlib bpt (%s)\n", v42, v52);
        LOBYTE(v3) = 1;
      }
      else
      {
        LOBYTE(v48) = sub_1C690((int)v41, (int *)a2, a3);
        v3 = v48;
      }
      goto LABEL_48;
    }
  }
LABEL_33:
  if ( v57 )
    v22 = (char *)*v53;
  else
    v22 = byte_EF875;
  sub_24410(a1, "%s: could not find in process memory", v22);
LABEL_47:
  v3 = 0;
LABEL_48:
  if ( v63 )
  {
    v25 = v3;
    v64 = 0;
    qfree((void *)v63);
    v63 = 0;
    v65 = 0;
    return v25;
  }
  return v3;
}
// 2688F: variable 'v49' is possibly undefined
// 269C1: variable 'v3' is possibly undefined
// 26DD1: variable 'v48' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 134610: using guessed type char *off_134610[5];
// 1346B4: using guessed type int (*off_1346B4)();
