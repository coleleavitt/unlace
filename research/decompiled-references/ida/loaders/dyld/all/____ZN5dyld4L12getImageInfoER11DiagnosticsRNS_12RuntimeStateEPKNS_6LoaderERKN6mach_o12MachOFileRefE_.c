__int64 __fastcall ___ZN5dyld4L12getImageInfoER11DiagnosticsRNS_12RuntimeStateEPKNS_6LoaderERKN6mach_o12MachOFileRefE_block_invoke(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  __int64 result; // x0

  result = _platform_strncmp(*(const char **)(a2 + 40), "__DATA", 6u);
  if ( !(_DWORD)result )
  {
    result = _platform_strcmp(*(const char **)(a2 + 80), "__objc_imageinfo");
    if ( !(_DWORD)result )
    {
      if ( !a3 && *(_QWORD *)(a2 + 72) == 8 )
        result = dyld4::Loader::withLayout(
                   *(_QWORD *)(a1 + 40),
                   *(_QWORD *)(a1 + 48),
                   *(dyld4::RuntimeState **)(a1 + 56));
      *a4 = 1;
    }
  }
  return result;
}
