__int64 __fastcall sub_1A0D9D0(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        const void *a5,
        __int64 a6,
        void *s2,
        __int64 a8)
{
  size_t v8; // rbp
  const void *v9; // r15
  char v10; // al
  int v12; // eax
  const void *v13; // [rsp+0h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 17) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(const void **)a1;
    if ( v8 == a4 )
    {
      v13 = a5;
      if ( !v8 )
        goto LABEL_5;
      v12 = memcmp(v9, a3, v8);
      a5 = v13;
      if ( !v12 )
        goto LABEL_5;
      if ( v8 == a6 )
      {
LABEL_13:
        if ( !memcmp(v9, a5, v8) )
          goto LABEL_5;
        if ( v8 != a8 )
          return a1;
LABEL_15:
        if ( memcmp(v9, s2, v8) )
          return a1;
        goto LABEL_5;
      }
    }
    else if ( v8 == a6 )
    {
      if ( !v8 )
      {
LABEL_5:
        v10 = *a2;
        *(_BYTE *)(a1 + 17) = 1;
        *(_BYTE *)(a1 + 16) = v10;
        return a1;
      }
      goto LABEL_13;
    }
    if ( v8 != a8 )
      return a1;
    if ( !v8 )
      goto LABEL_5;
    goto LABEL_15;
  }
  return a1;
}
