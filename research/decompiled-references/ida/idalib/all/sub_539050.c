__int64 __fastcall sub_539050(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned int v4; // r15d
  int i; // ebp
  char v8; // dl
  char *v9; // rdi
  _BYTE *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r15
  void *v19; // rax
  unsigned __int64 v20; // r14
  const char *v21; // r14
  size_t v22; // rax
  __int64 v23; // rbp
  size_t v24; // r15
  size_t v25; // r8
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // rax
  void *v31; // rdx
  __int64 v32; // [rsp+0h] [rbp-68h]
  size_t v33; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v35; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( !v2 || (v3 = v2 - 1, v2 == 1) )
  {
    if ( !under_debugger )
      interr(3425);
    BUG();
  }
  v4 = 0;
  if ( *(_BYTE *)*a1 == 126 )
  {
    v15 = v2 == -3;
    v16 = v2 + 3;
    ptr = nullptr;
    v35 = 0;
    v17 = v16;
    if ( v15 )
    {
      v18 = 4;
      v19 = nullptr;
      v20 = 5;
    }
    else
    {
      v19 = (void *)qvector_reserve(&ptr, 0, v16, 1);
      ptr = v19;
      if ( v35.m128i_i64[0] )
      {
        v17 = v35.m128i_i64[0] - 1;
        v18 = v35.m128i_i64[0] + 3;
        v20 = v35.m128i_i64[0] + 4;
      }
      else
      {
        v17 = 0;
        v20 = 5;
        v18 = 4;
      }
      if ( v35.m128i_i64[1] >= v20 )
        goto LABEL_23;
    }
    v19 = (void *)qvector_reserve(&ptr, v19, v20, 1);
    ptr = v19;
LABEL_23:
    v35.m128i_i64[0] = v20;
    *((_BYTE *)v19 + v18) = 0;
    *(_DWORD *)((char *)ptr + v17) = 1601336420;
    v21 = (const char *)(*a1 + 1);
    v22 = strlen(v21);
    v23 = v35.m128i_i64[0];
    v24 = v22;
    v25 = v22;
    if ( v35.m128i_i64[0] )
    {
      v23 = v35.m128i_i64[0] - 1;
      v25 = v22 + v35.m128i_i64[0] - 1;
    }
    v26 = ptr;
    v27 = v25 + 1;
    if ( v35.m128i_i64[1] < v25 + 1 )
    {
      v33 = v25;
      v32 = v25 + 1;
      ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
      v25 = v33;
      v26 = ptr;
      v27 = v32;
    }
    v35.m128i_i64[0] = v27;
    v26[v25] = 0;
    memmove((char *)ptr + v23, v21, v24);
    v28 = _mm_loadu_si128(&v35);
    v30 = a1[2];
    v31 = ptr;
    ptr = (void *)*a1;
    v29 = ptr;
    *a1 = (__int64)v31;
    v35.m128i_i64[1] = v30;
    v3 = (v28.m128i_i64[0] == 0) + v28.m128i_i64[0] - 1;
    *(__m128i *)(a1 + 1) = v28;
    if ( v29 )
    {
      v35.m128i_i64[0] = 0;
      qfree(v29);
    }
    v4 = 1;
  }
  for ( i = 2; ; ++i )
  {
    sub_4313A0(a2, (__int64)a1);
    if ( v8 )
      break;
    v9 = (char *)*a1;
    v10 = (_BYTE *)*a1;
    if ( v3 )
    {
      v11 = a1[1];
      v12 = v3 + 1;
      if ( v11 < v3 + 1 )
      {
        if ( a1[2] < v12 )
        {
          v14 = qvector_reserve(a1, *a1, v3 + 1, 1);
          *a1 = v14;
          v9 = (char *)v14;
          v11 = a1[1];
        }
        memset(&v9[v11], 0, v12 - v11);
        a1[1] = v12;
        v10 = (_BYTE *)*a1;
      }
      else if ( v12 != v11 )
      {
        a1[1] = v12;
      }
      v10[v3] = 0;
    }
    else if ( v9 )
    {
      a1[1] = 0;
      qfree(v9);
      *a1 = 0;
      a1[2] = 0;
    }
    v4 = 1;
    sub_35A910(a1);
  }
  return v4;
}
