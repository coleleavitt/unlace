__int64 __fastcall dyld4::APIs::NSCreateObjectFileImageFromFile(
        dyld4::APIs *this,
        const char *a2,
        __NSObjectFileImage **a3)
{
  dyld4::APIs *v3; // x0
  const void *v4; // x1
  unsigned __int64 v5; // x2
  __NSObjectFileImage **v6; // x3

  v3 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const char *, __NSObjectFileImage **))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3);
  return dyld4::APIs::NSCreateObjectFileImageFromMemory(v3, v4, v5, v6);
}
