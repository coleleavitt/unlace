__int64 __fastcall sub_47A7F0(__int64 a1, __m128i *a2)
{
  __int64 v2; // rax
  const char *v4; // rsi
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 i; // rbx
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r15
  size_t v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  size_t v26; // r14
  void *v27; // rax
  const char *v28; // r15
  void *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-68h]
  unsigned __int64 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-58h] BYREF
  __int128 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v36 = __readfsqword(0x28u);
  v35 = 0;
  v34 = 0;
  v4 = (const char *)&v34;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v2 + 72))(a1 + 16, &v34);
  if ( (_BYTE)v5 && (v4 = nullptr, v7 = sub_4B8020(&v34, 0, 0), (v8 = v7) != 0) )
  {
    if ( a2 != (__m128i *)(v7 + 24) )
    {
      v9 = *(_QWORD *)(v7 + 32);
      if ( v9 > 1 )
      {
        v28 = *(const char **)(v7 + 24);
        v29 = (void *)a2->m128i_i64[0];
        if ( a2[1].m128i_i64[0] < v9 )
        {
          v31 = qvector_reserve(a2, a2->m128i_i64[0], *(_QWORD *)(v7 + 32), 1);
          a2->m128i_i64[0] = v31;
          v29 = (void *)v31;
        }
        a2->m128i_i64[1] = v9;
        v4 = v28;
        memmove(v29, v28, v9 - 1);
        *(_BYTE *)(a2->m128i_i64[0] + v9 - 1) = 0;
      }
      else
      {
        a2->m128i_i64[1] = 0;
      }
    }
    v10 = a2[1].m128i_i64[1];
    if ( v10 )
    {
      v11 = a2[2].m128i_i64[0];
      if ( v11 )
      {
        for ( i = 0; i != v11; ++i )
        {
          v13 = (__int64 *)(v10 + 40 * i);
          jvalue_t_clear(v13 + 3);
          v14 = *v13;
          if ( *v13 )
          {
            v13[1] = 0;
            qfree(v14, v4);
          }
          v10 = a2[1].m128i_i64[1];
        }
      }
      a2[2].m128i_i64[0] = 0;
      qfree(v10, v4);
      a2[1].m128i_i64[1] = 0;
      a2[2].m128i_i64[1] = 0;
    }
    v15 = 40LL * *(_QWORD *)(v8 + 56);
    v33 = 0xCCCCCCCCCCCCCCCDLL * (v15 >> 3);
    if ( v33 )
    {
      v16 = a2[2].m128i_i64[0];
      v17 = *(_QWORD *)(v8 + 48);
      v18 = 0;
      v19 = 5 * v16;
      v20 = 0xCCCCCCCCCCCCCCCDLL * ((40LL * *(_QWORD *)(v8 + 56)) >> 3) + v16;
      v21 = 0;
      v22 = 8 * v19;
      if ( a2[2].m128i_i64[1] < v20 )
      {
        v21 = qvector_reserve(&a2[1].m128i_u64[1], 0, v20, 40);
        v30 = a2[2].m128i_i64[0];
        a2[1].m128i_i64[1] = v21;
        v18 = 40 * v30 - v22;
      }
      v23 = (_QWORD *)(v21 + v22);
      v32 = v17 + v15;
      memmove(&v23[(unsigned __int64)v15 / 8], v23, v18);
      v25 = v17 + v15;
      if ( v17 != v17 + v15 )
      {
        do
        {
          *v23 = 0;
          *(_OWORD *)(v23 + 1) = 0;
          v26 = *(_QWORD *)(v17 + 8);
          if ( v26 )
          {
            v27 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 8));
            *v23 = v27;
            v23[2] = v26;
            memcpy(v27, *(const void **)v17, v26);
            v23[1] = v26;
          }
          *((_DWORD *)v23 + 6) = 0;
          jvalue_t_copy(v23 + 3, v17 + 24, v25, v24);
          v23 += 5;
          v17 += 40;
        }
        while ( v32 != v17 );
      }
      a2[2].m128i_i64[0] += v33;
    }
    v4 = (const char *)(v8 + 88);
    a2[3] = _mm_loadu_si128((const __m128i *)(v8 + 72));
    QT::QByteArray::operator=(&a2[4], v8 + 88);
    a2[5].m128i_i32[2] = *(_DWORD *)(v8 + 112);
  }
  else
  {
    v5 = 0;
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v4);
  }
  return v5;
}
