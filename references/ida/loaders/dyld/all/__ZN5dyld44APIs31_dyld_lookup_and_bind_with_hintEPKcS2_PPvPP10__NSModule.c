__int64 __fastcall dyld4::APIs::_dyld_lookup_and_bind_with_hint(
        dyld4::APIs *this,
        const char *a2,
        const char *a3,
        void **a4,
        __NSModule **a5)
{
  dyld4::APIs *v5; // x0
  const char *v6; // x1
  void **v7; // x2
  __NSModule **v8; // x3

  v5 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const char *, const char *, void **, __NSModule **))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3,
                        a4,
                        a5);
  return dyld4::APIs::_dyld_lookup_and_bind_fully(v5, v6, v7, v8);
}
