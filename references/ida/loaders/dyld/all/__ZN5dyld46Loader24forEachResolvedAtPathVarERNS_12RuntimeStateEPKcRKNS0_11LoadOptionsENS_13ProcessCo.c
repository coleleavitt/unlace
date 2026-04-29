__int64 __fastcall dyld4::Loader::forEachResolvedAtPathVar(
        dyld4::RuntimeState *a1,
        char *__s1,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6)
{
  int v12; // w0
  bool v13; // zf
  int v14; // w25
  __int64 result; // x0
  __int64 (__fastcall *v16)(__int64, char *, __int64, _BYTE *); // x5
  int v17; // w25
  __int64 **v18; // x26
  bool i; // w8
  __int64 v20; // x0
  _QWORD v21[11]; // [xsp+0h] [xbp-4D0h] BYREF
  int v22; // [xsp+58h] [xbp-478h]
  _BYTE v23[1024]; // [xsp+60h] [xbp-470h] BYREF
  __int64 vars8; // [xsp+4D8h] [xbp+8h]

  v12 = _platform_strncmp(__s1, "@rpath/", 7u);
  if ( v12 )
    v13 = 1;
  else
    v13 = *(_BYTE *)(a3 + 6) == 0;
  if ( v13 )
  {
    v14 = v12;
    if ( (unsigned int)dyld4::Loader::expandAtLoaderPath((int)a1, __s1) )
    {
      return (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, _BYTE *))(a6 + 16))(a6, v23, 11, a5);
    }
    else
    {
      result = dyld4::Loader::expandAtExecutablePath((int)a1, __s1);
      if ( (_DWORD)result )
      {
        return (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, _BYTE *))(a6 + 16))(a6, v23, 12, a5);
      }
      else
      {
        if ( v14 )
          goto LABEL_22;
        if ( (_DWORD)a4 == 13 )
          v17 = 13;
        else
          v17 = 10;
        v18 = *(__int64 ***)(a3 + 16);
        for ( i = *a5 == 0; v18 && !*a5; i = *a5 == 0 )
        {
          v20 = dyld4::Loader::mf((dyld4::Loader *)v18[1], a1);
          v21[0] = _NSConcreteStackBlock;
          v21[1] = 0x40000000;
          v21[2] = ___ZN5dyld46Loader24forEachResolvedAtPathVarERNS_12RuntimeStateEPKcRKNS0_11LoadOptionsENS_13ProcessConfig13PathOverrides4TypeERbU13block_pointerFvS4_SA_SB_E_block_invoke;
          v21[3] = &unk_95AC0;
          v21[6] = v18;
          v21[7] = a3;
          v21[8] = v23;
          v21[9] = __s1 + 6;
          v21[4] = a6;
          v21[5] = a1;
          v22 = v17;
          v21[10] = a5;
          result = dyld3::MachOFile::forEachRPath(v20, v21);
          v18 = (__int64 **)*v18;
        }
        if ( i )
        {
LABEL_22:
          if ( *__s1 != 64 )
            return (*(__int64 (__fastcall **)(__int64, char *, __int64, _BYTE *))(a6 + 16))(a6, __s1, a4, a5);
        }
      }
    }
  }
  else
  {
    v16 = *(__int64 (__fastcall **)(__int64, char *, __int64, _BYTE *))(a6 + 16);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v16(a6, __s1, a4, a5);
  }
  return result;
}
