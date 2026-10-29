__int64 __fastcall sub_23A590(__int64 a1, const char *a2)
{
  const char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbx
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  const char *v10; // rdi
  const char *v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v2 = a2;
  v12 = nullptr;
  v13 = 0;
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = 0;
    v9 = v7 + 24LL * *(_QWORD *)(a1 + 32);
    if ( v9 == v7 )
    {
      LODWORD(v7) = 0;
      return (unsigned int)v7;
    }
    while ( 1 )
    {
LABEL_7:
      if ( *(_QWORD *)(v7 + 8) )
      {
        a2 = *(const char **)v7;
        v10 = &s1;
        if ( !v8 )
          goto LABEL_5;
      }
      else
      {
        if ( !v8 )
        {
LABEL_15:
          LOBYTE(v7) = v9 != v7;
          goto LABEL_12;
        }
        a2 = &s1;
      }
      v10 = v2;
LABEL_5:
      if ( !strcmp(v10, a2) )
        goto LABEL_15;
      v7 += 24;
      if ( v9 == v7 )
        goto LABEL_11;
    }
  }
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (char *)qvector_reserve(&v12, 0, v3 + 1, 1);
  *(_QWORD *)&v13 = v4;
  v12 = v6;
  memmove(v6, a2, v5);
  v12[v5] = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v2 = v12;
  v8 = v13;
  v9 = v7 + 24LL * *(_QWORD *)(a1 + 32);
  if ( v7 != v9 )
    goto LABEL_7;
LABEL_11:
  LODWORD(v7) = 0;
LABEL_12:
  if ( v2 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v2, a2);
  }
  return (unsigned int)v7;
}
