unsigned __int64 sub_38E170()
{
  int v0; // r9d
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  void *ptr; // [rsp+0h] [rbp-1038h]
  _BYTE v7[4104]; // [rsp+20h] [rbp-1018h] BYREF
  unsigned __int64 v8; // [rsp+1028h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  if ( (unsigned __int8)qgetenv("IDADIR") )
  {
    qmakepath((unsigned int)v7, 4096, (unsigned int)haystack, (unsigned int)"ida.hlp", 0, v0, 0);
    if ( !(unsigned __int8)qfileexist(v7, 4096) )
      sub_780C20(
        (unsigned int)"Environment variable IDADIR is defined, but the directory it references does not exist or contains"
                      " a broken or incomplete installation.\n"
                      "Current value: %s\n"
                      "Startup has been aborted.\n"
                      "Fix the configuration and restart IDA.",
        (unsigned int)haystack,
        v1,
        v2,
        v3,
        v4);
  }
  if ( ptr )
    qfree(ptr);
  return v8 - __readfsqword(0x28u);
}
