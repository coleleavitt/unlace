__int64 __fastcall dyld4::APIs::dlclose(dyld4::APIs *this, unsigned __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 v6; // x23
  const dyld4::Loader *v7; // x23
  int v9; // [xsp+10h] [xbp-A0h] BYREF
  unsigned __int64 v10; // [xsp+18h] [xbp-98h]
  __int128 v11; // [xsp+20h] [xbp-90h]
  __int128 v12; // [xsp+30h] [xbp-80h]
  __int128 v13; // [xsp+40h] [xbp-70h]
  __int128 v14; // [xsp+50h] [xbp-60h]
  __int128 v15; // [xsp+60h] [xbp-50h]
  __int128 v16; // [xsp+70h] [xbp-40h]

  v4 = *((_QWORD *)this + 15);
  v5 = *((_QWORD *)this + 13) + 24LL;
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v4 + 104LL))(*((_QWORD *)this + 15), v5, 0);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dlclose(%p)\n", (const void *)a2);
  v9 = 520617992;
  v10 = a2;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v9);
  v6 = 0;
  if ( a2 != -5 && a2 != -2 )
  {
    v7 = (const dyld4::Loader *)&dword_0;
    if ( a2 )
      v7 = (const dyld4::Loader *)(a2 & 0xFFFFFFFFFFFFFFFELL ^ (unsigned __int64)&dword_0);
    if ( dyld4::APIs::validLoader(this, v7) )
    {
      dyld4::RuntimeState::decDlRefCount(this, v7);
      dyld4::APIs::clearErrorString((__int64)this);
      v6 = 0;
    }
    else
    {
      dyld4::APIs::setErrorString((__int64)this, "dlclose(%p): invalid handle", (const void *)a2);
      v6 = 0xFFFFFFFFLL;
    }
  }
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v9);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 112LL))(v4, v5);
  return v6;
}
