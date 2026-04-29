__int64 __fastcall dyld4::APIs::NSAddressOfSymbol(dyld4::APIs *this, __NSSymbol *a2)
{
  dyld4::APIs *v2; // x0
  __NSSymbol *v3; // x1

  v2 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSSymbol *))(*(_QWORD *)this + 800LL))(this, a2);
  return dyld4::APIs::NSModuleForSymbol(v2, v3);
}
