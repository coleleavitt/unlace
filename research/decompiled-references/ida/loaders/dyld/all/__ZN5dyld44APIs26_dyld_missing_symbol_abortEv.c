void __fastcall __noreturn dyld4::APIs::_dyld_missing_symbol_abort(dyld4::APIs *this, const char *a2)
{
  *((_QWORD *)gProcessInfo + 15) = 4;
  dyld4::halt((dyld4 *)"missing symbol called", a2);
}
