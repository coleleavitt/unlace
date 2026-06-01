__int64 *__fastcall sub_643500(__int64 *a1, __int64 a2)
{
  char v2; // al
  char *v3; // rdx
  char v5[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = (*(_BYTE *)(a2 + 29) >> 5) & 3;
  if ( v2 == 1 )
  {
    v3 = &v5[9];
    strcpy(v5, "protected");
    *a1 = (__int64)(a1 + 2);
  }
  else
  {
    if ( v2 == 2 )
    {
      v3 = &v5[7];
      strcpy(v5, "private");
    }
    else
    {
      v3 = &v5[6];
      strcpy(v5, "public");
    }
    *a1 = (__int64)(a1 + 2);
  }
  sub_63E170(a1, v5, (__int64)v3);
  return a1;
}

