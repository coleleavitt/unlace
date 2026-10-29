__int64 __fastcall sub_141BB60(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        void *s2,
        __int64 a8,
        void *a9,
        __int64 a10,
        const void *a11,
        __int64 a12)
{
  void *v12; // r10
  size_t v14; // rbp
  const void *v15; // r11
  char v16; // al
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void *s1; // [rsp+0h] [rbp-58h]
  void *s1a; // [rsp+0h] [rbp-58h]
  void *s1b; // [rsp+0h] [rbp-58h]
  void *v24; // [rsp+8h] [rbp-50h]
  void *v25; // [rsp+8h] [rbp-50h]
  const void *v26; // [rsp+18h] [rbp-40h]

  v12 = a9;
  if ( *(_BYTE *)(a1 + 17) )
    goto LABEL_2;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(const void **)a1;
  if ( v14 == a4 )
  {
    s1 = a5;
    if ( !v14 )
      goto LABEL_7;
    v26 = *(const void **)a1;
    v17 = memcmp(v15, a3, v14);
    v15 = v26;
    a5 = s1;
    v12 = a9;
    if ( !v17 )
      goto LABEL_7;
    if ( v14 == a6 )
      goto LABEL_16;
  }
  else if ( v14 == a6 )
  {
    if ( !v14 )
    {
LABEL_7:
      v16 = *a2;
      *(_BYTE *)(a1 + 17) = 1;
      *(_BYTE *)(a1 + 16) = v16;
      return a1;
    }
LABEL_16:
    v25 = v12;
    s1b = (void *)v15;
    v19 = memcmp(v15, a5, v14);
    v15 = s1b;
    v12 = v25;
    if ( !v19 )
      goto LABEL_7;
    if ( v14 != a8 )
      goto LABEL_18;
    goto LABEL_13;
  }
  if ( v14 != a8 )
  {
LABEL_18:
    if ( v14 != a10 )
      goto LABEL_2;
    if ( !v14 )
      goto LABEL_7;
    goto LABEL_20;
  }
  if ( !v14 )
    goto LABEL_7;
LABEL_13:
  v24 = v12;
  s1a = (void *)v15;
  v18 = memcmp(v15, s2, v14);
  v15 = s1a;
  v12 = v24;
  if ( !v18 )
    goto LABEL_7;
  if ( v14 == a10 )
  {
LABEL_20:
    if ( !memcmp(v15, v12, v14) )
      goto LABEL_7;
  }
LABEL_2:
  sub_B7E0A0(a1, a2, a11, a12);
  return a1;
}
