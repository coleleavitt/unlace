char *__fastcall sub_3BB450(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned __int8 v3; // r12
  int v5; // ebx
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char v9; // dl

  qstrncpy(haystack, a1, 1024);
  v2 = *(_BYTE *)(a2 + 52);
  v3 = v2 & 0x60;
  if ( (v2 & 0x60) == 0x20 )
  {
    v7 = strstr(haystack, ":N");
    if ( v7 )
    {
      v7[1] = 72;
      return haystack;
    }
    return haystack;
  }
  if ( v3 <= 0x20u )
  {
    v5 = *(_DWORD *)(a2 + 48);
    v6 = strstr(haystack, ":N");
    if ( (v5 & 0x200) != 0 )
    {
      if ( v6 )
        v6[1] = (v5 & 0x400) == 0 ? 89 : 115;
    }
    else if ( (v5 & 0x100) != 0 )
    {
      if ( v6 )
        v6[1] = (v5 & 0x400) == 0 ? 79 : 111;
    }
    else if ( v6 && (v5 & 0x400) != 0 )
    {
      v6[1] = 110;
    }
    return haystack;
  }
  if ( (v2 & 0x40) == 0 )
    return haystack;
  v8 = strstr(haystack, ":N");
  if ( !v8 )
    return haystack;
  v9 = 68;
  if ( v3 == 96 )
    v9 = 117;
  v8[1] = v9;
  return haystack;
}
