/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004AF0
// Address: 0x0000000100004AF0

//----- (0000000100004AF0) ----------------------------------------------------
void __fastcall sub_100004AF0(__int64 a1, __int128 *a2)
{
  int v5; // w10
  __int64 v6; // x22
  const void **v7; // x24
  unsigned __int64 v8; // x8
  size_t v9; // x21
  const void *v10; // x22
  void *v11; // x1
  __int64 v12; // x8
  const char *v13; // x1
  const char *v14; // x0
  unsigned __int64 v15; // x8
  __int64 v16; // x11
  _QWORD *v17; // x9
  unsigned __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  size_t v21; // x21
  size_t v22; // x21
  char *v23; // x9
  char **v24; // x24
  char **v25; // x23
  unsigned __int64 v26; // x9
  char *v27; // x1
  void *v28; // x8
  __int64 v29; // x8
  __int64 *v30; // x8
  unsigned __int64 v31; // x20
  __int64 **v32; // x22
  __int64 **v33; // x21
  unsigned __int64 v34; // x8
  __int64 *v35; // x1
  __int64 v36; // x8
  unsigned __int64 v37; // [xsp+8h] [xbp-C8h]
  __int128 v38; // [xsp+10h] [xbp-C0h]
  void *v39; // [xsp+20h] [xbp-B0h]
  __int128 v40; // [xsp+28h] [xbp-A8h]
  void *v41; // [xsp+38h] [xbp-98h]
  __int128 v42; // [xsp+40h] [xbp-90h]
  __int64 v43; // [xsp+50h] [xbp-80h] BYREF
  __int64 v44; // [xsp+58h] [xbp-78h]
  char v45; // [xsp+60h] [xbp-70h]
  _BYTE __dst[52]; // [xsp+64h] [xbp-6Ch] BYREF

  v43 = 0xFFFFFFFFLL;
  v44 = -1;
  v45 = 0;
  memset(__dst, 0, sizeof(__dst));
  set_debug_event_code((__int64)&v43, 8);
  if ( (*(_DWORD *)__dst & 0xFFFFFFFu) > 0xB || ((1 << __dst[0]) & 0x902) == 0 )
  {
    if ( under_debugger != 1 )
      goto LABEL_61;
    while ( 1 )
    {
      __break(1u);
LABEL_61:
      interr(3295);
    }
  }
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1904) + 32LL);
  LODWORD(v43) = *(_DWORD *)(a1 + 528);
  HIDWORD(v43) = v5;
  v7 = (const void **)(a2 + 1);
  v6 = *(_QWORD *)a2;
  v44 = *(_QWORD *)a2;
  v45 = 1;
  if ( &__dst[4] != (_BYTE *)(a2 + 1) )
  {
    v8 = *((_QWORD *)a2 + 3);
    if ( v8 )
      v9 = v8 - 1;
    else
      v9 = 0;
    if ( v8 >= 2 )
    {
      v10 = *v7;
      v11 = *(void **)&__dst[4];
      if ( *(_QWORD *)&__dst[20] <= v9 )
      {
        v11 = qvector_reserve(&__dst[4], *(_QWORD **)&__dst[4], v9 + 1, 1u);
        *(_QWORD *)&__dst[4] = v11;
      }
      *(_QWORD *)&__dst[12] = v9 + 1;
      memmove(v11, v10, v9);
      *(_BYTE *)(*(_QWORD *)&__dst[4] + v9) = 0;
      v6 = *(_QWORD *)a2;
    }
    else
    {
      *(_QWORD *)&__dst[12] = 0;
    }
  }
  v12 = *((_QWORD *)a2 + 1);
  *(_QWORD *)&__dst[28] = v6;
  *(_QWORD *)&__dst[36] = v12;
  *(_QWORD *)&__dst[44] = -1;
  if ( *(_BYTE *)(a1 + 733) != 1 )
    goto LABEL_21;
  v13 = &byte_100075A30;
  if ( *((_QWORD *)a2 + 3) )
    v14 = *((const char **)a2 + 2);
  else
    v14 = &byte_100075A30;
  if ( *(_QWORD *)(a1 + 488) )
    v13 = *(const char **)(a1 + 480);
  if ( strcasecmp(v14, v13) )
  {
LABEL_21:
    v15 = *(_QWORD *)(a1 + 152);
    if ( v15 )
      goto LABEL_24;
    goto LABEL_22;
  }
  *(_QWORD *)&__dst[44] = v6;
  v15 = *(_QWORD *)(a1 + 152);
  if ( !v15 )
  {
LABEL_22:
    sub_1000094EC(a1 + 120);
    v15 = *(_QWORD *)(a1 + 152);
  }
