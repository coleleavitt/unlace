__int64 __fastcall sub_141B320(_QWORD *a1, __int64 a2, int a3, _BYTE *a4, __m128i a5, double a6)
{
  __int16 v8; // ax
  __int64 v10; // rsi
  int v11; // edx
  int v12; // ecx
  __int64 v14; // rbx
  int v16; // r14d
  __int64 *v17; // rdi
  size_t v18; // r14
  char *v19; // rcx
  int v20; // eax
  size_t v21; // rax
  unsigned int *v22; // r13
  __int64 v23; // r14
  char *v24; // rax
  char *v25; // r13
  char *s1; // [rsp+0h] [rbp-98h]
  char *s1a; // [rsp+0h] [rbp-98h]
  char *s[17]; // [rsp+10h] [rbp-88h] BYREF

  v8 = *(_WORD *)(a2 + 16);
  if ( v8 == 2 )
  {
    v10 = a1[6];
    v11 = *(_DWORD *)a2;
    v12 = 1156;
    goto LABEL_5;
  }
  if ( (unsigned __int16)(v8 - 7) <= 0xCu || v8 == 1 || (v14 = *(_QWORD *)(a2 + 8)) == 0 )
  {
    v10 = a1[6];
    v11 = *(_DWORD *)a2;
    v12 = 1153;
LABEL_5:
    sub_FC70B0((__int64)s, v10, v11, v12);
    sub_AEA040((__int64)s);
    return 1;
  }
  if ( (*(_BYTE *)(v14 + 3) & 0x40) != 0 )
  {
    sub_FC70B0((__int64)s, a1[6], *(_DWORD *)a2, ((*(char *)a1[7] >> 31) & 0x54) + 1165);
    sub_AE9DF0((unsigned __int8 **)s, v14, 5u);
    sub_AE9DF0((unsigned __int8 **)s, *(unsigned __int16 *)(a2 + 16), 4u);
    sub_AEA040((__int64)s);
  }
  if ( a3 && (unsigned int)sub_FDE240(v14) == 9 )
  {
    v10 = a1[6];
    v11 = *(_DWORD *)a2;
    v12 = 1030;
    goto LABEL_5;
  }
  v16 = *(_DWORD *)a2;
  if ( a4 )
    *a4 = 0;
  v17 = (__int64 *)a1[11];
  if ( v16 )
  {
    v20 = sub_1021680((__int64)v17, v16);
    if ( v20 && v20 != 3 )
      return 0;
    v17 = (__int64 *)a1[11];
  }
  sub_1022900((__int64)s, v17, v16, 1);
  if ( !s[0] )
    goto LABEL_26;
  s1 = s[0];
  v18 = j__strlen(s[0]);
  if ( v18 == j__strlen("<built-in>") )
  {
    if ( !v18 || !memcmp(s1, "<built-in>", v18) )
      return 0;
    v21 = j__strlen("<command line>");
    v19 = s1;
    if ( v18 != v21 )
      goto LABEL_26;
  }
  else
  {
    if ( v18 != j__strlen("<command line>") )
      goto LABEL_26;
    v19 = s1;
    if ( !v18 )
      return 0;
  }
  if ( !memcmp(v19, "<command line>", v18) )
    return 0;
LABEL_26:
  if ( a3 != 1 )
  {
    if ( a3 != 2 )
      return 0;
    if ( (unsigned int)sub_FDE0D0(v14, a1[7]) <= 2 )
      goto LABEL_29;
LABEL_35:
    sub_FC70B0((__int64)s, a1[6], *(_DWORD *)a2, 1384);
    sub_AEA040((__int64)s);
    return 0;
  }
  v22 = *(unsigned int **)(v14 + 16);
  v23 = a1[7];
  v24 = (char *)*v22;
  v25 = (char *)(v22 + 4);
  s1a = v24;
  if ( (unsigned int)sub_FDE0D0(v14, v23) > 2 )
  {
    s[0] = v25;
    s[1] = s1a;
    if ( sub_141B210((__int64)&off_2BB2BB0[-58], (__int64)off_2BB2BB0, (__int64)s) )
      return 0;
    goto LABEL_35;
  }
  if ( sub_FDE0B0((_WORD *)v14, v23) )
  {
LABEL_43:
    if ( !a4 )
      return 0;
    *a4 = 1;
    return 0;
  }
  if ( (*(_BYTE *)(v23 + 1) & 0x10) != 0 )
  {
    if ( s1a == (char *)j__strlen("override") )
    {
      if ( !s1a || !memcmp(v25, "override", (size_t)s1a) )
        goto LABEL_43;
      if ( (char *)j__strlen("final") != s1a )
        goto LABEL_29;
    }
    else
    {
      if ( s1a != (char *)j__strlen("final") )
        goto LABEL_29;
      if ( !s1a )
        goto LABEL_43;
    }
    if ( !memcmp(v25, "final", (size_t)s1a) )
      goto LABEL_43;
  }
LABEL_29:
  if ( !sub_141A2D0(a1, v14, a5, a6) )
    return 0;
  sub_FC70B0((__int64)s, a1[6], *(_DWORD *)a2, 1383);
  sub_AEC220((unsigned __int8 **)s, (_BYTE *)(*(_QWORD *)(v14 + 16) + 16LL), **(unsigned int **)(v14 + 16));
  sub_AEA040((__int64)s);
  return 0;
}
