__int64 __fastcall sub_811EA0(__int64 *a1, int a2)
{
  const char *v4; // rbp
  int v5; // r9d
  __int64 v6; // r14
  __int64 v7; // rbx
  char *v8; // rax
  const char *v9; // rdx
  void **p_ptr; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rax
  void *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax
  void *v23; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // [rsp-8h] [rbp-10B8h]
  __m128i n; // [rsp+8h] [rbp-10A8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-1098h]
  void *v32; // [rsp+20h] [rbp-1090h]
  void *v33; // [rsp+28h] [rbp-1088h] BYREF
  __int128 v34; // [rsp+30h] [rbp-1080h]
  void *ptr; // [rsp+48h] [rbp-1068h] BYREF
  __m128i v36; // [rsp+50h] [rbp-1060h] BYREF
  char v37; // [rsp+68h] [rbp-1048h] BYREF
  unsigned __int64 v38; // [rsp+1070h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v34 = 0;
  v33 = nullptr;
  v32 = &v33;
  LODWORD(v4) = sub_811C10((__int64 *)&v33);
  if ( (_BYTE)v4 )
  {
    v6 = v34;
    v7 = 0;
    if ( !(_QWORD)v34 )
    {
LABEL_16:
      LOBYTE(v4) = a1[1] != 0;
      goto LABEL_17;
    }
    while ( 1 )
    {
      v8 = (char *)v33 + 24 * v7;
      v9 = haystack;
      if ( *((_QWORD *)v8 + 1) )
        v9 = *(const char **)v8;
      v4 = (const char *)qmakepath((int)&v37, 4096, (int)v9, a2, 0, v5, v29);
      if ( !(unsigned __int8)qfileexist(v4, 4096) )
        goto LABEL_4;
      p_ptr = &ptr;
      ptr = nullptr;
      v36 = 0;
      if ( v4 )
      {
        n.m128i_i64[0] = strlen(v4);
        v31 = n.m128i_i64[0] + 1;
        n.m128i_i64[1] = (__int64)&ptr;
        ptr = (void *)qvector_reserve(&ptr, 0, n.m128i_i64[0] + 1, 1);
        v36.m128i_i64[0] = v31;
        memmove(ptr, v4, n.m128i_u64[0]);
        p_ptr = (void **)n.m128i_i64[1];
        *((_BYTE *)ptr + n.m128i_i64[0]) = 0;
      }
      v11 = a1[1];
      v12 = *a1;
      v13 = a1[2];
      v14 = v11 + 1;
      if ( (unsigned __int64)p_ptr < *a1 || (unsigned __int64)p_ptr >= v12 + 24 * v13 )
        break;
      v4 = (const char *)ptr;
      v15 = _mm_loadl_epi64(&v36);
      ptr = nullptr;
      v16 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
      v36 = 0;
      if ( v13 < v14 )
      {
        n.m128i_i64[1] = v16.m128i_i64[0];
        n.m128i_i64[0] = v15.m128i_i64[0];
        v28 = qvector_reserve(a1, v12, v11 + 1, 24);
        *a1 = v28;
        v12 = v28;
        v16 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
        v11 = a1[1];
        v15 = _mm_loadl_epi64(&n);
      }
      v17 = v12 + 24 * v11;
      *(_QWORD *)v17 = v4;
      v18 = ptr;
      *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v15, v16);
      ++a1[1];
      if ( v18 )
      {
        v36.m128i_i64[0] = 0;
        ++v7;
        qfree(v18);
        if ( v6 == v7 )
          goto LABEL_16;
      }
      else
      {
LABEL_4:
        if ( v6 == ++v7 )
          goto LABEL_16;
      }
    }
    if ( v13 < v14 )
    {
      v27 = qvector_reserve(a1, v12, v11 + 1, 24);
      *a1 = v27;
      v12 = v27;
      v11 = a1[1];
    }
    v25 = _mm_loadu_si128(&v36);
    v26 = v12 + 24 * v11;
    *(_QWORD *)v26 = ptr;
    *(__m128i *)(v26 + 8) = v25;
    ++a1[1];
    goto LABEL_4;
  }
LABEL_17:
  v19 = (char *)v33;
  if ( v33 )
  {
    v20 = v34;
    if ( (_QWORD)v34 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)v33;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v34 = 0;
    qfree(v19);
  }
  return (unsigned int)v4;
}

