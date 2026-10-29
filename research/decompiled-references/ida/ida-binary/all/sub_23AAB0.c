unsigned __int64 __fastcall sub_23AAB0(__int64 *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  const char *v5; // rbx
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // rbp
  char *i; // rbp
  const char *v10; // rsi
  const void *v11; // r12
  char *v12; // rax
  char *v13; // rbx
  char *v14; // rax
  char v15; // dl
  char *v16; // rax
  char *v17; // r13
  size_t v18; // rax
  char v19; // dl
  char *s; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(40707, 0, a3, a4, a5);
    BUG();
  }
  v5 = a2;
  if ( *a2 == 59 )
    v5 = a2 + 1;
  s = nullptr;
  v22 = 0;
  v6 = strlen(v5);
  v7 = v6 + 1;
  v8 = v6;
  s = (char *)qvector_reserve(&s, 0, v6 + 1, 1);
  *(_QWORD *)&v22 = v7;
  memmove(s, v5, v8);
  s[v8] = 0;
  for ( i = s; ; i = v17 + 1 )
  {
    v10 = (_BYTE *)(&word_3A + 1);
    v12 = strchr(i, 59);
    v13 = v12;
    if ( !v12 )
      break;
    *v12 = 0;
    v11 = v12 + 1;
    if ( *i )
    {
      v14 = &i[strlen(i)];
      v15 = *(v14 - 1);
      if ( v15 == 47 || v15 == 92 )
        *(v14 - 1) = 0;
    }
    v10 = (_BYTE *)(&word_3A + 1);
    v16 = strchr(v13 + 1, 59);
    v17 = v16;
    if ( v16 )
      *v16 = 0;
    if ( v13[1] )
    {
      v18 = (size_t)v11 + strlen(v13 + 1);
      v19 = *(_BYTE *)(v18 - 1);
      if ( v19 == 47 || v19 == 92 )
        *(_BYTE *)(v18 - 1) = 0;
    }
    if ( v13[1] )
    {
      v10 = "<ignore>";
      if ( !strcmp(v13 + 1, "<ignore>") )
        v11 = &unk_5C2F25;
      if ( !*i )
      {
LABEL_8:
        if ( !v17 )
          break;
        continue;
      }
    }
    else
    {
      v11 = &unk_5C2F25;
      if ( !*i )
        goto LABEL_8;
    }
    v10 = i;
    sub_239A90(a1, i, v11);
    if ( !v17 )
      break;
  }
  if ( s )
  {
    *(_QWORD *)&v22 = 0;
    qfree(s, v10);
  }
  return v23 - __readfsqword(0x28u);
}
