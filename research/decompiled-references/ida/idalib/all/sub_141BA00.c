__int64 __fastcall sub_141BA00(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        void *s2,
        __int64 a8,
        void *a9,
        __int64 a10)
{
  void *v10; // r10
  size_t v11; // rbp
  const void *v12; // r11
  char v13; // al
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *s1; // [rsp+0h] [rbp-58h]
  void *s1a; // [rsp+0h] [rbp-58h]
  void *s1b; // [rsp+0h] [rbp-58h]
  void *v22; // [rsp+8h] [rbp-50h]
  void *v23; // [rsp+8h] [rbp-50h]
  const void *v24; // [rsp+18h] [rbp-40h]

  v10 = a9;
  if ( !*(_BYTE *)(a1 + 17) )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(const void **)a1;
    if ( v11 == a4 )
    {
      s1 = a5;
      if ( !v11 )
        goto LABEL_5;
      v24 = *(const void **)a1;
      v15 = memcmp(v12, a3, v11);
      v12 = v24;
      a5 = s1;
      v10 = a9;
      if ( !v15 )
        goto LABEL_5;
      if ( v11 == a6 )
        goto LABEL_15;
    }
    else if ( v11 == a6 )
    {
      if ( !v11 )
      {
LABEL_5:
        v13 = *a2;
        *(_BYTE *)(a1 + 17) = 1;
        *(_BYTE *)(a1 + 16) = v13;
        return a1;
      }
LABEL_15:
      v23 = v10;
      s1b = (void *)v12;
      v17 = memcmp(v12, a5, v11);
      v12 = s1b;
      v10 = v23;
      if ( !v17 )
        goto LABEL_5;
      if ( v11 != a8 )
        goto LABEL_17;
      goto LABEL_12;
    }
    if ( v11 != a8 )
    {
LABEL_17:
      if ( v11 != a10 )
        return a1;
      if ( !v11 )
        goto LABEL_5;
      goto LABEL_19;
    }
    if ( !v11 )
      goto LABEL_5;
LABEL_12:
    v22 = v10;
    s1a = (void *)v12;
    v16 = memcmp(v12, s2, v11);
    v12 = s1a;
    v10 = v22;
    if ( !v16 )
      goto LABEL_5;
    if ( v11 != a10 )
      return a1;
LABEL_19:
    if ( memcmp(v12, v10, v11) )
      return a1;
    goto LABEL_5;
  }
  return a1;
}
