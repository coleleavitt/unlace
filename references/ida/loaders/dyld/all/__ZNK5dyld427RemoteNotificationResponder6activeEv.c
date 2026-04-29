bool __fastcall dyld4::RemoteNotificationResponder::active(dyld4::RemoteNotificationResponder *this)
{
  unsigned __int64 v1; // x8
  _DWORD *v2; // x9
  __int64 v4; // x11
  unsigned __int64 v5; // x10

  v1 = *((unsigned int *)this + 10);
  if ( !(_DWORD)v1 )
    return 0;
  v2 = *((_DWORD **)this + 4);
  if ( *v2 )
    return 1;
  v4 = 1;
  do
  {
    v5 = v4;
    if ( v1 == v4 )
      break;
  }
  while ( !v2[v4++] );
  return v5 < v1;
}
