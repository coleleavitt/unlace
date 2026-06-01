unsigned __int64 __fastcall sub_499DE0(const __m128i *a1)
{
  __int8 v1; // bp
  __int64 v4; // r12
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __int32 v7; // eax
  __int8 v8; // cl
  _QWORD *v9; // r13
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  __m128i v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int32 v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v1 = a1[9].m128i_i8[0];
  v24 = __readfsqword(0x28u);
  switch_dbctx(a1->m128i_i32[2]);
  if ( v1 )
  {
    v17 = 0;
    sub_497A70(a1[3].m128i_i64);
    v4 = a1[4].m128i_i64[0];
    ptr = nullptr;
    v20 = 0;
    if ( v4 )
    {
      ptr = (void *)qalloc_or_throw(144 * v4);
      v15 = ptr;
      v16 = 0;
      *((_QWORD *)&v20 + 1) = v4;
      while ( 1 )
      {
        sub_495840((__int64)v15 + 144 * v16, 144 * v16 + a1[3].m128i_i64[1]);
        if ( v4 == ++v16 )
          break;
        v15 = ptr;
      }
      *(_QWORD *)&v20 = v4;
    }
    v5 = _mm_loadu_si128(a1 + 5);
    v6 = _mm_loadl_epi64(a1 + 6);
    v7 = a1[6].m128i_i32[2];
    v8 = a1[6].m128i_i8[11];
    v21 = v5;
    v23 = v7;
    v22 = v6.m128i_i64[0];
    if ( v4
      && (_mm_cvtsi128_si32(_mm_shuffle_epi32(v6, 229)) & 0x400) != 0
      && v5.m128i_i64[0] < (unsigned __int64)(*((_QWORD *)ptr + 18 * v4 - 18) + *((_QWORD *)ptr + 18 * v4 - 17) + 7LL) >> 3 )
    {
      v21.m128i_i64[0] = (unsigned __int64)(*((_QWORD *)ptr + 18 * v4 - 18) + *((_QWORD *)ptr + 18 * v4 - 17) + 7LL) >> 3;
    }
    if ( !(unsigned __int8)create_tinfo(&v17, v8 == 0 ? 13 : 29, 13, &ptr) )
    {
      if ( !under_debugger )
        interr(2162);
      BUG();
    }
    v18 = 0;
    v9 = *(_QWORD **)(qword_2CCB598 + 1672);
    copy_tinfo_t(&v18);
    v10 = sub_3BDD60(v9, a1[7].m128i_i64[0]);
    sub_53E720(v9, &v18, v10);
    sub_5B6F10(v9, &v18, 0, 2);
    clear_tinfo_t(&v18);
    v11 = ptr;
    if ( ptr )
    {
      v12 = v20;
      if ( (_QWORD)v20 )
      {
        v13 = 0;
        do
        {
          v14 = 9 * v13++;
          sub_379560(&v11[2 * v14]);
          v11 = ptr;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v20 = 0;
      qfree(v11);
    }
    clear_tinfo_t(&v17);
  }
  return v24 - __readfsqword(0x28u);
}
