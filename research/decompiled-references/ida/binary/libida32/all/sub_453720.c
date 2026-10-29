unsigned __int64 __fastcall sub_453720(__int64 *a1, __int64 a2, int a3)
{
  char *v3; // rax
  __int64 v6; // rdx
  int v7; // esi
  const char *v8; // r13
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r14
  _QWORD *v19; // r13
  void *v20; // r12
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  unsigned int v23; // r9d
  __int64 v24; // r15
  _BYTE *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-98h] BYREF
  int v38; // [rsp+1Ch] [rbp-7Ch]
  void *v39; // [rsp+20h] [rbp-78h] BYREF
  __m128i v40; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v42; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v3 = (char *)&unk_2AFF1A0;
  v38 = a3;
  v43 = __readfsqword(0x28u);
  v6 = *(int *)(a2 + 56);
  v7 = *(_DWORD *)(a2 + 56);
  while ( v6 != *(_QWORD *)v3 )
  {
    v3 += 16;
    if ( &unk_2AFF200 == (_UNKNOWN *)v3 )
    {
      if ( !under_debugger )
        interr(2659);
      BUG();
    }
  }
  v8 = *((const char **)v3 + 1);
  v39 = nullptr;
  v40 = 0;
  if ( v8 )
  {
    v9 = strlen(v8);
    v10 = v9 + 1;
    v11 = v9;
    v39 = (void *)qvector_reserve(&v39, 0, v9 + 1, 1);
    v40.m128i_i64[0] = v10;
    memmove(v39, v8, v11);
    *((_BYTE *)v39 + v11) = 0;
    v7 = *(_DWORD *)(a2 + 56);
  }
  if ( v7 != 4 )
    sub_357520((__int64 *)&v39);
  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v35 = qvector_reserve(a1, v13, v12 + 1, 24);
    *a1 = v35;
    v12 = a1[1];
    v13 = v35;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = 0;
  *(_OWORD *)(v14 + 8) = 0;
  ++a1[1];
  sub_3573A0((char **)v14);
  v15 = a1[1];
  v16 = *a1;
  if ( a1[2] < (unsigned __int64)(v15 + 1) )
  {
    v34 = qvector_reserve(a1, v16, v15 + 1, 24);
    *a1 = v34;
    v15 = a1[1];
    v16 = v34;
  }
  v17 = v16 + 24 * v15;
  *(_QWORD *)v17 = 0;
  *(_OWORD *)(v17 + 8) = 0;
  ++a1[1];
  sub_3573A0((char **)v17);
  v18 = *(unsigned int *)(a2 + 64);
  ptr = nullptr;
  v19 = &unk_2AFF160;
  v37.m128i_i64[0] = (__int64)&ptr;
  v42 = 0;
  do
  {
    if ( (*v19 & v18) != 0 )
    {
      sub_357520((__int64 *)v37.m128i_i64[0]);
      v18 &= ~*v19;
    }
    v19 += 2;
  }
  while ( &unk_2AFF1A0 != (_UNKNOWN *)v19 );
  v20 = ptr;
  ptr = nullptr;
  v21 = (__m128i)_mm_loadh_ps((const double *)&v42 + 1);
  v42 = 0;
  if ( v39 )
  {
    v37 = v21;
    v40.m128i_i64[0] = 0;
    qfree(v39);
    v22 = _mm_load_si128(&v37);
    v39 = v20;
    v40 = v22;
    if ( ptr )
    {
      *(_QWORD *)&v42 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v39 = v20;
    v40 = v21;
  }
  v23 = *(_DWORD *)(a2 + 64);
  if ( (v23 & 0x1C0) != 0 )
  {
    v24 = v23;
    ptr = nullptr;
    v25 = &unk_2AFF120;
    v37.m128i_i64[0] = (__int64)&ptr;
    v42 = 0;
    do
    {
      if ( (*(_QWORD *)v25 & v24) != 0 )
      {
        sub_357520((__int64 *)v37.m128i_i64[0]);
        v24 &= ~*(_QWORD *)v25;
      }
      v25 += 16;
    }
    while ( algn_2AFF150 != v25 );
    sub_357520((__int64 *)&v39);
    if ( ptr )
    {
      *(_QWORD *)&v42 = 0;
      qfree(ptr);
    }
  }
  v26 = a1[1];
  v27 = *a1;
  if ( a1[2] < (unsigned __int64)(v26 + 1) )
  {
    v33 = qvector_reserve(a1, v27, v26 + 1, 24);
    *a1 = v33;
    v26 = a1[1];
    v27 = v33;
  }
  v28 = v27 + 24 * v26;
  *(_QWORD *)v28 = 0;
  *(_OWORD *)(v28 + 8) = 0;
  ++a1[1];
  sub_3573A0((char **)v28);
  if ( *(_QWORD *)(a2 + 16) > 1u )
  {
    v30 = a1[1];
    v31 = *a1;
    if ( a1[2] < (unsigned __int64)(v30 + 1) )
    {
      v36 = qvector_reserve(a1, v31, v30 + 1, 24);
      *a1 = v36;
      v30 = a1[1];
      v31 = v36;
    }
    v32 = v31 + 24 * v30;
    *(_QWORD *)v32 = 0;
    *(_OWORD *)(v32 + 8) = 0;
    ++a1[1];
    sub_3573A0((char **)v32);
  }
  if ( v39 )
  {
    v40.m128i_i64[0] = 0;
    qfree(v39);
  }
  return v43 - __readfsqword(0x28u);
}

