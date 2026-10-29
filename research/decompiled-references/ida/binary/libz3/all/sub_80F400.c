__int64 __fastcall sub_80F400(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  int v6; // r12d
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *v11; // rdi
  __int64 v12; // rsi
  int v13; // edx
  unsigned int v14; // r13d
  __int64 v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int32 v23; // ecx
  int v24; // edx
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rbx
  __m128i v34; // [rsp+20h] [rbp-68h] BYREF
  __int64 v35; // [rsp+30h] [rbp-58h]
  __m128i v36; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+50h] [rbp-38h]

  v4 = *(unsigned int *)(a2 + 20);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL);
  v6 = *(_DWORD *)(a2 + 20);
  v7 = *(unsigned int *)(v5 + 4 * v4);
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)sub_180B130(v7) > 0x13 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v26 = sub_180B150(v7, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (_DWORD)v4 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v27 = sub_17F35B0(v26, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v4));
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v27, "\n");
      }
      else
      {
        v33 = sub_180B150(v7, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (_DWORD)v4 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(v33, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v4));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    return 0;
  }
  v8 = *(unsigned int *)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 600);
  v11 = (unsigned int *)(*(_QWORD *)(v9 + 8LL * *(unsigned int *)(a2 + 12)) + 4 * v8);
  v12 = *(unsigned int *)(a2 + 16);
  v13 = *(_DWORD *)(v5 + 4LL * *(unsigned int *)(*(_QWORD *)(v9 + 8 * v12) + 4 * v8));
  if ( !v13 )
  {
    if ( (unsigned int)sub_180B130(v11) > 0x13 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(v11, v12);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v32 = std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v32, "\n");
      }
      else
      {
        sub_180B150(v11, v12);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_86D800(
      a1,
      *(_DWORD *)(a2 + 4),
      *(_DWORD *)a2,
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 16),
      *(_DWORD *)(a2 + 12),
      *(_DWORD *)(a2 + 20),
      *(_QWORD *)(a2 + 24));
    return 0;
  }
  if ( v13 == *(_DWORD *)(v5 + 4LL * *v11) )
  {
    if ( (unsigned int)sub_180B130(v11) > 0x13 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v28 = sub_180B150(v11, v12);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (_DWORD)v4 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v28, "\n");
      }
      else
      {
        sub_180B150(v11, v12);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (_DWORD)v4 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    return 0;
  }
  ++*(_DWORD *)(a1 + 184);
  v14 = v4 ^ 1;
  if ( (unsigned int)sub_180B130(v11) > 0x13 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v31 = sub_180B150(v11, v12);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v6 != -1 )
        std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v31, "\n");
    }
    else
    {
      sub_180B150(v11, v12);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v6 != -1 )
        std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(_DWORD *)(a2 + 8);
  v17 = sub_7E4EC0(a1);
  v18 = sub_180C100(v17, 56);
  v21 = *(_QWORD *)(a1 + 24);
  v22 = *(_QWORD *)(v15 + 3288);
  LODWORD(v35) = 3;
  *(_DWORD *)(v18 + 12) = v16;
  *(_QWORD *)(v18 + 16) = -1;
  *(_DWORD *)(v18 + 24) = v14;
  *(_DWORD *)(v18 + 28) = -2;
  v23 = *(_DWORD *)(v21 + 3612);
  v24 = *(_DWORD *)(v22 + 4LL * v14);
  *(_QWORD *)v18 = a1;
  *(_DWORD *)(v18 + 8) = 3;
  v34.m128i_i32[0] = v23;
  v34.m128i_i64[1] = v18;
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v36.m128i_i32[0] = v23;
      v36.m128i_i64[1] = v18;
      v37 = 3;
      if ( !v23 && !*(_BYTE *)(v15 + 3832) )
      {
        v29 = *(_QWORD *)(v15 + 3296) + 24LL * (v14 >> 1);
        if ( *(_DWORD *)v29 )
        {
          v30 = _mm_load_si128(&v36);
          *(_DWORD *)(v29 + 16) = 3;
          *(__m128i *)v29 = v30;
        }
      }
    }
    else if ( v24 == -1 )
    {
      v34.m128i_i32[0] = v23;
      v34.m128i_i64[1] = v18;
      LODWORD(v35) = 3;
      sub_11B4C90(v15, v6, -1, v23, v19, v20, (__int128)_mm_load_si128(&v34), 3);
    }
  }
  else
  {
    v34.m128i_i32[0] = v23;
    v34.m128i_i64[1] = v18;
    LODWORD(v35) = 3;
    sub_11C3360(v15, v14, 0, v23, v19, v20, (__int128)_mm_load_si128(&v34), v35);
  }
  return 1;
}

