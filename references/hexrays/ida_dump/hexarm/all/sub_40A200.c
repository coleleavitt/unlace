__int64 __fastcall sub_40A200(__int64 a1, const char *a2)
{
  const char *v2; // rbx
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rbx
  unsigned __int64 v6; // rbx
  size_t v7; // r14
  __int64 v8; // r12
  size_t v9; // r15
  char *v10; // rsi
  __int64 result; // rax
  unsigned __int8 v12; // [rsp+Fh] [rbp-79h]
  char *v13; // [rsp+10h] [rbp-78h] BYREF
  __int128 v14; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = a2;
  if ( (unsigned __int8)sub_32AF50(a1, (__int64)a2) )
    return 1;
  while ( *v2 == 95 )
  {
    if ( (unsigned __int8)sub_32AF50(a1, (__int64)++v2) )
      return 1;
  }
  v14 = 0;
  v13 = nullptr;
  v13 = (char *)qvector_reserve(&v13, 0, 3, 1);
  *(_QWORD *)&v14 = 3;
  strcpy(v13, "__");
  src = nullptr;
  v16 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    src = (void *)qvector_reserve(&src, 0, v3 + 1, 1);
    *(_QWORD *)&v16 = v4;
    memmove(src, a2, v5);
    *((_BYTE *)src + v5) = 0;
    v6 = v16;
    if ( (_QWORD)v16 )
    {
      v7 = v16 - 1;
      if ( (_QWORD)v16 != 1 )
      {
        v8 = v14;
        v9 = v16 - 1;
        if ( (_QWORD)v14 )
        {
          v8 = v14 - 1;
          v9 = v7 + v14 - 1;
          v6 = v16 + v14 - 1;
        }
        v10 = v13;
        if ( *((_QWORD *)&v14 + 1) < v6 )
        {
          v13 = (char *)qvector_reserve(&v13, v13, v6, 1);
          v10 = v13;
        }
        *(_QWORD *)&v14 = v6;
        v10[v9] = 0;
        memcpy(&v13[v8], src, v7);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v16 = 0;
      qfree(src);
    }
  }
  result = sub_32AF50(a1, (__int64)(v13 + 1));
  if ( !(_BYTE)result )
    result = sub_32AF50(a1, (__int64)v13);
  if ( v13 )
  {
    v12 = result;
    *(_QWORD *)&v14 = 0;
    qfree(v13);
    return v12;
  }
  return result;
}
