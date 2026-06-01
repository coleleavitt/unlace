const char *__fastcall sub_B7C50(__int64 a1)
{
  int v1; // edx
  const char *v2; // rbx
  char v4[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = getinf();
  if ( !v1 )
    v1 = *(unsigned __int8 *)(a1 + 81);
  v2 = "linux";
  if ( v1 != 18 )
  {
    if ( v1 == 25 )
      return "macosx";
    v2 = "win32";
    if ( v1 == 11 )
      return v2;
    v2 = nullptr;
    if ( get_loader_name() <= 0 )
      return v2;
    if ( strcasecmp(v4, "macho") )
      return "macosx";
    if ( strcasecmp(v4, "epoc") )
      return "epoc";
  }
  return v2;
}

