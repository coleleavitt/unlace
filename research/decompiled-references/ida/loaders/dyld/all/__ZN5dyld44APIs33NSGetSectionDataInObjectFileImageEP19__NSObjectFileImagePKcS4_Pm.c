__int64 __fastcall dyld4::APIs::NSGetSectionDataInObjectFileImage(
        dyld4::APIs *this,
        __NSObjectFileImage *a2,
        const char *a3,
        const char *a4,
        unsigned __int64 *a5)
{
  dyld4::APIs *v5; // x0
  __NSModule *v6; // x1

  v5 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSObjectFileImage *, const char *, const char *, unsigned __int64 *))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3,
                        a4,
                        a5);
  return dyld4::APIs::NSNameOfModule(v5, v6);
}
