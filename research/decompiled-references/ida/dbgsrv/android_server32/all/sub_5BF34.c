/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BF34
// Address: 0x0005BF34

//----- (0005BF34) --------------------------------------------------------
char *__fastcall sub_5BF34(
        int (__fastcall ***a1)(_DWORD, void **, int, _DWORD *, void **, void **),
        int a2,
        _DWORD *a3,
        unsigned int *a4,
        const void *a5,
        int a6,
        char a7)
{
  char *v7; // r6
  size_t v8; // r0
  size_t v9; // r7
  unsigned int v10; // r5
  void *v11; // r1
  int v12; // r0
  const char *v13; // r1
  int v14; // r5
  const char *v15; // r1
  _DWORD *v16; // r0
  _DWORD *v17; // r7
  char *v18; // r1
  int v19; // r2
  int *v20; // r1
  int *v21; // r1
  int v22; // r3
  int v23; // r4
  int v24; // r5
  int v25; // r6
  int v26; // r3
  int v27; // r4
  int v28; // r5
  int v29; // r6
  int v30; // r4
  int (*v31)(void); // r5
  int v32; // r6
  int *v33; // r6
  int v34; // r7
  int v35; // r4
  const char *v36; // r0
  const char *v37; // r0
  int v38; // r7
  int v39; // r4
  int i; // r6
  const char *v41; // r0
  void *v42; // r0
  unsigned int v43; // r4
  void *v44; // r1
  unsigned int v45; // r0
  void *v46; // r0
  void *v47; // r0
  int v53; // [sp+38h] [bp-1504h]
  char v54; // [sp+3Ch] [bp-1500h] BYREF
  void *v55; // [sp+40h] [bp-14FCh] BYREF
  int v56; // [sp+44h] [bp-14F8h]
  unsigned int v57; // [sp+48h] [bp-14F4h]
  char *v58; // [sp+4Ch] [bp-14F0h] BYREF
  int v59; // [sp+50h] [bp-14ECh]
  int v60; // [sp+54h] [bp-14E8h]
  void *v61; // [sp+58h] [bp-14E4h] BYREF
  int v62; // [sp+5Ch] [bp-14E0h]
  int v63; // [sp+60h] [bp-14DCh]
  void *v64; // [sp+64h] [bp-14D8h] BYREF
  unsigned int v65; // [sp+68h] [bp-14D4h]
  unsigned int v66; // [sp+6Ch] [bp-14D0h]
  _DWORD v67[13]; // [sp+70h] [bp-14CCh] BYREF
  int v68; // [sp+A4h] [bp-1498h]
  int v69; // [sp+A8h] [bp-1494h]
  int v70; // [sp+D4h] [bp-1468h]
  int v71; // [sp+D8h] [bp-1464h]
  void *ptr; // [sp+118h] [bp-1424h] BYREF
  unsigned int v73; // [sp+11Ch] [bp-1420h]
  unsigned int v74; // [sp+120h] [bp-141Ch]
  int v75; // [sp+124h] [bp-1418h]
  __int16 v76; // [sp+128h] [bp-1414h]
  _DWORD v77[1282]; // [sp+12Ch] [bp-1410h] BYREF

  v7 = &v54;
  v65 = 0;
  v64 = nullptr;
  v66 = 0;
  v76 = 0;
  v73 = 0;
  ptr = nullptr;
  v74 = 0;
  v75 = -1;
  memset(v77, 0, sizeof(v77));
  if ( a5 && (v8 = strlen((const char *)a5)) != 0 )
  {
    v9 = v8;
    v10 = v8 + 1;
    v11 = ptr;
    if ( v74 < v8 + 1 )
    {
      v11 = qvector_reserve((int)&ptr, ptr, v10, 1u);
      ptr = v11;
    }
    v73 = v10;
    memmove(v11, a5, v9);
    *((_BYTE *)ptr + v9) = 0;
  }
  else
  {
    v73 = 0;
  }
  v12 = sub_5A1F0((const char *)a5);
  LOBYTE(v76) = a7;
  v75 = v12;
  if ( v12 != 25 )
    v77[0] = a6;
  if ( !sub_5A820((int)&ptr) )
  {
    sub_5AB84((_BYTE *)(a2 + 100), "Couldn't retrieve file information.\n");
LABEL_62:
    v43 = v65;
    if ( !v65 )
    {
      v44 = v64;
      if ( v66 )
      {
        v45 = 0;
      }
      else
      {
        v44 = qvector_reserve((int)&v64, v64, 1u, 1u);
        v64 = v44;
        v45 = v65;
      }
      *((_BYTE *)v44 + v45) = 0;
      v43 = ++v65;
    }
    *a4 = v43;
    if ( v66 > v43 )
    {
      if ( v43 )
      {
        if ( v64 )
        {
          v46 = qrealloc(v64, v43);
          if ( v46 )
          {
            v66 = v43;
            v64 = v46;
          }
        }
      }
    }
    v7 = nullptr;
    v65 = 0;
    v66 = 0;
    v47 = v64;
    v64 = nullptr;
    *a3 = v47;
    goto LABEL_73;
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    if ( v73 )
      v13 = (const char *)ptr;
    else
      v13 = &byte_B3CBE;
    sub_1BBA0((int)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n", v13);
  }
  v14 = 0;
  v62 = 0;
  v61 = nullptr;
  v63 = 0;
  v59 = 0;
  v58 = nullptr;
  v60 = 0;
  if ( sub_5A614((int)&dword_DE424, (int)&v58, (int)&ptr, (int)&v61) )
  {
    if ( *(_BYTE *)(a2 + 96) )
    {
      if ( v59 )
        v15 = v58;
      else
        v15 = &byte_B3CBE;
      sub_1BBA0((int)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n", v15);
    }
    sub_62C20((int)v67);
    v16 = operator new(0x14u);
    v17 = v16;
    v18 = v58;
    v19 = v59;
    *v16 = &off_D9FC8;
    v16[1] = 1;
    if ( !v19 )
      v18 = &byte_B3CBE;
    sub_1B09C((int)(v16 + 2), v18);
    v67[0] = v17;
    if ( v75 == 18 )
    {
      v20 = (int *)&off_D9EA8;
    }
    else
    {
      if ( v75 != 11 )
      {
        if ( !under_debugger )
          interr(30214);
        __debugbreak();
      }
      v20 = (int *)&off_D9F08;
    }
    v22 = *v20;
    v23 = v20[1];
    v24 = v20[2];
    v25 = v20[3];
    v21 = v20 + 4;
    v67[1] = v22;
    v67[2] = v23;
    v67[3] = v24;
    v67[4] = v25;
    v26 = *v21;
    v27 = v21[1];
    v28 = v21[2];
    v29 = v21[3];
    v21 += 4;
    v67[5] = v26;
    v67[6] = v27;
    v67[7] = v28;
    v67[8] = v29;
    v30 = v21[1];
    v31 = (int (*)(void))v21[2];
    v32 = v21[3];
    v67[9] = *v21;
    v67[10] = v30;
    v67[11] = v31;
    v67[12] = v32;
    if ( v31() )
    {
      v53 = v69;
      if ( v69 >= 1 )
      {
        v33 = (int *)(v68 + 16);
        v34 = 0;
        do
        {
          v35 = *v33;
          v36 = &byte_B3CBE;
          if ( *v33 )
            v36 = (const char *)*(v33 - 1);
          if ( !strcmp(v36, ".debug_info") )
          {
            v70 = v34;
          }
          else
          {
            v37 = &byte_B3CBE;
            if ( v35 )
              v37 = (const char *)*(v33 - 1);
            if ( !strcmp(v37, ".debug_types") )
              v71 = v34;
          }
          v33 += 26;
          ++v34;
        }
        while ( v53 != v34 );
      }
      v56 = 0;
      v55 = nullptr;
      v57 = 0;
      if ( v53 >= 1 )
      {
        v38 = 16;
        v39 = 0;
        for ( i = 0; i < v53; ++i )
        {
          v41 = &byte_B3CBE;
          if ( *(_DWORD *)(v68 + v38) )
            v41 = *(const char **)(v68 + v38 - 4);
          if ( !strncmp(v41, ".debug_", 7u) )
          {
            if ( v57 >= v39 + 1 )
            {
              v42 = v55;
            }
            else
            {
              v42 = qvector_reserve((int)&v55, v55, v39 + 1, 4u);
              v55 = v42;
              v39 = v56;
            }
            *((_DWORD *)v42 + v39) = i;
            v39 = ++v56;
          }
          v38 += 104;
        }
      }
      v7 = (char *)(**a1)(a1, &v64, a2, v67, &ptr, &v55);
      if ( v55 )
      {
        v56 = 0;
        qfree(v55);
        v57 = 0;
        v55 = nullptr;
      }
      if ( v7 )
      {
        sub_62CF6((int)v67);
        v14 = 1;
        goto LABEL_57;
      }
    }
    else
    {
      sub_5AB84((_BYTE *)(a2 + 100), "Couldn't initialize DWARF loading.\n");
    }
    sub_62CF6((int)v67);
    v7 = nullptr;
    v14 = 0;
  }
LABEL_57:
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
    v60 = 0;
    v58 = nullptr;
  }
  if ( v61 )
  {
    v62 = 0;
    qfree(v61);
    v63 = 0;
    v61 = nullptr;
  }
  if ( !v14 )
    goto LABEL_62;
LABEL_73:
  if ( ptr )
  {
    v73 = 0;
    qfree(ptr);
    v74 = 0;
    ptr = nullptr;
  }
  if ( v64 )
  {
    v65 = 0;
    qfree(v64);
    v66 = 0;
    v64 = nullptr;
  }
  return v7;
}
// B3CBE: using guessed type char byte_B3CBE;
// D9EA8: using guessed type _UNKNOWN *off_D9EA8;
// D9F08: using guessed type _UNKNOWN *off_D9F08;
// D9FC8: using guessed type _UNKNOWN *off_D9FC8;
// DE424: using guessed type int dword_DE424;
// E0550: using guessed type char under_debugger;
