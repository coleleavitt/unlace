__int64 __fastcall sub_4D0690(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned int v3; // ebp
  char *v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  char *v7; // rax
  void *v8; // rdi
  char *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  void *v13; // rdi
  __int64 v15; // r8
  _BYTE *v16; // rsi
  __int64 *v17; // rdx
  unsigned __int64 v18; // rdx
  size_t v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  _BYTE *v22; // rsi
  __m128i v23; // xmm0
  void *v24; // r14
  __int64 v25; // r12
  __m128i v26; // xmm0
  const char *v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-F8h] BYREF
  __int64 *p_src; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v30; // [rsp+20h] [rbp-D8h]
  __int64 v31; // [rsp+28h] [rbp-D0h]
  __int64 v32; // [rsp+30h] [rbp-C8h]
  __int64 v33; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+48h] [rbp-B0h]
  void *v36; // [rsp+60h] [rbp-98h] BYREF
  __int128 v37; // [rsp+68h] [rbp-90h]
  void *v38; // [rsp+80h] [rbp-78h] BYREF
  __int128 v39; // [rsp+88h] [rbp-70h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v41; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v35 = 0;
  ptr = nullptr;
  if ( sub_3C3140(a1, (__int64)&ptr, *a2, 0) <= 0 )
  {
    v3 = 0;
    goto LABEL_18;
  }
  v37 = 0;
  v36 = nullptr;
  sub_456FB0(&ptr, (__int64 *)&v36, "\n", 0);
  v38 = nullptr;
  v39 = 0;
  if ( !sub_4C88D0((__int64 *)&v36, (__int64 *)&v38) )
    goto LABEL_3;
  if ( ptr )
  {
    v35.m128i_i64[0] = 0;
    qfree(ptr);
    ptr = nullptr;
    v35.m128i_i64[1] = 0;
  }
  v28.m128i_i64[0] = (__int64)(a1 + 213);
  if ( sub_504090(&ptr, a1 + 213, a2, 0) > 0 )
  {
    v15 = v35.m128i_i64[0];
    v16 = ptr;
    if ( v35.m128i_i64[0] )
    {
      if ( v35.m128i_i64[0] != 1 && *((char *)ptr + v35.m128i_i64[0] - 2) == 10 )
        goto LABEL_29;
      v17 = (__int64 *)(v35.m128i_i64[0] + 1);
      v15 = v35.m128i_i64[0] - 1;
    }
    else
    {
      v17 = (_QWORD *)(&dword_0 + 2);
    }
    if ( v35.m128i_i64[1] < (unsigned __int64)v17 )
    {
      v30 = v15;
      p_src = v17;
      ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
      v15 = v30;
      v16 = ptr;
      v17 = p_src;
    }
    v35.m128i_i64[0] = (__int64)v17;
    v16[v15] = 10;
    *((_BYTE *)ptr + v15 + 1) = 0;
  }
LABEL_29:
  p_src = (__int64 *)&src;
  sub_421D60((__int64 *)&src, (__int64 *)&v38, "\n");
  v18 = v41.m128i_i64[0];
  if ( v41.m128i_i64[0] )
  {
    v19 = v41.m128i_i64[0] - 1;
    if ( v41.m128i_i64[0] != 1 )
    {
      v20 = v35.m128i_i64[0];
      v21 = v41.m128i_i64[0] - 1;
      if ( v35.m128i_i64[0] )
      {
        v20 = v35.m128i_i64[0] - 1;
        v21 = v19 + v35.m128i_i64[0] - 1;
        v18 = v41.m128i_i64[0] + v35.m128i_i64[0] - 1;
      }
      v22 = ptr;
      if ( v35.m128i_i64[1] < v18 )
      {
        v33 = v21;
        v32 = v20;
        v31 = v41.m128i_i64[0] - 1;
        v30 = v18;
        ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
        v21 = v33;
        v22 = ptr;
        v20 = v32;
        v19 = v31;
        v18 = v30;
      }
      v35.m128i_i64[0] = v18;
      v22[v21] = 0;
      memcpy((char *)ptr + v20, src, v19);
    }
  }
  if ( src )
  {
    v41.m128i_i64[0] = 0;
    qfree(src);
  }
  if ( (unsigned __int8)sub_5083D0(v28.m128i_i64[0], a2, ptr, 0) )
  {
    sub_421D60(p_src, (__int64 *)&v36, "\n");
    v23 = _mm_loadu_si128(&v41);
    v24 = src;
    v41 = 0;
    src = nullptr;
    v25 = v23.m128i_i64[0];
    if ( ptr )
    {
      v28 = v23;
      v35.m128i_i64[0] = 0;
      qfree(ptr);
      v26 = _mm_load_si128(&v28);
      ptr = v24;
      v35 = v26;
      if ( src )
      {
        v41.m128i_i64[0] = 0;
        qfree(src);
        v25 = v35.m128i_i64[0];
      }
    }
    else
    {
      ptr = v24;
      v35 = v23;
    }
    v27 = haystack;
    if ( v25 )
      v27 = (const char *)ptr;
    v3 = sub_3D0F60(a1, (void *)*a2, v27, 0);
    goto LABEL_4;
  }
LABEL_3:
  v3 = 0;
LABEL_4:
  v4 = (char *)v38;
  if ( v38 )
  {
    v5 = v39;
    if ( (_QWORD)v39 )
    {
      v6 = 0;
      do
      {
        v7 = &v4[24 * v6];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v8);
          v4 = (char *)v38;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v4);
  }
  v9 = (char *)v36;
  if ( v36 )
  {
    v10 = v37;
    if ( (_QWORD)v37 )
    {
      v11 = 0;
      do
      {
        v12 = &v9[24 * v11];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
          v9 = (char *)v36;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v37 = 0;
    qfree(v9);
  }
LABEL_18:
  if ( ptr )
  {
    v35.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v3;
}
