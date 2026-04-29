void __fastcall dyld3::FatFile::forEachSlice(
        dyld3::FatFile *this,
        Diagnostics *a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned int v8; // w10
  __int64 v9; // x23
  unsigned int v10; // w9
  __int64 v11; // x8
  const char *v12; // x1
  __int64 v13; // x25
  unsigned int *v14; // x24
  __int64 v15; // x27
  __int64 v16; // x28
  unsigned __int64 v17; // x22
  unsigned __int64 v18; // x26
  const char *v19; // x0
  __int64 v20; // x24
  __int64 v21; // x20
  char *v22; // x23
  __int64 v23; // x25
  __int64 v24; // x26
  unsigned __int64 v25; // x22
  unsigned __int64 v26; // x27
  char *v28; // x8
  _DWORD *v29; // x9
  __int64 v30; // x25
  unsigned __int64 v32; // x26
  unsigned __int64 v33; // x22
  unsigned int v34; // [xsp+14h] [xbp-7Ch]
  char v39; // [xsp+2Fh] [xbp-61h] BYREF
  vm_address_t v40; // [xsp+30h] [xbp-60h] BYREF
  char v41; // [xsp+3Fh] [xbp-51h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  if ( *(_DWORD *)this == -1078264118 )
  {
    v10 = *((_DWORD *)this + 1);
    v11 = bswap32(v10);
    if ( (unsigned int)v11 >= 0x80 )
    {
      Diagnostics::error(a2, "fat header too large: %u entries", v11);
      return;
    }
    if ( ((32LL * (unsigned int)v11) | 8uLL) <= a3 )
    {
      v39 = 0;
      if ( v10 )
      {
        v20 = 0;
        v21 = v11 - 1;
        v22 = (char *)this + 12;
        do
        {
          v23 = bswap32(*((_DWORD *)v22 - 1));
          v24 = bswap32(*(_DWORD *)v22);
          v25 = bswap64(*(_QWORD *)(v22 + 4));
          v26 = bswap64(*(_QWORD *)(v22 + 12));
          if ( !a4 || dyld3::FatFile::isValidSlice(this, a2, a3, v20, v23, v24, v25, v26) )
            (*(void (__fastcall **)(__int64, __int64, __int64, char *, unsigned __int64, char *))(a5 + 16))(
              a5,
              v23,
              v24,
              (char *)this + v25,
              v26,
              &v39);
          if ( v39 )
            break;
          v22 += 32;
        }
        while ( v21 != v20++ );
      }
      return;
    }
    goto LABEL_21;
  }
  if ( *(_DWORD *)this != -1095041334 )
  {
    v12 = "not a fat file";
LABEL_22:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    Diagnostics::error(a2, v12);
    return;
  }
  v8 = *((_DWORD *)this + 1);
  v9 = bswap32(v8);
  if ( (unsigned int)v9 >= 0xCD )
  {
    Diagnostics::error(a2, "fat header too large: %u entries", v9);
    return;
  }
  if ( 20 * (unsigned __int64)(unsigned int)(v9 + 1) + 8 > a3 )
  {
LABEL_21:
    v12 = "fat header malformed, architecture slices extend beyond end of file";
    goto LABEL_22;
  }
  v41 = 0;
  if ( !v8 )
    goto LABEL_36;
  v34 = v8;
  v13 = 0;
  v14 = (unsigned int *)((char *)this + 12);
  while ( 1 )
  {
    v15 = bswap32(*(v14 - 1));
    v16 = bswap32(*v14);
    v17 = bswap32(v14[1]);
    v18 = bswap32(v14[2]);
    Diagnostics::Diagnostics((Diagnostics *)&v40);
    if ( !a4 || dyld3::FatFile::isValidSlice(this, (Diagnostics *)&v40, a3, v13, v15, v16, v17, v18) )
      (*(void (__fastcall **)(__int64, __int64, __int64, char *, unsigned __int64, char *))(a5 + 16))(
        a5,
        v15,
        v16,
        (char *)this + v17,
        v18,
        &v41);
    if ( v41 )
      break;
    if ( Diagnostics::hasError((Diagnostics *)&v40) )
    {
      v19 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v40);
      Diagnostics::appendError(a2, "%s, ", v19);
    }
    Diagnostics::~Diagnostics(&v40);
    ++v13;
    v14 += 5;
    if ( v9 == v13 )
      goto LABEL_35;
  }
  Diagnostics::~Diagnostics(&v40);
LABEL_35:
  if ( v34 != -872415232 )
  {
LABEL_36:
    v28 = (char *)this + 8;
    v29 = (_DWORD *)((char *)this + 20 * v9 + 8);
    v30 = bswap32(v29[1]);
    if ( *v29 == 201326593 && (unsigned int)v30 <= 1 )
    {
      v32 = bswap32(*(_DWORD *)&v28[20 * v9 + 12]);
      v33 = bswap32(*(_DWORD *)&v28[20 * v9 + 8]);
      if ( !a4 || dyld3::FatFile::isValidSlice(this, a2, a3, v9, 16777228, v30, v33, v32) )
        (*(void (__fastcall **)(__int64, __int64, __int64, char *, unsigned __int64, char *))(a5 + 16))(
          a5,
          16777228,
          v30,
          (char *)this + v33,
          v32,
          &v41);
    }
  }
}
