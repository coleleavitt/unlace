unsigned __int64 __fastcall sub_414B90(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  size_t v5; // r13
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // [rsp+10h] [rbp-78h]
  __m128i v18; // [rsp+18h] [rbp-70h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  __m128i v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+48h] [rbp-40h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v2 = a2;
  copy_argloc();
  v17 = nullptr;
  v18 = 0;
  v5 = a2[3];
  if ( v5 )
  {
    v13 = (void *)qalloc_or_throw(a2[3], (__int64)a2, v3, v4);
    a2 = (_QWORD *)a2[2];
    v17 = v13;
    v18.m128i_i64[1] = v5;
    memcpy(v13, a2, v5);
    v18.m128i_i64[0] = v5;
  }
  v6 = v2[6];
  v19 = 0;
  v20 = 0;
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw(v6, (__int64)a2, v3, v4);
    v16 = (const void *)v2[5];
    v19 = (__int64)v15;
    v20.m128i_i64[1] = v6;
    memcpy(v15, v16, v6);
    v20.m128i_i64[0] = v6;
  }
  v21 = 0;
  copy_tinfo_t();
  v7 = a1[1];
  v8 = *a1;
  v22 = *((_DWORD *)v2 + 18);
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v14 = qvector_reserve((__int64)a1, v8, v7 + 1, 80);
    *a1 = v14;
    v7 = a1[1];
    v8 = v14;
  }
  v9 = v8 + 80 * v7;
  *(_DWORD *)v9 = 0;
  copy_argloc();
  v10 = _mm_loadu_si128(&v18);
  *(_QWORD *)(v9 + 64) = 0;
  *(__m128i *)(v9 + 24) = v10;
  *(_QWORD *)(v9 + 16) = v17;
  v11 = _mm_load_si128(&v20);
  v18 = 0;
  *(_QWORD *)(v9 + 40) = v19;
  *(__m128i *)(v9 + 48) = v11;
  v19 = 0;
  v20 = 0;
  copy_tinfo_t();
  *(_DWORD *)(v9 + 72) = v22;
  ++a1[1];
  clear_tinfo_t();
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v19);
  }
  cleanup_argloc();
  return v23 - __readfsqword(0x28u);
}
