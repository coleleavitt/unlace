__int64 __fastcall sub_315730(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i si128; // xmm2
  _QWORD v13[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v14; // [rsp+10h] [rbp-68h] BYREF
  __m128i v15[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]

  v6 = a1->m128i_i32[0];
  v16 = __readfsqword(0x28u);
  if ( v6 == 1 )
    return sub_312B80((__int64)a1);
  if ( v6 )
  {
    if ( v6 != 8 )
    {
      if ( (v6 & 0xF) != 2 )
      {
        if ( !under_debugger )
          sub_383060(51850);
        BUG();
      }
      v7 = a1->m128i_u32[1];
      v8 = 0;
      v14.m128i_i32[0] = 2;
      v14.m128i_i64[1] = 0;
      v14.m128i_i32[1] = v7;
      v15[0] = 0;
      if ( (_DWORD)v7 != 8 )
      {
        v7 = (unsigned int)(8 * v7);
        v8 = 1LL << v7;
      }
      v13[1] = v8;
      v13[0] = 0;
      sub_316BB0(&v14.m128i_u64[1], v13, a3, v7, a5, a6);
      sub_317C60(&v14.m128i_u64[1], &a1->m128i_u64[1]);
      v9 = _mm_loadu_si128(a1);
      v10 = _mm_loadu_si128(a1 + 1);
      *a1 = _mm_load_si128(&v14);
      si128 = _mm_load_si128(v15);
      v15[1] = v9;
      a1[1] = si128;
      v15[2] = v10;
      v14 = v9;
      v15[0] = v10;
      sub_312B80((__int64)&v14);
    }
  }
  else
  {
    sub_312B80((__int64)a1);
    a1->m128i_i32[0] = 1;
  }
  return v16 - __readfsqword(0x28u);
}
