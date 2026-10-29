__int64 __fastcall sub_164530(const char *src)
{
  size_t v1; // rbp
  unsigned __int64 v2; // r12
  __int64 v3; // rbx
  const char *v4; // rsi
  char *v5; // r14
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  int v10; // [rsp+Ch] [rbp-7Ch]
  char *s2; // [rsp+10h] [rbp-78h]
  size_t v12; // [rsp+18h] [rbp-70h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v12 = 0;
  s2 = nullptr;
  if ( !src )
  {
    v2 = xmmword_2544E8;
    if ( !(_QWORD)xmmword_2544E8 )
      return 0;
    goto LABEL_3;
  }
  v1 = strlen(src);
  v12 = v1 + 1;
  s2 = (char *)qvector_reserve();
  memmove(s2, src, v1);
  s2[v1] = 0;
  v2 = xmmword_2544E8;
  if ( (_QWORD)xmmword_2544E8 )
  {
LABEL_3:
    v3 = 0;
    sub_154460((__int64)&s1, *(_QWORD *)qword_2544E0);
    while ( 1 )
    {
      v4 = ::s1;
      if ( v12 )
        v4 = s2;
      v5 = s1;
      v6 = (char *)::s1;
      if ( v14 )
        v6 = s1;
      v7 = strcmp(v6, v4);
      if ( v5 )
      {
        v10 = v7;
        v14 = 0;
        qfree();
        v7 = v10;
      }
      if ( !v7 )
        break;
      if ( ++v3 >= v2 )
        goto LABEL_17;
      sub_154460((__int64)&s1, *(_QWORD *)(qword_2544E0 + 8 * v3));
    }
    v8 = *(_QWORD *)(qword_2544E0 + 8 * v3);
    goto LABEL_14;
  }
LABEL_17:
  v8 = 0;
LABEL_14:
  if ( s2 )
    qfree();
  return v8;
}

