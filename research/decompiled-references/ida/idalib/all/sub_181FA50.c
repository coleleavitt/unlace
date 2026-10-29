void __fastcall sub_181FA50(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  size_t v6; // rax
  size_t v7; // rbp
  void *v8; // r14
  void *v9; // r14
  size_t v10; // rbp
  __m128i *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // [rsp+Ch] [rbp-DCh] BYREF
  void *s1; // [rsp+10h] [rbp-D8h] BYREF
  size_t n; // [rsp+18h] [rbp-D0h]
  _BYTE v19[200]; // [rsp+20h] [rbp-C8h] BYREF

  s1 = nullptr;
  n = 0;
  v16 = 0;
  if ( (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &s1, &v16, a4, a5) )
  {
    v6 = j__strlen("global-dynamic");
    v7 = n;
    v8 = s1;
    if ( n == v6 )
    {
      if ( !n || !memcmp(s1, "global-dynamic", n) )
        goto LABEL_14;
      if ( v7 != j__strlen("local-dynamic") )
        goto LABEL_10;
    }
    else
    {
      if ( v7 != j__strlen("local-dynamic") )
      {
        if ( v7 == j__strlen("initial-exec") )
        {
          if ( !v7 )
            goto LABEL_14;
LABEL_11:
          if ( memcmp(v8, "initial-exec", v7) )
          {
            if ( v7 == j__strlen("local-exec") )
              goto LABEL_13;
            goto LABEL_21;
          }
LABEL_14:
          v9 = s1;
          v10 = n;
          v11 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
          sub_B30180(v11, *(_QWORD *)(a1 + 248), a3, v9, v10);
          sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
          return;
        }
LABEL_18:
        if ( v7 == j__strlen("local-exec") )
        {
          if ( !v7 )
            goto LABEL_14;
LABEL_13:
          if ( !memcmp(v8, "local-exec", v7) )
            goto LABEL_14;
        }
LABEL_21:
        sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), v16, 0xC4Bu, 0);
        sub_15F7200(v19);
        return;
      }
      if ( !v7 )
        goto LABEL_14;
    }
    if ( !memcmp(v8, "local-dynamic", v7) )
      goto LABEL_14;
LABEL_10:
    if ( v7 == j__strlen("initial-exec") )
      goto LABEL_11;
    goto LABEL_18;
  }
}
