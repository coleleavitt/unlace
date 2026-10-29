__int64 __fastcall dirtree_findfirst(_QWORD *a1, __int64 *a2, char *a3)
{
  __int64 v4; // rax
  char *v5; // r13
  __int64 v6; // rbp
  size_t v7; // rax
  size_t v8; // r14
  void *v10; // rdi
  size_t v11; // r15
  __int64 v12; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  int v14[2]; // [rsp+8h] [rbp-40h]

  *(_QWORD *)v14 = __readfsqword(0x28u);
  s = a3;
  v4 = sub_778480((__int64)a1, (const char **)&s);
  if ( v4 == -1 )
    return 0;
  v5 = s;
  v6 = v4;
  if ( s && (v7 = strlen(s), (v8 = v7) != 0) )
  {
    v10 = (void *)*a2;
    v11 = v7 + 1;
    if ( a2[2] < v7 + 1 )
    {
      v12 = qvector_reserve(a2, *a2, v7 + 1, 1);
      *a2 = v12;
      v10 = (void *)v12;
    }
    a2[1] = v11;
    memmove(v10, v5, v8);
    *(_BYTE *)(*a2 + v8) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  a2[4] = 0;
  if ( v6 || *v5 )
  {
    a2[3] = v6;
    return sub_776080(a1, (__int64)a2, 0);
  }
  else
  {
    a2[3] = -1;
    return 1;
  }
}
