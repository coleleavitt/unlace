__int64 __fastcall dyld4::APIs::NSLinkEditError(
        dyld4::APIs *this,
        NSLinkEditErrors *a2,
        int *a3,
        const char **a4,
        const char **a5)
{
  dyld4::APIs *v5; // x0
  const char *v6; // x1

  v5 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, NSLinkEditErrors *, int *, const char **, const char **))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3,
                        a4,
                        a5);
  return dyld4::APIs::NSAddLibrary(v5, v6);
}
