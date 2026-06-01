__int64 __fastcall ___ZN5dyld44APIs25NSVersionOfRunTimeLibraryEPKc_block_invoke(__int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader **v4; // x21
  __int64 v5; // x22
  dyld4::Loader **v6; // x23
  dyld3::MachOFile *Address; // x0
  const char *v8; // x2
  unsigned int v9[2]; // [xsp+0h] [xbp-40h] BYREF
  dyld4 *v10; // [xsp+8h] [xbp-38h] BYREF

  v1 = *(dyld4::RuntimeState **)(result + 40);
  v2 = *((_QWORD *)v1 + 6);
  if ( v2 )
  {
    v3 = result;
    v4 = *((dyld4::Loader ***)v1 + 5);
    v5 = 8 * v2;
    v6 = v4;
    while ( 1 )
    {
      Address = (dyld3::MachOFile *)dyld4::Loader::loadAddress(*v6, v1);
      *(_QWORD *)v9 = 0;
      v10 = nullptr;
      result = dyld3::MachOFile::getDylibInstallName(Address, (const char **)&v10, v9, &v9[1]);
      if ( (_DWORD)result )
      {
        result = dyld4::nameMatch(v10, *(const char **)(v3 + 48), v8);
        if ( (_DWORD)result )
          break;
      }
      ++v6;
      ++v4;
      v5 -= 8;
      if ( !v5 )
        return result;
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) = v9[1];
  }
  return result;
}
