__int64 __fastcall sub_778200(__int64 a1, const char *a2)
{
  const char *v2; // rbx
  unsigned __int64 v3; // rbp
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r14
  char *v7; // rbx
  char *v8; // rax
  char *v9; // r14
  char v10; // dl
  char v12; // al
  unsigned __int64 v13; // [rsp+27h] [rbp-61h]
  char *s; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !a2 )
    return qword_2CD44E8;
  v2 = a2;
  if ( !*a2 )
    return qword_2CD44E8;
  if ( *a2 == 47 )
  {
    v3 = qword_2CD44F8;
    if ( !a2[1] )
      return qword_2CD44F8;
    v2 = a2 + 1;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 96);
  }
  s = nullptr;
  v15 = 0;
  v4 = strlen(v2);
  v5 = v4 + 1;
  v6 = v4;
  s = (char *)qvector_reserve(&s, 0, v4 + 1, 1);
  *(_QWORD *)&v15 = v5;
  memmove(s, v2, v6);
  s[v6] = 0;
  v7 = s;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = strchr(v7, 47);
        if ( v7 != v8 )
          break;
        ++v7;
      }
      if ( !v8 )
        break;
      *v8 = 0;
      v9 = v8 + 1;
      if ( *v7 )
      {
        if ( *v7 != 46 )
          goto LABEL_10;
        v12 = v7[1];
        if ( v12 )
          goto LABEL_23;
      }
      v7 = v9;
    }
    if ( !*v7 )
      break;
    v9 = nullptr;
    if ( *v7 != 46 )
      goto LABEL_10;
    v12 = v7[1];
    if ( !v12 )
      break;
LABEL_23:
    if ( v12 == 46 && !v7[2] )
    {
      v7 = v9;
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 176 * v3 + 160);
      continue;
    }
LABEL_10:
    v3 = sub_777000(a1, v3, v7);
    if ( v3 == -1 || !v10 )
      break;
    v7 = v9;
  }
  while ( v9 );
  v13 = v3;
  if ( s )
  {
    *(_QWORD *)&v15 = 0;
    qfree(s);
  }
  return v13;
}
