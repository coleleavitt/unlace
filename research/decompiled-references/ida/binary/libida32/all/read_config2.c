__int64 __fastcall read_config2(
        void *src,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(),
        __int64 a6,
        __int64 a7)
{
  void **v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r8
  size_t v15; // rax
  size_t v16; // r9
  unsigned int inited; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  unsigned int v21; // edx
  void *v22; // rdi
  size_t v23; // rdx
  const char *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // [rsp+8h] [rbp-60h]
  unsigned __int8 v27; // [rsp+8h] [rbp-60h]
  int v28[2]; // [rsp+8h] [rbp-60h]
  _QWORD *v29; // [rsp+10h] [rbp-58h]
  size_t v30; // [rsp+10h] [rbp-58h]
  size_t v31; // [rsp+18h] [rbp-50h]
  _BYTE v32[65]; // [rsp+27h] [rbp-41h] BYREF

  *(_QWORD *)&v32[1] = __readfsqword(0x28u);
  if ( a2 )
    return sub_729A90((__int64)src, a2, a3, a4, a5, a6, a7);
  v32[0] = 0;
  v12 = (void **)sub_7272B0(a6, a7);
  v13 = sub_780220(v12);
  v14 = (_QWORD *)v13;
  if ( src && (v26 = (_QWORD *)v13, v15 = strlen((const char *)src), v14 = v26, (v16 = v15) != 0) )
  {
    v22 = (void *)*v26;
    v23 = v15 + 1;
    if ( v26[2] < v15 + 1 )
    {
      v30 = v15 + 1;
      v31 = v15;
      v25 = qvector_reserve(v26, *v26, v23, 1);
      v14 = v26;
      v16 = v31;
      v23 = v30;
      v22 = (void *)v25;
      *v26 = v25;
    }
    v14[1] = v23;
    v29 = v14;
    *(_QWORD *)v28 = v16;
    memmove(v22, src, v16);
    *(_BYTE *)(*v29 + *(_QWORD *)v28) = 0;
  }
  else
  {
    v14[1] = 0;
  }
  inited = lex_init_string(v12, src, 0);
  if ( inited )
  {
    v24 = (const char *)qstrerror(inited, src, v18, v19);
    sub_727620((__int64)v12, (__int64)"%s", v24);
  }
  do
  {
    v20 = sub_728B90(v32, v12, a3, a4, a5);
    v21 = v32[0];
  }
  while ( v20 && !v32[0] );
  if ( v12 )
  {
    v27 = v32[0];
    sub_7275A0(v12);
    return v27;
  }
  return v21;
}

