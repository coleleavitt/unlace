unsigned __int64 __fastcall sub_4B40E0(
        const char *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  __int16 v10; // ax
  const char *v11; // rsi
  unsigned int v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8
  unsigned int v15; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char *v18; // rsi
  const char *v19; // rsi
  unsigned int token; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  double v23; // xmm4_8
  double v24; // xmm5_8
  const char *v26; // rax
  double v27; // xmm4_8
  double v28; // xmm5_8
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int128 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  __int64 vars20; // [rsp+28h] [rbp+20h]
  __int128 vars28; // [rsp+30h] [rbp+28h]
  __int64 vars38; // [rsp+40h] [rbp+38h] BYREF
  __int128 vars40; // [rsp+48h] [rbp+40h]
  __int64 vars50; // [rsp+58h] [rbp+50h]
  __int64 vars58; // [rsp+60h] [rbp+58h]
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int128 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars78; // [rsp+80h] [rbp+78h] BYREF
  __int128 vars80; // [rsp+88h] [rbp+80h]
  __int64 vars90; // [rsp+98h] [rbp+90h]
  __int64 vars98; // [rsp+A0h] [rbp+98h]
  __int64 varsA0; // [rsp+A8h] [rbp+A0h]
  __int128 varsA8; // [rsp+B0h] [rbp+A8h]
  unsigned __int64 varsC0; // [rsp+C8h] [rbp+C0h]
  __int128 *varsD8; // [rsp+E0h] [rbp+D8h]

  v9 = 0;
  varsD8 = &vars0;
  varsC0 = __readfsqword(0x28u);
  vars10 = 0;
  vars18 = 0;
  vars20 = 0;
  vars38 = 0;
  vars50 = 0;
  vars58 = 0;
  vars60 = 0;
  vars0 = 0;
  vars28 = 0;
  vars40 = 0;
  vars68 = 0;
  while ( 1 )
  {
    v19 = (const char *)&vars0;
    token = lex_get_token(a1, &vars0, 0);
    if ( token )
      break;
    v10 = vars10;
    if ( (_WORD)vars10 == 1 )
      goto LABEL_18;
LABEL_3:
    if ( v10 != 4 )
      sub_4B0C20((__int64)a1, "Illegal configuration keyword", 0, v9, (__m128)0LL, a4, a5, v21, v22, a8, a9);
    a4 = 0;
    v9 = 0;
    v11 = (const char *)&vars78;
    vars78 = 0;
    vars90 = 0;
    vars98 = 0;
    varsA0 = 0;
    vars80 = 0;
    varsA8 = 0;
    v12 = lex_get_token(a1, &vars78, 0);
    if ( v12 )
    {
      v11 = (const char *)qstrerror(v12);
      sub_4B0C20((__int64)a1, v11, 1, (__m128)0LL, (__m128)0LL, (__m128)0LL, a5, v29, v30, a8, a9);
    }
    if ( (_WORD)vars90 != 61 )
    {
      v11 = "An '=' sign is expected";
      sub_4B0C20((__int64)a1, "An '=' sign is expected", 1, (__m128)0LL, (__m128)0LL, (__m128)0LL, a5, v13, v14, a8, a9);
    }
    if ( vars78 )
    {
      *(_QWORD *)&vars80 = 0;
      *(double *)v9.m128_u64 = qfree(vars78, v11);
    }
    v15 = lex_get_token(a1, &vars38, 0);
    if ( v15 )
    {
      v26 = (const char *)qstrerror(v15);
      sub_4B0C20((__int64)a1, v26, 1, v9, (__m128)0LL, (__m128)0LL, a5, v27, v28, a8, a9);
    }
    v18 = &s1;
    if ( (_QWORD)vars0 )
      v18 = nullptr;
    sub_4B3E70(a1, v18, (__int64)&vars38, 1u, *(double *)v9.m128_u64, (__m128)0LL, (__m128)0LL, a5, v16, v17, a8, a9);
  }
  v19 = (const char *)qstrerror(token);
  sub_4B0C20((__int64)a1, v19, 1, v9, (__m128)0LL, a4, a5, v23, v24, a8, a9);
  v10 = vars10;
  if ( (_WORD)vars10 != 1 )
    goto LABEL_3;
LABEL_18:
  if ( vars38 )
  {
    *(_QWORD *)&vars40 = 0;
    qfree(vars38, v19);
  }
  return varsC0 - __readfsqword(0x28u);
}
