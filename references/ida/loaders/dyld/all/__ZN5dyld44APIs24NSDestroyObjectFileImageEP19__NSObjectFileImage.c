__int64 __fastcall dyld4::APIs::NSDestroyObjectFileImage(dyld4::APIs *this, __NSObjectFileImage *a2)
{
  dyld4::APIs *v2; // x0
  __NSObjectFileImage *v3; // x1
  const char *v4; // x2

  v2 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSObjectFileImage *))(*(_QWORD *)this + 800LL))(
                        this,
                        a2);
  return dyld4::APIs::NSIsSymbolDefinedInObjectFileImage(v2, v3, v4);
}
