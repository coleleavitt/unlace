__int64 sub_A0060()
{
  const char *v0; // rbx
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbp
  const char *v4; // rsi
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v0 = s;
  v8 = __readfsqword(0x28u);
  if ( !qword_250F90 )
    v0 = s1;
  v6 = nullptr;
  v7 = 0;
  if ( v0 )
  {
    v1 = strlen(v0);
    v2 = v1 + 1;
    v3 = v1;
    v6 = (void *)qvector_reserve();
    *(_QWORD *)&v7 = v2;
    memmove(v6, v0, v3);
    *((_BYTE *)v6 + v3) = 0;
  }
  if ( (unsigned __int8)sub_9DA30((__int64)&v6, 2u, (__int64)"Please enter trace description") )
  {
    v4 = s1;
    if ( (_QWORD)v7 )
      v4 = (const char *)v6;
    sub_9C320((__int64)&s, v4);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return 1;
}

