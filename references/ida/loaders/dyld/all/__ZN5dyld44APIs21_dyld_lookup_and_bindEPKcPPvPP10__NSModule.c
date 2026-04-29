__int64 __fastcall dyld4::APIs::_dyld_lookup_and_bind(dyld4::APIs *this, const char *a2, void **a3, __NSModule **a4)
{
  dyld4::APIs *v4; // x0
  const char *v5; // x1
  const char *v6; // x2
  void **v7; // x3
  __NSModule **v8; // x4

  v4 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const char *, void **, __NSModule **))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3,
                        a4);
  return dyld4::APIs::_dyld_lookup_and_bind_with_hint(v4, v5, v6, v7, v8);
}
