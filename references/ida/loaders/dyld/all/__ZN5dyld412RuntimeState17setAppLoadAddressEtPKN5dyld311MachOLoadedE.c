__int64 __fastcall dyld4::RuntimeState::setAppLoadAddress(__int64 result, unsigned int a2, __int64 a3)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)(result + 680);
  if ( !v3 )
    dyld4::RuntimeState::setAppLoadAddress();
  if ( *(_DWORD *)(v3 + 12) <= a2 )
    dyld4::RuntimeState::setAppLoadAddress();
  *(_QWORD *)(*(_QWORD *)(result + 696) + 8LL * a2) = a3;
  return result;
}
