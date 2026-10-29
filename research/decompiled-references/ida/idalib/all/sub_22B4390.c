__int64 __fastcall sub_22B4390(__int64 a1, unsigned __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+14h] [rbp-14h]

  v3[0] = a1;
  v3[1] = a2;
  v5 = 0;
  if ( a2 > 5 && *(_DWORD *)a1 == 2003984740 && *(_WORD *)(a1 + 4) == 28265 )
    return 1;
  if ( sub_9C7D00((__int64)v3, "dragonfly", 9u) )
    return 2;
  if ( sub_9C7D00((__int64)v3, "freebsd", 7u) )
    return 3;
  if ( sub_9C7D00((__int64)v3, "fuchsia", 7u) )
    return 4;
  if ( sub_9C7D00((__int64)v3, "ios", 3u) )
    return 5;
  if ( sub_9C7D00((__int64)v3, "kfreebsd", 8u) )
    return 6;
  if ( sub_9C7D00((__int64)v3, "linux", 5u) )
    return 7;
  if ( sub_9C7D00((__int64)v3, "lv2", 3u) )
    return 8;
  if ( sub_9C7D00((__int64)v3, "macos", 5u) )
    return 9;
  if ( sub_9C7D00((__int64)v3, "managarm", 8u) )
    return 10;
  if ( sub_9C7D00((__int64)v3, "netbsd", 6u) )
    return 11;
  if ( sub_9C7D00((__int64)v3, "openbsd", 7u) )
    return 12;
  if ( sub_9C7D00((__int64)v3, "solaris", 7u) )
    return 13;
  if ( sub_9C7D00((__int64)v3, "uefi", 4u) )
    return 14;
  if ( sub_9C7D00((__int64)v3, "win32", 5u) || sub_9C7D00((__int64)v3, "windows", 7u) )
    return 15;
  if ( sub_9C7D00((__int64)v3, "zos", 3u) )
    return 16;
  if ( sub_9C7D00((__int64)v3, "haiku", 5u) )
    return 17;
  if ( sub_9C7D00((__int64)v3, "rtems", 5u) )
    return 18;
  if ( sub_9C7D00((__int64)v3, "nacl", 4u) )
    return 19;
  if ( sub_9C7D00((__int64)v3, "aix", 3u) )
    return 20;
  if ( sub_9C7D00((__int64)v3, "cuda", 4u) )
    return 21;
  if ( sub_9C7D00((__int64)v3, "nvcl", 4u) )
    return 22;
  if ( sub_9C7D00((__int64)v3, "amdhsa", 6u) )
    return 23;
  if ( sub_9C7D00((__int64)v3, "ps4", 3u) )
    return 24;
  if ( sub_9C7D00((__int64)v3, "ps5", 3u) )
    return 25;
  if ( sub_9C7D00((__int64)v3, "elfiamcu", 8u) )
    return 26;
  if ( sub_9C7D00((__int64)v3, "tvos", 4u) )
    return 27;
  if ( sub_9C7D00((__int64)v3, "watchos", 7u) )
    return 28;
  if ( sub_9C7D00((__int64)v3, "bridgeos", 8u) )
    return 29;
  if ( sub_9C7D00((__int64)v3, "driverkit", 9u) )
    return 30;
  if ( sub_9C7D00((__int64)v3, "xros", 4u) || sub_9C7D00((__int64)v3, "visionos", 8u) )
    return 31;
  if ( sub_9C7D00((__int64)v3, "mesa3d", 6u) )
    return 32;
  if ( sub_9C7D00((__int64)v3, "amdpal", 6u) )
    return 33;
  if ( sub_9C7D00((__int64)v3, "hermit", 6u) )
    return 34;
  if ( sub_9C7D00((__int64)v3, "hurd", 4u) )
    return 35;
  if ( sub_9C7D00((__int64)v3, "wasi", 4u) )
    return 36;
  if ( sub_9C7D00((__int64)v3, "emscripten", 0xAu) )
    return 37;
  if ( sub_9C7D00((__int64)v3, "shadermodel", 0xBu) )
    return 38;
  if ( sub_9C7D00((__int64)v3, "liteos", 6u) )
    return 39;
  if ( sub_9C7D00((__int64)v3, "serenity", 8u) )
    return 40;
  if ( sub_9C7D00((__int64)v3, "vulkan", 6u) )
    return 41;
  return 0;
}
