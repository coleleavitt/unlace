char *__fastcall sub_AF2A70(__int64 a1)
{
  int v1; // edx
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "global";
  if ( v1 != 1 )
  {
    result = "__global";
    if ( v1 )
      return "opencl_global";
  }
  return result;
}

