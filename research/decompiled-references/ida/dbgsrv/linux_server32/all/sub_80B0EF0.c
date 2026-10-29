/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B0EF0
// Address: 0x080B0EF0

//----- (080B0EF0) --------------------------------------------------------
int __cdecl sub_80B0EF0(
        int (__cdecl ***a1)(_DWORD, void **, int, _DWORD **, void **, void **),
        int a2,
        _DWORD *a3,
        size_t *a4,
        char *s,
        int a6,
        char a7)
{
  size_t v7; // eax
  size_t v8; // edi
  int *v9; // eax
  _DWORD *v10; // edi
  void *v11; // eax
  const __m128i *v12; // eax
  char *v13; // edx
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  void *v17; // eax
  int v18; // edi
  char *v19; // eax
  char *i; // edi
  char *v21; // ecx
  void *v22; // edx
  char *v23; // eax
  int j; // edi
  char *v25; // eax
  void *v26; // edx
  void *v27; // edx
  char *v28; // edx
  char *k; // edi
  char *v30; // eax
  void *v31; // ecx
  size_t v32; // edx
  void *v33; // eax
  void *v35; // eax
  char *v36; // eax
  char *m; // edi
  char *v38; // ebx
  void *v39; // ecx
  char *v40; // eax
  int ii; // edi
  char *v42; // eax
  void *v43; // ecx
  void *v44; // ecx
  char *v45; // edx
  char *jj; // edi
  char *v47; // eax
  void *v48; // ebx
  int v49; // [esp-14h] [ebp-1554h]
  int v50; // [esp-10h] [ebp-1550h]
  int v51; // [esp-Ch] [ebp-154Ch]
  size_t n; // [esp+4h] [ebp-153Ch]
  size_t v53; // [esp+Ch] [ebp-1534h]
  char *v54; // [esp+18h] [ebp-1528h]
  int v55; // [esp+1Ch] [ebp-1524h]
  int v56; // [esp+20h] [ebp-1520h]
  int v57; // [esp+20h] [ebp-1520h]
  int v58; // [esp+20h] [ebp-1520h]
  int v59; // [esp+20h] [ebp-1520h]
  char *v60; // [esp+24h] [ebp-151Ch]
  char *v61; // [esp+24h] [ebp-151Ch]
  char *v62; // [esp+24h] [ebp-151Ch]
  char *v63; // [esp+24h] [ebp-151Ch]
  char *v64; // [esp+24h] [ebp-151Ch]
  char *v65; // [esp+24h] [ebp-151Ch]
  char *v66; // [esp+24h] [ebp-151Ch]
  char *v67; // [esp+24h] [ebp-151Ch]
  void *v68; // [esp+28h] [ebp-1518h] BYREF
  size_t size; // [esp+2Ch] [ebp-1514h]
  size_t v70; // [esp+30h] [ebp-1510h]
  void *v71[4]; // [esp+38h] [ebp-1508h] BYREF
  void *v72; // [esp+48h] [ebp-14F8h] BYREF
  int v73; // [esp+4Ch] [ebp-14F4h]
  int v74; // [esp+50h] [ebp-14F0h]
  void *ptr; // [esp+58h] [ebp-14E8h] BYREF
  int v76; // [esp+5Ch] [ebp-14E4h]
  unsigned int v77; // [esp+60h] [ebp-14E0h]
  _DWORD *v78; // [esp+68h] [ebp-14D8h] BYREF
  __m128i si128; // [esp+6Ch] [ebp-14D4h]
  __m128i v80; // [esp+7Ch] [ebp-14C4h]
  __m128i v81; // [esp+8Ch] [ebp-14B4h]
  void *v82; // [esp+9Ch] [ebp-14A4h]
  int v83; // [esp+A0h] [ebp-14A0h]
  int v84; // [esp+A4h] [ebp-149Ch]
  void *v85; // [esp+A8h] [ebp-1498h]
  int v86; // [esp+ACh] [ebp-1494h]
  int v87; // [esp+B0h] [ebp-1490h]
  __int128 v88; // [esp+B4h] [ebp-148Ch]
  __int16 v89; // [esp+C4h] [ebp-147Ch]
  int v90; // [esp+C8h] [ebp-1478h]
  int v91; // [esp+CCh] [ebp-1474h]
  int v92; // [esp+D0h] [ebp-1470h]
  int v93; // [esp+D4h] [ebp-146Ch]
  void *v94; // [esp+D8h] [ebp-1468h]
  int v95; // [esp+DCh] [ebp-1464h]
  int v96; // [esp+E0h] [ebp-1460h]
  void *v97; // [esp+ECh] [ebp-1454h]
  int v98; // [esp+F0h] [ebp-1450h]
  int v99; // [esp+F4h] [ebp-144Ch]
  void *v100; // [esp+F8h] [ebp-1448h]
  char *v101; // [esp+FCh] [ebp-1444h]
  int v102; // [esp+100h] [ebp-1440h]
  void *v103; // [esp+108h] [ebp-1438h] BYREF
  size_t v104; // [esp+10Ch] [ebp-1434h]
  int v105; // [esp+110h] [ebp-1430h]
  int v106; // [esp+114h] [ebp-142Ch]
  __int16 v107; // [esp+118h] [ebp-1428h]
  _DWORD v108[1282]; // [esp+11Ch] [ebp-1424h] BYREF
  unsigned int v109; // [esp+1524h] [ebp-1Ch]

  v109 = __readgsdword(0x14u);
  v107 = 0;
  v68 = nullptr;
  size = 0;
  v70 = 0;
  v103 = nullptr;
  v104 = 0;
  v105 = 0;
  v106 = -1;
  memset(v108, 0, sizeof(v108));
  if ( s )
  {
    v7 = strlen(s);
    v8 = v7;
    if ( v7 )
    {
      v53 = v7 + 1;
      v103 = sub_80CF920((int)&v103, nullptr, v7 + 1, 1u);
      v104 = v53;
      memmove(v103, s, v8);
      *((_BYTE *)v103 + v8) = 0;
    }
  }
  v106 = sub_80A9770((int)s);
  LOBYTE(v107) = a7;
  v108[0] = a6;
  if ( !(unsigned __int8)sub_80B09C0((int *)&v103) )
  {
    sub_80A69D0((_BYTE *)(a2 + 100), "Couldn't retrieve file information.\n");
    v32 = size;
    if ( size )
    {
LABEL_60:
      *a4 = v32;
      v33 = v68;
      if ( v32 < v70 )
      {
        if ( v68 )
        {
          if ( v32 )
          {
            v33 = sub_80CF7A0(v68, v32);
            if ( !v33 )
              v33 = v68;
          }
        }
      }
      v18 = 0;
      size = 0;
      v70 = 0;
      v68 = nullptr;
      *a3 = v33;
      goto LABEL_62;
    }
LABEL_68:
    v35 = v68;
    if ( !v70 )
    {
      v35 = sub_80CF920((int)&v68, v68, 1u, 1u);
      v32 = size;
      v68 = v35;
    }
    *((_BYTE *)v35 + v32) = 0;
    v32 = ++size;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(a2 + 96) )
    sub_8058290();
  memset(v71, 0, 12);
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  if ( !(unsigned __int8)sub_80B0D30((int)&dword_811E7B0, &v72, &v103, (int)v71) )
  {
LABEL_57:
    if ( v72 )
    {
      v73 = 0;
      sub_80CF780(v72);
    }
    v32 = size;
    if ( size )
      goto LABEL_60;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    v9 = &dword_80DDFD8;
    if ( v73 )
      v9 = (int *)v72;
    v49 = (int)v9;
    sub_8058290();
  }
  v90 = -1;
  v91 = -1;
  v78 = nullptr;
  v82 = nullptr;
  v83 = 0;
  v84 = 0;
  v85 = nullptr;
  v86 = 0;
  v87 = 0;
  v89 = 0;
  v92 = -1;
  v93 = -1;
  v94 = nullptr;
  v95 = 0;
  v96 = 0;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  v100 = nullptr;
  v101 = nullptr;
  v102 = 0;
  v88 = 0;
  sub_80A84E0(&v78);
  v10 = (_DWORD *)operator new(0x14u);
  v60 = (char *)&dword_80DDFD8;
  if ( v73 )
    v60 = (char *)v72;
  v10[1] = 1;
  *v10 = &off_811C1B0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  if ( v60 )
  {
    n = strlen(v60);
    v11 = sub_80CF920((int)(v10 + 2), nullptr, n + 1, 1u);
    v10[2] = v11;
    v10[3] = n + 1;
    memmove(v11, v60, n);
    *(_BYTE *)(v10[2] + n) = 0;
  }
  v78 = v10;
  if ( v106 == 11 )
  {
    v12 = (const __m128i *)&off_811C3C0;
  }
  else
  {
    if ( v106 != 18 )
    {
      if ( byte_811F8A1 )
        BUG();
      if ( v109 == __readgsdword(0x14u) )
        sub_80CFF40(30214, v49, v50, v51);
LABEL_113:
      sub_80D7AB0();
    }
    v12 = (const __m128i *)&off_811C360;
  }
  si128 = _mm_load_si128(v12);
  v80 = _mm_load_si128(v12 + 1);
  v81 = _mm_load_si128(v12 + 2);
  if ( !(unsigned __int8)sub_80A8660((int)&v78, (int)&v103) )
  {
    sub_80A69D0((_BYTE *)(a2 + 100), "Couldn't initialize DWARF loading.\n");
LABEL_30:
    sub_80A84E0(&v78);
    v19 = (char *)v100;
    if ( v100 )
    {
      if ( v101 )
      {
        v62 = v101;
        for ( i = nullptr; i != v62; ++i )
        {
          v21 = &v19[12 * (_DWORD)i];
          v22 = *(void **)v21;
          if ( *(_DWORD *)v21 )
          {
            *((_DWORD *)v21 + 1) = 0;
            sub_80CF780(v22);
            v19 = (char *)v100;
          }
        }
      }
      v101 = nullptr;
      sub_80CF780(v19);
    }
    v23 = (char *)v97;
    if ( v97 )
    {
      if ( v98 )
      {
        v56 = v98;
        for ( j = 0; j != v56; ++j )
        {
          v25 = &v23[40 * j];
          v26 = *((void **)v25 + 3);
          v63 = v25;
          if ( v26 )
          {
            *((_DWORD *)v25 + 4) = 0;
            sub_80CF780(v26);
          }
          v27 = *(void **)v63;
          if ( *(_DWORD *)v63 )
          {
            *((_DWORD *)v63 + 1) = 0;
            sub_80CF780(v27);
          }
          v23 = (char *)v97;
        }
      }
      v98 = 0;
      sub_80CF780(v23);
    }
    if ( v94 )
    {
      v95 = 0;
      sub_80CF780(v94);
    }
    if ( v85 )
    {
      v86 = 0;
      sub_80CF780(v85);
    }
    v28 = (char *)v82;
    if ( v82 )
    {
      if ( v83 )
      {
        v64 = (char *)v83;
        for ( k = nullptr; k != v64; ++k )
        {
          v30 = &v28[100 * (_DWORD)k];
          v31 = *((void **)v30 + 3);
          if ( v31 )
          {
            *((_DWORD *)v30 + 4) = 0;
            sub_80CF780(v31);
            v28 = (char *)v82;
          }
        }
      }
      v83 = 0;
      sub_80CF780(v28);
    }
    goto LABEL_57;
  }
  v13 = (char *)v83;
  v14 = 0;
  ptr = nullptr;
  v76 = 0;
  v77 = 0;
  v61 = nullptr;
  if ( v83 > 0 )
  {
    do
    {
      if ( *(_DWORD *)((char *)v82 + v14 + 16) )
      {
        v54 = v13;
        v15 = strncmp(*(const char **)((char *)v82 + v14 + 12), ".debug_", 7u);
        v13 = v54;
        if ( !v15 )
        {
          v16 = v76;
          v17 = ptr;
          if ( v77 < v76 + 1 )
          {
            v17 = sub_80CF920((int)&ptr, ptr, v76 + 1, 4u);
            v16 = v76;
            ptr = v17;
            v13 = v54;
          }
          *((_DWORD *)v17 + v16) = v61;
          ++v76;
        }
      }
      ++v61;
      v14 += 100;
    }
    while ( v61 != v13 );
  }
  v18 = (**a1)(a1, &v68, a2, &v78, &v103, &ptr);
  if ( !v18 )
  {
    if ( ptr )
    {
      v76 = 0;
      sub_80CF780(ptr);
    }
    goto LABEL_30;
  }
  if ( ptr )
  {
    v76 = 0;
    sub_80CF780(ptr);
  }
  sub_80A84E0(&v78);
  v36 = (char *)v100;
  if ( v100 )
  {
    if ( v101 )
    {
      v65 = v101;
      v57 = v18;
      for ( m = nullptr; m != v65; ++m )
      {
        v38 = &v36[12 * (_DWORD)m];
        v39 = *(void **)v38;
        if ( *(_DWORD *)v38 )
        {
          *((_DWORD *)v38 + 1) = 0;
          sub_80CF780(v39);
          v36 = (char *)v100;
        }
      }
      v18 = v57;
    }
    v101 = nullptr;
    sub_80CF780(v36);
  }
  v40 = (char *)v97;
  if ( v97 )
  {
    if ( v98 )
    {
      v58 = v98;
      v55 = v18;
      for ( ii = 0; ii != v58; ++ii )
      {
        v42 = &v40[40 * ii];
        v43 = *((void **)v42 + 3);
        v66 = v42;
        if ( v43 )
        {
          *((_DWORD *)v42 + 4) = 0;
          sub_80CF780(v43);
        }
        v44 = *(void **)v66;
        if ( *(_DWORD *)v66 )
        {
          *((_DWORD *)v66 + 1) = 0;
          sub_80CF780(v44);
        }
        v40 = (char *)v97;
      }
      v18 = v55;
    }
    v98 = 0;
    sub_80CF780(v40);
  }
  if ( v94 )
  {
    v95 = 0;
    sub_80CF780(v94);
  }
  if ( v85 )
  {
    v86 = 0;
    sub_80CF780(v85);
  }
  v45 = (char *)v82;
  if ( v82 )
  {
    if ( v83 )
    {
      v67 = (char *)v83;
      v59 = v18;
      for ( jj = nullptr; jj != v67; ++jj )
      {
        v47 = &v45[100 * (_DWORD)jj];
        v48 = *((void **)v47 + 3);
        if ( v48 )
        {
          *((_DWORD *)v47 + 4) = 0;
          sub_80CF780(v48);
          v45 = (char *)v82;
        }
      }
      v18 = v59;
    }
    v83 = 0;
    sub_80CF780(v45);
  }
  if ( v72 )
  {
    v73 = 0;
    sub_80CF780(v72);
  }
LABEL_62:
  if ( v103 )
  {
    v104 = 0;
    sub_80CF780(v103);
  }
  if ( v68 )
  {
    size = 0;
    sub_80CF780(v68);
  }
  if ( v109 != __readgsdword(0x14u) )
    goto LABEL_113;
  return v18;
}
// 80B1B51: variable 'v49' is possibly undefined
// 80B1B51: variable 'v50' is possibly undefined
// 80B1B51: variable 'v51' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811C1B0: using guessed type int (__cdecl *off_811C1B0)(int);
// 811C360: using guessed type int (__cdecl *off_811C360)(int, __int64, int);
// 811C3C0: using guessed type int (__cdecl *off_811C3C0)(int, __int64, int);
// 811E7B0: using guessed type int dword_811E7B0;
// 811F8A1: using guessed type char byte_811F8A1;
