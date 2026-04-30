__int64 __fastcall sub_1FA850(const char *src)
{
  size_t v1; // rax
  size_t v2; // r12
  size_t v3; // rbp
  char *v4; // rax
  char *v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rbx
  char *v8; // r14
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // rbx
  int v13; // [rsp+Ch] [rbp-7Ch]
  char *s2; // [rsp+10h] [rbp-78h] BYREF
  __int128 v15; // [rsp+18h] [rbp-70h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v15 = 0;
  s2 = nullptr;
  if ( !src )
  {
    v6 = xmmword_8CB528;
    if ( !(_QWORD)xmmword_8CB528 )
      return 0;
    goto LABEL_3;
  }
  v1 = strlen(src);
  v2 = v1 + 1;
  v3 = v1;
  v4 = (char *)qvector_reserve(&s2, 0, v1 + 1, 1);
  v5 = (char *)src;
  *(_QWORD *)&v15 = v2;
  s2 = v4;
  memmove(v4, src, v3);
  s2[v3] = 0;
  v6 = xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
LABEL_3:
    v7 = 0;
    while ( 1 )
    {
      sub_1FA630((__int64)&s1);
      v5 = (char *)&::s1;
      if ( (_QWORD)v15 )
        v5 = s2;
      v8 = s1;
      v9 = (char *)&::s1;
      if ( v17 )
        v9 = s1;
      v10 = strcmp(v9, v5);
      if ( v8 )
      {
        v13 = v10;
        v17 = 0;
        qfree(v8, v5);
        v10 = v13;
      }
      if ( !v10 )
        break;
      if ( ++v7 >= v6 )
        goto LABEL_16;
    }
    v11 = *(_QWORD *)(qword_8CB520 + 8 * v7);
    goto LABEL_13;
  }
LABEL_16:
  v11 = 0;
LABEL_13:
  if ( s2 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(s2, v5);
  }
  return v11;
}
