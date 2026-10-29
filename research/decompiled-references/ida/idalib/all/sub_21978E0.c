const char *__fastcall sub_21978E0(_DWORD *a1)
{
  unsigned int v1; // ebx
  bool (__fastcall *v2)(__int64); // rax
  const char *result; // rax

  v1 = a1[13];
  v2 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v2 == sub_2195C40 )
  {
    if ( (unsigned int)(a1[2] - 19) <= 1 )
      goto LABEL_3;
LABEL_9:
    if ( v1 == 12 )
    {
      j__strlen("Mach-O arm");
      return "Mach-O arm";
    }
    if ( v1 <= 0xC )
    {
      if ( v1 == 7 )
      {
        j__strlen("Mach-O 32-bit i386");
        return "Mach-O 32-bit i386";
      }
    }
    else
    {
      if ( v1 == 18 )
      {
        j__strlen("Mach-O 32-bit ppc");
        return "Mach-O 32-bit ppc";
      }
      if ( v1 == 33554444 )
      {
        j__strlen("Mach-O arm64 (ILP32)");
        return "Mach-O arm64 (ILP32)";
      }
    }
    j__strlen("Mach-O 32-bit unknown");
    return "Mach-O 32-bit unknown";
  }
  if ( !((unsigned __int8 (*)(void))v2)() )
    goto LABEL_9;
LABEL_3:
  if ( v1 == 16777228 )
    return "Mach-O arm64";
  if ( v1 == (_DWORD)&loc_1000012 )
    return "Mach-O 64-bit ppc64";
  result = "Mach-O 64-bit unknown";
  if ( v1 == (_DWORD)&loc_1000007 )
    return "Mach-O 64-bit x86-64";
  return result;
}
