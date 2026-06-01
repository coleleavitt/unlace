__int64 __fastcall sub_15CED0(__m128i *a1, const void *a2, __int64 a3, const __m128i *a4, char a5)
{
  size_t v8; // rax
  size_t v9; // rbp
  __int64 *v10; // rdi
  char v11; // r13
  __int64 v12; // rbp
  __int32 v13; // eax
  __m128i v14; // xmm0
  size_t v15; // r14
  void *v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int32 v21; // eax
  __int64 v22; // rdi
  __m128i v23; // xmm0
  size_t v24; // rbp
  size_t v25; // rbp
  unsigned int v26; // ebp
  void *v28; // rdi
  size_t v29; // r15
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // rax
  const void *v33; // rsi
  void *v34; // rax
  const void *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+8h] [rbp-C0h]
  __m128i v40; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+30h] [rbp-98h]
  __int32 v42; // [rsp+40h] [rbp-88h]
  __int64 v43; // [rsp+48h] [rbp-80h]
  void *v44; // [rsp+50h] [rbp-78h]
  __int128 v45; // [rsp+58h] [rbp-70h]
  void *v46; // [rsp+68h] [rbp-60h]
  __int128 v47; // [rsp+70h] [rbp-58h]
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a2 && (v8 = strlen((const char *)a2), (v9 = v8) != 0) )
  {
    v28 = (void *)a1[6].m128i_i64[1];
    v29 = v8 + 1;
    if ( a1[7].m128i_i64[1] < v8 + 1 )
    {
      v36 = qvector_reserve();
      a1[6].m128i_i64[1] = v36;
      v28 = (void *)v36;
    }
    a1[7].m128i_i64[0] = v29;
    memmove(v28, a2, v9);
    *(_BYTE *)(a1[6].m128i_i64[1] + v9) = 0;
  }
  else
  {
    a1[7].m128i_i64[0] = 0;
  }
  v38 = 0;
  v39 = 0;
  v10 = qword_253FE8;
  if ( !qword_253FE8 )
  {
    v37 = operator new(0x18u);
    *(_QWORD *)v37 = 0;
    v10 = (__int64 *)v37;
    qword_253FE8 = (_QWORD *)v37;
    *(_OWORD *)(v37 + 8) = 0;
  }
  v11 = sub_121200(v10, (__int64)&v38, a1[6].m128i_i64[0], 1);
  v12 = a4[2].m128i_i64[1];
  v13 = a4[2].m128i_i32[0];
  v40 = _mm_loadu_si128(a4);
  v14 = _mm_loadu_si128(a4 + 1);
  v42 = v13;
  v41 = v14;
  if ( v12 )
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v15 = a1[7].m128i_u64[0];
  v16 = nullptr;
  v45 = 0;
  if ( v15 )
  {
    v34 = (void *)qalloc_or_throw();
    v35 = (const void *)a1[6].m128i_i64[1];
    *((_QWORD *)&v45 + 1) = v15;
    v16 = v34;
    memcpy(v34, v35, v15);
    *(_QWORD *)&v45 = v15;
  }
  v46 = nullptr;
  v43 = v12;
  v44 = v16;
  v47 = 0;
  sub_159AB0(a1, &v40);
  if ( v12 )
  {
    qfree();
    if ( !v16 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v16 )
LABEL_12:
    qfree();
LABEL_13:
  v17 = a1[2].m128i_i64[1];
  if ( *(_DWORD *)(v17 + 8) == -1 )
    *(_DWORD *)(v17 + 8) = (*(__int16 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1[6].m128i_i64[0] + 288LL))(
                             a1[6].m128i_i64[0],
                             a1);
  v18 = operator new(0x10u);
  *(_QWORD *)v18 = -1;
  v19 = v18;
  *(_DWORD *)(v18 + 8) = 0;
  navstack_t_register_live();
  v20 = _mm_loadu_si128(a1);
  v21 = a1[2].m128i_i32[0];
  a1[8].m128i_i64[0] = v19;
  v43 = 0;
  v22 = a1[2].m128i_i64[1];
  v40 = v20;
  v23 = _mm_loadu_si128(a1 + 1);
  v42 = v21;
  v41 = v23;
  if ( v22 )
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v24 = a1[3].m128i_u64[1];
  v44 = nullptr;
  v45 = 0;
  if ( v24 )
  {
    v32 = (void *)qalloc_or_throw();
    v33 = (const void *)a1[3].m128i_i64[0];
    v44 = v32;
    *((_QWORD *)&v45 + 1) = v24;
    memcpy(v32, v33, v24);
    *(_QWORD *)&v45 = v24;
  }
  v25 = a1[5].m128i_u64[0];
  v46 = nullptr;
  v47 = 0;
  if ( v25 )
  {
    v30 = (void *)qalloc_or_throw();
    v31 = (const void *)a1[4].m128i_i64[1];
    v46 = v30;
    *((_QWORD *)&v47 + 1) = v25;
    memcpy(v30, v31, v25);
    *(_QWORD *)&v47 = v25;
  }
  v26 = navstack_t_init();
  if ( (_BYTE)v26 != 1 && v11 && (a5 & 2) != 0 )
    navstack_t_stack_jump();
  if ( v43 )
  {
    qfree();
    v43 = 0;
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
    v44 = nullptr;
    *((_QWORD *)&v45 + 1) = 0;
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  if ( v43 )
    qfree();
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  return v26;
}

