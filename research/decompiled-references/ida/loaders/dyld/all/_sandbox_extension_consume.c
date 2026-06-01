__int64 __fastcall sandbox_extension_consume(const char *a1)
{
  _QWORD v3[6]; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v4; // [xsp+38h] [xbp-18h] BYREF

  v4 = 0xAAAAAAAAAAAAAAAALL;
  if ( !strcmp(a1, "invalid") )
    return 0;
  v3[0] = a1;
  v3[1] = strlen(a1) + 1;
  v3[2] = &v4;
  memset(&v3[3], 0, 24);
  if ( (unsigned int)__sandbox_ms("Sandbox", 6, v3) )
    return -1;
  else
    return v4;
}
