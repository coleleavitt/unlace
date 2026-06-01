/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435688
// Address: 0x0000000000435688

//----- (0000000000435688) ----------------------------------------------------
__int64 __fastcall sub_435688(__int64 a1, char *s2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  __int64 v9; // x26
  __int64 v12; // x24
  __int64 v13; // x20
  __int64 i; // x23
  __int64 v15; // x1
  void *v16; // x0
  __int64 v17; // x25
  __int64 v18; // x20
  __int64 j; // x24
  __int64 v20; // x1
  void *v21; // x0
  __int64 v22; // x25
  __int64 v23; // x20
  __int64 k; // x24
  __int64 v25; // x1
  void *v26; // x0
  __int64 v27; // x24
  __int64 v28; // x20
  __int64 *v29; // x0
  __int64 v30; // x20
  size_t v31; // x20
  int v32; // w0
  int v33; // w1
  void **v34; // x0
  unsigned __int64 v35; // x1
  __int64 v36; // x3
  unsigned __int64 v37; // x2
  void *v38; // x24
  void *v39; // x25
  __int64 v40; // x26
  void **v41; // x1
  void *v42; // x0
  __int64 v43; // x0
  int v44; // w0
  unsigned int v45; // w19
  void **v47; // x1
  void *v48; // x0
  unsigned __int64 v49; // x25
  size_t v50; // x20
  __int64 v51; // [xsp+38h] [xbp-78h]
  void *src; // [xsp+58h] [xbp-58h] BYREF
  __int64 v53; // [xsp+60h] [xbp-50h]
  unsigned __int64 v54; // [xsp+68h] [xbp-48h]
  void *ptr; // [xsp+70h] [xbp-40h] BYREF
  __int64 v56; // [xsp+78h] [xbp-38h]
  void *v57; // [xsp+80h] [xbp-30h]
  __int64 v58[4]; // [xsp+88h] [xbp-28h] BYREF

  v12 = *(_QWORD *)(a1 + 120);
  if ( v12 )
  {
    v13 = 0;
    for ( i = 0; i != v12; ++i )
    {
      v15 = *(_QWORD *)(a1 + 112) + v13;
      v16 = *(void **)v15;
      if ( *(_QWORD *)v15 )
      {
        *(_QWORD *)(v15 + 8) = 0;
        j__free(v16);
      }
      v13 += 24;
    }
    *(_QWORD *)(a1 + 120) = 0;
  }
  v17 = *(_QWORD *)(a1 + 144);
  if ( v17 )
  {
    v18 = 0;
    for ( j = 0; j != v17; ++j )
    {
      v20 = *(_QWORD *)(a1 + 136) + v18;
      v21 = *(void **)v20;
      if ( *(_QWORD *)v20 )
      {
        *(_QWORD *)(v20 + 8) = 0;
        j__free(v21);
      }
      v18 += 24;
    }
    *(_QWORD *)(a1 + 144) = 0;
  }
  v22 = *(_QWORD *)(a1 + 168);
  if ( v22 )
  {
    v23 = 0;
    for ( k = 0; k != v22; ++k )
    {
      v25 = *(_QWORD *)(a1 + 160) + v23;
      v26 = *(void **)v25;
      if ( *(_QWORD *)v25 )
      {
        *(_QWORD *)(v25 + 8) = 0;
        j__free(v26);
      }
      v23 += 24;
    }
    *(_QWORD *)(a1 + 168) = 0;
  }
  v27 = *(_QWORD *)(a1 + 432);
  if ( v27 )
  {
    memset(&v58[1], 0, 24);
    v28 = 0;
    LOBYTE(v58[0]) = 2;
    do
    {
      v29 = (__int64 *)(*(_QWORD *)(a1 + 424) + 32 * v28++);
      sub_448310(v29);
    }
    while ( v27 != v28 );
    *(_QWORD *)(a1 + 432) = 0;
    sub_448310(v58);
  }
  if ( *(_QWORD *)(a1 + 232) )
    *(_QWORD *)(a1 + 232) = 0;
  if ( *(_QWORD *)(a1 + 256) )
    *(_QWORD *)(a1 + 256) = 0;
  if ( *(_QWORD *)(a1 + 280) )
    *(_QWORD *)(a1 + 280) = 0;
  if ( *(_QWORD *)(a1 + 304) )
    *(_QWORD *)(a1 + 304) = 0;
  if ( *(_QWORD *)(a1 + 328) )
    *(_QWORD *)(a1 + 328) = 0;
  if ( *(_QWORD *)(a1 + 352) )
    *(_QWORD *)(a1 + 352) = 0;
  if ( *(_QWORD *)(a1 + 376) )
    *(_QWORD *)(a1 + 376) = 0;
  if ( *(_QWORD *)(a1 + 400) )
    *(_QWORD *)(a1 + 400) = 0;
  v30 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  if ( v30 )
  {
    src = nullptr;
    v53 = 0;
    v54 = 0;
    if ( s2 )
    {
      v31 = strlen(s2);
      src = sub_491288((__int64)&src, nullptr, v31 + 1, 1u);
      v53 = v31 + 1;
      memmove(src, s2, v31);
      *((_BYTE *)src + v31) = 0;
      v30 = *(_QWORD *)(a1 + 184);
    }
    if ( *(_QWORD *)(v30 + 64) )
      goto LABEL_63;
    v32 = strcmp((const char *)&qword_4B2D48, s2);
    v33 = *(unsigned __int8 *)(a1 + 220);
    if ( v32 )
      goto LABEL_64;
LABEL_44:
    if ( !v33 )
    {
      *(_DWORD *)(a1 + 216) = 1;
      while ( 1 )
      {
LABEL_46:
        v30 = sub_4423E0(v30, *(__int64 **)(a1 + 104), (__int64)&src);
        if ( v30 == -1 )
          goto LABEL_57;
        if ( *(_DWORD *)(a1 + 216) == 2 )
          *(_DWORD *)(*(_QWORD *)(a1 + 184) + 88LL) = v30;
        if ( sub_435100((__int64 *)(a1 + 136), "this") != -1 )
          goto LABEL_57;
        ptr = nullptr;
        v56 = 0;
        v57 = nullptr;
        ptr = sub_491288((__int64)&ptr, nullptr, 5u, 1u);
        v56 = 5;
        strcpy((char *)ptr, "this");
        v34 = *(void ***)(a1 + 136);
        if ( v34 > &ptr )
          break;
        v35 = *(_QWORD *)(a1 + 152);
        v36 = *(_QWORD *)(a1 + 144);
        v37 = v36 + 1;
        if ( &ptr >= &v34[3 * v35] )
          goto LABEL_71;
        v38 = ptr;
        v39 = v57;
        v51 = v9;
        ptr = nullptr;
        v40 = v56;
        v56 = 0;
        v57 = nullptr;
        if ( v35 < v37 )
        {
          v34 = (void **)sub_491288(a1 + 136, v34, v37, 0x18u);
          *(_QWORD *)(a1 + 136) = v34;
          v36 = *(_QWORD *)(a1 + 144);
        }
        v41 = &v34[3 * v36];
        *v41 = v38;
        v41[1] = (void *)v40;
        v41[2] = v39;
        v42 = ptr;
        ++*(_QWORD *)(a1 + 144);
        if ( v42 )
        {
          v56 = 0;
          j__free(v42);
        }
        v9 = v51;
LABEL_57:
        if ( src )
        {
          v53 = 0;
          j__free(src);
        }
        if ( v30 == -1 )
          goto LABEL_68;
LABEL_60:
        v43 = *(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v30);
        *(_DWORD *)(a1 + 208) = 0;
        *(_BYTE *)(a1 + 212) = -90;
        *(_QWORD *)(a1 + 192) = v43;
        *(_QWORD *)(a1 + 200) = v43 + 32;
        if ( *(_DWORD *)(v43 + 136) == -1 )
          return 0;
        if ( !under_debugger )
          sub_492270(484);
        __break(0x3E8u);
LABEL_63:
        v44 = strcmp(*(const char **)(v30 + 56), s2);
        v33 = *(unsigned __int8 *)(a1 + 220);
        if ( !v44 )
          goto LABEL_44;
LABEL_64:
        if ( v33 )
        {
          v45 = sub_4869C8(1584);
          if ( src )
          {
            v53 = 0;
            j__free(src);
          }
          return v45;
        }
      }
      v36 = *(_QWORD *)(a1 + 144);
      v35 = *(_QWORD *)(a1 + 152);
      v37 = v36 + 1;
LABEL_71:
      if ( v37 > v35 )
      {
        v34 = (void **)sub_491288(a1 + 136, *(void **)(a1 + 136), v37, 0x18u);
        *(_QWORD *)(a1 + 136) = v34;
        v36 = *(_QWORD *)(a1 + 144);
      }
      v47 = &v34[3 * v36];
      *v47 = ptr;
      v47[1] = (void *)v56;
      v47[2] = v57;
      ++*(_QWORD *)(a1 + 144);
      goto LABEL_57;
    }
    v48 = src;
    if ( v53 )
    {
      v49 = v53 + 1;
      v50 = v53 - 1;
      if ( v54 >= v53 + 1 )
        goto LABEL_78;
    }
    else
    {
      if ( v54 > 1 )
      {
        v53 = 2;
        *((_BYTE *)src + 1) = 0;
LABEL_80:
        *(_BYTE *)src = 126;
        *(_DWORD *)(a1 + 216) = 2;
        v30 = *(_QWORD *)(a1 + 184);
        goto LABEL_46;
      }
      v49 = 2;
      v50 = 0;
    }
    v48 = sub_491288((__int64)&src, src, v49, 1u);
    src = v48;
LABEL_78:
    v53 = v49;
    *((_BYTE *)v48 + v50 + 1) = 0;
    if ( v50 )
      memmove((char *)src + 1, src, v50);
    goto LABEL_80;
  }
  v30 = sub_43DEC8(*(__int64 **)(a1 + 104), s2);
  if ( v30 != -1 )
    goto LABEL_60;
LABEL_68:
  sub_486A58(0, s2);
  return (unsigned int)sub_4869C8(40);
}
// 435688: could not find valid save-restore pair for x26
// 43595C: variable 'v9' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 52451C: using guessed type char under_debugger;
