__int64 __fastcall sub_7E9B80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // dl
  __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // eax
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v30; // eax
  _QWORD *v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  __m128i v34; // [rsp+20h] [rbp-68h] BYREF
  __m128i v35; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+40h] [rbp-48h]

  v5 = *(_QWORD *)(a3 + 48);
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *(_QWORD *)(v5 + 8);
  if ( v6 )
  {
    v7 = v6 + 40LL * *(unsigned int *)(v6 - 4);
    if ( v7 != v6 )
    {
      v8 = *(_QWORD *)(v5 + 8);
      do
      {
        v9 = v8;
        v8 += 40;
        sub_868920(v9, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v7 != v8 );
    }
  }
  v10 = *(_QWORD *)(v5 + 16);
  v11 = 0;
  v12 = *(unsigned int *)(v10 + 20);
  v32 = 8 * v12;
  if ( (_DWORD)v12 )
  {
    do
    {
      v15 = *(_QWORD *)(a3 + 56);
      if ( *(_QWORD *)(v15 + v11) )
      {
        v31 = *(_QWORD **)(v15 + v11);
        v13 = *(_QWORD *)(a1 + 8);
        v14 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v14, *(_QWORD *)(v13 + 1592), *v31, 3);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v11 += 8;
    }
    while ( v11 != v32 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v16 = *(_QWORD *)(a3 + 16);
  v17 = *(_BYTE *)(a3 + 24);
  v18 = *(_QWORD *)(a3 + 8);
  v19 = *(_QWORD *)(a1 + 24);
  if ( v16 )
  {
    v20 = *(_DWORD *)(v16 + 8) + 1;
    *(_DWORD *)(v16 + 8) = v20;
    if ( v18 )
    {
      v21 = *(_DWORD *)(v18 + 8);
      v34.m128i_i64[1] = v19;
      v34.m128i_i64[0] = v18;
      *(_DWORD *)(v18 + 8) = v21 + 2;
      v35.m128i_i64[0] = v16;
      v35.m128i_i64[1] = v19;
      ++*(_DWORD *)(v16 + 8);
      v36 = v17;
      v22 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v19, v18);
      v23 = *(_DWORD *)(v16 + 8) - 1;
      *(_DWORD *)(v16 + 8) = v23;
      if ( v23 )
        goto LABEL_16;
    }
    else
    {
      v34.m128i_i64[1] = v19;
      v35.m128i_i64[0] = v16;
      v35.m128i_i64[1] = v19;
      v36 = v17;
      v34.m128i_i64[0] = 0;
      *(_DWORD *)(v16 + 8) = v20;
      if ( v20 )
      {
LABEL_16:
        v24 = *(_QWORD *)(a3 + 8);
        goto LABEL_17;
      }
    }
    sub_15D7BC0(v19, v16);
    goto LABEL_16;
  }
  if ( !v18 )
  {
    v34.m128i_i64[0] = 0;
    v34.m128i_i64[1] = v19;
    v35.m128i_i64[0] = 0;
    v35.m128i_i64[1] = v19;
    v36 = v17;
    goto LABEL_32;
  }
  v30 = *(_DWORD *)(v18 + 8);
  v36 = *(_BYTE *)(a3 + 24);
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v19);
  v35 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v19);
  *(_DWORD *)(v18 + 8) = v30 + 1;
  if ( v30 != -1 )
    goto LABEL_18;
  sub_15D7BC0(v19, v18);
  v24 = *(_QWORD *)(a3 + 8);
LABEL_17:
  if ( !v24 )
  {
LABEL_32:
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_19;
  }
LABEL_18:
  sub_868920(&v34, a2);
LABEL_19:
  v25 = v35.m128i_i64[0];
  if ( v35.m128i_i64[0] )
  {
    v26 = v35.m128i_i64[1];
    v22 = (*(_DWORD *)(v35.m128i_i64[0] + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v26, v25);
  }
  v27 = v34.m128i_i64[0];
  if ( v34.m128i_i64[0] )
  {
    v28 = v34.m128i_i64[1];
    v22 = (*(_DWORD *)(v34.m128i_i64[0] + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v28, v27);
  }
  return a2;
}

