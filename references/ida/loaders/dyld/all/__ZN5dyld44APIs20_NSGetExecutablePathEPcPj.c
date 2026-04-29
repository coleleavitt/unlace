__int64 __fastcall dyld4::APIs::_NSGetExecutablePath(dyld4::APIs *this, char *a2, unsigned int *a3)
{
  __int64 v5; // x8
  __int64 v7; // x9
  const char *v8; // x21
  size_t v9; // x0

  v5 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v5 + 184) )
  {
    dyld4::RuntimeState::log(this, "_NSGetExecutablePath(%p, %p)\n", a2, a3);
    v5 = *((_QWORD *)this + 1);
  }
  v7 = 16;
  if ( *(_DWORD *)(v5 + 68) == 1 )
    v7 = 24;
  v8 = *(const char **)(v5 + v7);
  v9 = _platform_strlen(v8);
  if ( v9 + 1 <= *a3 )
  {
    strcpy(a2, v8);
    return 0;
  }
  else
  {
    *a3 = v9 + 1;
    return 0xFFFFFFFFLL;
  }
}
