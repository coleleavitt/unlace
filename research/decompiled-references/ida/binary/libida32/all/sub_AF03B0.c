char *__fastcall sub_AF03B0(__int64 a1)
{
  int v1; // eax
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v1 )
  {
    case 0:
      result = "loop";
      break;
    case 1:
      result = (char *)"unroll";
      break;
    case 2:
      result = (char *)"nounroll";
      break;
    case 3:
      result = (char *)"unroll_and_jam";
      break;
    case 4:
      result = (char *)"nounroll_and_jam";
      break;
  }
  return result;
}

