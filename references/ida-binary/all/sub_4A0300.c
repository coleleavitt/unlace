__int64 *__fastcall sub_4A0300(const char *src)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbp
  const char *v4; // rsi
  const char *v5; // rax
  __int64 **v6; // rbx
  const char *v7; // r12
  __int64 **v8; // r13
  __int64 *v9; // rbp
  void *v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !src )
    return nullptr;
  v11 = nullptr;
  v12 = 0;
  v1 = strlen(src);
  v2 = v1 + 1;
  v3 = v1;
  v11 = (void *)qvector_reserve(&v11, 0, v1 + 1, 1);
  *(_QWORD *)&v12 = v2;
  memmove(v11, src, v3);
  *((_BYTE *)v11 + v3) = 0;
  sub_49EFB0((__int64)&v11, 0);
  v13 = 0;
  v4 = &s1;
  v14 = 0;
  if ( (_QWORD)v12 )
    v4 = (const char *)v11;
  v5 = sub_17DED0(&v13, v4, 0);
  v6 = (__int64 **)qword_8D1C20;
  v7 = v5;
  v8 = (__int64 **)(qword_8D1C20 + 8 * xmmword_8D1C28);
  if ( v8 == (__int64 **)qword_8D1C20 )
  {
LABEL_13:
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13, v4);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11, v4);
    }
    return nullptr;
  }
  while ( 1 )
  {
    v9 = *v6;
    v4 = v7;
    if ( (unsigned __int8)sub_4A01A0(*v6, v7) )
      break;
    if ( v8 == ++v6 )
      goto LABEL_13;
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v7);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, v7);
  }
  return v9;
}
