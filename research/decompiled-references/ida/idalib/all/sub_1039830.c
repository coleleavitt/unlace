char *__fastcall sub_1039830(__int64 a1)
{
  int v1; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 248);
  if ( v1 == 38 )
  {
    v3 = *(_DWORD *)(a1 + 512);
    if ( v3 > 8 )
    {
      j__strlen("avx512");
      return "avx512";
    }
    else
    {
      if ( v3 <= 6 )
        return (char *)&byte_22F0C30;
      j__strlen("avx");
      return "avx";
    }
  }
  else
  {
    if ( v1 != 37 || *(_BYTE *)(a1 + 516) )
      return (char *)&byte_22F0C30;
    j__strlen("no-mmx");
    return "no-mmx";
  }
}
