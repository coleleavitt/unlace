__int64 __fastcall sub_22188B0(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v2; // r8
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 *v5; // rdi
  unsigned __int8 v6; // cl

  v2 = *a1;
  result = 0;
  v4 = byte_26F8360[*a1] + 1;
  if ( (int)v4 <= a2 - (__int64)a1 )
  {
    v5 = &a1[v4];
    if ( v4 != 2 )
    {
      if ( (int)v4 <= 2 )
      {
        if ( v4 != 1 )
          return result;
        goto LABEL_9;
      }
      if ( v4 != 3 )
      {
        if ( v4 != 4 || (unsigned __int8)(*(v5 - 1) + 0x80) > 0x3Fu )
          return result;
        --v5;
      }
      result = 0;
      if ( (unsigned __int8)(*(v5 - 1) + 0x80) > 0x3Fu )
        return result;
      --v5;
    }
    v6 = *(v5 - 1);
    result = 0;
    if ( (unsigned __int8)(v6 + 0x80) > 0x3Fu )
      return result;
    if ( v2 == 0xED )
    {
      if ( v6 > 0x9Fu )
        return result;
      return v4;
    }
    if ( v2 > 0xEDu )
    {
      if ( v2 != 0xF0 )
      {
        if ( v2 == 0xF4 )
        {
          if ( v6 > 0x8Fu )
            return result;
          return v4;
        }
        goto LABEL_9;
      }
      if ( v6 <= 0x8Fu )
        return result;
      return v4;
    }
    if ( v2 == 0xE0 )
    {
      if ( v6 <= 0x9Fu )
        return result;
      return v4;
    }
LABEL_9:
    if ( (unsigned __int8)(v2 + 0x80) <= 0x41u || v2 > 0xF4u )
      return 0;
    return v4;
  }
  return result;
}
