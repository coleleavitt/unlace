/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E350
// Address: 0x0007E350

//----- (0007E350) --------------------------------------------------------
int __cdecl sub_7E350(
        int (__cdecl ***a1)(_DWORD, int *, int, _DWORD **, int *, int *),
        int a2,
        int *a3,
        unsigned int *a4,
        char *a5,
        int a6,
        char a7)
{
  char *v7; // edi
  size_t v8; // eax
  size_t v9; // esi
  unsigned int v10; // edi
  void *v11; // eax
  int v12; // esi
  int v13; // edi
  _DWORD *v14; // edi
  char *v15; // eax
  int v16; // edi
  int v17; // esi
  const char *v18; // eax
  bool v19; // zf
  int *v20; // eax
  const char *v21; // eax
  int v22; // ecx
  int v23; // esi
  int i; // edi
  const char *v25; // eax
  int v26; // ecx
  _DWORD *v27; // eax
  unsigned int v28; // esi
  unsigned int v29; // ecx
  _BYTE *v30; // eax
  void *v31; // eax
  int v32; // ecx
  int v34; // [esp+24h] [ebp-1528h]
  int v35; // [esp+2Ch] [ebp-1520h]
  int v36; // [esp+30h] [ebp-151Ch]
  int v37; // [esp+38h] [ebp-1514h] BYREF
  int v38; // [esp+3Ch] [ebp-1510h]
  unsigned int v39; // [esp+40h] [ebp-150Ch]
  _DWORD *v40; // [esp+48h] [ebp-1504h] BYREF
  __int64 v41; // [esp+4Ch] [ebp-1500h]
  __int64 v42; // [esp+54h] [ebp-14F8h]
  __int64 v43; // [esp+5Ch] [ebp-14F0h]
  __int64 v44; // [esp+64h] [ebp-14E8h]
  __int64 v45; // [esp+6Ch] [ebp-14E0h]
  __int64 v46; // [esp+74h] [ebp-14D8h]
  int v47; // [esp+7Ch] [ebp-14D0h]
  int v48; // [esp+80h] [ebp-14CCh]
  int v49; // [esp+A8h] [ebp-14A4h] BYREF
  int v50; // [esp+ACh] [ebp-14A0h] BYREF
  char *v51; // [esp+E8h] [ebp-1464h] BYREF
  int v52; // [esp+ECh] [ebp-1460h]
  int v53; // [esp+F0h] [ebp-145Ch]
  void *v54; // [esp+F8h] [ebp-1454h] BYREF
  int v55; // [esp+FCh] [ebp-1450h]
  int v56; // [esp+100h] [ebp-144Ch]
  int v57; // [esp+108h] [ebp-1444h] BYREF
  unsigned int v58; // [esp+10Ch] [ebp-1440h]
  unsigned int v59; // [esp+110h] [ebp-143Ch]
  int v60; // [esp+118h] [ebp-1434h] BYREF
  unsigned int v61; // [esp+11Ch] [ebp-1430h]
  unsigned int v62; // [esp+120h] [ebp-142Ch]
  int v63; // [esp+124h] [ebp-1428h]
  __int16 v64; // [esp+128h] [ebp-1424h]
  _DWORD s[1288]; // [esp+12Ch] [ebp-1420h] BYREF

  v7 = a5;
  s[1283] = __readgsdword(0x14u);
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = -1;
  v64 = 0;
  memset(s, 0, 0x1408u);
  if ( a5 && (v8 = strlen(a5)) != 0 )
  {
    v9 = v8;
    v10 = v8 + 1;
    v11 = (void *)v60;
    if ( v62 < v10 )
    {
      v11 = qvector_reserve((int)&v60, (void *)v60, v10, 1u);
      v60 = (int)v11;
    }
    v61 = v10;
    v7 = a5;
    memmove(v11, a5, v9);
    *(_BYTE *)(v60 + v9) = 0;
  }
  else
  {
    v61 = 0;
  }
  v63 = sub_7B140(v7);
  LOBYTE(v64) = a7;
  if ( v63 != 25 )
    s[0] = a6;
  v12 = a2;
  if ( !(unsigned __int8)sub_7BAF0((int)&v60) )
  {
    sub_7C0C0((_BYTE *)(a2 + 100), "Couldn't retrieve file information.\n");
LABEL_54:
    v28 = v58;
    if ( !v58 )
    {
      v29 = 0;
      v30 = (_BYTE *)v57;
      if ( !v59 )
      {
        v30 = qvector_reserve((int)&v57, (void *)v57, 1u, 1u);
        v57 = (int)v30;
        v29 = v58;
      }
      v30[v29] = 0;
      v28 = ++v58;
    }
    *a4 = v28;
    if ( v59 > v28 )
    {
      if ( v28 )
      {
        if ( v57 )
        {
          v31 = qrealloc((void *)v57, v28);
          if ( v31 )
          {
            v57 = (int)v31;
            v59 = v28;
          }
        }
      }
    }
    v59 = 0;
    v58 = 0;
    v32 = v57;
    v57 = 0;
    *a3 = v32;
    v12 = 0;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(a2 + 96) )
    sub_1C900();
  v54 = nullptr;
  v55 = 0;
  v56 = 0;
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  if ( !sub_7B7A0((int)&dword_13BE10, (int)&v51, &v60, (int *)&v54) )
  {
    v13 = 0;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(a2 + 96) )
    sub_1C900();
  sub_86DA0((int)&v40);
  v14 = operator new(0x14u);
  if ( v52 )
    v15 = v51;
  else
    v15 = byte_EF875;
  v14[1] = 1;
  *v14 = &off_13836C;
  sub_1B530((int)(v14 + 2), v15);
  v40 = v14;
  if ( v63 != 11 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30214);
    BUG();
  }
  v46 = *(_QWORD *)&off_1382D4;
  v45 = qword_1382CC;
  v44 = *(_QWORD *)&off_1382C4;
  v43 = *(_QWORD *)off_1382BC;
  v42 = *(_QWORD *)off_1382B4;
  v41 = *(_QWORD *)&off_1382AC;
  if ( (unsigned __int8)((int (__cdecl *)(_DWORD **, int *))sub_85530)(&v40, &v60) )
  {
    v36 = v48;
    if ( v48 > 0 )
    {
      v16 = v47 + 12;
      v17 = 0;
      do
      {
        v35 = *(_DWORD *)(v16 + 4);
        v18 = byte_EF875;
        if ( v35 )
          v18 = *(const char **)v16;
        v19 = strcmp(v18, ".debug_info") == 0;
        v20 = &v49;
        if ( v19 )
          goto LABEL_30;
        v21 = byte_EF875;
        if ( v35 )
          v21 = *(const char **)v16;
        v19 = strcmp(v21, ".debug_types") == 0;
        v20 = &v50;
        if ( v19 )
LABEL_30:
          *v20 = v17;
        ++v17;
        v16 += 100;
      }
      while ( v36 != v17 );
    }
    v37 = 0;
    v38 = 0;
    v39 = 0;
    if ( v36 > 0 )
    {
      v22 = 0;
      v23 = 16;
      for ( i = 0; i < v36; ++i )
      {
        v34 = v22;
        v25 = byte_EF875;
        if ( *(_DWORD *)(v47 + v23) )
          v25 = *(const char **)(v47 + v23 - 4);
        if ( !strncmp(v25, ".debug_", 7u) )
        {
          v26 = v34;
          if ( v39 >= v34 + 1 )
          {
            v27 = (_DWORD *)v37;
          }
          else
          {
            v27 = qvector_reserve((int)&v37, (void *)v37, v34 + 1, 4u);
            v37 = (int)v27;
            v26 = v38;
          }
          v27[v26] = i;
          v22 = ++v38;
        }
        else
        {
          v22 = v34;
        }
        v23 += 100;
      }
    }
    v12 = (**a1)(a1, &v57, a2, &v40, &v60, &v37);
    if ( v37 )
    {
      v38 = 0;
      qfree((void *)v37);
      v37 = 0;
      v39 = 0;
    }
    if ( v12 )
    {
      sub_86F60((int)&v40);
      v13 = 1;
      goto LABEL_49;
    }
  }
  else
  {
    sub_7C0C0((_BYTE *)(a2 + 100), "Couldn't initialize DWARF loading.\n");
  }
  sub_86F60((int)&v40);
  v12 = 0;
  v13 = 0;
