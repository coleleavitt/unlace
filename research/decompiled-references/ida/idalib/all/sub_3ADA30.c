__int64 __fastcall sub_3ADA30(char *s2, void **a2)
{
  char v2; // r12
  _QWORD *v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdx
  size_t v6; // r12
  size_t v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void **v16; // r14
  size_t v17; // r15
  char v18; // al
  size_t v19; // r12
  void *v20; // rbx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rax
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  void *dest; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v2 = (char)a2;
  v3 = *(_QWORD **)(qword_2CCB598 + 1576);
  if ( !v3[28] )
  {
    dest = nullptr;
    *(_OWORD *)n = 0;
    a2 = (void **)v3[27];
    v15 = v3[29];
    v16 = a2;
    if ( &dest < a2 || &dest >= &a2[3 * v15] )
    {
      if ( v15 || (v28 = qvector_reserve(v3 + 27, a2, 1, 24), v29 = v3[28] == 0, v3[27] = v28, v16 = (void **)v28, v29) )
      {
        *v16 = nullptr;
        *(_OWORD *)(v16 + 1) = 0;
        v17 = n[0];
        if ( n[0] )
        {
          v25 = (void *)qalloc_or_throw(n[0]);
          v16[2] = (void *)v17;
          *v16 = v25;
          a2 = (void **)dest;
          memcpy(v25, dest, v17);
          v16[1] = (void *)v17;
        }
      }
    }
    else if ( v15
           || (v30 = qvector_reserve(v3 + 27, a2, 1, 24), v29 = v3[28] == 0, v3[27] = v30, a2 = (void **)v30, v29) )
    {
      *a2 = nullptr;
      *(_OWORD *)(a2 + 1) = 0;
    }
    v3[28] = 1;
  }
  if ( !s2 || !*s2 )
    return 0;
  result = sub_3AA350(s2);
  if ( (_DWORD)result != -1 )
    return result;
  if ( v2 )
  {
    dest = nullptr;
    *(_OWORD *)n = 0;
  }
  else
  {
    v18 = must_journal(s2, a2, v5);
    dest = nullptr;
    *(_OWORD *)n = 0;
    if ( v18 )
    {
      v19 = strlen(s2) + 1;
      dest = (void *)qvector_reserve(&dest, 0, v19, 1);
      memset((char *)dest + n[0], 0, v19 - n[0]);
      n[0] = v19;
      memcpy(dest, s2, v19);
      add_undo_record(196, dest, n[0]);
      if ( dest )
      {
        n[0] = 0;
        qfree(dest);
      }
      dest = nullptr;
      *(_OWORD *)n = 0;
      v6 = strlen(s2);
      v7 = v6 + 1;
      goto LABEL_8;
    }
  }
  v6 = strlen(s2);
  v7 = v6 + 1;
LABEL_8:
  dest = (void *)qvector_reserve(&dest, 0, v7, 1);
  n[0] = v7;
  memmove(dest, s2, v6);
  *((_BYTE *)dest + v6) = 0;
  v8 = v3[28];
  v9 = v3[27];
  v10 = v3[29];
  v11 = v8 + 1;
  if ( (unsigned __int64)&dest < v9 || (unsigned __int64)&dest >= v9 + 24 * v10 )
  {
    if ( v10 < v11 )
    {
      v26 = qvector_reserve(v3 + 27, v9, v8 + 1, 24);
      v3[27] = v26;
      v9 = v26;
      v8 = v3[28];
    }
    v12 = _mm_loadu_si128((const __m128i *)n);
    v13 = v9 + 24 * v8;
    *(_QWORD *)v13 = dest;
    *(__m128i *)(v13 + 8) = v12;
    v14 = v3[28] + 1LL;
    v3[28] = v14;
  }
  else
  {
    v20 = dest;
    v21 = _mm_loadl_epi64((const __m128i *)n);
    dest = nullptr;
    v22 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( v10 < v11 )
    {
      v31.m128i_i64[1] = v22.m128i_i64[0];
      v31.m128i_i64[0] = v21.m128i_i64[0];
      v27 = qvector_reserve(v3 + 27, v9, v8 + 1, 24);
      v3[27] = v27;
      v9 = v27;
      v22 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v8 = v3[28];
      v21 = _mm_loadl_epi64(&v31);
    }
    v23 = v9 + 24 * v8;
    *(_QWORD *)v23 = v20;
    *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v21, v22);
    v24 = dest;
    v14 = v3[28] + 1LL;
    v3[28] = v14;
    if ( v24 )
    {
      n[0] = 0;
      qfree(v24);
      v14 = v3[28];
    }
  }
  return (unsigned int)(v14 - 1);
}
