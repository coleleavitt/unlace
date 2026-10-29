__int64 __fastcall sub_A8720(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rbp
  size_t v6; // rbx
  const char *v7; // rdi
  int v8; // ebx
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rbx
  const char *v12; // rdx
  void *v13; // [rsp+0h] [rbp-78h]
  void *v14; // [rsp+0h] [rbp-78h]
  char s2[16]; // [rsp+20h] [rbp-58h] BYREF
  char s[24]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v2 = sub_A8550(a2);
  v3 = 0;
  if ( v2 <= 0xF )
  {
    v5 = v2;
    if ( v2 )
      qlread();
    s2[v5] = 0;
    if ( !getinf_buf() )
      s[0] = 0;
    v6 = strlen(s);
    v13 = (void *)qvector_reserve();
    memmove(v13, s, v6);
    *((_BYTE *)v13 + v6) = 0;
    v7 = (const char *)v13;
    if ( v6 == -1 )
      v7 = s1;
    v8 = strcmp(v7, s2);
    if ( v13 )
      qfree();
    if ( v8 )
    {
      if ( !getinf_buf() )
        s[0] = 0;
      v9 = strlen(s);
      v10 = v9 + 1;
      v11 = v9;
      v14 = (void *)qvector_reserve();
      memmove(v14, s, v11);
      v12 = s1;
      *((_BYTE *)v14 + v11) = 0;
      if ( v10 )
        v12 = (const char *)v14;
      sub_8F660(
        (__int64)"Warning: the trace was created for processor '%s' but the current processor is '%s'.",
        s2,
        v12);
      if ( v14 )
        qfree();
    }
    return 1;
  }
  return v3;
}

