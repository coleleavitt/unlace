__int64 __fastcall dyld4::APIs::NSLookupAndBindSymbol(dyld4::APIs *this, const char *a2)
{
  dyld4::APIs *v2; // x0
  const char *v3; // x1
  const char *v4; // x2

  v2 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const char *))(*(_QWORD *)this + 800LL))(this, a2);
  return dyld4::APIs::NSLookupAndBindSymbolWithHint(v2, v3, v4);
}
