__int64 __fastcall sub_2218260(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // rdx
  __int64 result; // rax
  int v4; // edx
  int v5; // eax
  unsigned __int8 v6; // cl

  v2 = &a1[a2];
  if ( a2 == 2 )
    goto LABEL_14;
  if ( a2 <= 2 )
  {
    if ( a2 == 1 )
    {
      v4 = *a1;
      goto LABEL_9;
    }
    return 0;
  }
  if ( a2 != 3 )
  {
    if ( a2 == 4 )
    {
      result = 0;
      if ( (unsigned __int8)(*(v2 - 1) + 0x80) > 0x3Fu )
        return result;
      --v2;
      goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  result = 0;
  if ( (unsigned __int8)(*(v2 - 1) + 0x80) > 0x3Fu )
    return result;
  --v2;
LABEL_14:
  v6 = *(v2 - 1);
  result = 0;
  if ( (unsigned __int8)(v6 + 0x80) > 0x3Fu )
    return result;
  v4 = *a1;
  if ( (_BYTE)v4 == 0xED )
  {
    if ( v6 > 0x9Fu )
      return result;
    goto LABEL_9;
  }
  if ( (unsigned __int8)v4 > 0xEDu )
  {
    if ( (_BYTE)v4 == 0xF0 )
    {
      if ( v6 <= 0x8Fu )
        return result;
    }
    else if ( (_BYTE)v4 == 0xF4 && v6 > 0x8Fu )
    {
      return result;
    }
LABEL_9:
    v5 = v4 - 128;
    LOBYTE(v5) = (unsigned __int8)(v4 + 0x80) <= 0x41u;
    LOBYTE(v4) = (unsigned __int8)v4 > 0xF4u;
    return (v4 | v5) ^ 1u;
  }
  if ( (_BYTE)v4 != 0xE0 || v6 > 0x9Fu )
    goto LABEL_9;
  return result;
}
