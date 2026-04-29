__int64 __fastcall dyld4::PrebuiltLoader::withLayout(dyld4::Loader *a1, int a2, dyld4::RuntimeState *a3)
{
  __int64 v3; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v3 = dyld4::Loader::analyzer(a1, a3);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld3::MachOAnalyzer::withVMLayout(v3);
}
