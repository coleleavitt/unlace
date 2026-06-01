__int64 __fastcall sub_3A9350(char *s2, void **a2, void **a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r12
  _QWORD *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  size_t v10; // r12
  size_t v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void **v20; // r14
  size_t v21; // r15
  char v22; // al
  size_t v23; // r12
  void *v24; // rbx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  void *v28; // rdi
  void *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-68h] BYREF
  void *dest; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v6 = (char)a2;
  v7 = *(_QWORD **)(qword_2CA1698 + 1384);
  if ( !v7[28] )
  {
    dest = nullptr;
    *(_OWORD *)n = 0;
    a2 = (void **)v7[27];
    v19 = v7[29];
    v20 = a2;
    if ( &dest < a2 || (a3 = &a2[3 * v19], &dest >= a3) )
    {
      if ( v19 || (v32 = qvector_reserve(v7 + 27, a2, 1, 24), v33 = v7[28] == 0, v7[27] = v32, v20 = (void **)v32, v33) )
      {
        *v20 = nullptr;
        *(_OWORD *)(v20 + 1) = 0;
        v21 = n[0];
        if ( n[0] )
        {
          v29 = (void *)qalloc_or_throw(n[0], a2, a3, a4, a5, a6);
          v20[2] = (void *)v21;
          *v20 = v29;
          a2 = (void **)dest;
          memcpy(v29, dest, v21);
          v20[1] = (void *)v21;
        }
      }
    }
    else if ( v19
           || (v34 = qvector_reserve(v7 + 27, a2, 1, 24), v33 = v7[28] == 0, v7[27] = v34, a2 = (void **)v34, v33) )
    {
      *a2 = nullptr;
      *(_OWORD *)(a2 + 1) = 0;
    }
    v7[28] = 1;
  }
  if ( !s2 || !*s2 )
    return 0;
  result = sub_3A5C90(s2);
  if ( (_DWORD)result != -1 )
    return result;
  if ( v6 )
  {
    dest = nullptr;
    *(_OWORD *)n = 0;
  }
  else
  {
    v22 = must_journal(s2, a2, v9);
    dest = nullptr;
    *(_OWORD *)n = 0;
    if ( v22 )
    {
      v23 = strlen(s2) + 1;
      dest = (void *)qvector_reserve(&dest, 0, v23, 1);
      memset((char *)dest + n[0], 0, v23 - n[0]);
      n[0] = v23;
      memcpy(dest, s2, v23);
      add_undo_record(196, dest, n[0]);
      if ( dest )
      {
        n[0] = 0;
        qfree(dest);
      }
      dest = nullptr;
      *(_OWORD *)n = 0;
      v10 = strlen(s2);
      v11 = v10 + 1;
      goto LABEL_8;
    }
  }
  v10 = strlen(s2);
  v11 = v10 + 1;
LABEL_8:
  dest = (void *)qvector_reserve(&dest, 0, v11, 1);
  n[0] = v11;
  memmove(dest, s2, v10);
  *((_BYTE *)dest + v10) = 0;
  v12 = v7[28];
  v13 = v7[27];
  v14 = v7[29];
  v15 = v12 + 1;
  if ( (unsigned __int64)&dest < v13 || (unsigned __int64)&dest >= v13 + 24 * v14 )
  {
    if ( v14 < v15 )
    {
      v30 = qvector_reserve(v7 + 27, v13, v12 + 1, 24);
      v7[27] = v30;
      v13 = v30;
      v12 = v7[28];
    }
    v16 = _mm_loadu_si128((const __m128i *)n);
    v17 = v13 + 24 * v12;
    *(_QWORD *)v17 = dest;
    *(__m128i *)(v17 + 8) = v16;
    v18 = v7[28] + 1LL;
    v7[28] = v18;
  }
  else
  {
    v24 = dest;
    v25 = _mm_loadl_epi64((const __m128i *)n);
    dest = nullptr;
    v26 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( v14 < v15 )
    {
      v35.m128i_i64[1] = v26.m128i_i64[0];
      v35.m128i_i64[0] = v25.m128i_i64[0];
      v31 = qvector_reserve(v7 + 27, v13, v12 + 1, 24);
      v7[27] = v31;
      v13 = v31;
      v26 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
      v12 = v7[28];
      v25 = _mm_loadl_epi64(&v35);
    }
    v27 = v13 + 24 * v12;
    *(_QWORD *)v27 = v24;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
    v28 = dest;
    v18 = v7[28] + 1LL;
    v7[28] = v18;
    if ( v28 )
    {
      n[0] = 0;
      qfree(v28);
      v18 = v7[28];
    }
  }
  return (unsigned int)(v18 - 1);
}