LABEL_24:
  v16 = *(_QWORD *)(a1 + 128);
  v17 = (_QWORD *)(v16 + 8 * (v15 / 0x38));
  v18 = *v17 + 72 * (v15 % 0x38);
  if ( *(_QWORD *)(a1 + 136) == v16 )
    v19 = 0;
  else
    v19 = v18;
  if ( v19 == *v17 )
    v19 = *(v17 - 1) + 4032LL;
  *(_QWORD *)(v19 - 72) = 0xFFFFFFFFLL;
  v20 = v19 - 72;
  *(_QWORD *)(v20 + 8) = -1;
  *(_BYTE *)(v20 + 16) = 0;
  *(_DWORD *)(v20 + 20) = 0;
  copy_debug_event(v20, (__int64)&v43);
  *(int64x2_t *)(a1 + 152) = vaddq_s64(*(int64x2_t *)(a1 + 152), (int64x2_t)xmmword_1000756F0);
  v37 = *(_QWORD *)a2;
  v38 = *a2;
  v40 = 0u;
  v39 = nullptr;
  v21 = *((_QWORD *)a2 + 3);
  if ( v21 )
  {
    v39 = qalloc_or_throw(*((_QWORD *)a2 + 3));
    *((_QWORD *)&v40 + 1) = v21;
    memcpy(v39, *v7, v21);
    *(_QWORD *)&v40 = v21;
  }
  v41 = nullptr;
  v42 = 0u;
  v22 = *((_QWORD *)a2 + 6);
  if ( v22 )
  {
    v41 = qalloc_or_throw(*((_QWORD *)a2 + 6));
    *((_QWORD *)&v42 + 1) = v22;
    memcpy(v41, *((const void **)a2 + 5), v22);
  }
  v23 = *(char **)(a1 + 1840);
  if ( v23 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = (char **)v23;
        v26 = *((_QWORD *)v23 + 4);
        if ( v37 >= v26 )
          break;
        v23 = *v25;
        v24 = v25;
        if ( !*v25 )
          goto LABEL_41;
      }
      if ( v26 >= v37 )
        break;
      v23 = v25[1];
      if ( !v23 )
      {
        v24 = v25 + 1;
        goto LABEL_41;
      }
    }
  }
  else
  {
    v24 = (char **)(a1 + 1840);
    v25 = (char **)(a1 + 1840);
LABEL_41:
    v27 = (char *)operator new(0x68u);
    *((_QWORD *)v27 + 4) = v37;
    *(_OWORD *)(v27 + 40) = v38;
    *((_QWORD *)v27 + 7) = v39;
    v39 = nullptr;
    *((_OWORD *)v27 + 4) = v40;
    v28 = v41;
    v41 = nullptr;
    *((_QWORD *)v27 + 10) = v28;
    *((_QWORD *)v27 + 11) = v22;
    *((_QWORD *)v27 + 12) = *((_QWORD *)&v42 + 1);
    *(_OWORD *)v27 = 0u;
    *((_QWORD *)v27 + 2) = v25;
    *v24 = v27;
    v29 = **(_QWORD **)(a1 + 1832);
    if ( v29 )
    {
      *(_QWORD *)(a1 + 1832) = v29;
      v27 = *v24;
    }
    sub_10000B394(*(__int64 **)(a1 + 1840), (__int64 *)v27);
    ++*(_QWORD *)(a1 + 1848);
  }
  if ( v41 )
    qfree(v41);
  if ( v39 )
    qfree(v39);
  v30 = *(__int64 **)(a1 + 1864);
  v31 = *(_QWORD *)a2;
  if ( v30 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = (__int64 **)v30;
        v34 = v30[4];
        if ( v31 >= v34 )
          break;
        v30 = *v33;
        v32 = v33;
        if ( !*v33 )
          goto LABEL_55;
      }
      if ( v34 >= v31 )
        break;
      v30 = v33[1];
      if ( !v30 )
      {
        v32 = v33 + 1;
        goto LABEL_55;
      }
    }
  }
  else
  {
    v32 = (__int64 **)(a1 + 1864);
    v33 = (__int64 **)(a1 + 1864);
LABEL_55:
    v35 = (__int64 *)operator new(0x28u);
    v35[4] = v31;
    *v35 = 0;
    v35[1] = 0;
    v35[2] = (__int64)v33;
    *v32 = v35;
    v36 = **(_QWORD **)(a1 + 1856);
    if ( v36 )
    {
      *(_QWORD *)(a1 + 1856) = v36;
      v35 = *v32;
    }
    sub_10000B394(*(__int64 **)(a1 + 1864), v35);
    ++*(_QWORD *)(a1 + 1872);
  }
  free_debug_event((__int64)&v43);
}
// 1000756F0: using guessed type __int128 xmmword_1000756F0;
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
