__int64 __fastcall dyld4::RuntimeState::appLoadAddress(dyld4::RuntimeState *this, unsigned int a2)
{
  __int64 v2; // x8

  v2 = *((_QWORD *)this + 85);
  if ( !v2 )
    dyld4::RuntimeState::appLoadAddress(this, a2);
  if ( *(_DWORD *)(v2 + 12) <= a2 )
    dyld4::RuntimeState::appLoadAddress(this, a2);
  return *(_QWORD *)(*((_QWORD *)this + 87) + 8LL * a2);
}
