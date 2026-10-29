char *__fastcall ignition_get_shared_cache_directory(char *a1)
{
  const char *v2; // x1

  if ( *(_DWORD *)(*(_QWORD *)configuration() + 36LL) == 10 )
    v2 = "/System/DriverKit/System/Library/dyld/";
  else
    v2 = "/System/Library/Caches/com.apple.dyld/";
  strlcpy(a1, v2, 0x400u);
  return a1;
}
