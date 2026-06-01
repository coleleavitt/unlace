unsigned __int64 __fastcall sub_5213B0(_QWORD *a1)
{
  __int64 v1; // r12
  char *v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r13
  char v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  char *v8; // r15
  void *v9; // rax
  __m128i v10; // xmm0
  void *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-D8h] BYREF
  size_t n; // [rsp+8h] [rbp-D0h]
  __int64 v19; // [rsp+18h] [rbp-C0h]
  void *ptr; // [rsp+20h] [rbp-B8h]
  size_t v21; // [rsp+28h] [rbp-B0h]
  __int64 v22; // [rsp+38h] [rbp-A0h]
  char v23; // [rsp+40h] [rbp-98h]
  void *v24; // [rsp+50h] [rbp-88h]
  __m128i v25; // [rsp+58h] [rbp-80h] BYREF
  __int64 v26; // [rsp+68h] [rbp-70h]
  void *v27; // [rsp+70h] [rbp-68h]
  __m128i v28; // [rsp+78h] [rbp-60h] BYREF
  __int64 v29; // [rsp+88h] [rbp-50h]
  char v30; // [rsp+90h] [rbp-48h]
  unsigned __int64 v31; // [rsp+98h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  sub_521230((__int64)&src, "Default snippet", 0);
  v1 = n;
  v24 = nullptr;
  v25 = 0;
  v2 = (char *)a1[2];
  if ( n )
  {
    v24 = (void *)qalloc_or_throw(n);
    v25.m128i_i64[1] = v1;
    memcpy(v24, src, v1);
    v25.m128i_i64[0] = v1;
  }
  v3 = v19;
  v26 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 12);
  v4 = v21;
  v27 = nullptr;
  v28 = 0;
  if ( v21 )
  {
    v27 = (void *)qalloc_or_throw(v21);
    v28.m128i_i64[1] = v4;
    memcpy(v27, ptr, v4);
    v28.m128i_i64[0] = v4;
  }
  v5 = v23;
  v6 = a1[2];
  v29 = v22;
  v7 = a1[3];
  v30 = v23;
  v8 = &v2[-v6];
  if ( a1[4] < (unsigned __int64)(v7 + 1) )
  {
    v15 = qvector_reserve(a1 + 2, v6, v7 + 1, 72);
    a1[2] = v15;
    v2 = &v8[v15];
    v7 = a1[3];
  }
  memmove(v2 + 72, v2, 72 * v7 - (_QWORD)v8);
  v9 = v24;
  v10 = _mm_loadu_si128(&v25);
  *((_QWORD *)v2 + 3) = v3;
  *(_QWORD *)v2 = v9;
  v11 = v27;
  *(__m128i *)(v2 + 8) = v10;
  v12 = _mm_loadu_si128(&v28);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 12);
    *((_QWORD *)v2 + 4) = v11;
    v13 = v29;
    v2[64] = v5;
    *((_QWORD *)v2 + 7) = v13;
    *(__m128i *)(v2 + 40) = v12;
    ++a1[3];
    --*(_DWORD *)(v3 + 12);
  }
  else
  {
    *((_QWORD *)v2 + 4) = v11;
    v16 = v29;
    v2[64] = v5;
    *((_QWORD *)v2 + 7) = v16;
    *(__m128i *)(v2 + 40) = v12;
    ++a1[3];
  }
  if ( ptr )
  {
    v21 = 0;
    qfree(ptr);
  }
  if ( v19 )
    --*(_DWORD *)(v19 + 12);
  if ( src )
  {
    n = 0;
    qfree(src);
  }
  return v31 - __readfsqword(0x28u);
}
