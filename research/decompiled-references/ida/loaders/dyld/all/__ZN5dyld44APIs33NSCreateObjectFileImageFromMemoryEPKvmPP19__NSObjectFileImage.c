__int64 __fastcall dyld4::APIs::NSCreateObjectFileImageFromMemory(
        dyld4::APIs *this,
        const void *a2,
        __int64 a3,
        __NSObjectFileImage **a4)
{
  dyld4::APIs *v4; // x0
  __NSObjectFileImage *v5; // x1
  const char *v6; // x2
  unsigned int v7; // w3

  v4 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const void *, __int64, __NSObjectFileImage **))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3,
                        a4);
  return dyld4::APIs::NSLinkModule(v4, v5, v6, v7);
}
