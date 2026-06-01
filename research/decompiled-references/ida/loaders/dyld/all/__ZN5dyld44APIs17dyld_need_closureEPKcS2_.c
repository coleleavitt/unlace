__int64 __fastcall dyld4::APIs::dyld_need_closure(dyld4::APIs *this, const char *a2, const char *a3)
{
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_need_closure()\n", a3);
  return 0;
}