LABEL_49:
  if ( v51 )
  {
    v52 = 0;
    qfree(v51);
    v51 = nullptr;
    v53 = 0;
  }
  if ( v54 )
  {
    v55 = 0;
    qfree(v54);
    v54 = nullptr;
    v56 = 0;
  }
  if ( !v13 )
    goto LABEL_54;
LABEL_64:
  if ( v60 )
  {
    v61 = 0;
    qfree((void *)v60);
    v60 = 0;
    v62 = 0;
  }
  if ( v57 )
  {
    v58 = 0;
    qfree((void *)v57);
    v57 = 0;
    v59 = 0;
  }
  return v12;
}
// 85530: using guessed type int __cdecl sub_85530(int);
// 1382AC: using guessed type int (__cdecl *off_1382AC)(int, __int64, int);
// 1382B4: using guessed type int (__cdecl *off_1382B4[4])(int);
// 1382BC: using guessed type int (__cdecl *off_1382BC[2])(int);
// 1382C4: using guessed type int (__cdecl *off_1382C4)(int, int, int, int, int);
// 1382CC: using guessed type __int64 qword_1382CC;
// 1382D4: using guessed type int (__cdecl *off_1382D4)(int);
// 13836C: using guessed type int (__cdecl *off_13836C)(int);
// 13BE10: using guessed type int dword_13BE10;
// 13E34C: using guessed type int under_debugger;
