__m128i *__fastcall sub_1EBEEA0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int64 a9)
{
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  size_t v16; // rax
  size_t *i; // rsi
  size_t v18; // rax
  unsigned __int64 v19; // rax
  size_t v20; // rdx
  _BYTE *v21; // rsi
  _BYTE *v22; // rdi
  __m128i v23; // xmm5
  __int64 v24; // rax
  __int64 v25[2]; // [rsp+0h] [rbp-68h] BYREF
  char v26; // [rsp+10h] [rbp-58h]
  void *v27; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v28; // [rsp+28h] [rbp-40h]
  _BYTE v29[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( **(_QWORD **)a2 )
  {
    sub_FD8750((__int64)v25, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 88LL), **(size_t ***)(a2 + 16), 0, 1u, 1, 0, 0);
    if ( (v26 & 1) != 0 )
    {
      if ( **(_BYTE **)(a2 + 24) )
      {
        v27 = v29;
        v16 = j__strlen("could not get buffer for file '");
        sub_1EA9D80(&v27, "could not get buffer for file '", (__int64)&aCouldNotGetBuf[v16]);
        for ( i = **(size_t ***)(a2 + 16); ; i = (size_t *)v19 )
        {
          v18 = i[1];
          if ( !v18 )
            break;
          if ( (v18 & 4) == 0 )
            break;
          v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v19 )
            break;
        }
        v20 = *i;
        v21 = i + 4;
        if ( v20 > 0x7FFFFFFFFFFFFFFFLL - v28 )
          std::__throw_length_error("basic_string::append");
        sub_9EE560(&v27, v21, v20);
        sub_9EE7C0(&v27, "'");
        sub_1EAD680(*(_QWORD *)(a2 + 8), v27, v28);
        v22 = v27;
        v23 = _mm_loadu_si128((const __m128i *)&a8);
        v24 = a9;
        *a1 = _mm_loadu_si128((const __m128i *)&a7);
        a1[1] = v23;
        a1[2].m128i_i64[0] = v24;
        if ( v22 != v29 )
          operator delete(v22);
      }
      else
      {
        v14 = _mm_loadu_si128((const __m128i *)&a7);
        v15 = _mm_loadu_si128((const __m128i *)&a8);
        a1[2].m128i_i64[0] = a9;
        *a1 = v14;
        a1[1] = v15;
      }
    }
    else
    {
      if ( **(_QWORD **)a2 == sub_2287CD0(*(_QWORD *)(v25[0] + 8), *(_QWORD *)(v25[0] + 16) - *(_QWORD *)(v25[0] + 8)) )
        a1->m128i_i32[0] = 3;
      else
        a1->m128i_i32[0] = 2;
      a1[1].m128i_i8[0] = 0;
      a1[2].m128i_i8[0] = 0;
    }
    sub_FC2AF0(v25);
    return a1;
  }
  else
  {
    v10 = _mm_loadu_si128((const __m128i *)&a7);
    v11 = _mm_loadu_si128((const __m128i *)&a8);
    a1[2].m128i_i64[0] = a9;
    *a1 = v10;
    a1[1] = v11;
    return a1;
  }
}
