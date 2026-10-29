__int64 __fastcall dyld4::APIs::NSLinkModule(dyld4::APIs *this, __NSObjectFileImage *a2, const char *a3)
{
  dyld4::APIs *v3; // x0
  __NSModule *v4; // x1
  unsigned int v5; // w2

  v3 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSObjectFileImage *, const char *))(*(_QWORD *)this + 800LL))(
                        this,
                        a2,
                        a3);
  return dyld4::APIs::NSUnLinkModule(v3, v4, v5);
}
