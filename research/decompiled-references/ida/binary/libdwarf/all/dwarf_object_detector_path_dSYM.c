__int64 __fastcall dwarf_object_detector_path_dSYM(
        const char *a1,
        char *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _BYTE *a10,
        _DWORD *a11)
{
  size_t v14; // rax
  char v15; // cl
  char *v16; // rdx
  char *v17; // rsi
  char *v18; // rax
  const char *v20; // rsi
  char v21; // cl
  const char *v22; // rsi
  const char *v23; // rcx
  __int64 v24; // r9
  int v25; // r8d
  char v26; // si
  int v27; // ebx
  unsigned int v28; // [rsp+Ch] [rbp-2Ch]

  v14 = strlen(a1);
  if ( a2 && a3 )
  {
    if ( 2 * v14 + 34 >= a3 )
    {
LABEL_8:
      *a11 = 424;
      return 1;
    }
    v15 = *a1;
    v16 = &a2[a3];
    if ( *a1 )
    {
      v17 = (char *)a1;
      v18 = a2;
      while ( v18 < v16 )
      {
        ++v17;
        *v18++ = v15;
        v15 = *v17;
        if ( !*v17 )
          goto LABEL_10;
      }
      goto LABEL_8;
    }
    v18 = a2;
LABEL_10:
    if ( v18 >= v16 )
      goto LABEL_8;
    *v18 = 0;
    v20 = ".dSYM/Contents/Resources/DWARF/";
    v21 = 46;
    while ( 1 )
    {
      ++v20;
      *v18++ = v21;
      v21 = *v20;
      if ( !*v20 )
        break;
      if ( v16 == v18 )
        goto LABEL_8;
    }
    if ( v18 >= v16 )
      goto LABEL_8;
    *v18 = 0;
    v22 = a1;
    v23 = nullptr;
    v24 = 0x200000000801LL;
    do
    {
      while ( 1 )
      {
        v25 = *(unsigned __int8 *)v22++;
        if ( (unsigned __int8)(v25 - 47) > 0x2Du )
          break;
        if ( _bittest64(&v24, (unsigned int)(v25 - 47)) )
          v23 = v22;
      }
    }
    while ( (_BYTE)v25 );
    if ( !v23 )
      v23 = a1;
    v26 = *v23;
    if ( *v23 )
    {
      while ( 1 )
      {
        ++v23;
        *v18++ = v26;
        v26 = *v23;
        if ( !*v23 )
          break;
        if ( v16 == v18 )
          goto LABEL_8;
      }
      if ( v18 >= v16 )
        goto LABEL_8;
    }
    *v18 = 0;
    v27 = _dwarf_openr(a2);
    if ( v27 >= 0 )
    {
      *a10 = 2;
      v28 = _dwarf_object_detector_fd_a(v27, a6, a7, a8, 0, a9, (__int64)a11);
      _dwarf_closer(v27);
      return v28;
    }
    *a2 = 0;
  }
  return 0xFFFFFFFFLL;
}

