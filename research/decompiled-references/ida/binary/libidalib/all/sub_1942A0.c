__int64 *__fastcall sub_1942A0(const char *src)
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
  char *v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !src )
    return nullptr;
  v12 = 0;
  v1 = strlen(src);
  v2 = v1 + 1;
  v3 = v1;
  v11 = (char *)qvector_reserve();
  *(_QWORD *)&v12 = v2;
  memmove(v11, src, v3);
  v11[v3] = 0;
  sub_193AE0((const char **)&v11, 0);
  v13 = 0;
  v4 = s1;
  v14 = 0;
  if ( (_QWORD)v12 )
    v4 = v11;
  v5 = sub_109910(&v13, v4, 0);
  v6 = (__int64 **)qword_256B00;
  v7 = v5;
  v8 = (__int64 **)(qword_256B00 + 8 * xmmword_256B08);
  if ( v8 == (__int64 **)qword_256B00 )
  {
LABEL_13:
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
    return nullptr;
  }
  while ( 1 )
  {
    v9 = *v6;
    if ( (unsigned __int8)sub_194140(*v6, v7) )
      break;
    if ( v8 == ++v6 )
      goto LABEL_13;
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v9;
}

