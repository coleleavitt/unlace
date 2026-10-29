const char *__fastcall sub_AF28A0(__int64 a1)
{
  int v1; // eax
  const char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v1 )
  {
    case 0:
      result = "__read_only";
      break;
    case 1:
      result = "read_only";
      break;
    case 2:
      result = "__write_only";
      break;
    case 3:
      result = "write_only";
      break;
    case 4:
      result = "__read_write";
      break;
    case 5:
      result = "read_write";
      break;
  }
  return result;
}

