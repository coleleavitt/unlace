__int64 __fastcall dyld4::APIs::NSLookupAndBindSymbolWithHint(dyld4::APIs *this, const char *a2, const char *a3)
{
  dyld4::APIs *v3; // x0
  __NSModule *v4; // x1
  const char *v5; // x2

  v3 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const char *, const char *))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3);
  return dyld4::APIs::NSLookupSymbolInModule(v3, v4, v5);
}
