unsigned __int64 __fastcall sub_485150(const __m128i *a1, const char *a2)
{
  __int8 v2; // bp
  __int64 v5; // r12
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int32 v8; // eax
  __int8 v9; // cl
  _QWORD *v10; // r13
  unsigned int v11; // eax
  _QWORD *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+8h] [rbp-70h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v22; // [rsp+18h] [rbp-60h]
  __m128i v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  __int32 v25; // [rsp+40h] [rbp-38h]
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]

  v2 = a1[9].m128i_i8[0];
  v26 = __readfsqword(0x28u);
  switch_dbctx(a1->m128i_i32[2]);
  if ( v2 )
  {
    v19 = 0;
    sub_482D70(a1[3].m128i_i64);
    v5 = a1[4].m128i_i64[0];
    ptr = nullptr;
    v22 = 0;
    if ( v5 )
    {
      ptr = (void *)qalloc_or_throw(v5 << 7, a2);
      v17 = ptr;
      v18 = 0;
      *((_QWORD *)&v22 + 1) = v5;
      while ( 1 )
      {
        sub_480B60((__int64)v17 + 128 * v18, (const __m128i *)((v18 << 7) + a1[3].m128i_i64[1]));
        if ( v5 == ++v18 )
          break;
        v17 = ptr;
      }
      *(_QWORD *)&v22 = v5;
    }
    v6 = _mm_loadu_si128(a1 + 5);
    v7 = _mm_loadl_epi64(a1 + 6);
    v8 = a1[6].m128i_i32[2];
    v9 = a1[6].m128i_i8[11];
    v23 = v6;
    v25 = v8;
    v24 = v7.m128i_i64[0];
    if ( v5 )
    {
      if ( (_mm_cvtsi128_si32(_mm_shuffle_epi32(v7, 229)) & 0x400) != 0 )
      {
        v16 = v5 << 7;
        if ( v6.m128i_i64[0] < (unsigned __int64)(*(_QWORD *)((char *)ptr + v16 - 128)
                                                + *(_QWORD *)((char *)ptr + v16 - 120)
                                                + 7LL) >> 3 )
          v23.m128i_i64[0] = (unsigned __int64)(*(_QWORD *)((char *)ptr + v16 - 128)
                                              + *(_QWORD *)((char *)ptr + v16 - 120)
                                              + 7LL) >> 3;
      }
    }
    if ( !(unsigned __int8)create_tinfo(&v19, v9 == 0 ? 13 : 29, 13, &ptr) )
    {
      if ( !under_debugger )
        interr(2162);
      BUG();
    }
    v20 = 0;
    v10 = *(_QWORD **)(qword_2CA1698 + 1480);
    copy_tinfo_t(&v20);
    v11 = sub_3B90A0(v10, a1[7].m128i_i32[0]);
    sub_525A20(v10, &v20, v11);
    sub_59CD70(v10, &v20, 0, 2);
    clear_tinfo_t(&v20);
    v12 = ptr;
    if ( ptr )
    {
      v13 = v22;
      if ( (_QWORD)v22 )
      {
        v14 = 0;
        do
        {
          v15 = v14++;
          sub_375BF0(&v12[16 * v15]);
          v12 = ptr;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v22 = 0;
      qfree(v12);
    }
    clear_tinfo_t(&v19);
  }
  return v26 - __readfsqword(0x28u);
}

