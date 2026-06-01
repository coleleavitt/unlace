_BOOL8 __fastcall sub_5AF75F(char *a1, int a2)
{
  int v3; // eax
  char v4; // [rsp+13h] [rbp-9h]
  char *v5; // [rsp+14h] [rbp-8h]

  v5 = &a1[a2];
  if ( a2 != 2 )
  {
    if ( a2 <= 2 )
    {
      if ( a2 != 1 )
        return 0;
      return *a1 > -63 && (unsigned __int8)*a1 <= 0xF4u;
    }
    if ( a2 != 3 )
    {
      if ( a2 != 4 )
        return 0;
      if ( *--v5 >= -64 )
        return 0;
    }
    if ( *--v5 >= -64 )
      return 0;
  }
  v4 = *(v5 - 1);
  if ( (unsigned __int8)v4 > 0xBFu )
    return 0;
  v3 = (unsigned __int8)*a1;
  if ( v3 == 237 )
  {
    if ( (unsigned __int8)v4 > 0x9Fu )
      return 0;
    return *a1 > -63 && (unsigned __int8)*a1 <= 0xF4u;
  }
  if ( (unsigned __int8)*a1 > 0xEDu )
  {
    if ( v3 == 240 )
    {
      if ( (unsigned __int8)v4 <= 0x8Fu )
        return 0;
      return *a1 > -63 && (unsigned __int8)*a1 <= 0xF4u;
    }
    if ( v3 == 244 )
    {
      if ( (unsigned __int8)v4 > 0x8Fu )
        return 0;
      return *a1 > -63 && (unsigned __int8)*a1 <= 0xF4u;
    }
  }
  else if ( v3 == 224 )
  {
    if ( (unsigned __int8)v4 <= 0x9Fu )
      return 0;
    return *a1 > -63 && (unsigned __int8)*a1 <= 0xF4u;
  }
  if ( v4 >= 0 )
    return 0;
  return *a1 > -63 && (unsigned __int8)*a1 <= 0xF4u;
}
