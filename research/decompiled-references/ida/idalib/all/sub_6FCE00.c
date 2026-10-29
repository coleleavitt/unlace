__int64 __fastcall sub_6FCE00(_QWORD *a1)
{
  unsigned __int64 *v2; // r12
  __int64 v3; // r14
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r15
  __int64 v6; // rbp
  unsigned int v7; // ebx
  _WORD *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  void *v14; // rbp
  __m128i v15; // xmm1
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r13
  const char *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  void *v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // rax
  void *v29; // rdi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  char *v36; // rax
  const char *v37; // r8
  unsigned int v38; // edx
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v45; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v47; // [rsp+28h] [rbp-70h]
  void *v48; // [rsp+40h] [rbp-58h] BYREF
  __m128i v49; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  sub_6F5D40((const void **)&ptr, (__int64)a1, "-x", 0);
  v2 = (unsigned __int64 *)a1[1];
  v3 = v47;
  v4 = *v2;
  v5 = *v2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v47 )
  {
    v6 = sub_6F6270((char *)haystack);
    if ( v6 )
      goto LABEL_3;
    goto LABEL_8;
  }
  v44.m128i_i64[0] = (__int64)ptr;
  v6 = sub_6F6270((char *)ptr);
  if ( v6 )
  {
LABEL_3:
    v7 = 1;
    *v2 = v5 | v6;
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
LABEL_8:
    v45 = a1 + 9;
    v48 = nullptr;
    v49 = 0;
    v9 = (_WORD *)qvector_reserve(&v48, 0, 3, 1);
    v49.m128i_i64[0] = 3;
    v48 = v9;
    *v9 = 30765;
    *((_BYTE *)v48 + 2) = 0;
    v10 = a1[10];
    v11 = a1[9];
    v12 = a1[11];
    v13 = v10 + 1;
    if ( (unsigned __int64)&v48 < v11 || (unsigned __int64)&v48 >= v11 + 24 * v12 )
    {
      if ( v12 < v13 )
      {
        v32 = qvector_reserve(v45, a1[9], v10 + 1, 24);
        a1[9] = v32;
        v11 = v32;
        v10 = a1[10];
      }
      v30 = _mm_loadu_si128(&v49);
      v31 = v11 + 24 * v10;
      *(_QWORD *)v31 = v48;
      *(__m128i *)(v31 + 8) = v30;
      ++a1[10];
    }
    else
    {
      v14 = v48;
      v15 = _mm_loadu_si128(&v49);
      v48 = nullptr;
      v49 = 0;
      if ( v12 < v13 )
      {
        v44 = v15;
        v42 = qvector_reserve(v45, v11, v10 + 1, 24);
        v15 = _mm_load_si128(&v44);
        a1[9] = v42;
        v11 = v42;
        v10 = a1[10];
      }
      v16 = v11 + 24 * v10;
      *(_QWORD *)v16 = v14;
      *(__m128i *)(v16 + 8) = v15;
      v17 = v48;
      ++a1[10];
      if ( v17 )
      {
        v49.m128i_i64[0] = 0;
        qfree(v17);
        v6 = v4 & 0xF;
        if ( (unsigned __int64)(v6 - 1) > 3 )
          goto LABEL_14;
        goto LABEL_31;
      }
    }
    v6 = v4 & 0xF;
    if ( (unsigned __int64)(v6 - 1) > 3 )
      goto LABEL_14;
LABEL_31:
    switch ( v6 )
    {
      case 3LL:
        v18 = 14;
        v48 = nullptr;
        v19 = 13;
        v49 = 0;
        v20 = "objective-c++";
        goto LABEL_15;
      case 4LL:
        v18 = 12;
        v48 = nullptr;
        v19 = 11;
        v49 = 0;
        v20 = "objective-c";
        goto LABEL_15;
      case 2LL:
        v18 = 2;
        v48 = nullptr;
        v19 = 1;
        v49 = 0;
        v20 = "c";
        goto LABEL_15;
    }
LABEL_14:
    v18 = 4;
    v6 = 1;
    v48 = nullptr;
    v49 = 0;
    v19 = 3;
    v20 = "c++";
LABEL_15:
    v44.m128i_i64[0] = v18;
    v21 = (_QWORD *)qvector_reserve(&v48, 0, v18, 1);
    v48 = v21;
    v49.m128i_i64[0] = v44.m128i_i64[0];
    if ( (unsigned int)v19 >= 8 )
    {
      v35 = (unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v21 = *(_QWORD *)v20;
      *(_QWORD *)((char *)v21 + v19 - 8) = *(_QWORD *)&v20[v19 - 8];
      v36 = (char *)v21 - v35;
      v37 = (const char *)(v20 - v36);
      if ( (((_DWORD)v19 + (_DWORD)v36) & 0xFFFFFFF8) >= 8 )
      {
        v38 = (v19 + (_DWORD)v36) & 0xFFFFFFF8;
        v39 = 0;
        do
        {
          v40 = v39;
          v39 += 8;
          *(_QWORD *)(v35 + v40) = *(_QWORD *)&v37[v40];
        }
        while ( v39 < v38 );
      }
    }
    else
    {
      *(_BYTE *)v21 = *v20;
      if ( (v19 & 2) != 0 )
        *(_WORD *)((char *)v21 + v19 - 2) = *(_WORD *)&v20[v19 - 2];
    }
    *((_BYTE *)v48 + v19) = 0;
    v22 = a1[10];
    v23 = a1[9];
    v24 = a1[11];
    v25 = v22 + 1;
    if ( (unsigned __int64)&v48 < v23 || (unsigned __int64)&v48 >= v23 + 24 * v24 )
    {
      if ( v24 < v25 )
      {
        v41 = qvector_reserve(v45, a1[9], v22 + 1, 24);
        a1[9] = v41;
        v23 = v41;
        v22 = a1[10];
      }
      v33 = _mm_loadu_si128(&v49);
      v34 = v23 + 24 * v22;
      *(_QWORD *)v34 = v48;
      *(__m128i *)(v34 + 8) = v33;
      ++a1[10];
    }
    else
    {
      v26 = v48;
      v27 = _mm_loadu_si128(&v49);
      v48 = nullptr;
      v49 = 0;
      if ( v24 < v25 )
      {
        v44 = v27;
        v43 = qvector_reserve(v45, v23, v22 + 1, 24);
        v27 = _mm_load_si128(&v44);
        a1[9] = v43;
        v23 = v43;
        v22 = a1[10];
      }
      v28 = v23 + 24 * v22;
      *(_QWORD *)v28 = v26;
      *(__m128i *)(v28 + 8) = v27;
      v29 = v48;
      ++a1[10];
      if ( v29 )
      {
        v49.m128i_i64[0] = 0;
        qfree(v29);
      }
    }
    v2 = (unsigned __int64 *)a1[1];
    goto LABEL_3;
  }
  v7 = 0;
  sub_6FCBC0(a1);
LABEL_4:
  if ( ptr )
  {
    v47 = 0;
    qfree(ptr);
  }
  return v7;
}
