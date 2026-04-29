__int64 __fastcall dyld4::APIs::NSUnLinkModule(dyld4::APIs *this, __NSModule *a2)
{
  dyld4::APIs *v2; // x0
  __NSObjectFileImage *v3; // x1

  v2 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, __NSModule *))(*(_QWORD *)this + 800LL))(this, a2);
  return dyld4::APIs::NSDestroyObjectFileImage(v2, v3);
}
