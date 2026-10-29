int __fastcall sub_51DBC0(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  const char **v6; // rdx
  const char **v7; // rsi
  int result; // eax
  __int64 v9; // rdx
  __int64 v11; // rdi
  char v12; // bl
  unsigned int v13; // r13d
  unsigned int v14; // eax
  char *v15; // rdi
  char *v16; // rbx
  unsigned int v17; // edx
  int v18; // [rsp+Ch] [rbp-6Ch]
  int v19; // [rsp+Ch] [rbp-6Ch]
  char *s1; // [rsp+10h] [rbp-68h] BYREF
  __int128 v21; // [rsp+18h] [rbp-60h]
  char *s2; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v6 = **(const char ****)(a2 + 32);
  v7 = **(const char ****)(a3 + 32);
  if ( v6 == v7 )
  {
    v9 = *a1;
    s1 = nullptr;
    v11 = *(_QWORD *)(v9 + 1480);
    s2 = nullptr;
    v12 = (a4 & 0x20) == 0;
    v21 = 0;
    v23 = 0;
    v13 = sub_51BA00(v11, (__int64 *)&s1, a2, v12);
    v14 = sub_51BA00(*(_QWORD *)(*a1 + 1480), (__int64 *)&s2, a3, v12);
    v15 = s1;
    v16 = s2;
    v17 = v14;
    if ( v13 && v14 )
    {
      result = 0;
      if ( v13 != v17 )
        result = v13 < v17 ? -1 : 1;
LABEL_10:
      if ( !s2 )
        goto LABEL_11;
      goto LABEL_17;
    }
    if ( s1 && s2 )
    {
      result = strcmp(s1, s2);
    }
    else
    {
      if ( v13 )
      {
        result = -1;
        goto LABEL_10;
      }
      if ( v14 )
      {
        result = 1;
        goto LABEL_10;
      }
      result = -1;
      if ( s1 )
        goto LABEL_12;
      if ( !s2 )
      {
        if ( !under_debugger )
          interr(1064);
LABEL_30:
        BUG();
      }
      result = 1;
    }
LABEL_17:
    v19 = result;
    *(_QWORD *)&v23 = 0;
    qfree(v16);
    v15 = s1;
    result = v19;
LABEL_11:
    if ( !v15 )
      return result;
LABEL_12:
    v18 = result;
    *(_QWORD *)&v21 = 0;
    qfree(v15);
    return v18;
  }
  if ( !v6 )
    return -1;
  if ( !v7 )
    return 1;
  result = strcmp(*v6, *v7);
  if ( !result )
  {
    if ( !under_debugger )
      interr(1220);
    goto LABEL_30;
  }
  return result;
}

