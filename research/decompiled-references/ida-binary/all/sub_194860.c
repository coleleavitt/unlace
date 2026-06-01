__int64 __fastcall sub_194860(__int64 *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  const char **v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r12
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 *v12; // rax
  const char *v14; // rbp
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v18 = a3 + 384;
  if ( !a4 )
    goto LABEL_12;
  v5 = sub_1EA540(a3 + 384);
  v6 = *a1;
  v7 = (const char **)v5;
  v8 = *a1 + 24 * a1[1];
  if ( *a1 == v8 )
    goto LABEL_12;
  v9 = *(_QWORD *)(v5 + 8);
  while ( 1 )
  {
    if ( *(_QWORD *)(v6 + 8) )
    {
      v10 = *(const char **)v6;
      v11 = &s1;
      if ( !v9 )
        goto LABEL_5;
    }
    else
    {
      if ( !v9 )
      {
        if ( v8 == v6 )
          goto LABEL_12;
        if ( v7 != (const char **)a2 )
LABEL_14:
          a2[1] = 0;
        return 0;
      }
      v10 = &s1;
    }
    v11 = *v7;
LABEL_5:
    if ( !strcmp(v11, v10) )
      break;
    v6 += 24;
    if ( v8 == v6 )
      goto LABEL_12;
  }
  if ( v8 != v6 )
  {
    if ( v7 != (const char **)a2 )
    {
      if ( v9 < 2 )
        goto LABEL_14;
      v14 = *v7;
      v15 = (void *)*a2;
      if ( a2[2] < v9 )
      {
        v16 = qvector_reserve(a2, *a2, v9, 1);
        *a2 = v16;
        v15 = (void *)v16;
      }
      a2[1] = v9;
      memmove(v15, v14, v9 - 1);
      *(_BYTE *)(*a2 + v9 - 1) = 0;
    }
    return 0;
  }
LABEL_12:
  v12 = (__int64 *)sub_1EA540(v18);
  return sub_194710((__int64)a1, a2, v12);
}
