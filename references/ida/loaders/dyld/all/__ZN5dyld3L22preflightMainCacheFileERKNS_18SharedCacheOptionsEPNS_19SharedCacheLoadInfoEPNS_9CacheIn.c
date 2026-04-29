__int64 __fastcall dyld3::preflightMainCacheFile(unsigned int *a1, __int64 a2, __int64 a3, char *a4)
{
  dyld3 *v8; // x22
  int v9; // w25
  int v10; // w24
  const char *v11; // x2
  int v12; // w4
  int v13; // w4
  int v14; // w0
  stat *v15; // x2
  __int64 v16; // x0
  __int64 result; // x0
  const char *v18; // x8
  char v19[96]; // [xsp+8h] [xbp-3F8h] BYREF
  __int64 v20; // [xsp+68h] [xbp-398h]
  char v21[144]; // [xsp+98h] [xbp-368h] BYREF
  char v22[144]; // [xsp+128h] [xbp-2D8h] BYREF
  char __dst[256]; // [xsp+1B8h] [xbp-248h] BYREF
  char __source[256]; // [xsp+2B8h] [xbp-148h] BYREF

  v8 = (dyld3 *)*a1;
  v9 = *((unsigned __int8 *)a1 + 9);
  v10 = *((unsigned __int8 *)a1 + 10);
  strlcpy(__dst, "dyld_shared_cache_arm64e", 0x100u);
  strlcpy(a4, __dst, 0x100u);
  if ( !v9 )
  {
    strlcpy(__source, __dst, 0x100u);
    strlcat(__source, ".development", 0x400u);
    if ( !(unsigned int)dyld3::fstatat(v8, (int)__source, v22, nullptr, v12) )
    {
      v14 = dyld3::fstatat(v8, (int)__dst, v21, nullptr, v13);
      if ( v10 || v14 )
      {
        strlcpy(__dst, __source, 0x100u);
      }
      else if ( !(unsigned int)dyld3::stat(
                                 (dyld3 *)"/System/Library/Caches/com.apple.dyld/enable-dylibs-to-override-cache",
                                 v19,
                                 v15)
             && v20 <= 1023 )
      {
        strlcat(__dst, ".development", 0x100u);
      }
    }
  }
  v16 = dyld3::openat((dyld3 *)*a1, (int)__dst, v11);
  if ( (_DWORD)v16 == -1 )
  {
    if ( *__error() == 2 )
    {
      result = 0;
      *(_BYTE *)(a2 + 24) = 0;
      v18 = "no shared cache file";
    }
    else
    {
      result = 0;
      v18 = "shared cache file open() failed";
    }
    *(_QWORD *)(a2 + 16) = v18;
  }
  else
  {
    *(_BYTE *)(a2 + 24) = 1;
    return dyld3::preflightCacheFile(a1, a2, a3, v16);
  }
  return result;
}
