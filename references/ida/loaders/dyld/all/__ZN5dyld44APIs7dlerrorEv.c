__int64 __fastcall dyld4::APIs::dlerror(dyld4::APIs *this)
{
  __int64 v2; // x0
  __int64 v3; // x20

  if ( !*((_QWORD *)this + 101) || !*((_BYTE *)gProcessInfo + 25) )
    return 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15));
  if ( !v2 || (v3 = v2, !*(_BYTE *)(v2 + 8)) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
      dyld4::RuntimeState::log(this, "dlerror() => NULL\n");
    return 0;
  }
  *(_BYTE *)(v2 + 8) = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dlerror() => '%s'\n", (const char *)(v2 + 9));
  return v3 + 9;
}
