const char *__fastcall sub_731280(__int64 a1)
{
  int v1; // eax
  bool v2; // zf
  const char *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = v1 == 0;
  result = "device_builtin_surface_type";
  if ( !v2 )
    return "__device_builtin_surface_type__";
  return result;
}

