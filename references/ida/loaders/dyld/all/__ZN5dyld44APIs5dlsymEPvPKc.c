unsigned __int64 __fastcall dyld4::APIs::dlsym(dyld4::APIs *this, char *a2, const char *a3)
{
  void *v3; // x30
  void *v5; // x25
  char *v8; // x23
  unsigned __int64 v9; // x28
  __int64 v10; // x8
  char **v11; // x9
  __int64 v12; // x4
  __int64 v13; // x0
  __int64 v14; // x8
  char **v15; // x9
  __int64 v16; // x0
  __int64 v17; // x8
  char **v18; // x9
  dyld4::RuntimeState *v19; // x0
  const dyld4::Loader *v20; // x3
  const void *v21; // x0
  unsigned __int64 v22; // x23
  _QWORD v24[9]; // [xsp+10h] [xbp-1B0h] BYREF
  char *v25; // [xsp+58h] [xbp-168h] BYREF
  char **v26; // [xsp+60h] [xbp-160h]
  __int64 v27; // [xsp+68h] [xbp-158h]
  char v28; // [xsp+70h] [xbp-150h]
  __int64 v29; // [xsp+78h] [xbp-148h] BYREF
  __int64 *v30; // [xsp+80h] [xbp-140h]
  __int64 v31; // [xsp+88h] [xbp-138h]
  __int64 (__fastcall *v32)(); // [xsp+90h] [xbp-130h]
  __int64 (__fastcall *v33)(); // [xsp+98h] [xbp-128h]
  __int64 v34; // [xsp+A0h] [xbp-120h] BYREF
  __int64 v35; // [xsp+C0h] [xbp-100h] BYREF
  __int64 *v36; // [xsp+C8h] [xbp-F8h]
  __int64 v37; // [xsp+D0h] [xbp-F0h]
  __int64 (__fastcall *v38)(); // [xsp+D8h] [xbp-E8h]
  __int64 (__fastcall *v39)(); // [xsp+E0h] [xbp-E0h]
  __int64 v40; // [xsp+E8h] [xbp-D8h] BYREF
  int v41; // [xsp+F0h] [xbp-D0h] BYREF
  char *v42; // [xsp+F8h] [xbp-C8h]
  __int64 v43; // [xsp+100h] [xbp-C0h]
  __int64 v44; // [xsp+108h] [xbp-B8h]
  const char *v45; // [xsp+110h] [xbp-B0h]
  __int128 v46; // [xsp+118h] [xbp-A8h]
  __int128 v47; // [xsp+128h] [xbp-98h]
  __int128 v48; // [xsp+138h] [xbp-88h]
  __int128 v49; // [xsp+148h] [xbp-78h]
  __int64 v50; // [xsp+158h] [xbp-68h]

  v5 = v3;
  v41 = 520617996;
  v42 = a2;
  v43 = 0;
  v44 = 0;
  v45 = a3;
  v46 = 0u;
  v47 = 0u;
  v48 = 0u;
  v49 = 0u;
  v50 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v41);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dlsym(%p, \"%s\")\n", a2, a3);
  dyld4::APIs::clearErrorString(this);
  _platform_strlen(a3);
  v8 = (char *)v24 - ((__chkstk_darwin() + 17) & 0xFFFFFFFFFFFFFFF0LL);
  *v8 = 95;
  strcpy(v8 + 1, a3);
  v35 = 0;
  v36 = &v35;
  v37 = 0x3002000000LL;
  v38 = __Block_byref_object_copy__7;
  v39 = __Block_byref_object_dispose__7;
  Diagnostics::Diagnostics((Diagnostics *)&v40);
  v29 = 0;
  v30 = &v29;
  v31 = 0x4802000000LL;
  v32 = __Block_byref_object_copy__86;
  v33 = __Block_byref_object_dispose__87;
  if ( a2 + 5 == (_BYTE *)&dword_4 + 1 || (unsigned __int64)a2 >= 0xFFFFFFFFFFFFFFFBLL )
  {
    v9 = (unsigned __int64)a2;
    switch ( (unsigned __int64)a2 )
    {
      case 0xFFFFFFFFFFFFFFFBLL:
        if ( (dyld4::Loader::hasExportedSymbol(*((_QWORD *)this + 3), v36 + 5, this, v8, 0, &v34, 0) & 1) != 0 )
          goto LABEL_21;
        dyld4::APIs::setErrorString(this, "dlsym(RTLD_MAIN_ONLY, %s): symbol not found");
        goto LABEL_34;
      case 0xFFFFFFFFFFFFFFFDLL:
        if ( !dyld4::APIs::findImageContaining(this, v5) )
        {
          dyld4::APIs::setErrorString(this, "dlsym(RTLD_SELF, %s): called by unknown image (caller=%p)");
          goto LABEL_34;
        }
        v13 = __chkstk_darwin();
        v15 = *((char ***)this + 6);
        v25 = (char *)v24 - ((v14 + 23) & 0xFFFFFFFFFFFFFFF0LL);
        v26 = v15;
        v27 = 0;
        if ( (dyld4::Loader::hasExportedSymbol(v13, v36 + 5, this, v8, 3, v30 + 5, &v25) & 1) != 0 )
          goto LABEL_21;
        dyld4::APIs::setErrorString(this, "dlsym(RTLD_SELF, %s): symbol not found");
        goto LABEL_37;
      case 0xFFFFFFFFFFFFFFFELL:
        v25 = nullptr;
        v26 = &v25;
        v27 = 0x2000000000LL;
        v28 = 0;
        v24[0] = _NSConcreteStackBlock;
        v24[1] = 0x40000000;
        v24[2] = ___ZN5dyld44APIs5dlsymEPvPKc_block_invoke;
        v24[3] = &unk_96958;
        v24[7] = this;
        v24[8] = v8;
        v24[4] = &v35;
        v24[5] = &v29;
        v24[6] = &v25;
        dyld4::RuntimeState::withLoadersReadLock((__int64)this, (__int64)v24);
        if ( *((_BYTE *)v26 + 24) )
        {
          _Block_object_dispose(&v25, 8);
          goto LABEL_21;
        }
        dyld4::APIs::setErrorString(this, "dlsym(RTLD_DEFAULT, %s): symbol not found", a3);
        if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
          dyld4::RuntimeState::log(this, "     dlsym(\"%s\") => NULL\n", a3);
        _Block_object_dispose(&v25, 8);
        goto LABEL_39;
      case 0xFFFFFFFFFFFFFFFFLL:
        if ( !dyld4::APIs::findImageContaining(this, v5) )
        {
          dyld4::APIs::setErrorString(this, "dlsym(RTLD_NEXT, %s): called by unknown image (caller=%p)");
          goto LABEL_34;
        }
        v16 = __chkstk_darwin();
        v18 = *((char ***)this + 6);
        v25 = (char *)v24 - ((v17 + 23) & 0xFFFFFFFFFFFFFFF0LL);
        v26 = v18;
        v27 = 0;
        if ( (dyld4::Loader::hasExportedSymbol(v16, v36 + 5, this, v8, 2, v30 + 5, &v25) & 1) != 0 )
          goto LABEL_21;
        dyld4::APIs::setErrorString(this, "dlsym(RTLD_NEXT, %s): symbol not found");
LABEL_37:
        if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
          goto LABEL_38;
        goto LABEL_39;
      case 0uLL:
        goto LABEL_8;
      default:
        break;
    }
  }
  v9 = (unsigned __int64)a2;
