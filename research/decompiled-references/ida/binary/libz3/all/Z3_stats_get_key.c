char *__fastcall Z3_stats_get_key(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r12
  char *result; // rax

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29E6A0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a3 < (unsigned int)sub_1817F10(a2 + 24) )
  {
    result = (char *)sub_1817F60(a2 + 24, a3);
    if ( !v4 )
      return result;
LABEL_7:
    byte_1C7EBA0 = 1;
    return result;
  }
  sub_24EA30(a1, 2u, nullptr);
  result = "";
  if ( v4 )
    goto LABEL_7;
  return result;
}

