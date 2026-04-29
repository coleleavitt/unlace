__int64 __fastcall dyld4::APIs::NSLookupSymbolInModule(dyld4::APIs *this, __NSModule *a2, const char *a3)
{
  dyld4::APIs *v3; // x0
  const mach_header *v4; // x1
  const char *v5; // x2
  unsigned int v6; // w3

  v3 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSModule *, const char *))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3);
  return dyld4::APIs::NSLookupSymbolInImage(v3, v4, v5, v6);
}
