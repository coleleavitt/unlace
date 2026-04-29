__int64 __fastcall dyld4::SyscallDelegate::withReadOnlyMappedFile(int a1, int a2, dyld3 *a3, __int64 a4, __int64 a5)
{
  __int64 result; // x0
  void *v7; // x20
  _OWORD v8[2]; // [xsp+10h] [xbp-450h] BYREF
  size_t v9; // [xsp+30h] [xbp-430h]
  _BYTE v10[1024]; // [xsp+38h] [xbp-428h] BYREF

  v9 = 0;
  memset(v8, 0, sizeof(v8));
  result = dyld4::SyscallDelegate::mapFileReadOnly(a1, a2, a3);
  if ( result )
  {
    v7 = (void *)result;
    (*(void (__fastcall **)(__int64, __int64, size_t, _QWORD, _OWORD *, _BYTE *))(a5 + 16))(a5, result, v9, 0, v8, v10);
    return munmap(v7, v9);
  }
  return result;
}
