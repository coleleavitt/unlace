__int64 __fastcall sub_3CCE60(__int64 a1, __int64 *a2, unsigned __int64 a3, const char *a4, double a5)
{
  __int64 v7; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  size_t v14; // r15
  size_t v15; // r13
  size_t v17; // r8
  __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // r15
  size_t v22; // r9
  size_t v23; // [rsp+0h] [rbp-E8h]
  __m128i *src; // [rsp+10h] [rbp-D8h]
  void *v25; // [rsp+30h] [rbp-B8h]
  size_t v26; // [rsp+38h] [rbp-B0h]
  char *v27; // [rsp+50h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-78h] BYREF
  void *v29; // [rsp+78h] [rbp-70h]
  __int128 v30; // [rsp+80h] [rbp-68h]
  unsigned __int64 v31; // [rsp+90h] [rbp-58h]
  int v32; // [rsp+98h] [rbp-50h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  v9 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD **)(v7 + 16);
  v11 = v9;
  if ( v10 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v10[2];
        v13 = v10[3];
        if ( v10[4] < a3 )
          break;
        v11 = v10;
        v10 = (_QWORD *)v10[2];
        if ( !v12 )
          goto LABEL_6;
      }
      v10 = (_QWORD *)v10[3];
    }
    while ( v13 );
LABEL_6:
    if ( v9 != v11 && a3 < v11[4] )
      v11 = v9;
  }
  switch_dbctx();
  if ( sub_2B6080(a3, 0) == -1 )
  {
    switch_dbctx();
    if ( sub_2B6080(a3, 0) == -1 )
      return 0;
    if ( !under_debugger )
      sub_383060(0xCD5Cu, a5);
LABEL_38:
    BUG();
  }
  switch_dbctx();
  if ( sub_2B6080(a3, 0) == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCD5Du, a5);
    goto LABEL_38;
  }
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_424AF0);
  strcpy(&src->m128i_i8[15], "ler/");
  v25 = nullptr;
  v26 = 0;
  if ( a4 )
  {
    v14 = strlen(a4);
    v25 = (void *)qvector_reserve();
    v26 = v14 + 1;
    memmove(v25, a4, v14);
    *((_BYTE *)v25 + v14) = 0;
  }
  v15 = 20;
  v27 = (char *)qalloc_or_throw();
  memcpy(v27, src, 0x14u);
  if ( v26 && (v17 = v26 - 1, v26 != 1) )
  {
    v22 = v17 + 19;
    v21 = v17 + 20;
    v19 = v27;
    if ( v21 > 0x14 )
    {
      v23 = v17 + 19;
      v27 = (char *)qvector_reserve();
      v17 = v26 - 1;
      v19 = v27;
      v22 = v23;
    }
    v19[v22] = 0;
    memcpy(v27 + 19, v25, v17);
    v20 = *a2;
    v15 = v21;
    v29 = nullptr;
    v28 = v20;
    v30 = 0;
    if ( !v21 )
      goto LABEL_14;
  }
  else
  {
    v18 = *a2;
    v30 = 0;
    v28 = v18;
    v29 = nullptr;
  }
  v29 = (void *)qalloc_or_throw();
  *((_QWORD *)&v30 + 1) = v15;
  memcpy(v29, v27, v15);
  *(_QWORD *)&v30 = v15;
LABEL_14:
  v32 = 2;
  v31 = 0xFFFFFFFEFFFFFFFFLL;
  if ( v27 )
    qfree();
  if ( v25 )
    qfree();
  if ( v9 == v11 )
  {
    sub_2E4810((__int64)&v28, a3);
    sub_2E7DA0((__int64)&v28, a3);
    sub_2EA7A0(&v28, a3);
    sub_2EDAA0((__int64)&v28, a3);
    sub_2F0B10((__int64)&v28, a3);
    sub_2F3520((__int64)&v28, a3);
    sub_2F7B30((__int64)&v28, a3);
  }
  sub_2B88C0((__int64)&v28, a3);
  sub_2FB200((__int64)&v28, a3);
  sub_304D70(&v28, a3);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( src )
    qfree();
  return 0;
}
