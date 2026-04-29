__int64 __fastcall dyld4::APIs::NSLookupSymbolInImage(dyld4::APIs *this, const mach_header *a2, const char *a3)
{
  dyld4::APIs *v3; // x0
  __NSSymbol *v4; // x1

  v3 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const mach_header *, const char *))(*(_QWORD *)this
                                                                                                  + 800LL))(
                        this,
                        a2,
                        a3);
  return dyld4::APIs::NSAddressOfSymbol(v3, v4);
}
