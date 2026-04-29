__int64 *__fastcall ___ZNK5dyld414PrebuiltLoader21invalidateInIsolationERKNS_12RuntimeStateE_block_invoke(
        __int64 *result,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  __int64 *v6; // x20
  unsigned __int16 *v7; // x22
  const char *v8; // x1
  char *v9; // x0
  char *v10; // x8
  __int64 v11[3]; // [xsp+10h] [xbp-60h] BYREF
  char v12; // [xsp+28h] [xbp-48h]
  __int128 v13; // [xsp+30h] [xbp-40h] BYREF
  __int128 v14; // [xsp+40h] [xbp-30h]

  if ( a3 >= 10 )
  {
    *a4 = 1;
    return result;
  }
  v6 = result;
  v13 = 0u;
  v14 = 0u;
  v7 = (unsigned __int16 *)result[5];
  result = (__int64 *)dyld4::ProcessConfig::fileExists(*(_QWORD *)(result[6] + 8), a2, &v13, 0);
  if ( (_DWORD)result )
  {
    result = dyld4::PrebuiltLoader::fileID(v11, (dyld4::PrebuiltLoader *)v7, (const dyld4::FileManager *)(v6[6] + 336));
    if ( !v12 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[6] + 8) + 187LL) )
      {
        v9 = "found '%s' which invalidates PrebuiltLoader for '%s'\n";
        goto LABEL_13;
      }
LABEL_17:
      *(_BYTE *)(*(_QWORD *)(v6[4] + 8) + 24LL) = 1;
      *a4 = 1;
      return result;
    }
    if ( *((_QWORD *)&v13 + 1) != v11[1] || !BYTE8(v14) || (_QWORD)v13 != v11[0] || (_QWORD)v14 != v11[2] )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[6] + 8) + 187LL) )
      {
        v9 = "found '%s' with different inode/mtime than PrebuiltLoader for '%s'\n";
LABEL_13:
        if ( v7[4] )
          v10 = (char *)v7 + v7[4];
        else
          v10 = nullptr;
        result = (__int64 *)dyld4::console((dyld4 *)v9, v8, a2, v10);
        goto LABEL_17;
      }
      goto LABEL_17;
    }
  }
  return result;
}
