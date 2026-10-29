void sub_2296D20()
{
  __int64 v0; // r13
  __int64 v1; // rbx
  const char *v2; // rbp
  struct stat v3; // [rsp+0h] [rbp-B8h] BYREF

  v0 = _InterlockedExchange64(&qword_2D0B848, 0);
  if ( v0 )
  {
    v1 = v0;
    do
    {
      while ( 1 )
      {
        v2 = (const char *)_InterlockedExchange64((volatile __int64 *)v1, 0);
        if ( v2 )
          break;
        v1 = *(_QWORD *)(v1 + 8);
        if ( !v1 )
          goto LABEL_9;
      }
      if ( !__xstat(1, v2, &v3) && (v3.st_mode & 0xF000) == 0x8000 )
        unlink(v2);
      _InterlockedExchange64((volatile __int64 *)v1, (__int64)v2);
      v1 = *(_QWORD *)(v1 + 8);
    }
    while ( v1 );
  }
LABEL_9:
  _InterlockedExchange64(&qword_2D0B848, v0);
}
