unsigned __int64 __fastcall sub_1D23A0(__int64 a1, const char *a2, const char *a3, char a4)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  bool v9; // zf
  const char *v10; // r14
  size_t v11; // rax
  size_t v12; // r8
  size_t v13; // r9
  size_t v14; // r10
  char *v15; // rsi
  size_t v16; // rdx
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r8
  size_t v20; // r9
  char *v21; // rsi
  size_t v22; // rdx
  char *v23; // rbp
  char *v24; // rax
  char *v25; // rbp
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rbp
  __int64 v30; // rax
  size_t v31; // r14
  _QWORD *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rbp
  __int64 v36; // rax
  size_t v37; // r14
  _QWORD *v38; // r13
  __int64 v39; // rax
  const char *v40; // rsi
  __int64 v41; // rax
  char *v42; // rbp
  char *v43; // rdi
  __int64 v45; // rax
  void *v46; // rax
  char *v47; // rsi
  __int64 v48; // rax
  void *v49; // rax
  char *v50; // rsi
  __int64 v51; // rax
  char *v52; // rax
  char *v53; // rax
  size_t v54; // [rsp+0h] [rbp-98h]
  size_t v55; // [rsp+0h] [rbp-98h]
  size_t v56; // [rsp+8h] [rbp-90h]
  size_t v57; // [rsp+8h] [rbp-90h]
  size_t v58; // [rsp+10h] [rbp-88h]
  size_t v59; // [rsp+10h] [rbp-88h]
  size_t v60; // [rsp+18h] [rbp-80h]
  char *s1; // [rsp+20h] [rbp-78h] BYREF
  size_t v62; // [rsp+28h] [rbp-70h]
  unsigned __int64 v63; // [rsp+30h] [rbp-68h]
  char *v64; // [rsp+40h] [rbp-58h] BYREF
  size_t n; // [rsp+48h] [rbp-50h]
  unsigned __int64 v66; // [rsp+50h] [rbp-48h]
  unsigned __int64 v67; // [rsp+58h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v7 = operator new(0x18u);
  *(_QWORD *)v7 = 0;
  v8 = (__int64 *)v7;
  *(_OWORD *)(v7 + 8) = 0;
  v9 = a4 == 0;
  v10 = (const char *)&unk_5C2F25;
  if ( !v9 )
    v10 = "view:";
  sub_1A1F60((__int64)&s1, v10);
  if ( a2 )
  {
    v11 = strlen(a2);
    v12 = v62;
    v13 = v11;
    v14 = v11;
    if ( v62 )
    {
      v12 = v62 - 1;
      v14 = v11 + v62 - 1;
    }
    v15 = s1;
    v16 = v14 + 1;
    if ( v63 < v14 + 1 )
    {
      v60 = v11;
      v58 = v14;
      v56 = v12;
      v54 = v14 + 1;
      s1 = (char *)qvector_reserve(&s1, s1, v16, 1);
      v13 = v60;
      v15 = s1;
      v14 = v58;
      v12 = v56;
      v16 = v54;
    }
    v62 = v16;
    v15[v14] = 0;
    memmove(&s1[v12], a2, v13);
  }
  sub_1A1F60((__int64)&v64, v10);
  if ( a3 )
  {
    v17 = strlen(a3);
    v18 = n;
    v19 = v17;
    v20 = v17;
    if ( n )
    {
      v18 = n - 1;
      v20 = v17 + n - 1;
    }
    v21 = v64;
    v22 = v20 + 1;
    if ( v66 < v20 + 1 )
    {
      v59 = v17;
      v57 = v20;
      v55 = v20 + 1;
      v64 = (char *)qvector_reserve(&v64, v64, v22, 1);
      v19 = v59;
      v21 = v64;
      v20 = v57;
      v22 = v55;
    }
    n = v22;
    v21[v20] = 0;
    memmove(&v64[v18], a3, v19);
  }
  if ( v62 )
  {
    v23 = s1;
    if ( !strncmp(s1, "reg:", 4u) )
    {
      v24 = sub_1CAC40(v23 + 4);
      if ( v24 )
        sub_169A50((__int64 *)&s1, (__int64)"reg:%s", v24);
    }
    else if ( !strncmp(v23, "view:", 5u) && !strncmp(v23 + 5, "IDA View-", 9u) )
    {
      v52 = sub_1CAC40(v23 + 14);
      if ( v52 )
        sub_169A50((__int64 *)&s1, (__int64)"view:IDA View-%s", v52);
    }
  }
  if ( n )
  {
    v25 = v64;
    if ( !strncmp(v64, "reg:", 4u) )
    {
      v26 = sub_1CAC40(v25 + 4);
      if ( v26 )
        sub_169A50((__int64 *)&v64, (__int64)"reg:%s", v26);
    }
    else if ( !strncmp(v25, "view:", 5u) && !strncmp(v25 + 5, "IDA View-", 9u) )
    {
      v53 = sub_1CAC40(v25 + 14);
      if ( v53 )
        sub_169A50((__int64 *)&v64, (__int64)"view:IDA View-%s", v53);
    }
  }
  v27 = v8[1];
  v28 = *v8;
  if ( v8[2] < (unsigned __int64)(v27 + 1) )
  {
    v51 = qvector_reserve(v8, v28, v27 + 1, 16);
    *v8 = v51;
    v28 = v51;
    v27 = v8[1];
  }
  v29 = (_QWORD *)(v28 + 16 * v27);
  *v29 = 0;
  v29[1] = 0;
  ++v8[1];
  v30 = operator new(0x18u);
  v31 = v62;
  *(_QWORD *)v30 = 0;
  v32 = (_QWORD *)v30;
  *(_OWORD *)(v30 + 8) = 0;
  if ( v31 )
  {
    v49 = (void *)qalloc_or_throw(v31);
    *v32 = v49;
    v50 = s1;
    v32[2] = v31;
    memcpy(v49, v50, v31);
    v32[1] = v31;
  }
  if ( *(_DWORD *)v29 )
    jvalue_t_clear(v29);
  *(_DWORD *)v29 = 2;
  v29[1] = v32;
  v33 = v8[1];
  v34 = *v8;
  if ( v8[2] < (unsigned __int64)(v33 + 1) )
  {
    v48 = qvector_reserve(v8, v34, v33 + 1, 16);
    *v8 = v48;
    v34 = v48;
    v33 = v8[1];
  }
  v35 = (_QWORD *)(v34 + 16 * v33);
  *v35 = 0;
  v35[1] = 0;
  ++v8[1];
  v36 = operator new(0x18u);
  v37 = n;
  *(_QWORD *)v36 = 0;
  v38 = (_QWORD *)v36;
  *(_OWORD *)(v36 + 8) = 0;
  if ( v37 )
  {
    v46 = (void *)qalloc_or_throw(v37);
    *v38 = v46;
    v47 = v64;
    v38[2] = v37;
    memcpy(v46, v47, v37);
    v38[1] = v37;
  }
  if ( *(_DWORD *)v35 )
    jvalue_t_clear(v35);
  *(_DWORD *)v35 = 2;
  v35[1] = v38;
  v39 = *(_QWORD *)(a1 + 8);
  v40 = *(const char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v39 + 1) )
  {
    v45 = qvector_reserve(a1, v40, v39 + 1, 16);
    *(_QWORD *)a1 = v45;
    v40 = (const char *)v45;
    v39 = *(_QWORD *)(a1 + 8);
  }
  v41 = 16 * v39;
  v42 = (char *)&v40[v41];
  *(_QWORD *)v42 = 0;
  *((_QWORD *)v42 + 1) = 0;
  ++*(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)&v40[v41] )
    jvalue_t_clear(&v40[v41]);
  *(_DWORD *)v42 = 4;
  v43 = v64;
  *((_QWORD *)v42 + 1) = v8;
  if ( v43 )
  {
    n = 0;
    qfree(v43, v40);
  }
  if ( s1 )
  {
    v62 = 0;
    qfree(s1, v40);
  }
  return v67 - __readfsqword(0x28u);
}
