const char *__fastcall getForeignFullIdentity(const char *a1)
{
  const char *v1; // x19
  const char *v2; // x20
  size_t v3; // x0
  __int64 v4; // x8
  const char *v5; // x9
  const char *v6; // x21
  int v7; // w8
  unsigned int v8; // w10
  bool v9; // zf
  const char *v10; // x8
  const char *v11; // x9
  size_t v12; // x0

  v1 = a1;
  v2 = &a1[_platform_strlen(a1)];
  v3 = _platform_strlen(v2 + 1);
  if ( v3 )
  {
    v4 = (__int64)&v2[v3 + 1];
    v5 = v2;
    do
    {
      v6 = (const char *)v4;
      v7 = v5[1];
      v8 = v7 - 82;
      v9 = v7 == 78;
      v10 = v5 + 2;
      if ( v9 )
      {
        v11 = v6;
      }
      else
      {
        v10 = v1;
        v11 = v2;
      }
      if ( v8 < 2 )
      {
        v2 = v6;
      }
      else
      {
        v1 = v10;
        v2 = v11;
      }
      v12 = _platform_strlen(v6 + 1);
      v4 = (__int64)&v6[v12 + 1];
      v5 = v6;
    }
    while ( v12 );
  }
  return v1;
}
