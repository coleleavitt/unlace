__int64 __fastcall MACHOMERGER_HOOK__ZN5dyld44APIs11dlopen_fromEPKciPv(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // x0
  __int64 jbroot; // x0
  const char *v10; // x23
  size_t v11; // x24
  char *v12; // x24
  char *v13; // x0
  __int64 v14; // [xsp+0h] [xbp-50h] BYREF

  if ( !(unsigned int)jbinfo_is_checked_in() )
    return MACHOMERGER_ORIG__ZN5dyld44APIs11dlopen_fromEPKciPv(a1, a2, a3, a4);
  if ( access(a2, 0) )
    return MACHOMERGER_ORIG__ZN5dyld44APIs11dlopen_fromEPKciPv(a1, a2, a3, a4);
  if ( strncmp(a2, "/usr/lib/", 9u) )
    return MACHOMERGER_ORIG__ZN5dyld44APIs11dlopen_fromEPKciPv(a1, a2, a3, a4);
  jbroot = jbinfo_get_jbroot();
  if ( !jbroot )
    return MACHOMERGER_ORIG__ZN5dyld44APIs11dlopen_fromEPKciPv(a1, a2, a3, a4);
  v10 = (const char *)jbroot;
  v11 = strlen(a2 + 8);
  v12 = (char *)&v14 - ((v11 + strlen(v10) + 33) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = strcpy_0(v12, v10);
  strcpy(&v12[strlen(v13)], "/basebin/.fakelib");
  strcat_0(v12, a2 + 8);
  result = MACHOMERGER_ORIG__ZN5dyld44APIs11dlopen_fromEPKciPv(a1, v12, a3, a4);
  if ( !result )
    return MACHOMERGER_ORIG__ZN5dyld44APIs11dlopen_fromEPKciPv(a1, a2, a3, a4);
  return result;
}
