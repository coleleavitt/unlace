void __fastcall sub_402AA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __m128i *v4; // rax
  __m128i *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r12
  __m128i v11; // xmm0
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rdi
  __m128i *v16; // [rsp+0h] [rbp-98h] BYREF
  __m128 v17; // [rsp+8h] [rbp-90h] BYREF
  __m128i *v18; // [rsp+20h] [rbp-78h] BYREF
  __m128i v19; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  __int64 v22; // [rsp+60h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 704) )
  {
    sub_3FCFD0((__int64 *)&v16, "none");
    v3 = a2[1];
    if ( !v3 )
    {
LABEL_8:
      v9 = *(_QWORD *)(a1 + 704) + 16LL;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v9, *(const char **)(*(_QWORD *)(a2[2] + 24LL) + 16LL));
      std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v10 = std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_3DAEE0((__int64 *)&v18, a2[3], *(_QWORD *)(a1 + 152), 0, 0, 0);
      sub_160E8B0(v10, &v18);
      std::operator<<<std::char_traits<char>>();
      sub_3FCDF0(v21, v22);
      sub_18572D0(v20);
      sub_18572D0(&v19.m128i_u64[1]);
      sub_233E40((__int64)&v16);
      return;
    }
    sub_41DCC0(&v18, **(unsigned int **)(v3 + 24));
    v4 = v16;
    v5 = v16;
    if ( v16 == (__m128i *)&v17.m128_u16[4] )
    {
      if ( v18 != (__m128i *)&v19.m128i_u64[1] )
      {
        v11 = _mm_loadu_si128(&v19);
        v16 = v18;
        v17 = (__m128)v11;
        goto LABEL_22;
      }
      v6 = v19.m128i_i64[0];
      v7 = v19.m128i_i64[0];
    }
    else
    {
      v6 = v19.m128i_i64[0];
      v7 = v19.m128i_i64[0];
      if ( v18 != (__m128i *)&v19.m128i_u64[1] )
      {
        v16 = v18;
        v8 = v17.m128_i64[1];
        v17 = _mm_loadh_ps((const double *)&v19.m128i_i64[1]);
        if ( v4 )
        {
          v18 = v4;
          v19.m128i_i64[1] = v8;
LABEL_7:
          v19.m128i_i64[0] = 0;
          v4->m128i_i8[0] = 0;
          sub_233E40((__int64)&v18);
          goto LABEL_8;
        }
LABEL_22:
        v18 = (__m128i *)&v19.m128i_u64[1];
        v4 = (__m128i *)&v19.m128i_u64[1];
        goto LABEL_7;
      }
    }
    if ( !v6 )
    {
LABEL_20:
      v17.m128_u64[0] = v7;
      v4->m128i_i8[v7] = 0;
      v4 = v18;
      goto LABEL_7;
    }
    if ( v6 == 1 )
    {
      v16->m128i_i8[0] = v19.m128i_i8[8];
      v7 = v19.m128i_i64[0];
      v4 = v16;
      goto LABEL_20;
    }
    if ( (unsigned int)v6 >= 8 )
    {
      v16->m128i_i64[0] = v19.m128i_i64[1];
      *(__int64 *)((char *)&v5->m128i_i64[-1] + (unsigned int)v6) = *(__int64 *)((char *)v19.m128i_i64 + (unsigned int)v6);
      v12 = (unsigned __int64)&v5->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (((_DWORD)v6 + (_DWORD)v5 - (_DWORD)v12) & 0xFFFFFFF8) >= 8 )
      {
        v13 = (v6 + (_DWORD)v5 - v12) & 0xFFFFFFF8;
        v14 = 0;
        do
        {
          v15 = v14;
          v14 += 8;
          *(_QWORD *)(v12 + v15) = *(_QWORD *)((char *)&v19.m128i_u64[1] - ((char *)v5 - v12) + v15);
        }
        while ( v14 < v13 );
      }
    }
    else
    {
      if ( (v6 & 4) != 0 )
      {
        v16->m128i_i32[0] = v19.m128i_i32[2];
        *(__int32 *)((char *)&v5->m128i_i32[-1] + (unsigned int)v6) = *(__int32 *)((char *)&v19.m128i_i32[1]
                                                                                 + (unsigned int)v6);
        v5 = v16;
        v6 = v19.m128i_i64[0];
        goto LABEL_19;
      }
      if ( !(_DWORD)v6 )
      {
LABEL_19:
        v7 = v6;
        v4 = v5;
        goto LABEL_20;
      }
      v16->m128i_i8[0] = v19.m128i_i8[8];
      if ( (v6 & 2) != 0 )
      {
        *(__int16 *)((char *)&v5->m128i_i16[-1] + (unsigned int)v6) = *(__int16 *)((char *)&v19.m128i_i16[3]
                                                                                 + (unsigned int)v6);
        v5 = v16;
        v6 = v19.m128i_i64[0];
        goto LABEL_19;
      }
    }
    v5 = v16;
    v6 = v19.m128i_i64[0];
    goto LABEL_19;
  }
}

