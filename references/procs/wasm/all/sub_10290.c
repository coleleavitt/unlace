__int64 __fastcall sub_10290(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char next_byte; // al
  unsigned __int64 v4; // rdx

  v2 = 0;
  *a2 = 0;
  while ( 1 )
  {
    next_byte = insn_get_next_byte(a1);
    v4 = *a2 | ((unsigned __int64)(next_byte & 0x7F) << (7 * (unsigned __int8)v2));
    *a2 = v4;
    if ( next_byte >= 0 )
      break;
    if ( ++v2 == 10 )
      goto LABEL_4;
  }
  if ( v2 == 9 )
  {
    if ( (next_byte & 0xFE) == 0x7E )
    {
      if ( (next_byte & 1) != 0 )
        return 10;
    }
    else if ( (next_byte & 1) != 0 )
    {
      goto LABEL_4;
    }
    if ( (next_byte & 0xFE) == 0 )
      return 10;
LABEL_4:
    *a2 = 0;
    return 0;
  }
  *a2 = (__int64)(v4 << (57 - 7 * (unsigned __int8)v2)) >> (57 - 7 * (unsigned __int8)v2);
  return v2 + 1;
}
