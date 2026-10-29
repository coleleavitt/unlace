__int64 __fastcall dyld4::setUpPageInLinkingRegions(
        dyld4::RuntimeState *a1,
        dyld4::Loader *a2,
        __int64 a3,
        int a4,
        __int16 a5,
        int a6,
        __int128 **a7,
        __int64 a8)
{
  __int16 v10; // w27
  __int128 *v13; // x8
  unsigned int v14; // w20
  __int64 v15; // x8
  _DWORD **v16; // x9
  _DWORD *v17; // t1
  int v18; // w21
  __int64 v19; // x24
  __int64 v20; // x23
  __int64 v21; // x8
  char *v22; // x22
  size_t v23; // x1
  __int128 **v24; // x23
  __int128 *v25; // x27
  char *v26; // x8
  int v27; // w20
  __int128 *v28; // x28
  int v29; // w25
  _DWORD *v30; // x26
  __int64 v31; // x24
  const void **v32; // x21
  _DWORD *v33; // t1
  __int64 v34; // x0
  __int64 v35; // x8
  char *v36; // x10
  __int128 *v37; // x26
  __int64 v38; // x8
  _OWORD *v39; // x9
  __int128 v40; // q0
  __int128 v41; // q1
  __int64 v42; // x8
  size_t v43; // x20
  __int64 v44; // x8
  const char *v45; // x0
  __int128 *v46; // x8
  __int64 v47; // x20
  __int64 v48; // x24
  unsigned __int64 v49; // x11
  int v50; // w9
  __int64 v51; // x10
  __int64 v52; // x11
  __int64 v53; // x9
  __int64 result; // x0
  __int64 v55; // x8
  const char *v56; // x0
  __int64 v57; // [xsp+28h] [xbp-98h]
  unsigned __int64 v58; // [xsp+38h] [xbp-88h]
  __int64 v59; // [xsp+40h] [xbp-80h] BYREF
  char *v60; // [xsp+48h] [xbp-78h]
  size_t v61; // [xsp+50h] [xbp-70h]
  __int128 **v62; // [xsp+58h] [xbp-68h]
  dyld4::Loader *v63; // [xsp+60h] [xbp-60h]

  LODWORD(v60) = a6;
  v10 = a4;
  v63 = a2;
  v13 = a7[2];
  v14 = 4 * (_DWORD)v13 + 4;
  v62 = a7;
  if ( v13 )
  {
    v15 = 48LL * (_QWORD)v13;
    v16 = (_DWORD **)*a7 + 5;
    do
    {
      v17 = *v16;
      v16 += 6;
      v14 = (v14 + *v17 + 3) & 0xFFFFFFFC;
      v15 -= 48;
    }
    while ( v15 );
  }
  if ( a4 == 3 )
    v18 = 4;
  else
    v18 = 8;
  v19 = (v14 + 47) & 0xFFFFFFF8;
  v20 = *(_QWORD *)(a8 + 16);
  __chkstk_darwin();
  v22 = (char *)&v59 - v21;
  v61 = v23;
  __bzero((char *)&v59 - v21, v23);
  *(_DWORD *)v22 = 7;
  *((_WORD *)v22 + 2) = a5;
  *((_WORD *)v22 + 3) = v10;
  *((_DWORD *)v22 + 2) = v19;
  *((_DWORD *)v22 + 3) = v20;
  *((_DWORD *)v22 + 4) = 40;
  *((_DWORD *)v22 + 5) = v14;
  *((_QWORD *)v22 + 3) = a3;
  *((_QWORD *)v22 + 4) = dyld4::Loader::loadAddress(v63, a1);
  _platform_memmove(&v22[v19], *(const void **)a8, (unsigned int)(v18 * v20));
  v24 = v62;
  v25 = v62[2];
  v26 = &v22[*((unsigned int *)v22 + 4)];
  *(_DWORD *)v26 = (_DWORD)v25;
  if ( v25 )
  {
    v27 = 0;
    v28 = *v24;
    v29 = 4 * (_DWORD)v25 + 4;
    v30 = v26 + 4;
    v31 = 48LL * (_QWORD)v25;
    v32 = (const void **)*v24 + 5;
    do
    {
      v30[v27] = v29;
      _platform_memmove(&v22[*((_DWORD *)v22 + 4) + v29], *v32, *(unsigned int *)*v32);
      ++v27;
      v33 = *v32;
      v32 += 6;
      v29 += *v33;
      v31 -= 48;
    }
    while ( v31 );
    v34 = __chkstk_darwin();
    v36 = (char *)&v59 - (v35 & 0xFFFFFFFFFFFFFFE0LL | 0x10);
    v37 = nullptr;
    v38 = 48LL * (_QWORD)v25;
    v39 = v36;
    do
    {
      if ( v25 == v37 )
        dyld4::setUpPageInLinkingRegions(v34);
      v37 = (__int128 *)((char *)v37 + 1);
      v40 = *v28;
      v41 = v28[1];
      v28 += 3;
      *v39 = v40;
      v39[1] = v41;
      v39 += 2;
      v38 -= 48;
    }
    while ( v38 );
  }
  else
  {
    __chkstk_darwin();
    v36 = (char *)&v59 - (v42 & 0xFFFFFFFFFFFFFFE0LL | 0x10);
    v37 = nullptr;
  }
  if ( ((unsigned __int8)v60 & 1) != 0 )
  {
    v43 = v61;
    return dyld4::dyld_map_with_linking_np(v22, v43);
  }
  v60 = v36;
  v44 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)(v44 + 182) || *(_BYTE *)(v44 + 181) )
  {
    v45 = (const char *)dyld4::Loader::path(v63);
    dyld4::RuntimeState::log(a1, "Setting up kernel page-in linking for %s\n", v45);
    v46 = v24[2];
    if ( v46 )
    {
      v47 = 48LL * (_QWORD)v46;
      v48 = (__int64)(*v24 + 1);
      do
      {
        v49 = *(_QWORD *)(v48 + 8);
        v50 = *(_DWORD *)(v48 - 12);
        v58 = v49 >> 10;
        v57 = v49 + *(_QWORD *)v48;
        if ( (v50 & 4) != 0 )
          v51 = 120;
        else
          v51 = 46;
        if ( (v50 & 2) != 0 )
          v52 = 119;
        else
          v52 = 46;
        if ( (v50 & 1) != 0 )
          v53 = 114;
        else
          v53 = 46;
        dyld4::RuntimeState::log(
          a1,
          "%14s (%c%c%c) 0x%012llX->0x%012llX (fileOffset=0x%0llX, size=%lluKB)\n",
          *(const char **)(v48 + 16),
          v53,
          v52,
          v51,
          *(_QWORD *)v48,
          v57,
          *(_QWORD *)(v48 - 8),
          v58);
        v48 += 48;
        v47 -= 48;
      }
      while ( v47 );
    }
  }
  v43 = v61;
  result = __map_with_linking_np(v60, v37, v22, v61);
  if ( (_DWORD)result )
  {
    v55 = *((_QWORD *)a1 + 1);
    if ( *(_BYTE *)(v55 + 182) || *(_BYTE *)(v55 + 181) )
    {
      v56 = (const char *)dyld4::Loader::path(v63);
      dyld4::RuntimeState::log(a1, "__map_with_linking_np(%s) failed, falling back to linking in-process\n", v56);
    }
    return dyld4::dyld_map_with_linking_np(v22, v43);
  }
  return result;
}
