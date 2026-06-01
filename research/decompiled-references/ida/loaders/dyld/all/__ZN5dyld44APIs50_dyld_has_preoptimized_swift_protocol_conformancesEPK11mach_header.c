__int64 __fastcall dyld4::APIs::_dyld_has_preoptimized_swift_protocol_conformances(dyld4::APIs *this, mach_header *a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 i; // x23
  const mach_header *v8; // x1
  bool v9; // zf

  result = dyld3::MachOAnalyzer::hasSwift((dyld3::MachOAnalyzer *)a2);
  if ( (_DWORD)result )
  {
    v5 = *((_QWORD *)this + 85);
    if ( !v5 )
      return 0;
    result = dyld4::PrebuiltLoaderSet::hasOptimizedSwift(*((dyld4::PrebuiltLoaderSet **)this + 85));
    if ( !(_DWORD)result )
      return result;
    v6 = *(unsigned int *)(v5 + 12);
    if ( (_DWORD)v6 )
    {
      for ( i = 1; ; ++i )
      {
        v9 = dyld4::Loader::analyzer(
               (dyld4::Loader *)(v5
                               + *(unsigned int *)(v5 + *(unsigned int *)(v5 + 16) + 4LL * (unsigned __int16)(i - 1))),
               this) == (_QWORD)a2;
        result = v9;
        v9 = v9 || v6 == i;
        if ( v9 )
          break;
        if ( *(_DWORD *)(v5 + 12) <= (unsigned int)(unsigned __int16)i )
          dyld4::APIs::_dyld_has_preoptimized_swift_protocol_conformances((dyld4::APIs *)result, v8);
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
