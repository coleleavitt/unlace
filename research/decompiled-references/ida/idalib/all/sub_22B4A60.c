__int64 __fastcall sub_22B4A60(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+14h] [rbp-14h]

  v3[0] = a1;
  v3[1] = a2;
  v5 = 0;
  if ( sub_9C7D00((__int64)v3, "eabihf", 6u) )
    return 16;
  if ( sub_9C7D00((__int64)v3, "eabi", 4u) )
    return 15;
  if ( sub_9C7D00((__int64)v3, "gnuabin32", 9u) )
    return 3;
  if ( sub_9C7D00((__int64)v3, "gnuabi64", 8u) )
    return 4;
  if ( sub_9C7D00((__int64)v3, "gnueabihft64", 0xCu) )
    return 8;
  if ( sub_9C7D00((__int64)v3, "gnueabihf", 9u) )
    return 7;
  if ( sub_9C7D00((__int64)v3, "gnueabit64", 0xAu) )
    return 6;
  if ( sub_9C7D00((__int64)v3, "gnueabi", 7u) )
    return 5;
  if ( sub_9C7D00((__int64)v3, "gnuf32", 6u) )
    return 9;
  if ( sub_9C7D00((__int64)v3, "gnuf64", 6u) )
    return 10;
  if ( sub_9C7D00((__int64)v3, "gnusf", 5u) )
    return 11;
  if ( sub_9C7D00((__int64)v3, "gnux32", 6u) )
    return 12;
  if ( sub_9C7D00((__int64)v3, "gnu_ilp32", 9u) )
    return 13;
  if ( sub_9C7D00((__int64)v3, "code16", 6u) )
    return 14;
  if ( sub_9C7D00((__int64)v3, "gnut64", 6u) )
    return 2;
  if ( sub_9C7D00((__int64)v3, "gnu", 3u) )
    return 1;
  if ( sub_9C7D00((__int64)v3, "android", 7u) )
    return 17;
  if ( sub_9C7D00((__int64)v3, "muslabin32", 0xAu) )
    return 19;
  if ( sub_9C7D00((__int64)v3, "muslabi64", 9u) )
    return 20;
  if ( sub_9C7D00((__int64)v3, "musleabihf", 0xAu) )
    return 22;
  if ( sub_9C7D00((__int64)v3, "musleabi", 8u) )
    return 21;
  if ( sub_9C7D00((__int64)v3, "muslf32", 7u) )
    return 23;
  if ( sub_9C7D00((__int64)v3, "muslsf", 6u) )
    return 24;
  if ( sub_9C7D00((__int64)v3, "muslx32", 7u) )
    return 25;
  if ( sub_9C7D00((__int64)v3, "musl", 4u) )
    return 18;
  if ( sub_9C7D00((__int64)v3, "msvc", 4u) )
    return 27;
  if ( sub_9C7D00((__int64)v3, "itanium", 7u) )
    return 28;
  if ( sub_9C7D00((__int64)v3, "cygnus", 6u) )
    return 29;
  if ( sub_9C7D00((__int64)v3, "coreclr", 7u) )
    return 30;
  if ( sub_9C7D00((__int64)v3, "simulator", 9u) )
    return 31;
  if ( sub_9C7D00((__int64)v3, "macabi", 6u) )
    return 32;
  if ( sub_9C7D00((__int64)v3, "pixel", 5u) )
    return 33;
  if ( sub_9C7D00((__int64)v3, "vertex", 6u) )
    return 34;
  if ( sub_9C7D00((__int64)v3, "geometry", 8u) )
    return 35;
  if ( sub_9C7D00((__int64)v3, "hull", 4u) )
    return 36;
  if ( sub_9C7D00((__int64)v3, "domain", 6u) )
    return 37;
  if ( sub_9C7D00((__int64)v3, "compute", 7u) )
    return 38;
  if ( sub_9C7D00((__int64)v3, "library", 7u) )
    return 39;
  if ( sub_9C7D00((__int64)v3, "raygeneration", 0xDu) )
    return 40;
  if ( sub_9C7D00((__int64)v3, "intersection", 0xCu) )
    return 41;
  if ( sub_9C7D00((__int64)v3, "anyhit", 6u) )
    return 42;
  if ( sub_9C7D00((__int64)v3, "closesthit", 0xAu) )
    return 43;
  if ( sub_9C7D00((__int64)v3, "miss", 4u) )
    return 44;
  if ( sub_9C7D00((__int64)v3, "callable", 8u) )
    return 45;
  if ( sub_9C7D00((__int64)v3, "mesh", 4u) )
    return 46;
  if ( sub_9C7D00((__int64)v3, "amplification", 0xDu) )
    return 47;
  if ( sub_9C7D00((__int64)v3, "opencl", 6u) )
    return 48;
  if ( sub_9C7D00((__int64)v3, "ohos", 4u) )
    return 49;
  if ( sub_9C7D00((__int64)v3, "pauthtest", 9u) )
    return 51;
  if ( sub_9C7D00((__int64)v3, "llvm", 4u) )
    return 26;
  if ( sub_9C7D00((__int64)v3, "mlibc", 5u) )
    return 50;
  return 0;
}
