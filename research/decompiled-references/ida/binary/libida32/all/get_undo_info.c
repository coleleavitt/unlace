unsigned __int64 __fastcall get_undo_info(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  _QWORD *v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  _QWORD *i; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rdi
  const char *v16; // r12
  size_t v17; // rax
  unsigned int v18; // eax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  void *v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-88h]
  __m128i v28; // [rsp+10h] [rbp-78h] BYREF
  __int64 v29; // [rsp+20h] [rbp-68h] BYREF
  __int128 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v1 = *a1;
  v32 = __readfsqword(0x28u);
  v3 = a1[1];
  v4 = v1;
  v5 = *(_QWORD **)(qword_2CA1698 + 1656);
  v6 = v5[3];
  v27 = v6;
  if ( v6 != v3 )
  {
    v31 = 0;
    v29 = 0;
    v30 = 0;
    if ( v6 < v3 )
    {
      v20 = v6;
      do
      {
        v21 = v1 + 32 * v20;
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *(_QWORD *)(v21 + 8) = 0;
          qfree(v22);
          v1 = *a1;
        }
        ++v20;
      }
      while ( v20 < v3 );
      v4 = v1;
      a1[1] = v27;
    }
    else
    {
      v7 = a1[2];
      if ( (unsigned __int64)&v29 < v1 || (unsigned __int64)&v29 >= v1 + 32 * v7 )
      {
        if ( v7 < v27 )
        {
          v25 = qvector_reserve(a1, v1, v27, 32);
          v3 = a1[1];
          *a1 = v25;
          v4 = v25;
        }
        if ( v3 < v27 )
        {
          do
          {
            v8 = v3++;
            v9 = v4 + 32 * v8;
            *(_QWORD *)v9 = 0;
            *(_QWORD *)(v9 + 24) = 0;
            *(_OWORD *)(v9 + 8) = 0;
            v4 = *a1;
          }
          while ( v27 != v3 );
        }
      }
      else
      {
        if ( v7 < v27 )
        {
          v26 = qvector_reserve(a1, v1, v27, 32);
          v3 = a1[1];
          *a1 = v26;
          v4 = v26;
        }
        if ( v3 < v27 )
        {
          do
          {
            v23 = v3++;
            v24 = v4 + 32 * v23;
            *(_QWORD *)v24 = 0;
            *(_QWORD *)(v24 + 24) = 0;
            *(_OWORD *)(v24 + 8) = 0;
            v4 = *a1;
          }
          while ( v27 != v3 );
        }
      }
      a1[1] = v27;
    }
  }
  for ( i = (_QWORD *)v5[1]; i != v5 + 1; v4 += 32LL )
  {
    v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)i[2], (__m128i)(unsigned __int64)(i[2] + i[3]));
    unpack_dd(&v28);
    v18 = unpack_dd(&v28);
    if ( v18 )
    {
      v11 = v28.m128i_i64[0];
      v12 = v28.m128i_i64[0] + v18;
      if ( v28.m128i_i64[1] < v12 || v12 < v28.m128i_i64[0] || (v28.m128i_i64[0] += v18, !v11) )
      {
        if ( !under_debugger )
          interr(1677);
        BUG();
      }
    }
    else
    {
      v12 = 0;
      v11 = 0;
    }
    v29 = v11;
    *(_QWORD *)&v30 = v12;
    v13 = (void *)unpack_ds(&v29, v12, 1);
    qfree(v13);
    v14 = unpack_ds(&v29, v30, 1);
    v15 = *(void **)v4;
    v16 = (const char *)v14;
    if ( *(_QWORD *)v4 )
    {
      *(_QWORD *)(v4 + 8) = 0;
      qfree(v15);
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v4 + 16) = 0;
    }
    if ( v16 )
    {
      v17 = strlen(v16);
      *(_QWORD *)v4 = v16;
      *(__m128i *)(v4 + 8) = _mm_unpacklo_epi64((__m128i)(v17 + 1), (__m128i)(v17 + 1));
    }
    *(_QWORD *)(v4 + 24) = i[3] + i[6];
    if ( (_QWORD *)v5[4] == i )
      v27 = (__int64)(v4 - *a1) >> 5;
    i = (_QWORD *)*i;
  }
  return v27;
}

