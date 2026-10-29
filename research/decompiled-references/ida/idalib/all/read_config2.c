__int64 __fastcall read_config2(
        void *src,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(),
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  void *v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // r8
  size_t v16; // rax
  size_t v17; // r9
  unsigned int inited; // eax
  char v19; // al
  unsigned int v20; // edx
  void *v21; // rdi
  size_t v22; // rdx
  const char *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // [rsp+8h] [rbp-60h]
  unsigned __int8 v26; // [rsp+8h] [rbp-60h]
  int v27[2]; // [rsp+8h] [rbp-60h]
  _QWORD *v28; // [rsp+10h] [rbp-58h]
  size_t v29; // [rsp+10h] [rbp-58h]
  size_t v30; // [rsp+18h] [rbp-50h]
  _BYTE v31[65]; // [rsp+27h] [rbp-41h] BYREF

  *(_QWORD *)&v31[1] = __readfsqword(0x28u);
  if ( a2 )
    return sub_749F60((__int64)src, a2, a3, a4, a5, a6, a7, a8);
  v31[0] = 0;
  v13 = (void *)sub_7477F0(a6, a7);
  v14 = sub_7A0520(v13);
  v15 = (_QWORD *)v14;
  if ( src && (v25 = (_QWORD *)v14, v16 = strlen((const char *)src), v15 = v25, (v17 = v16) != 0) )
  {
    v21 = (void *)*v25;
    v22 = v16 + 1;
    if ( v25[2] < v16 + 1 )
    {
      v29 = v16 + 1;
      v30 = v16;
      v24 = qvector_reserve(v25, *v25, v22, 1);
      v15 = v25;
      v17 = v30;
      v22 = v29;
      v21 = (void *)v24;
      *v25 = v24;
    }
    v15[1] = v22;
    v28 = v15;
    *(_QWORD *)v27 = v17;
    memmove(v21, src, v17);
    *(_BYTE *)(*v28 + *(_QWORD *)v27) = 0;
  }
  else
  {
    v15[1] = 0;
  }
  inited = lex_init_string(v13, src, 0);
  if ( inited )
  {
    v23 = (const char *)qstrerror(inited);
    sub_747B60((__int64)v13, (__int64)"%s", v23);
  }
  do
  {
    v19 = sub_749060(v31, v13, a3, a4, a5, a8);
    v20 = v31[0];
  }
  while ( v19 && !v31[0] );
  if ( v13 )
  {
    v26 = v31[0];
    sub_747AE0(v13);
    return v26;
  }
  return v20;
}