LABEL_8:
  if ( !dyld4::APIs::validLoader(this, (const dyld4::Loader *)(v9 & 0xFFFFFFFFFFFFFFFELL ^ (unsigned __int64)&dword_0)) )
  {
    dyld4::APIs::setErrorString(this, "dlsym(%p, %s): invalid handle");
    goto LABEL_34;
  }
  __chkstk_darwin();
  v11 = *((char ***)this + 6);
  v25 = (char *)v24 - ((v10 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  v26 = v11;
  v27 = 0;
  if ( (v9 & 1) != 0 )
    v12 = 0;
  else
    v12 = 3;
  if ( (dyld4::Loader::hasExportedSymbol(
          v9 & 0xFFFFFFFFFFFFFFFELL ^ (unsigned __int64)&dword_0,
          v36 + 5,
          this,
          v8,
          v12,
          v30 + 5,
          &v25)
      & 1) == 0 )
  {
    dyld4::APIs::setErrorString(this, "dlsym(%p, %s): symbol not found", a2, a3);
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
      dyld4::RuntimeState::log(this, "     dlsym(\"%s\") => NULL\n", a3);
LABEL_39:
    v22 = 0;
    goto LABEL_40;
  }
LABEL_21:
  if ( !v30[5] )
  {
LABEL_34:
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
LABEL_38:
      dyld4::RuntimeState::log(this, "     dlsym(\"%s\") => NULL\n", a3);
    goto LABEL_39;
  }
  v19 = (dyld4::RuntimeState *)dyld4::Loader::resolvedAddress(this);
  v21 = (const void *)dyld4::Loader::interpose(this, v19, nullptr, v20);
  v22 = (unsigned __int64)v21;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "     dlsym(\"%s\") => %p\n", a3, v21);
  v47 = v22;
LABEL_40:
  _Block_object_dispose(&v29, 8);
  _Block_object_dispose(&v35, 8);
  Diagnostics::~Diagnostics((Diagnostics *)&v40);
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v41);
  return v22;
}
