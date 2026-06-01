unsigned __int64 __fastcall sub_5093E0(_QWORD *a1)
{
  const char *v1; // rsi
  __int64 v2; // r12
  char *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  char v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  char *v9; // r15
  void *v10; // rax
  __m128i v11; // xmm0
  void *v12; // rax
  __m128i v13; // xmm0
  int v14; // eax
  void *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  void *src; // [rsp+0h] [rbp-C8h] BYREF
  size_t n; // [rsp+8h] [rbp-C0h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-A8h]
  size_t v23; // [rsp+28h] [rbp-A0h]
  int v24; // [rsp+38h] [rbp-90h]
  char v25; // [rsp+3Ch] [rbp-8Ch]
  void *v26; // [rsp+40h] [rbp-88h]
  __m128i v27; // [rsp+48h] [rbp-80h] BYREF
  __int64 v28; // [rsp+58h] [rbp-70h]
  void *v29; // [rsp+60h] [rbp-68h]
  __m128i v30; // [rsp+68h] [rbp-60h] BYREF
  int v31; // [rsp+78h] [rbp-50h]
  char v32; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v1 = "Default snippet";
  v33 = __readfsqword(0x28u);
  sub_509260((__int64)&src, "Default snippet", 0);
  v2 = n;
  v26 = nullptr;
  v27 = 0;
  v3 = (char *)a1[2];
  if ( n )
  {
    v16 = (void *)qalloc_or_throw(n, "Default snippet");
    v1 = (const char *)src;
    v26 = v16;
    v27.m128i_i64[1] = v2;
    memcpy(v16, src, v2);
    v27.m128i_i64[0] = v2;
  }
  v4 = v21;
  v28 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 12);
  v5 = v23;
  v29 = nullptr;
  v30 = 0;
  if ( v23 )
  {
    v29 = (void *)qalloc_or_throw(v23, v1);
    v30.m128i_i64[1] = v5;
    memcpy(v29, ptr, v5);
    v30.m128i_i64[0] = v5;
  }
  v6 = v25;
  v7 = a1[2];
  v8 = a1[3];
  v31 = v24;
  v32 = v25;
  v9 = &v3[-v7];
  if ( a1[4] < (unsigned __int64)(v8 + 1) )
  {
    v17 = qvector_reserve(a1 + 2, v7, v8 + 1, 64);
    a1[2] = v17;
    v8 = a1[3];
    v3 = &v9[v17];
  }
  memmove(v3 + 64, v3, (v8 << 6) - (_QWORD)v9);
  v10 = v26;
  v11 = _mm_loadu_si128(&v27);
  *((_QWORD *)v3 + 3) = v4;
  *(_QWORD *)v3 = v10;
  v12 = v29;
  *(__m128i *)(v3 + 8) = v11;
  v13 = _mm_loadu_si128(&v30);
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 12);
    *((_QWORD *)v3 + 4) = v12;
    v14 = v31;
    v3[60] = v6;
    *((_DWORD *)v3 + 14) = v14;
    *(__m128i *)(v3 + 40) = v13;
    ++a1[3];
    --*(_DWORD *)(v4 + 12);
  }
  else
  {
    *((_QWORD *)v3 + 4) = v12;
    v18 = v31;
    v3[60] = v6;
    *((_DWORD *)v3 + 14) = v18;
    *(__m128i *)(v3 + 40) = v13;
    ++a1[3];
  }
  if ( ptr )
  {
    v23 = 0;
    qfree(ptr);
  }
  if ( v21 )
    --*(_DWORD *)(v21 + 12);
  if ( src )
  {
    n = 0;
    qfree(src);
  }
  return v33 - __readfsqword(0x28u);
}

