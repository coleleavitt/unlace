__int64 __fastcall dyld4::APIs::_dyld_image_containing_address(dyld4::APIs *this, const void *a2)
{
  dyld4::APIs *v2; // x0
  const char *v3; // x1
  void **v4; // x2
  __NSModule **v5; // x3

  v2 = (dyld4::APIs *)(*(__int64 (__fastcall **)(dyld4::APIs *, const void *))(*(_QWORD *)this + 800LL))(this, a2);
  return dyld4::APIs::_dyld_lookup_and_bind(v2, v3, v4, v5);
}
