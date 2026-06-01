unsigned __int64 __fastcall sub_23A400(__int64 a1, const char *a2)
{
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbx
  char *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // r13
  const char *v11; // rdi
  const char *v12; // rdi
  const char *v14; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v3 = a2;
  v14 = nullptr;
  v15 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (char *)qvector_reserve(&v14, 0, v4 + 1, 1);
    *(_QWORD *)&v15 = v5;
    v14 = v7;
    memmove(v7, a2, v6);
    v14[v6] = 0;
    v8 = *(_QWORD **)(a1 + 24);
    v3 = v14;
    v9 = &v8[3 * *(_QWORD *)(a1 + 32)];
    if ( v8 == v9 )
      goto LABEL_15;
  }
  else
  {
    v8 = *(_QWORD **)(a1 + 24);
    v9 = &v8[3 * *(_QWORD *)(a1 + 32)];
    if ( v9 == v8 )
      return v16 - __readfsqword(0x28u);
  }
  v10 = v15;
  while ( 1 )
  {
    if ( v8[1] )
    {
      a2 = (const char *)*v8;
      v11 = &s1;
      if ( !v10 )
        goto LABEL_5;
      goto LABEL_10;
    }
    if ( !v10 )
      break;
    a2 = &s1;
LABEL_10:
    v11 = v3;
LABEL_5:
    if ( !strcmp(v11, a2) )
      break;
    v8 += 3;
    if ( v9 == v8 )
      goto LABEL_15;
  }
  if ( v8 != v9 )
  {
    v12 = (const char *)*v8;
    if ( *v8 )
    {
      v8[1] = 0;
      qfree(v12, a2);
    }
    a2 = (const char *)(v8 + 3);
    memmove(v8, v8 + 3, *(_QWORD *)(a1 + 24) + 24LL * *(_QWORD *)(a1 + 32) - (_QWORD)v8 - 24);
    --*(_QWORD *)(a1 + 32);
    v3 = v14;
  }
LABEL_15:
  if ( v3 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v3, a2);
  }
  return v16 - __readfsqword(0x28u);
}
