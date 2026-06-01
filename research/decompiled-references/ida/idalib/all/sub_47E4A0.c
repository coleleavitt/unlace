bool __fastcall sub_47E4A0(_QWORD *a1, _DWORD *a2)
{
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // r14
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rax
  const char *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // [rsp+8h] [rbp-90h]
  _BYTE ptr[24]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h]
  _BYTE v26[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  result = sub_47E070((__int64)a1, a2, (char *)&stru_A6130.r_addend + 4);
  if ( result || a1[14] )
  {
    memset(ptr, 0, sizeof(ptr));
    v4 = qvector_reserve(ptr, 0, 22, 1);
    *(_QWORD *)ptr = v4;
    *(_QWORD *)&ptr[8] = 22;
    *(__m128i *)v4 = _mm_load_si128((const __m128i *)&xmmword_23A79C0);
    *(_QWORD *)(v4 + 13) = 0x726F6C6F43746867LL;
    *(_BYTE *)(*(_QWORD *)ptr + 21LL) = 0;
    sub_47D800((__int64)(a1 + 9), (__int64)ptr);
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    memset(ptr, 0, sizeof(ptr));
    v5 = qvector_reserve(ptr, 0, 21, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A79C0);
    *(_QWORD *)ptr = v5;
    *(_QWORD *)&ptr[8] = 21;
    *(_DWORD *)(v5 + 16) = 1717987652;
    *(__m128i *)v5 = si128;
    *(_BYTE *)(*(_QWORD *)ptr + 20LL) = 0;
    sub_47D800((__int64)(a1 + 9), (__int64)ptr);
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    v7 = a1[12];
    v23 = a1 + 6;
    if ( (_QWORD *)v7 != a1 + 10 )
    {
      do
      {
        v11 = haystack;
        if ( *(_QWORD *)(v7 + 40) )
          v11 = *(const char **)(v7 + 32);
        v12 = a1[18];
        v13 = a1[17];
        if ( a1[19] < (unsigned __int64)(v12 + 1) )
        {
          v18 = qvector_reserve(a1 + 17, v13, v12 + 1, 24);
          a1[17] = v18;
          v13 = v18;
          v12 = a1[18];
        }
        v14 = v13 + 24 * v12;
        *(_OWORD *)(v14 + 8) = 0;
        *(_QWORD *)v14 = 0;
        ++a1[18];
        sub_35A790((char **)v14);
        v21 = a1[6];
        *(_QWORD *)ptr = v11;
        v15 = a1[8];
        v27 = 2049;
        v22 = a1[7];
        *(_QWORD *)&ptr[8] = v11;
        *(_QWORD *)&ptr[16] = 8;
        v16 = v22 + 1;
        v25 = 0;
        v26[0] = 72;
        *(_OWORD *)&v26[8] = 0;
        if ( (unsigned __int64)ptr < v21 || (unsigned __int64)ptr >= v21 + (v15 << 6) )
        {
          if ( v15 < v16 )
          {
            v19 = qvector_reserve(v23, v21, v22 + 1, 64);
            a1[6] = v19;
            v21 = v19;
            v22 = a1[7];
          }
          v17 = (__m128i *)((v22 << 6) + v21);
          *v17 = _mm_load_si128((const __m128i *)ptr);
          v17[1] = _mm_load_si128((const __m128i *)&ptr[16]);
          v17[2] = _mm_load_si128((const __m128i *)v26);
          v17[3] = _mm_load_si128((const __m128i *)&v26[16]);
        }
        else
        {
          if ( v15 < v16 )
          {
            v20 = qvector_reserve(v23, v21, v22 + 1, 64);
            a1[6] = v20;
            v21 = v20;
            v22 = a1[7];
          }
          v8 = v21 + (v22 << 6);
          *(_QWORD *)v8 = v11;
          *(_QWORD *)(v8 + 8) = v11;
          *(_QWORD *)(v8 + 16) = 8;
          *(_QWORD *)(v8 + 24) = 0;
          *(_BYTE *)(v8 + 32) = 72;
          *(_QWORD *)(v8 + 56) = 2049;
          *(_OWORD *)(v8 + 40) = 0;
        }
        v9 = haystack;
        v10 = a1[7] + 1LL;
        a1[7] = v10;
        if ( *(_QWORD *)(v14 + 8) )
          v9 = *(const char **)v14;
        *(_QWORD *)(a1[6] + (v10 << 6) - 64) = v9;
        v7 = std::_Rb_tree_increment(v7);
      }
      while ( a1 + 10 != (_QWORD *)v7 );
    }
    a1[3] = a1[6];
    a1[4] = a1[7];
    return 1;
  }
  return result;
}
