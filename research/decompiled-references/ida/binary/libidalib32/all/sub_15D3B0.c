unsigned __int64 __fastcall sub_15D3B0(
        __m128i *a1,
        const __m128i *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int32 v8; // eax
  void *v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rbp
  void *v14; // r15
  void *v15; // rdi
  const void *v16; // r15
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // [rsp+8h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+18h] [rbp-98h] BYREF
  __int64 v22; // [rsp+28h] [rbp-88h]
  void *v23[2]; // [rsp+30h] [rbp-80h]
  __int128 v24; // [rsp+40h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-60h]
  __int128 v26; // [rsp+58h] [rbp-58h]
  unsigned __int64 v27; // [rsp+70h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v20 = 0;
  v21.m128i_i64[0] = 0;
  v21.m128i_i64[1] = -1;
  v22 = 0;
  src = nullptr;
  *(_OWORD *)v23 = 0;
  v24 = 0;
  v26 = 0;
  sub_15D030(a1, &v20, a2, a4, a5, a6);
  sub_10D640();
  navstack_t_stack_jump();
  if ( a1[2].m128i_i64[1] )
  {
    qfree();
    a1[2].m128i_i64[1] = 0;
  }
  if ( a1[3].m128i_i64[0] )
  {
    a1[3].m128i_i64[1] = 0;
    qfree();
    a1[3].m128i_i64[0] = 0;
    a1[4].m128i_i64[0] = 0;
  }
  if ( a1[4].m128i_i64[1] )
  {
    a1[5].m128i_i64[0] = 0;
    qfree();
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[1] = 0;
  }
  if ( a1[2].m128i_i64[1] )
  {
    qfree();
    a1[2].m128i_i64[1] = 0;
  }
  v8 = v22;
  v9 = v23[0];
  *a1 = _mm_load_si128(&v20);
  v10 = _mm_load_si128(&v21);
  a1[2].m128i_i32[0] = v8;
  a1[1] = v10;
  if ( v9 )
    a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, a3);
  v11 = v24;
  if ( (unsigned __int64)v24 > 1 )
  {
    v16 = v23[1];
    v17 = (void *)a1[3].m128i_i64[0];
    if ( a1[4].m128i_i64[0] < (unsigned __int64)v24 )
    {
      v19 = qvector_reserve();
      a1[3].m128i_i64[0] = v19;
      v17 = (void *)v19;
    }
    a1[3].m128i_i64[1] = v11;
    memmove(v17, v16, v11 - 1);
    *(_BYTE *)(a1[3].m128i_i64[0] + v11 - 1) = 0;
  }
  else
  {
    a1[3].m128i_i64[1] = 0;
  }
  v12 = v26;
  if ( (unsigned __int64)v26 > 1 )
  {
    v14 = src;
    v15 = (void *)a1[4].m128i_i64[1];
    if ( a1[5].m128i_i64[1] < (unsigned __int64)v26 )
    {
      v18 = qvector_reserve();
      a1[4].m128i_i64[1] = v18;
      v15 = (void *)v18;
    }
    a1[5].m128i_i64[0] = v12;
    memmove(v15, v14, v12 - 1);
    *(_BYTE *)(a1[4].m128i_i64[1] + v12 - 1) = 0;
  }
  else
  {
    a1[5].m128i_i64[0] = 0;
  }
  sub_10D650();
  if ( v23[0] )
  {
    qfree();
    v23[0] = nullptr;
  }
  if ( v23[1] )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
    v23[1] = nullptr;
    *((_QWORD *)&v24 + 1) = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( v23[1] )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( v23[0] )
    qfree();
  return v27 - __readfsqword(0x28u);
}

