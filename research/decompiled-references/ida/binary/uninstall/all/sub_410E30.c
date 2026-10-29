__int64 sub_410E30()
{
  char *v0; // rbx
  int v1; // eax

  sub_4AE1A0(qword_65A470);
  v0 = getenv("TZ");
  if ( v0 )
  {
    if ( (unsigned __int64)(s2 - 1) > 0xFFFFFFFFFFFFFFFDLL || strcmp(v0, s2) )
    {
      tzset();
      if ( (unsigned __int64)(s2 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        Tcl_Free((__int64)s2);
      v1 = strlen(v0);
      s2 = (char *)sub_40FB00(v1 + 1);
      strcpy(s2, v0);
    }
  }
  else if ( s2 )
  {
    tzset();
    if ( s2 != (char *)-1LL )
      Tcl_Free((__int64)s2);
    s2 = nullptr;
  }
  return sub_4AE230(qword_65A470);
}

