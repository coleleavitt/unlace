__int64 __fastcall sub_3C34A0(__int64 a1, __int64 *a2, unsigned __int64 a3, const char *a4)
{
  __int64 v6; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  size_t v13; // r15
  size_t v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  size_t v20; // r8
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  size_t v25; // r9
  size_t v26; // [rsp+0h] [rbp-E8h]
  __m128i *src; // [rsp+10h] [rbp-D8h]
  void *v28; // [rsp+30h] [rbp-B8h]
  size_t v29; // [rsp+38h] [rbp-B0h]
  char *v30; // [rsp+50h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-78h] BYREF
  void *v32; // [rsp+78h] [rbp-70h]
  __int128 v33; // [rsp+80h] [rbp-68h]
  unsigned __int64 v34; // [rsp+90h] [rbp-58h]
  int v35; // [rsp+98h] [rbp-50h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v36 = __readfsqword(0x28u);
  v8 = (_QWORD *)(v6 + 8);
  v9 = *(_QWORD **)(v6 + 16);
  v10 = v8;
  if ( v9 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v9[2];
        v12 = v9[3];
        if ( v9[4] < a3 )
          break;
        v10 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v11 )
          goto LABEL_6;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v12 );
LABEL_6:
    if ( v8 != v10 && a3 < v10[4] )
      v10 = v8;
  }
  switch_dbctx();
  if ( sub_2B2FA0(a3, 0) == -1 )
  {
    switch_dbctx();
    if ( sub_2B2FA0(a3, 0) == -1 )
      return 0;
    if ( !under_debugger )
      sub_37EA20(52572);
LABEL_38:
    BUG();
  }
  switch_dbctx();
  if ( sub_2B2FA0(a3, 0) == -1 )
  {
    if ( !under_debugger )
      sub_37EA20(52573);
    goto LABEL_38;
  }
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_425E90);
  strcpy(&src->m128i_i8[15], "ler/");
  v28 = 0;
  v29 = 0;
  if ( a4 )
  {
    v13 = strlen(a4);
    v28 = (void *)qvector_reserve();
    v29 = v13 + 1;
    memmove(v28, a4, v13);
    *((_BYTE *)v28 + v13) = 0;
  }
  v14 = 20;
  v30 = (char *)qalloc_or_throw();
  memcpy(v30, src, 0x14u);
  if ( v29 && (v20 = v29 - 1, v29 != 1) )
  {
    v25 = v20 + 19;
    v24 = v20 + 20;
    v22 = v30;
    if ( v24 > 0x14 )
    {
      v26 = v20 + 19;
      v30 = (char *)qvector_reserve();
      v20 = v29 - 1;
      v22 = v30;
      v25 = v26;
    }
    v22[v25] = 0;
    memcpy(v30 + 19, v28, v20);
    v23 = *a2;
    v14 = v24;
    v32 = 0;
    v31 = v23;
    v33 = 0;
    if ( !v24 )
      goto LABEL_14;
  }
  else
  {
    v21 = *a2;
    v33 = 0;
    v31 = v21;
    v32 = 0;
  }
  v32 = (void *)qalloc_or_throw();
  *((_QWORD *)&v33 + 1) = v14;
  memcpy(v32, v30, v14);
  *(_QWORD *)&v33 = v14;
LABEL_14:
  v35 = 2;
  v34 = 0xFFFFFFFEFFFFFFFFLL;
  if ( v30 )
    qfree();
  if ( v28 )
    qfree();
  if ( v8 == v10 )
  {
    sub_2E16F0(&v31, a3, v15, v16, v17, v18);
    sub_2E4C80(&v31, a3);
    sub_2E76A0(&v31, a3);
    sub_2EA9A0(&v31, a3);
    sub_2EDA10(&v31, a3);
    sub_2F0420(&v31, a3);
    sub_2F4A30(&v31, a3);
  }
  sub_2B5AA0(&v31, a3);
  sub_2F8100(&v31, a3);
  sub_301C70(&v31, a3);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( src )
    qfree();
  return 0;
}
