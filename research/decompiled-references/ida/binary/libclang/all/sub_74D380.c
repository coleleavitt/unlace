char *__fastcall sub_74D380(__int64 a1)
{
  int v1; // eax
  char *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
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

