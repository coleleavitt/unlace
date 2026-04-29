__int64 __fastcall sub_3C5560(__int64 a1, __int64 *a2, unsigned __int64 a3, const char *a4, double a5)
{
  __int64 v7; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdi
  __m128i *v17; // rax
  size_t v18; // r15
  size_t v19; // r13
  size_t v20; // r15
  __int64 v21; // rax
  size_t v23; // r8
  __int64 v24; // rax
  size_t v25; // r9
  _BYTE *v26; // rsi
  __int64 v27; // rax
  size_t v28; // [rsp+0h] [rbp-E8h]
  size_t v29; // [rsp+8h] [rbp-E0h]
  void *src; // [rsp+10h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-D0h]
  void *v32; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+38h] [rbp-B0h]
  void *v34; // [rsp+50h] [rbp-98h] BYREF
  __int128 v35; // [rsp+58h] [rbp-90h]
  __int64 v36; // [rsp+70h] [rbp-78h] BYREF
  void *v37; // [rsp+78h] [rbp-70h]
  __int128 v38; // [rsp+80h] [rbp-68h]
  unsigned __int64 v39; // [rsp+90h] [rbp-58h]
  int v40; // [rsp+98h] [rbp-50h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v41 = __readfsqword(0x28u);
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
  v14 = *a2;
  switch_dbctx(*(int *)(*a2 + 20));
  v15 = sub_2AED00(a3, 0);
  v16 = *(int *)(v14 + 16);
  if ( v15 == -1 )
  {
    switch_dbctx(v16);
    if ( sub_2AED00(a3, 0) == -1 )
      return 0;
    if ( !under_debugger )
      sub_37B760(0xCD5Cu, 0, a5);
LABEL_42:
    BUG();
  }
  switch_dbctx(v16);
  if ( sub_2AED00(a3, 0) == -1 )
  {
    if ( !under_debugger )
      sub_37B760(0xCD5Du, 0, a5);
    goto LABEL_42;
  }
  *(_OWORD *)n = 0;
  src = nullptr;
  v17 = (__m128i *)qvector_reserve(&src, 0, 20, 1);
  src = v17;
  n[0] = 20;
  *v17 = _mm_load_si128((const __m128i *)&xmmword_3FA410);
  *(__int32 *)((char *)&v17->m128i_i32[3] + 3) = 796026220;
  v32 = nullptr;
  *((_BYTE *)src + 19) = 0;
  v33 = 0;
  if ( a4 )
  {
    v18 = strlen(a4);
    v32 = (void *)qvector_reserve(&v32, 0, v18 + 1, 1);
    *(_QWORD *)&v33 = v18 + 1;
    memmove(v32, a4, v18);
    *((_BYTE *)v32 + v18) = 0;
  }
  v19 = n[0];
  v34 = nullptr;
  v35 = 0;
  if ( n[0] )
  {
    v34 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v35 + 1) = v19;
    memcpy(v34, src, v19);
    *(_QWORD *)&v35 = v19;
    if ( !(_QWORD)v33 || (v23 = v33 - 1, (_QWORD)v33 == 1) )
    {
      v24 = *a2;
      v38 = 0;
      v36 = v24;
      v37 = nullptr;
LABEL_38:
      v37 = (void *)qalloc_or_throw(v19);
      *((_QWORD *)&v38 + 1) = v19;
      memcpy(v37, v34, v19);
      *(_QWORD *)&v38 = v19;
      goto LABEL_16;
    }
    --v19;
    v25 = v23 + v19;
    v20 = v33 + v19;
LABEL_35:
    v26 = v34;
    if ( *((_QWORD *)&v35 + 1) < v20 )
    {
      v28 = v25;
      v29 = v23;
      v34 = (void *)qvector_reserve(&v34, v34, v20, 1);
      v23 = v29;
      v26 = v34;
      v25 = v28;
    }
    *(_QWORD *)&v35 = v20;
    v26[v25] = 0;
    memcpy((char *)v34 + v19, v32, v23);
    v27 = *a2;
    v19 = v35;
    v37 = nullptr;
    v36 = v27;
    v38 = 0;
    if ( !(_QWORD)v35 )
      goto LABEL_16;
    goto LABEL_38;
  }
  v20 = v33;
  if ( (_QWORD)v33 )
  {
    v25 = v33 - 1;
    if ( (_QWORD)v33 != 1 )
    {
      v23 = v33 - 1;
      goto LABEL_35;
    }
  }
  v21 = *a2;
  v38 = 0;
  v37 = nullptr;
  v36 = v21;
LABEL_16:
  v40 = 2;
  v39 = 0xFFFFFFFEFFFFFFFFLL;
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( v9 == v11 )
  {
    sub_2DD490((__int64)&v36, a3);
    sub_2E0A20((__int64)&v36, a3);
    sub_2E3420(&v36, a3);
    sub_2E6720((__int64)&v36, a3);
    sub_2E9790((__int64)&v36, a3);
    sub_2EC1A0((__int64)&v36, a3);
    sub_2F07B0((__int64)&v36, a3);
  }
  sub_2B1540((__int64)&v36, a3);
  sub_2F3E80((__int64)&v36, a3);
  sub_2FD9F0(&v36, a3);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}
