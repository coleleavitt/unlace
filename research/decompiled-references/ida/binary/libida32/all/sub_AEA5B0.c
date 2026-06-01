const char *__fastcall sub_AEA5B0(__int64 a1)
{
  int v1; // eax
  bool v2; // zf
  const char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  v2 = v1 == 0;
  result = "device_builtin_surface_type";
  if ( !v2 )
    return "__device_builtin_surface_type__";
  return result;
}

