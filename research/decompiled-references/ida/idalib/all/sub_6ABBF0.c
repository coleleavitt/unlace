__int64 __fastcall sub_6ABBF0(__int64 a1, __int64 *a2, int a3)
{
  char *v4; // r12
  size_t v5; // rax
  size_t v6; // r13
  __int64 v7; // rbx
  bool v8; // cf
  __int64 v9; // rbx
  void *v11; // rdi
  size_t v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a3 <= 0 )
    return -1;
  v16 = 0;
  s = nullptr;
  s = (char *)qvector_reserve(&s, 0, 2, 1);
  *(_QWORD *)&v16 = 2;
  *s = 35;
  s[1] = 0;
  sub_6B2E10(&s, (unsigned int)a3);
  v4 = s;
  if ( !a2 )
    goto LABEL_12;
  if ( s )
  {
    v5 = strlen(s);
    v6 = v5;
    if ( !v5 )
    {
      v7 = v16;
      a2[1] = 0;
      v8 = v7 == 0;
      v9 = v7 - 1;
      if ( v8 )
        v9 = 0;
LABEL_7:
      *(_QWORD *)&v16 = 0;
      qfree(v4);
      return v9;
    }
    v11 = (void *)*a2;
    v12 = v5 + 1;
    if ( a2[2] < v5 + 1 )
    {
      v14 = qvector_reserve(a2, *a2, v5 + 1, 1);
      *a2 = v14;
      v11 = (void *)v14;
    }
    a2[1] = v12;
    memmove(v11, v4, v6);
    *(_BYTE *)(*a2 + v6) = 0;
    v4 = s;
LABEL_12:
    v9 = ((_QWORD)v16 == 0) + (_QWORD)v16 - 1LL;
    if ( !v4 )
      return v9;
    goto LABEL_7;
  }
  v13 = v16;
  a2[1] = 0;
  v8 = v13 == 0;
  v9 = v13 - 1;
  if ( v8 )
    return 0;
  return v9;
}
