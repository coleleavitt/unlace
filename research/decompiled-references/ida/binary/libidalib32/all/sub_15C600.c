__int64 __fastcall sub_15C600(__m128i *a1, const void *a2, __int64 a3, const __m128i *a4, char a5)
{
  size_t v8; // rax
  size_t v9; // r13
  __int64 *v10; // rdi
  char v11; // r13
  __int32 v12; // eax
  __m128i v13; // xmm0
  __int64 v14; // rbp
  size_t v15; // r14
  void *v16; // r15
  __int64 v17; // rbp
  _QWORD *v18; // rbp
  __m128i v19; // xmm0
  __int32 v20; // eax
  __int64 v21; // rdi
  __m128i v22; // xmm0
  size_t v23; // rbp
  size_t v24; // rbp
  unsigned int v25; // ebp
  void *v27; // rdi
  size_t v28; // r15
  void *v29; // rax
  const void *v30; // rsi
  void *v31; // rax
  const void *v32; // rsi
  void *v33; // rax
  const void *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+8h] [rbp-C0h]
  __m128i v39; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+30h] [rbp-98h]
  __int32 v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+48h] [rbp-80h]
  void *v43; // [rsp+50h] [rbp-78h]
  __int128 v44; // [rsp+58h] [rbp-70h]
  void *v45; // [rsp+68h] [rbp-60h]
  __int128 v46; // [rsp+70h] [rbp-58h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a2 && (v8 = strlen((const char *)a2), (v9 = v8) != 0) )
  {
    v27 = (void *)a1[6].m128i_i64[1];
    v28 = v8 + 1;
    if ( a1[7].m128i_i64[1] < v8 + 1 )
    {
      v35 = qvector_reserve();
      a1[6].m128i_i64[1] = v35;
      v27 = (void *)v35;
    }
    a1[7].m128i_i64[0] = v28;
    memmove(v27, a2, v9);
    *(_BYTE *)(a1[6].m128i_i64[1] + v9) = 0;
  }
  else
  {
    a1[7].m128i_i64[0] = 0;
  }
  v37 = 0;
  v38 = 0;
  v10 = qword_252E48;
  if ( !qword_252E48 )
  {
    v36 = operator new(0x18u);
    *(_QWORD *)v36 = 0;
    v10 = (__int64 *)v36;
    qword_252E48 = (_QWORD *)v36;
    *(_OWORD *)(v36 + 8) = 0;
  }
  v11 = sub_120C70(v10, (__int64)&v37, a1[6].m128i_i64[0], 1);
  v12 = a4[2].m128i_i32[0];
  v39 = _mm_loadu_si128(a4);
  v13 = _mm_loadu_si128(a4 + 1);
  v14 = a4[2].m128i_i64[1];
  v41 = v12;
  v40 = v13;
  if ( v14 )
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = a1[7].m128i_u64[0];
  v16 = nullptr;
  v44 = 0;
  if ( v15 )
  {
    v33 = (void *)qalloc_or_throw();
    v34 = (const void *)a1[6].m128i_i64[1];
    *((_QWORD *)&v44 + 1) = v15;
    v16 = v33;
    memcpy(v33, v34, v15);
    *(_QWORD *)&v44 = v15;
  }
  v45 = nullptr;
  v42 = v14;
  v43 = v16;
  v46 = 0;
  sub_159230(a1, &v39);
  if ( v14 )
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
  v18 = (_QWORD *)operator new(8u);
  *v18 = 0xFFFFFFFFLL;
  navstack_t_register_live();
  v19 = _mm_loadu_si128(a1);
  v20 = a1[2].m128i_i32[0];
  a1[8].m128i_i64[0] = (__int64)v18;
  v42 = 0;
  v21 = a1[2].m128i_i64[1];
  v39 = v19;
  v22 = _mm_loadu_si128(a1 + 1);
  v41 = v20;
  v40 = v22;
  if ( v21 )
    v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v23 = a1[3].m128i_u64[1];
  v43 = nullptr;
  v44 = 0;
  if ( v23 )
  {
    v31 = (void *)qalloc_or_throw();
    v32 = (const void *)a1[3].m128i_i64[0];
    v43 = v31;
    *((_QWORD *)&v44 + 1) = v23;
    memcpy(v31, v32, v23);
    *(_QWORD *)&v44 = v23;
  }
  v24 = a1[5].m128i_u64[0];
  v45 = nullptr;
  v46 = 0;
  if ( v24 )
  {
    v29 = (void *)qalloc_or_throw();
    v30 = (const void *)a1[4].m128i_i64[1];
    v45 = v29;
    *((_QWORD *)&v46 + 1) = v24;
    memcpy(v29, v30, v24);
    *(_QWORD *)&v46 = v24;
  }
  v25 = navstack_t_init();
  if ( (_BYTE)v25 != 1 && v11 && (a5 & 2) != 0 )
    navstack_t_stack_jump();
  if ( v42 )
  {
    qfree();
    v42 = 0;
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
    v43 = nullptr;
    *((_QWORD *)&v44 + 1) = 0;
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v42 )
    qfree();
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v25;
}

