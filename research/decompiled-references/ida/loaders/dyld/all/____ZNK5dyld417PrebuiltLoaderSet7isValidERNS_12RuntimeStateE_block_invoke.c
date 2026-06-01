__int64 __fastcall ___ZNK5dyld417PrebuiltLoaderSet7isValidERNS_12RuntimeStateE_block_invoke(
        _QWORD *a1,
        dyld3 *a2,
        _BYTE *a3)
{
  __int64 v6; // x22
  __int64 result; // x0
  const char *v8; // x1

  v6 = a1[5];
  result = dyld4::SyscallDelegate::fileExists(*(_QWORD *)(a1[6] + 8LL), a2);
  if ( (_DWORD)result )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1[6] + 8LL) + 187LL) )
      result = dyld4::console(
                 (dyld4 *)"not using PrebuiltLoaderSet %p because existence of file '%s' invalids the PrebuiltLoaderSet\n",
                 v8,
                 v6,
                 a2);
    *(_BYTE *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = 1;
    *a3 = 1;
  }
  return result;
}
