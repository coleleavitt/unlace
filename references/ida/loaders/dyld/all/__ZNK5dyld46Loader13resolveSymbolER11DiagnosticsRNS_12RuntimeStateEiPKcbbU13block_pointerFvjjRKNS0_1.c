void __usercall dyld4::Loader::resolveSymbol(
        dyld4::Loader *this@<X0>,
        Diagnostics *a2@<X1>,
        dyld4::RuntimeState *a3@<X2>,
        int a4@<W3>,
        const char *a5@<X4>,
        int a6@<W5>,
        int a7@<W6>,
        __int64 a8@<X7>,
        _OWORD *a9@<X8>)
{
  __int64 v17; // x23
  dyld4::Loader *v18; // x0
  const dyld4::Loader *v19; // x2
  _OWORD *v20; // x20
  __int64 v21; // x23
  unsigned __int64 v22; // x24
  __int64 v23; // x0
  __int64 v24; // x0
  const char *v25; // x0
  __int128 v26; // q1
  _OWORD *v27; // x8
  const dyld4::Loader *v28; // x2
  __int64 v29; // x8
  char *v30; // x9
  __int128 v31; // q1
  _OWORD *v32; // x8
  __int64 *v33; // x8
  __int64 v34; // x9
  dyld4::Loader *v35; // x0
  const char *v36; // x25
  const char *v37; // x0
  dyld4::Loader *v38; // x0
  const char *v39; // x22
  const char *v40; // x0
  _OWORD *v41; // x9
  __int128 v42; // q1
  __int64 *v43; // x8
  __int64 v44; // x8
  __int64 *v45; // x10
  __int128 v46; // q1
  _OWORD *v47; // [xsp+30h] [xbp-1E0h] BYREF
  vm_address_t v48; // [xsp+38h] [xbp-1D8h] BYREF
  _QWORD v49[11]; // [xsp+40h] [xbp-1D0h] BYREF
  _QWORD v50[10]; // [xsp+98h] [xbp-178h] BYREF
  __int64 v51; // [xsp+E8h] [xbp-128h] BYREF
  __int64 *v52; // [xsp+F0h] [xbp-120h]
  __int64 v53; // [xsp+F8h] [xbp-118h]
  __int64 (__fastcall *v54)(); // [xsp+100h] [xbp-110h]
  __int64 (__fastcall *v55)(); // [xsp+108h] [xbp-108h]
  __int64 v56; // [xsp+110h] [xbp-100h]
  const char *v57; // [xsp+118h] [xbp-F8h]
  __int128 v58; // [xsp+120h] [xbp-F0h]
  char v59[8]; // [xsp+130h] [xbp-E0h] BYREF
  __int64 v60; // [xsp+138h] [xbp-D8h]
  __int64 v61; // [xsp+140h] [xbp-D0h]
  char v62[8]; // [xsp+170h] [xbp-A0h] BYREF
  char *v63; // [xsp+178h] [xbp-98h]
  __int64 v64; // [xsp+180h] [xbp-90h]
  char v65; // [xsp+188h] [xbp-88h]

  v47 = a9;
  v51 = 0;
  v52 = &v51;
  v53 = 0x4802000000LL;
  v54 = __Block_byref_object_copy__104;
  v56 = 0;
  v58 = 0u;
  v55 = __Block_byref_object_dispose__105;
  v57 = a5;
  DWORD2(v58) = 2;
  BYTE13(v58) = 0;
  v17 = (unsigned int)(a4 - 1);
  if ( a4 >= 1 && (unsigned int)dyld4::Loader::dependentCount(this) >= a4 )
  {
    v18 = (dyld4::Loader *)dyld4::Loader::dependent(this, a3, v17, 0);
LABEL_17:
    v52[5] = (__int64)v18;
    if ( v18
      && (__chkstk_darwin(),
          v30 = *((char **)a3 + 6),
          *(_QWORD *)v62 = (char *)&v47 - ((v29 + 23) & 0xFFFFFFFFFFFFFFF0LL),
          v63 = v30,
          v64 = 0,
          (unsigned int)dyld4::Loader::hasExportedSymbol(
                          (dyld4::Loader *)v52[5],
                          a2,
                          a3,
                          (const unsigned __int8 *)a5,
                          0,
                          (dyld4::Loader **)v52 + 5,
                          (__int64)v62)) )
    {
      v31 = *(_OWORD *)(v52 + 7);
      v32 = v47;
      *v47 = *(_OWORD *)(v52 + 5);
      v32[1] = v31;
    }
    else
    {
      if ( a6 )
      {
        v33 = v52;
        *((_DWORD *)v52 + 16) = 2;
        v33[7] = 0;
      }
      else if ( a7 && (v34 = *((_QWORD *)a3 + 11)) != 0 )
      {
        v33 = v52;
        v52[5] = *((_QWORD *)a3 + 9);
        v33[6] = (__int64)a5;
        v33[7] = v34;
        *((_DWORD *)v33 + 16) = 1;
        *((_WORD *)v33 + 34) = 0;
        *((_BYTE *)v33 + 70) = 0;
      }
      else
      {
        v35 = (dyld4::Loader *)v52[5];
        if ( v35 )
          v36 = (const char *)dyld4::Loader::path(v35);
        else
          v36 = "unknown";
        if ( !*((_BYTE *)&dword_18 + (_QWORD)gProcessInfo + 1) )
        {
          v37 = (const char *)dyld4::Loader::path(this);
          dyld4::RuntimeState::setLaunchMissingSymbol(a3, a5, v36, v37);
        }
        dyld4::Loader::getUuidStr(this, a3, v62);
        v38 = (dyld4::Loader *)v52[5];
        if ( v38 )
          dyld4::Loader::getUuidStr(v38, a3, v59);
        else
          strcpy(v59, "no uuid");
        Diagnostics::Diagnostics((Diagnostics *)&v48);
        dyld4::Loader::tooNewErrorAddendum(this, (Diagnostics *)&v48, a3);
        v39 = (const char *)dyld4::Loader::path(this);
        v40 = (const char *)Diagnostics::errorMessage((Diagnostics *)&v48);
        Diagnostics::error(
          a2,
          "Symbol not found: %s\n  Referenced from: <%s> %s%s\n  Expected in:     <%s> %s",
          a5,
          v62,
          v39,
          v40,
          v59,
          v36);
        Diagnostics::~Diagnostics(&v48);
        v33 = v52;
      }
      v41 = v47;
      v42 = *(_OWORD *)(v33 + 7);
      *v47 = *(_OWORD *)(v33 + 5);
      v41[1] = v42;
    }
  }
  else if ( a4 != 0 && (unsigned int)a4 < 0xFFFFFFFD )
  {
LABEL_12:
    v25 = (const char *)dyld4::Loader::path(this);
    Diagnostics::error(a2, "unknown library ordinal %d in %s when binding '%s'", a4, v25, a5);
    v26 = *(_OWORD *)(v52 + 7);
    v27 = v47;
    *v47 = *(_OWORD *)(v52 + 5);
    v27[1] = v26;
  }
  else
  {
    v18 = this;
    switch ( a4 )
    {
      case -3:
        *(_QWORD *)v62 = 0;
        v63 = v62;
        v64 = 0x2000000000LL;
        v65 = 0;
        v49[0] = _NSConcreteStackBlock;
        v49[1] = 0x40000000;
        v49[2] = ___ZNK5dyld46Loader13resolveSymbolER11DiagnosticsRNS_12RuntimeStateEiPKcbbU13block_pointerFvjjRKNS0_14ResolvedSymbolEEb_block_invoke_2;
        v49[3] = &unk_95D08;
        v49[8] = a3;
        v49[9] = a5;
        v49[6] = v62;
        v49[7] = this;
        v49[10] = a2;
        v49[4] = a8;
        v49[5] = &v51;
        dyld4::RuntimeState::withLoadersReadLock((__int64)a3, (__int64)v49);
        if ( v63[24] )
        {
          v19 = (const dyld4::Loader *)v52[5];
          v20 = v47;
          if ( v19 != this )
            dyld4::RuntimeState::addDynamicReference(a3, this, v19);
          if ( *((_QWORD *)a3 + 38) && (dyld4::Loader::hiddenFromFlat((dyld4::Loader *)v52[5], 0) & 1) == 0 )
          {
            v21 = v52[5];
            v22 = v52[7] & 0x3FFFFFFFFFFFFFFFLL
                | ((unsigned __int64)*((unsigned __int8 *)v52 + 68) << 62)
                | ((unsigned __int64)*((unsigned __int8 *)v52 + 69) << 63);
            v23 = *((_QWORD *)a3 + 38);
            v60 = 0;
            v61 = 0;
            *(_QWORD *)v59 = a5;
            v24 = dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert(
                    v23,
                    v59);
            *(_QWORD *)(v24 + 8) = v21;
            *(_QWORD *)(v24 + 16) = v22;
          }
          goto LABEL_44;
        }
        if ( a6 )
          goto LABEL_38;
        Diagnostics::error(a2, "weak-def symbol not found '%s'");
        goto LABEL_43;
      case -2:
        *(_QWORD *)v62 = 0;
        v63 = v62;
        v64 = 0x2000000000LL;
        v65 = 0;
        v50[0] = _NSConcreteStackBlock;
        v50[1] = 0x40000000;
        v50[2] = ___ZNK5dyld46Loader13resolveSymbolER11DiagnosticsRNS_12RuntimeStateEiPKcbbU13block_pointerFvjjRKNS0_14ResolvedSymbolEEb_block_invoke;
        v50[3] = &unk_95CE0;
        v50[6] = this;
        v50[7] = a3;
        v50[8] = a2;
        v50[9] = a5;
        v50[4] = &v51;
        v50[5] = v62;
        dyld4::RuntimeState::withLoadersReadLock((__int64)a3, (__int64)v50);
        if ( v63[24] )
        {
          v28 = (const dyld4::Loader *)v52[5];
          v20 = v47;
          if ( v28 != this )
            dyld4::RuntimeState::addDynamicReference(a3, this, v28);
        }
        else
        {
          if ( a6 )
          {
LABEL_38:
            v43 = v52;
            *((_DWORD *)v52 + 16) = 2;
            v43[7] = 0;
          }
          else if ( a7 && (v44 = *((_QWORD *)a3 + 11)) != 0 )
          {
            v45 = v52;
            v52[5] = *((_QWORD *)a3 + 9);
            v45[6] = (__int64)a5;
            v45[7] = v44;
            *((_DWORD *)v45 + 16) = 1;
            *((_WORD *)v45 + 34) = 0;
            *((_BYTE *)v45 + 70) = 1;
          }
          else
          {
            Diagnostics::error(a2, "symbol not found in flat namespace '%s'");
          }
LABEL_43:
          v20 = v47;
        }
LABEL_44:
        v46 = *(_OWORD *)(v52 + 7);
        *v20 = *(_OWORD *)(v52 + 5);
        v20[1] = v46;
        _Block_object_dispose(v62, 8);
        break;
      case -1:
        v18 = *((dyld4::Loader **)a3 + 3);
        goto LABEL_17;
      case 0:
        goto LABEL_17;
      default:
        goto LABEL_12;
    }
  }
  _Block_object_dispose(&v51, 8);
}
