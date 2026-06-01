__int64 __fastcall dyld4::APIs::_dyld_has_fix_for_radar(dyld4::APIs *this, const char *a2)
{
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_has_fix_for_radar(%s)\n", a2);
  return 0;
}
