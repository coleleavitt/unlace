__int64 __fastcall sub_21FB520(__int64 *a1, char *a2, size_t a3)
{
  __int64 result; // rax
  size_t v4; // r12
  char *v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  char v9; // bp
  size_t v10; // r14
  char v11; // al
  unsigned __int64 v12; // rbx
  char v13; // r14
  size_t v14; // rax
  size_t v15; // rcx
  char *v16; // r15
  int v17; // eax
  size_t v18; // rax
  int v19; // eax
  unsigned __int64 v20; // rbx
  char *v21; // r15
  char v22; // al
  __int64 v23; // rsi
  size_t v24; // [rsp+8h] [rbp-60h]
  size_t v25; // [rsp+8h] [rbp-60h]
  void *s1; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-50h]
  void *v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-40h]

  s1 = a2;
  v27 = a3;
  if ( a3 <= 2 )
    return 0;
  v4 = a3;
  v6 = a2;
  if ( j__strlen("inf") == a3 && !memcmp(a2, "inf", v4)
    || a3 == j__strlen("INFINITY") && !memcmp(a2, "INFINITY", a3)
    || a3 == j__strlen("+Inf") && !memcmp(a2, "+Inf", a3) )
  {
    sub_21FB4C0((__int64)a1, 0);
    return 1;
  }
  v7 = j__strlen("-");
  v8 = v7;
  if ( a3 < v7 )
    goto LABEL_11;
  if ( v7 )
  {
    if ( memcmp(a2, "-", v7) )
    {
LABEL_11:
      v9 = 0;
      goto LABEL_12;
    }
    v6 = &a2[v8];
    v4 = a3 - v8;
    s1 = &a2[v8];
    v27 = a3 - v8;
    if ( a3 - v8 <= 2 )
      return 0;
  }
  else
  {
    s1 = a2;
    v27 = a3;
  }
  if ( j__strlen("inf") == v4 && !memcmp(v6, "inf", v4)
    || v4 == j__strlen("INFINITY") && !memcmp(v6, "INFINITY", v4)
    || (v9 = 1, v4 == j__strlen("Inf")) && !memcmp(v6, "Inf", v4) )
  {
    sub_21FB4C0((__int64)a1, 1);
    return 1;
  }
LABEL_12:
  v10 = j__strlen("s");
  v11 = sub_2246340(&s1, "s", v10);
  v12 = v27;
  if ( v11 )
  {
    if ( v10 <= v27 )
    {
      v12 = v27 - v10;
      s1 = (char *)s1 + v10;
      v27 = v12;
      if ( v12 > 2 )
      {
        v13 = 1;
        goto LABEL_16;
      }
    }
    return 0;
  }
  v13 = 0;
LABEL_16:
  v14 = j__strlen("nan");
  v15 = v14;
  if ( v14 > v12 || (v16 = (char *)s1, v14) && (v24 = v14, v17 = memcmp(s1, "nan", v14), v15 = v24, v17) )
  {
    v18 = j__strlen("NaN");
    v15 = v18;
    if ( v18 > v12 )
      return 0;
    v16 = (char *)s1;
    if ( v18 )
    {
      v25 = v18;
      v19 = memcmp(s1, "NaN", v18);
      v15 = v25;
      if ( v19 )
        return 0;
    }
  }
  v20 = v12 - v15;
  v21 = &v16[v15];
  s1 = v21;
  v27 = v20;
  if ( !v20 )
  {
    sub_21F9270(a1, v13, v9, nullptr);
    return 1;
  }
  v22 = *v21;
  if ( *v21 == 40 )
  {
    result = 0;
    if ( v20 <= 2 || v21[v20 - 1] != 41 )
      return result;
    v20 -= 2LL;
    s1 = v21 + 1;
    v27 = v20;
    v22 = *++v21;
  }
  v23 = 10;
  if ( v22 == 48 )
  {
    v23 = 8;
    if ( v20 != 1 )
    {
      v23 = 8;
      if ( tolower(v21[1]) == 120 )
      {
        v23 = 16;
        s1 = v21 + 2;
        v27 = v20 - 2;
      }
    }
  }
  v29 = 1;
  v28 = nullptr;
  if ( (unsigned __int8)sub_2248060(&s1, v23) )
  {
    if ( v29 > 0x40 )
    {
      if ( v28 )
        operator delete[](v28);
    }
    return 0;
  }
  sub_21F9270(a1, v13, v9, &v28);
  result = 1;
  if ( v29 > 0x40 && v28 )
  {
    operator delete[](v28);
    return 1;
  }
  return result;
}
