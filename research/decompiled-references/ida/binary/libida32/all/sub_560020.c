__int64 __fastcall sub_560020(__m128i *a1, char a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  __m128i v10; // xmm0
  void *v11; // rdx
  void *v12; // rax
  __m128i v13; // xmm1
  _DWORD *v14; // rax
  __int64 (__fastcall *v15)(__m128i *, char); // rax
  __int64 (__fastcall *v16)(__m128i *, unsigned int); // rax
  const char *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ebp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __m128i v22; // [rsp+8h] [rbp-50h] BYREF
  __int64 v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+2Ch] [rbp-2Ch]
  int v26; // [rsp+30h] [rbp-28h]
  unsigned __int64 v27; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v4 = a1[1].m128i_u32[0];
  v27 = __readfsqword(0x28u);
  if ( (get_aflags(v4) & 0x4000) != 0 )
  {
    ptr = nullptr;
    v22 = 0;
    v7 = getinf(37);
    v8 = a1[1].m128i_u32[0];
    v23 = 24;
    v26 = 0;
    v24 = v7;
    v25 = 1;
    if ( get_ea_name(&ptr, v8, 71, &v23) <= 0 || sub_375980(0x15u, a1, ptr) < 0 )
    {
      v2 = 0;
    }
    else
    {
      v9 = a1[9].m128i_i32[0];
      if ( a2 )
      {
        v19 = a1->m128i_i64[0];
        a1[9].m128i_i32[0] = v9 & 0xFFFFE76F;
        v20 = v9 & 0x1890;
        (*(void (__fastcall **)(__m128i *))(v19 + 160))(a1);
        v9 = v20 | a1[9].m128i_i32[0];
      }
      LOBYTE(v9) = v9 | 0x90;
      v10 = _mm_loadu_si128(a1 + 2);
      v11 = ptr;
      a1[9].m128i_i32[0] = v9;
      v12 = (void *)a1[1].m128i_i64[1];
      v13 = _mm_loadu_si128(&v22);
      a1[1].m128i_i64[1] = (__int64)v11;
      ptr = v12;
      v14 = (_DWORD *)a1[30].m128i_i64[0];
      a1[2] = v13;
      v22 = v10;
      if ( (*v14 & 0x4000000) == 0 )
      {
        v15 = *(__int64 (__fastcall **)(__m128i *, char))(a1->m128i_i64[0] + 32);
        if ( (char *)v15 == (char *)sub_558570 )
          sub_558320(a1, 58);
        else
          v15(a1, 58);
      }
      v16 = *(__int64 (__fastcall **)(__m128i *, unsigned int))(a1->m128i_i64[0] + 128);
      if ( (char *)v16 == (char *)sub_557B20 )
      {
        sub_3DA2C0((__int64)&a1[1].m128i_i64[1]);
        v17 = haystack;
        if ( a1[2].m128i_i64[0] )
          v17 = (const char *)a1[1].m128i_i64[1];
        v18 = (*(__int64 (__fastcall **)(__m128i *, const char *, _QWORD))(a1->m128i_i64[0] + 136))(a1, v17, 0);
        a1[2].m128i_i64[0] = 0;
        v2 = v18;
      }
      else
      {
        v2 = v16(a1, 0);
      }
    }
    if ( ptr )
    {
      v22.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  return v2;
}

