__int64 __fastcall sub_72BEC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // r13d
  _QWORD *v10; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // kr00_16
  bool v20; // zf
  __int64 i; // rax
  __int64 v22; // rdi
  __m128i v23; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v24[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h] BYREF
  __m128i v26[4]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *a2;
  v6 = *(_DWORD *)(v4 + 712);
  if ( !v6 )
  {
    sub_EE4940(v24, "ctx-solver-simplify", *a2);
    if ( (*(_BYTE *)(v5 + 123) & 0x20) != 0 )
    {
      sub_EE4A00(v24);
    }
    else
    {
      v25 = 0;
      sub_ED5FB0(v5, &v25);
      if ( v25 )
        v6 = *(_DWORD *)(v25 - 4);
      v16 = sub_15EC1C0(*(_QWORD *)(a1 + 16), v6);
      v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)v4);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v23 = v17;
      sub_8E36C0(a1 + 792);
      v18 = _mm_load_si128(&v23);
      v26[0] = v18;
      sub_729A60(a1, v26[0].m128i_i64);
      v19 = v26[0];
      sub_8E36D0(a1 + 792);
      if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 16)) )
      {
        sub_ED2DA0(v5);
        sub_EDB570(v5, v19.m128i_i64[0], 0, 0);
        if ( (unsigned int)sub_180B130(v5) > 9 )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)v18.m128i_i64) )
          {
            sub_186A4C0(*(double *)v18.m128i_i64);
            sub_180B150(v5, v19.m128i_i64[0]);
            std::__ostream_insert<char,std::char_traits<char>>();
            v22 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v22, ")\n");
          }
          else
          {
            sub_180B150(v5, v19.m128i_i64[0]);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        if ( v25 )
          sub_186B220((void *)(v25 - 8));
        sub_EE4A00(v24);
        if ( !v19.m128i_i64[0] )
          goto LABEL_9;
        v20 = (*(_DWORD *)(v19.m128i_i64[0] + 8))-- == 1;
        if ( !v20 )
          goto LABEL_9;
      }
      else
      {
        if ( v25 )
          sub_186B220((void *)(v25 - 8));
        sub_EE4A00(v24);
        if ( !v19.m128i_i64[0] )
          goto LABEL_9;
        v20 = (*(_DWORD *)(v19.m128i_i64[0] + 8))-- == 1;
        if ( !v20 )
          goto LABEL_9;
      }
      sub_15D7BC0(v19.m128i_i64[1], v19.m128i_i64[0]);
    }
LABEL_9:
    v5 = *a2;
  }
  *(_DWORD *)(v5 + 120) = (*(_DWORD *)(v5 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(v5 + 120) & 0xFC000000;
  v7 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v7 + 32);
  v8 = *(_DWORD *)(a3 + 8);
  v9 = *(_DWORD *)(a3 + 12);
  if ( v8 >= v9 )
  {
    v12 = 2 * v9;
    v13 = sub_186B270(8 * v12);
    v8 = *(_DWORD *)(a3 + 8);
    v14 = *(_QWORD **)a3;
    v10 = (_QWORD *)v13;
    if ( v8 )
    {
      if ( v8 - 1 <= 2 || (_QWORD *)v13 == v14 + 1 )
      {
        for ( i = 0; i != v8; ++i )
          v10[i] = v14[i];
      }
      else
      {
        v15 = 0;
        do
        {
          *(__m128i *)&v10[v15] = _mm_loadu_si128((const __m128i *)&v14[v15]);
          v15 += 2;
        }
        while ( v15 != 2LL * (v8 >> 1) );
        if ( (v8 & 1) != 0 )
          v10[v8 & 0xFFFFFFFE] = v14[v8 & 0xFFFFFFFE];
      }
    }
    if ( v14 != (_QWORD *)(a3 + 16) && v14 )
    {
      sub_186B220(v14);
      v8 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v10;
    *(_DWORD *)(a3 + 12) = v12;
  }
  else
  {
    v10 = *(_QWORD **)a3;
  }
  v10[v8] = v7;
  *(_DWORD *)(a3 + 8) = v8 + 1;
  return v8;
}

