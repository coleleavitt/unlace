__int64 __fastcall ___ZN5dyld46Loader24forEachResolvedAtPathVarERNS_12RuntimeStateEPKcRKNS0_11LoadOptionsENS_13ProcessConfig13PathOverrides4TypeERbU13block_pointerFvS4_SA_SB_E_block_invoke(
        __int64 a1,
        char *__s1,
        _BYTE *a3)
{
  dyld4::RuntimeState *v6; // x22
  const char *v7; // x0
  __int64 v8; // x2
  unsigned __int64 v9; // x3
  __int64 result; // x0
  unsigned __int64 v11; // x3
  const char *v12; // x1

  v6 = *(dyld4::RuntimeState **)(a1 + 40);
  if ( *(_BYTE *)(*((_QWORD *)v6 + 1) + 188LL) )
  {
    v7 = (const char *)dyld4::Loader::path(*(dyld4::Loader **)(*(_QWORD *)(a1 + 48) + 8LL));
    dyld4::RuntimeState::log(v6, "  LC_RPATH '%s' from '%s'\n", __s1, v7);
    v6 = *(dyld4::RuntimeState **)(a1 + 40);
  }
  if ( dyld4::Loader::expandAtLoaderPath(
         v6,
         __s1,
         *(_QWORD *)(a1 + 56),
         *(dyld4::Loader **)(*(_QWORD *)(a1 + 48) + 8LL),
         1,
         *(char **)(a1 + 64)) )
  {
    goto LABEL_5;
  }
  result = dyld4::Loader::expandAtExecutablePath(*(dyld4::RuntimeState **)(a1 + 40), __s1, v8, 0, *(char **)(a1 + 64));
  if ( (_DWORD)result )
    goto LABEL_5;
  if ( *__s1 != 47 )
  {
LABEL_6:
    if ( !*a3 )
      return result;
    goto LABEL_7;
  }
  strlcpy(*(char **)(a1 + 64), __s1, 0x400u);
  dyld4::Utils::concatenatePaths(*(dyld4::Utils **)(a1 + 64), *(char **)(a1 + 72), (const char *)&stru_3D0.offset, v11);
  result = (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
  if ( *a3 )
  {
LABEL_7:
    **(_BYTE **)(a1 + 80) = 1;
    return result;
  }
  v12 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 464LL);
  if ( v12 )
  {
    strlcpy(*(char **)(a1 + 64), v12, 0x400u);
    strlcat(*(char **)(a1 + 64), __s1, 0x400u);
LABEL_5:
    dyld4::Utils::concatenatePaths(*(dyld4::Utils **)(a1 + 64), *(char **)(a1 + 72), (const char *)&stru_3D0.offset, v9);
    result = (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
    goto LABEL_6;
  }
  return result;
}
