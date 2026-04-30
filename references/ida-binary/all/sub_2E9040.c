__int64 __fastcall sub_2E9040(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // r15
  _QWORD *v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  size_t v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  double v19; // xmm0_8
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rdi
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  const void *v29; // rsi
  void *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-70h]
  int v32; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v33; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int128 v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v35 = 0;
  v34 = 0;
  v34 = qvector_reserve(&v34, 0, 1, 40);
  v4 = v34 + 40 * v35;
  *(_QWORD *)v4 = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)&v35 = v35 + 1;
  v5 = qvector_reserve(v4, *(_QWORD *)v4, 6, 1);
  *(_QWORD *)v4 = v5;
  *(_QWORD *)(v4 + 8) = 6;
  *(_DWORD *)v5 = 1919251825;
  *(_BYTE *)(v5 + 4) = 121;
  *(_BYTE *)(*(_QWORD *)v4 + 5LL) = 0;
  v6 = operator new(0x18u);
  v7 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)v6 = 0;
  v8 = (_QWORD *)v6;
  *(_OWORD *)(v6 + 8) = 0;
  if ( v7 )
  {
    v28 = (void *)qalloc_or_throw(v7);
    *v8 = v28;
    v29 = *(const void **)a2;
    v8[2] = v7;
    memcpy(v28, v29, v7);
    v8[1] = v7;
  }
  if ( *(_DWORD *)(v4 + 24) )
    jvalue_t_clear(v4 + 24);
  v9 = (_QWORD *)v34;
  v10 = v35;
  *(_QWORD *)(v4 + 32) = v8;
  v11 = 0;
  *(_DWORD *)(v4 + 24) = 2;
  v31 = (__int64)v9;
  v12 = v9;
  if ( v10 )
  {
    while ( !v12[1] || strcmp((const char *)*v12, "result_name") )
    {
      ++v11;
      v12 += 5;
      if ( v10 == v11 )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v10 + 1) )
    {
      v31 = qvector_reserve(&v34, v31, v10 + 1, 40);
      v10 = v35;
      v34 = v31;
    }
    v12 = (_QWORD *)(v31 + 40 * v10);
    *v12 = 0;
    *((_DWORD *)v12 + 6) = 0;
    v12[4] = 0;
    *(_OWORD *)(v12 + 1) = 0;
    *(_QWORD *)&v35 = v35 + 1;
    v30 = (void *)qvector_reserve(v12, *v12, 12, 1);
    *v12 = v30;
    v12[1] = 12;
    qmemcpy(v30, "result_name", 11);
    *(_BYTE *)(*v12 + 11LL) = 0;
  }
  v13 = v12 + 3;
  v14 = operator new(0x18u);
  v15 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)v14 = 0;
  v16 = (_QWORD *)v14;
  *(_OWORD *)(v14 + 8) = 0;
  if ( v15 )
  {
    v26 = (void *)qalloc_or_throw(v15);
    *v16 = v26;
    v27 = *(const void **)(a2 + 24);
    v16[2] = v15;
    memcpy(v26, v27, v15);
    v16[1] = v15;
  }
  if ( *(_DWORD *)v13 )
    jvalue_t_clear(v13);
  *(_DWORD *)v13 = 2;
  v13[1] = v16;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v32 = 3;
  v33 = &v34;
  v19 = serialize_json(a1, &v32, 0);
  if ( v32 != 3 )
  {
    if ( !under_debugger )
      interr(1624, &v32, v17, v18, v19);
    BUG();
  }
  v32 = 0;
  v33 = nullptr;
  jvalue_t_clear(&v32);
  v20 = v34;
  if ( v34 )
  {
    v21 = v35;
    if ( (_QWORD)v35 )
    {
      v22 = 0;
      do
      {
        v23 = (__int64 *)(v20 + 40 * v22);
        jvalue_t_clear(v23 + 3);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          v19 = qfree(v24, (const char *)&v32, v19);
        }
        ++v22;
        v20 = v34;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v35 = 0;
    qfree(v20, (const char *)&v32, v19);
  }
  return a1;
}
