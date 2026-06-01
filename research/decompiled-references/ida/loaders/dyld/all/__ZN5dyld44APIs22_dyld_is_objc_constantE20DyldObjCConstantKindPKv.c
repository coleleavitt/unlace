__int64 __fastcall dyld4::APIs::_dyld_is_objc_constant(dyld4::RuntimeState *a1, int a2, const void *a3)
{
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 184LL) )
    dyld4::RuntimeState::log(a1, "_dyld_is_objc_constant(%d, %p)\n", a2, a3);
  return 0;
}
