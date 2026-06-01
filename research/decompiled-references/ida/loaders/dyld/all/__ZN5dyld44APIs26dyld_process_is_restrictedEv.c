bool __fastcall dyld4::APIs::dyld_process_is_restricted(dyld4::APIs *this)
{
  __int64 v1; // x8
  int v2; // w19

  v1 = *((_QWORD *)this + 1);
  v2 = *(unsigned __int8 *)(v1 + 171);
  if ( *(_BYTE *)(v1 + 184) )
    dyld4::RuntimeState::log(this, "dyld_process_is_restricted() => %d\n", v2 ^ 1);
  return v2 == 0;
}
