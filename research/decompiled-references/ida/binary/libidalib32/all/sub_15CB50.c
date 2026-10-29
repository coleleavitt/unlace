unsigned __int64 __fastcall sub_15CB50(__m128i *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int32 v6; // eax
  void *v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // r12
  __int64 v10; // r12
  void *v12; // r14
  void *v13; // rdi
  const void *v14; // r14
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // [rsp+0h] [rbp-98h] BYREF
  __m128i v19; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+20h] [rbp-78h]
  void *v21[2]; // [rsp+28h] [rbp-70h]
  __int128 v22; // [rsp+38h] [rbp-60h]
  void *src; // [rsp+48h] [rbp-50h]
  __int128 v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+68h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v18 = 0;
  v19.m128i_i64[0] = 0;
  v19.m128i_i64[1] = -1;
  v20 = 0;
  src = nullptr;
  *(_OWORD *)v21 = 0;
  v22 = 0;
  v24 = 0;
  if ( (unsigned __int8)navstack_t_get_current() )
  {
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
    v6 = v20;
    v7 = v21[0];
    *a1 = _mm_load_si128(&v18);
    v8 = _mm_load_si128(&v19);
    a1[2].m128i_i32[0] = v6;
    a1[1] = v8;
    if ( v7 )
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(void *, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 16LL))(
                             v7,
                             &v18,
                             v2,
                             v3,
                             v4,
                             v5,
                             v18.m128i_i64[0],
                             v18.m128i_i64[1],
                             v19.m128i_i64[0],
                             v19.m128i_i64[1]);
    v9 = v22;
    if ( (unsigned __int64)v22 > 1 )
    {
      v14 = v21[1];
      v15 = (void *)a1[3].m128i_i64[0];
      if ( a1[4].m128i_i64[0] < (unsigned __int64)v22 )
      {
        v16 = qvector_reserve();
        a1[3].m128i_i64[0] = v16;
        v15 = (void *)v16;
      }
      a1[3].m128i_i64[1] = v9;
      memmove(v15, v14, v9 - 1);
      *(_BYTE *)(a1[3].m128i_i64[0] + v9 - 1) = 0;
    }
    else
    {
      a1[3].m128i_i64[1] = 0;
    }
    v10 = v24;
    if ( (unsigned __int64)v24 > 1 )
    {
      v12 = src;
      v13 = (void *)a1[4].m128i_i64[1];
      if ( a1[5].m128i_i64[1] < (unsigned __int64)v24 )
      {
        v17 = qvector_reserve();
        a1[4].m128i_i64[1] = v17;
        v13 = (void *)v17;
      }
      a1[5].m128i_i64[0] = v10;
      memmove(v13, v12, v10 - 1);
      *(_BYTE *)(a1[4].m128i_i64[1] + v10 - 1) = 0;
    }
    else
    {
      a1[5].m128i_i64[0] = 0;
    }
  }
  if ( v21[0] )
  {
    qfree();
    v21[0] = nullptr;
  }
  if ( v21[1] )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
    v21[1] = nullptr;
    *((_QWORD *)&v22 + 1) = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( v21[1] )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  if ( v21[0] )
    qfree();
  return v25 - __readfsqword(0x28u);
}

