__int64 __fastcall dyld4::APIs::NSModuleForSymbol(dyld4::APIs *this, __NSSymbol *a2)
{
  dyld4::APIs *v2; // x0
  NSLinkEditErrors *v3; // x1
  int *v4; // x2
  const char **v5; // x3
  const char **v6; // x4

  v2 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSSymbol *))(*(_QWORD *)this + 800LL))(this, a2);
  return dyld4::APIs::NSLinkEditError(v2, v3, v4, v5, v6);
}
