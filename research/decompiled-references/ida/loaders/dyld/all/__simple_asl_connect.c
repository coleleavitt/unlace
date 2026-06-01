__int64 _simple_asl_connect()
{
  __int64 v0; // x0
  __int64 v1; // x19
  size_t v2; // x0
  size_t v3; // x2
  sockaddr v5; // [xsp+10h] [xbp-80h] BYREF

  v0 = socket(1, 2, 0);
  v1 = v0;
  if ( (_DWORD)v0 != -1 )
  {
    fcntl(v0, 2, 1);
    v5.sa_family = 1;
    v2 = _platform_strlen("/var/run/syslog");
    if ( v2 + 1 < 0x68 )
      v3 = v2 + 1;
    else
      v3 = 104;
    _platform_memmove(v5.sa_data, "/var/run/syslog", v3);
    if ( __connect(v1, &v5, 0x6Au) == -1 )
    {
      close(v1);
      return 0xFFFFFFFFLL;
    }
  }
  return v1;
}
