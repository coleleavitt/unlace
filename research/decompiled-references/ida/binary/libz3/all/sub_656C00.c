__int64 __fastcall sub_656C00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int32 v4; // r14d
  int v5; // r9d
  __m128i *v6; // rbx
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __m128i *v9; // rbp
  __int64 v10; // r10
  __m128i *v11; // rsi
  __m128i *v12; // rax
  __m128i *v13; // rcx
  int v14; // edx
  __int32 v15; // eax
  __int64 result; // rax
  __m128i *v17; // rax
  int v18; // r8d
  __m128i *v19; // rdx
  const __m128i *v20; // r15
  __m128i *v21; // r11
  __int64 v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  unsigned int v27; // ecx
  char **exception; // r12
  unsigned int v29; // [rsp+8h] [rbp-210h]
  unsigned int v30; // [rsp+8h] [rbp-210h]
  size_t v31; // [rsp+10h] [rbp-208h]
  int v32; // [rsp+18h] [rbp-200h]
  _QWORD v33[4]; // [rsp+30h] [rbp-1E8h] BYREF
  char v34[16]; // [rsp+50h] [rbp-1C8h] BYREF
  char v35[8]; // [rsp+60h] [rbp-1B8h] BYREF
  char v36[432]; // [rsp+68h] [rbp-1B0h] BYREF

  v3 = *(unsigned int *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = *(_DWORD *)(a1 + 64);
  if ( 3 * (int)v3 < (unsigned int)(4 * (v4 + v5)) )
  {
    v31 = 24LL * (unsigned int)(2 * v3);
    v17 = (__m128i *)sub_186B270(v31);
    v18 = 2 * v3;
    v8 = v31;
    v6 = v17;
    if ( 2 * (_DWORD)v3 )
    {
      v19 = &v17[3 * (v3 & 0x7FFFFFFF)];
      do
      {
        v17->m128i_i64[0] = 0;
        v17 += 3;
        v17[-2].m128i_i64[1] = 0;
      }
      while ( v17 != v19 );
    }
    v20 = *(const __m128i **)(a1 + 48);
    v7 = v18 - 1;
    v9 = (__m128i *)((char *)v6 + v31);
    v21 = (__m128i *)((char *)v20 + 24 * *(unsigned int *)(a1 + 56));
    if ( v20 != v21 )
    {
      do
      {
        while ( v20->m128i_i32[1] != 2 )
        {
          v20 = (const __m128i *)((char *)v20 + 24);
          if ( v21 == v20 )
            goto LABEL_39;
        }
        v22 = 24LL * (v20->m128i_i32[0] & v7);
        v23 = (__m128i *)((char *)v6 + v22);
        if ( v31 == v22 )
        {
LABEL_43:
          if ( v6 == v23 )
          {
LABEL_55:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v24 = v6;
          while ( v24->m128i_i32[1] )
          {
            v24 = (__m128i *)((char *)v24 + 24);
            if ( v23 == v24 )
              goto LABEL_55;
          }
        }
        else
        {
          v24 = (__m128i *)((char *)v6 + v22);
          while ( v24->m128i_i32[1] )
          {
            v24 = (__m128i *)((char *)v24 + 24);
            if ( v9 == v24 )
              goto LABEL_43;
          }
        }
        v25 = _mm_loadu_si128(v20);
        v20 = (const __m128i *)((char *)v20 + 24);
        *v24 = v25;
        v24[1].m128i_i64[0] = v20[-1].m128i_i64[1];
      }
      while ( v21 != v20 );
LABEL_39:
      v21 = *(__m128i **)(a1 + 48);
    }
    if ( v21 )
    {
      v32 = v18;
      v29 = v18 - 1;
      sub_186B220(v21);
      v18 = v32;
      v8 = v31;
      v7 = v29;
    }
    *(_QWORD *)(a1 + 48) = v6;
    v5 = 0;
    *(_DWORD *)(a1 + 56) = v18;
    *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    v6 = *(__m128i **)(a1 + 48);
    v7 = v3 - 1;
    v8 = 24 * v3;
    v9 = (__m128i *)((char *)v6 + 24 * v3);
  }
  v10 = (unsigned int)a2 & v7;
  v11 = (__m128i *)((char *)v6 + 24 * v10);
  if ( 24 * v10 != v8 )
  {
    v12 = (__m128i *)((char *)v6 + 24 * v10);
    v13 = nullptr;
    while ( 1 )
    {
      v14 = v12->m128i_i32[1];
      if ( v14 == 2 )
      {
        if ( (_DWORD)a2 == v12->m128i_i32[0] && v12->m128i_i64[1] == a2 )
        {
          v13 = v12;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_21;
          v13 = v12;
          goto LABEL_22;
        }
        v13 = v12;
      }
      v12 = (__m128i *)((char *)v12 + 24);
      if ( v12 == v9 )
        goto LABEL_15;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_15:
    if ( v11 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v15 = v6->m128i_i32[1];
    if ( v15 != 2 )
      break;
    if ( (_DWORD)a2 == v6->m128i_i32[0] && v6->m128i_i64[1] == a2 )
    {
      v13 = v6;
      goto LABEL_23;
    }
LABEL_14:
    v6 = (__m128i *)((char *)v6 + 24);
  }
  if ( v15 )
  {
    v13 = v6;
    goto LABEL_14;
  }
  if ( v13 )
LABEL_21:
    *(_DWORD *)(a1 + 64) = v5 - 1;
  else
    v13 = v6;
LABEL_22:
  v13->m128i_i64[1] = a2;
  v13[1].m128i_i32[0] = v4;
  v13->m128i_i32[1] = 2;
  v13->m128i_i32[0] = a2;
  ++*(_DWORD *)(a1 + 60);
LABEL_23:
  result = v13[1].m128i_u32[0];
  if ( (_DWORD)result == v4 )
  {
    v26 = *(_QWORD *)(a1 + 72);
    if ( !v26 || (v27 = *(_DWORD *)(v26 - 4), v27 == *(_DWORD *)(v26 - 8)) )
    {
      v30 = result;
      sub_5A7FF0((unsigned int **)(a1 + 72));
      v26 = *(_QWORD *)(a1 + 72);
      result = v30;
      v27 = *(_DWORD *)(v26 - 4);
    }
    *(_QWORD *)(v26 + 8LL * v27) = a2;
    *(_DWORD *)(v26 - 4) = v27 + 1;
  }
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( (unsigned __int64)(unsigned int)result >= *(_QWORD *)(a1 + 40) )
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v34);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600((__int64)v35, *(const char **)(*(_QWORD *)(a1 + 16) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      exception = (char **)__cxa_allocate_exception(0x28u);
      std::stringbuf::str(v33, v36);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v33);
      sub_233E40((__int64)v33);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  return result;
}

