__int64 __fastcall sub_22189B0(unsigned __int8 **a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  unsigned __int8 *v5; // rdx
  bool v6; // cc
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // rax

  v2 = *a1;
  if ( a2 == *a1 )
    return 1;
  v3 = *v2;
  v4 = byte_26F8360[v3] + 1;
  if ( a2 - v2 < v4 )
    return 0;
  v5 = &v2[v4];
  v6 = v4 <= 2;
  if ( byte_26F8360[v3] == 1 )
    goto LABEL_15;
LABEL_4:
  if ( v6 )
  {
    if ( v4 != 1 )
      return 0;
LABEL_10:
    if ( (unsigned __int8)(v3 + 0x80) <= 0x41u || (unsigned __int8)v3 > 0xF4u )
      return 0;
LABEL_12:
    *a1 = v5;
    if ( a2 != v5 )
    {
      while ( 1 )
      {
        v3 = *v5;
        v4 = byte_26F8360[v3] + 1;
        if ( v4 > a2 - v5 )
          return 0;
        v5 += v4;
        v6 = v4 <= 2;
        if ( byte_26F8360[v3] != 1 )
          goto LABEL_4;
LABEL_15:
        v8 = *(v5 - 1);
        if ( (unsigned __int8)(v8 + 0x80) > 0x3Fu )
          return 0;
LABEL_16:
        if ( (_BYTE)v3 == 0xED )
        {
          if ( v8 <= 0x9Fu )
            goto LABEL_12;
          return 0;
        }
        if ( (unsigned __int8)v3 <= 0xEDu )
        {
          if ( (_BYTE)v3 != 0xE0 )
            goto LABEL_10;
          if ( v8 > 0x9Fu )
            goto LABEL_12;
          return 0;
        }
        if ( (_BYTE)v3 == 0xF0 )
        {
          if ( v8 > 0x8Fu )
            goto LABEL_12;
          return 0;
        }
        if ( (_BYTE)v3 != 0xF4 )
          goto LABEL_10;
        if ( v8 > 0x8Fu )
          return 0;
        *a1 = v5;
        if ( a2 == v5 )
          return 1;
      }
    }
    return 1;
  }
  if ( v4 == 3 )
  {
    v9 = v5;
  }
  else
  {
    if ( v4 != 4 || (unsigned __int8)(*(v5 - 1) + 0x80) > 0x3Fu )
      return 0;
    v9 = v5 - 1;
  }
  if ( (unsigned __int8)(*(v9 - 1) + 0x80) > 0x3Fu )
    return 0;
  v8 = *(v9 - 2);
  if ( (unsigned __int8)(v8 + 0x80) <= 0x3Fu )
    goto LABEL_16;
  return 0;
}
