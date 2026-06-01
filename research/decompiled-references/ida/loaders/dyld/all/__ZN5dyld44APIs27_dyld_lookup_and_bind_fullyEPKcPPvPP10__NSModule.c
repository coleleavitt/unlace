__int64 __fastcall dyld4::APIs::_dyld_lookup_and_bind_fully(
        dyld4::APIs *this,
        const char *a2,
        void **a3,
        __NSModule **a4)
{
  dyld4::APIs *v4; // x0

  v4 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const char *, void **, __NSModule **))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3,
                        a4);
  return dyld4::APIs::runAllInitializersForMain(v4);
}
