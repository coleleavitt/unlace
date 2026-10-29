void __fastcall dyld4::ProcessConfig::Security::pruneEnvVars(__int64 a1, __int64 a2)
{
  const char **v2; // x22
  const char *v3; // x21
  int v5; // w23
  const char **v6; // x24
  const char *v7; // t1
  _QWORD *v8; // x0
  __int64 v9; // x9

  v2 = *(const char ***)(a2 + 104);
  v3 = *v2;
  if ( *v2 )
  {
    v5 = 0;
    v6 = v2 + 1;
    do
    {
      if ( _platform_strncmp(v3, "DYLD_", 5u) )
        *v2++ = v3;
      else
        ++v5;
      v7 = *v6++;
      v3 = v7;
    }
    while ( v7 );
    *v2 = nullptr;
    if ( v5 > 0 )
    {
      v8 = v2 + 1;
      *(_QWORD *)(a2 + 112) = v2 + 1;
      do
      {
        v9 = v8[v5];
        *v8++ = v9;
      }
      while ( v9 );
      __bzero(v8, 8LL * (unsigned int)v5);
    }
  }
  else
  {
    *v2 = nullptr;
  }
}
