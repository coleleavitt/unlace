__int64 __fastcall dyld4::APIs::NSIsSymbolDefinedInObjectFileImage(
        dyld4::APIs *this,
        __NSObjectFileImage *a2,
        const char *a3)
{
  dyld4::APIs *v3; // x0
  __NSObjectFileImage *v4; // x1
  const char *v5; // x2
  const char *v6; // x3
  unsigned __int64 *v7; // x4

  v3 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSObjectFileImage *, const char *))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3);
  return dyld4::APIs::NSGetSectionDataInObjectFileImage(v3, v4, v5, v6, v7);
}
