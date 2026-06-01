__int64 __fastcall sub_1353170(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbp
  __m128i *v5; // rbx
  int v6; // r15d
  __int64 m128i_i64; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r13
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  signed __int64 v12; // r12
  __m128i *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r12
  __m128i *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  void **v19; // rbp
  void **v21; // rbp
  int v22; // r13d
  const __m128i *v23; // r13
  __int64 v24; // rdi
  __int64 src; // [rsp+0h] [rbp-58h]
  _BYTE *srca; // [rsp+0h] [rbp-58h]
  const __m128i *srcb; // [rsp+0h] [rbp-58h]
  __int64 v28[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(__m128i **)a1;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v3 <= v4 )
    {
      v13 = *(__m128i **)a1;
      if ( *(_DWORD *)(a2 + 8) )
      {
        v14 = *(_QWORD *)a2;
        src = 80 * v3;
        v15 = *(_QWORD *)a2 + 80 * v3;
        v16 = *(__m128i **)a1;
        do
        {
          v17 = v14;
          v18 = (__int64)v16;
          v14 += 80;
          v16 += 5;
          sub_9EE8A0(v18, v17);
          v16[-3] = _mm_loadu_si128((const __m128i *)(v14 - 48));
          v16[-2] = _mm_loadu_si128((const __m128i *)(v14 - 32));
          v16[-1].m128i_i64[0] = *(_QWORD *)(v14 - 16);
          v16[-1].m128i_i16[4] = *(_WORD *)(v14 - 8);
          v16[-1].m128i_i8[12] = *(_BYTE *)(v14 - 4);
        }
        while ( v14 != v15 );
        v13 = *(__m128i **)a1;
        v4 = *(unsigned int *)(a1 + 8);
        v5 = (__m128i *)((char *)v5 + src);
      }
      v19 = (void **)&v13[5 * v4];
      while ( v5 != (__m128i *)v19 )
      {
        while ( 1 )
        {
          v19 -= 10;
          if ( *v19 == v19 + 2 )
            break;
          operator delete(*v19);
          if ( v5 == (__m128i *)v19 )
            goto LABEL_23;
        }
      }
      goto LABEL_23;
    }
    if ( v3 > *(unsigned int *)(a1 + 12) )
    {
      v21 = (void **)&v5[5 * v4];
      while ( v21 != (void **)v5 )
      {
        while ( 1 )
        {
          v21 -= 10;
          if ( *v21 == v21 + 2 )
            break;
          operator delete(*v21);
          if ( v21 == (void **)v5 )
            goto LABEL_32;
        }
      }
LABEL_32:
      *(_DWORD *)(a1 + 8) = 0;
      v5 = (__m128i *)sub_2237400(a1, a1 + 16, v3, 80, v28);
      sub_12E5990(a1, v5);
      v22 = v28[0];
      if ( a1 + 16 != *(_QWORD *)a1 )
        free(*(void **)a1);
      *(_QWORD *)a1 = v5;
      v4 = 0;
      m128i_i64 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 12) = v22;
      v3 = *(unsigned int *)(a2 + 8);
    }
    else
    {
      m128i_i64 = *(_QWORD *)a2;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v4 *= 80LL;
        v23 = (const __m128i *)(m128i_i64 + v4);
        do
        {
          v24 = (__int64)v5;
          srcb = (const __m128i *)m128i_i64;
          v5 += 5;
          sub_9EE8A0(v24, m128i_i64);
          m128i_i64 = (__int64)srcb[5].m128i_i64;
          v5[-3] = _mm_loadu_si128(srcb + 2);
          v5[-2] = _mm_loadu_si128(srcb + 3);
          v5[-1].m128i_i64[0] = srcb[4].m128i_i64[0];
          v5[-1].m128i_i16[4] = srcb[4].m128i_i16[4];
          v5[-1].m128i_i8[12] = srcb[4].m128i_i8[12];
        }
        while ( &srcb[5] != v23 );
        v3 = *(unsigned int *)(a2 + 8);
        v5 = (__m128i *)(*(_QWORD *)a1 + v4);
        m128i_i64 = *(_QWORD *)a2;
      }
    }
    v8 = m128i_i64 + v4;
    v9 = m128i_i64 + 80 * v3;
    if ( v8 == v9 )
    {
LABEL_23:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    while ( 1 )
    {
      v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
      v11 = *(_BYTE **)v8;
      v12 = *(_QWORD *)(v8 + 8);
      if ( v12 + *(_QWORD *)v8 && !v11 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v12 > 0xF )
        break;
      v10 = (_BYTE *)v5->m128i_i64[0];
      if ( v12 == 1 )
      {
        *v10 = *v11;
        v10 = (_BYTE *)v5->m128i_i64[0];
      }
      else if ( v12 )
      {
        goto LABEL_27;
      }
LABEL_8:
      v5->m128i_i64[1] = v12;
      v8 += 80LL;
      v5 += 5;
      v10[v12] = 0;
      v5[-3] = _mm_loadu_si128((const __m128i *)(v8 - 48));
      v5[-2] = _mm_loadu_si128((const __m128i *)(v8 - 32));
      v5[-1].m128i_i64[0] = *(_QWORD *)(v8 - 16);
      v5[-1].m128i_i32[2] = *(_DWORD *)(v8 - 8);
      v5[-1].m128i_i8[12] = *(_BYTE *)(v8 - 4);
      if ( v8 == v9 )
        goto LABEL_23;
    }
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    srca = *(_BYTE **)v8;
    v10 = (_BYTE *)operator new(v12 + 1);
    v5[1].m128i_i64[0] = v12;
    v11 = srca;
    v5->m128i_i64[0] = (__int64)v10;
LABEL_27:
    memcpy(v10, v11, v12);
    v10 = (_BYTE *)v5->m128i_i64[0];
    goto LABEL_8;
  }
  return a1;
}
