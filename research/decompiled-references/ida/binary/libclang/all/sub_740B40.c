char *__fastcall sub_740B40(__int64 a1)
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
      result = "loop";
      break;
    case 1:
      result = "unroll";
      break;
    case 2:
      result = "nounroll";
      break;
    case 3:
      result = "unroll_and_jam";
      break;
    case 4:
      result = "nounroll_and_jam";
      break;
  }
  return result;
}

