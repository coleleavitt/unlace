_QWORD *__fastcall clang_Cursor_Evaluate(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, __int128 a8)
{
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  __m128i v21; // [rsp+0h] [rbp-28h]
  __m128i v22; // [rsp+0h] [rbp-28h]
  __m128i v23; // [rsp+0h] [rbp-28h]

  if ( (_DWORD)a7 == 202 )
  {
    v22 = _mm_loadu_si128((const __m128i *)&a7);
    v15 = sub_63A2A0(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            v22.m128i_i32[0],
            v22.m128i_i32[2],
            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    v16 = 8LL * *(unsigned int *)(v15 + 4);
    v10 = v15 + v16 + 16;
    v17 = (__int64 *)(v15 + 16);
    if ( v16 )
    {
      while ( 1 )
      {
        v11 = *v17;
        a2 = *(unsigned __int16 *)*v17;
        v9 = a2 + 509;
        LOWORD(v9) = (a2 + 509) & 0x1FF;
        if ( (unsigned __int16)v9 <= 0x7Fu )
          break;
        if ( (__int64 *)v10 == ++v17 )
          return nullptr;
      }
      return sub_5FF690(v11, a2, v9, v10, v12, v13, a7, a8);
    }
  }
  else
  {
    v8 = a7 - 1;
    if ( (unsigned int)(a7 - 1) <= 0x26 || (v8 = a7 - 600, (unsigned int)(a7 - 600) <= 4) )
    {
      v23 = _mm_loadu_si128((const __m128i *)&a7);
      v18 = sub_63A250(a1, a2, v8, a4, a5, a6, v23.m128i_i32[0], v23.m128i_i64[1]);
      v19 = v18;
      if ( !v18 )
        return nullptr;
      v20 = *(_BYTE *)(v18 + 28) & 0x7F;
      if ( (unsigned int)(v20 - 38) > 6 )
      {
        if ( (unsigned int)(v20 - 47) > 2 )
          return nullptr;
        v11 = sub_781770(v19);
      }
      else
      {
        v11 = sub_77BC00(v19);
      }
    }
    else
    {
      if ( (unsigned int)(a7 - 100) > 0x38 )
        return nullptr;
      v21 = _mm_loadu_si128((const __m128i *)&a7);
      v11 = sub_63A260(
              a1,
              a2,
              v8,
              a4,
              a5,
              a6,
              v21.m128i_i32[0],
              v21.m128i_i32[2],
              _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    }
    if ( v11 )
      return sub_5FF690(v11, a2, v9, v10, v12, v13, a7, a8);
  }
  return nullptr;
}

