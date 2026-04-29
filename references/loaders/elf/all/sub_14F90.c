const char *__fastcall sub_14F90(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // eax
  const char *result; // rax
  bool v5; // zf
  char v6; // al

  v3 = *a2 & 0xFF0000;
  if ( v3 == 9568256 )
  {
    v6 = getinf_flag(3, 32);
    *(_BYTE *)(a1 + 390) = 0;
    v5 = v6 == 0;
    result = "r5900l";
    if ( !v5 )
      return "r5900b";
  }
  else if ( v3 > 0x920000 )
  {
    v5 = v3 == 10616832;
    result = "psp";
    if ( !v5 )
      return (const char *)a3;
  }
  else if ( ((v3 - 9109504) & 0xFFFD0000) == 0 || v3 == 9306112 )
  {
    v5 = (unsigned __int8)getinf_flag(3, 32) == 0;
    result = "octeonl";
    if ( !v5 )
      return "octeonb";
  }
  else
  {
    return (const char *)a3;
  }
  return result;
}
