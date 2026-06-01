__int64 __fastcall sub_8A98C0(__int64 a1, char a2, char **a3)
{
  unsigned int v4; // eax
  char *v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // rbx
  char *v9; // rbp
  void *v10; // rdi
  __int64 v12; // r13
  char **v13; // rbx
  __int64 v14; // rbp
  char *v15; // rdi
  size_t v16; // rbx
  void *v17; // r12
  void *v18; // rdi
  __int64 v19; // rax
  void *v20; // rdx
  __m128i v21; // xmm0
  void *dest; // [rsp+0h] [rbp-98h] BYREF
  char v23[16]; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v25; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v27; // [rsp+48h] [rbp-50h] BYREF
  void *v28; // [rsp+58h] [rbp-40h]

  v28 = (void *)__readfsqword(0x28u);
  dest = nullptr;
  *(_OWORD *)v23 = 0;
  v4 = sub_8A9360((__int64)&dest, a1, a2, a3, 0);
  v5 = (char *)dest;
  v6 = v4;
  if ( (_BYTE)v4 )
  {
    v12 = *(_QWORD *)v23;
    if ( !*(_QWORD *)v23 )
    {
      v6 = 0;
      if ( !dest )
        return v6;
      goto LABEL_8;
    }
    v13 = (char **)dest;
    v14 = 0;
    while ( !v13[1] || strcmp(*v13, "signature") )
    {
      ++v14;
      v13 += 5;
      if ( v12 == v14 )
      {
        v6 = 0;
        goto LABEL_2;
      }
    }
    jvalue_t_clear(v13 + 3);
    v15 = *v13;
    if ( *v13 )
    {
      v13[1] = nullptr;
      qfree(v15);
    }
    memmove(v13, v13 + 5, (_BYTE *)dest + 40 * *(_QWORD *)v23 - (_BYTE *)v13 - 40);
    --*(_QWORD *)v23;
    src = nullptr;
    LODWORD(ptr) = 3;
    v27.m128i_i64[0] = (__int64)&dest;
    v25 = 0;
    v6 = serialize_json(&src, &ptr, 0);
    if ( (_DWORD)ptr != 3 )
      sub_8A7D80();
    LODWORD(ptr) = 0;
    v27.m128i_i64[0] = 0;
    jvalue_t_clear(&ptr);
    if ( (_BYTE)v6 )
    {
      if ( (unsigned __int64)v25 <= 1 )
      {
        v6 = 0;
      }
      else
      {
        v16 = v25 - 1;
        v17 = src;
        v27 = 0;
        ptr = nullptr;
        ptr = (void *)qvector_reserve(&ptr, 0, v25 - 1, 1);
        memset((char *)ptr + v27.m128i_i64[0], 0, v16 - v27.m128i_i64[0]);
        v27.m128i_i64[0] = v16;
        memcpy(ptr, v17, v16);
        v19 = *(_QWORD *)(a1 + 16);
        v20 = ptr;
        v21 = _mm_loadu_si128(&v27);
        ptr = *(void **)a1;
        v18 = ptr;
        *(_QWORD *)a1 = v20;
        v27.m128i_i64[1] = v19;
        *(__m128i *)(a1 + 8) = v21;
        if ( v18 )
        {
          v27.m128i_i64[0] = 0;
          qfree(v18);
        }
      }
    }
    if ( src )
    {
      *(_QWORD *)&v25 = 0;
      qfree(src);
    }
    v5 = (char *)dest;
  }
LABEL_2:
  if ( v5 )
  {
    v7 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 )
    {
      v8 = 0;
      do
      {
        v9 = &v5[40 * v8];
        jvalue_t_clear(v9 + 24);
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
        }
        ++v8;
        v5 = (char *)dest;
      }
      while ( v7 != v8 );
    }
LABEL_8:
    *(_QWORD *)v23 = 0;
    qfree(v5);
  }
  return v6;
}
