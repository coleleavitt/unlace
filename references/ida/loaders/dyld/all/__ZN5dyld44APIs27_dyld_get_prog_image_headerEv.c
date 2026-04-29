const void *__fastcall dyld4::APIs::_dyld_get_prog_image_header(dyld4::APIs *this)
{
  __int64 v1; // x8
  const void *v2; // x19

  v1 = *((_QWORD *)this + 1);
  v2 = *(const void **)(v1 + 8);
  if ( *(_BYTE *)(v1 + 184) )
    dyld4::RuntimeState::log(this, "_dyld_get_prog_image_header() => %p\n", v2);
  return v2;
}
