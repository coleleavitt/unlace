__int64 __fastcall sub_22187D0(unsigned __int8 *a1, __int64 a2)
{
  int v2; // ecx
  __int64 result; // rax
  int v4; // edx
  unsigned __int8 *v5; // rdi
  int v6; // eax

  v2 = *a1;
  result = 0;
  v4 = byte_26F8360[*a1] + 1;
  if ( v4 <= a2 - (__int64)a1 )
  {
    v5 = &a1[v4];
    if ( v4 != 2 )
    {
      if ( v4 <= 2 )
      {
        if ( v4 != 1 )
          return result;
        goto LABEL_13;
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
    v4 = *(v5 - 1);
    result = 0;
    if ( (unsigned __int8)(v4 + 0x80) > 0x3Fu )
      return result;
    if ( (_BYTE)v2 == 0xED )
    {
      if ( (unsigned __int8)v4 > 0x9Fu )
        return result;
      goto LABEL_13;
    }
    if ( (unsigned __int8)v2 > 0xEDu )
    {
      if ( (_BYTE)v2 == 0xF0 )
      {
        if ( (unsigned __int8)v4 <= 0x8Fu )
          return result;
      }
      else if ( (_BYTE)v2 == 0xF4 && (unsigned __int8)v4 > 0x8Fu )
      {
        return result;
      }
LABEL_13:
      v6 = v2 - 128;
      LOBYTE(v6) = (unsigned __int8)(v2 + 0x80) <= 0x41u;
      LOBYTE(v4) = (unsigned __int8)v2 > 0xF4u;
      return (v4 | v6) ^ 1u;
    }
    if ( (_BYTE)v2 != 0xE0 || (unsigned __int8)v4 > 0x9Fu )
      goto LABEL_13;
  }
  return result;
}
