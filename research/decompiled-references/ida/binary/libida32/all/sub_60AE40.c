__int64 __fastcall sub_60AE40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v8; // r9
  char *v9; // r10
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 *v12; // r11
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  unsigned int v15; // r12d
  unsigned __int64 v16; // r13
  __int64 v17; // rbx
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  int v24; // eax
  char *v25; // r11
  int v26; // r13d
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __m128i v31; // xmm0
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  void *v34; // r15
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  char *s2; // [rsp+8h] [rbp-B0h]
  char *s2d; // [rsp+8h] [rbp-B0h]
  char *s2b; // [rsp+8h] [rbp-B0h]
  char *s2a; // [rsp+8h] [rbp-B0h]
  char *s2c; // [rsp+8h] [rbp-B0h]
  __m128i n; // [rsp+18h] [rbp-A0h] BYREF
  __m128i v50; // [rsp+28h] [rbp-90h] BYREF
  __int64 v51; // [rsp+38h] [rbp-80h]
  char *v52; // [rsp+40h] [rbp-78h]
  __int64 v53; // [rsp+48h] [rbp-70h]
  int v54; // [rsp+5Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __m128i v56; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v5 = a1;
  v57 = __readfsqword(0x28u);
  sub_6091E0(a1, a4, a2);
  v8 = a3;
  v9 = (char *)(a1 + 24LL * *(int *)(a4 + 12));
  v10 = *(_DWORD *)(*(_QWORD *)v9 + 4LL * a3);
  if ( v10 == -1 )
  {
    s2 = (char *)haystack;
    v11 = *(_QWORD *)(a4 + 88) + 24 * v8;
    if ( *(_QWORD *)(v11 + 8) )
      s2 = *(char **)v11;
    v50.m128i_i64[1] = *(int *)(a2 + 12);
    v12 = (__int64 *)(a1 + 24 * v50.m128i_i64[1]);
    v13 = v12[1];
    if ( v13 )
    {
      v14 = *v12;
      n.m128i_i64[0] = v8;
      v15 = 0;
      n.m128i_i64[1] = a1 + 24 * v50.m128i_i64[1];
      v16 = 0;
      v17 = v14;
      v50.m128i_i64[0] = (__int64)v9;
      do
      {
        if ( *(_DWORD *)(v17 + 4 * v16) == -1 )
        {
          v19 = haystack;
          v20 = *(_QWORD *)(a2 + 88) + 24 * v16;
          if ( *(_QWORD *)(v20 + 8) )
            v19 = *(const char **)v20;
          if ( !strcasecmp(v19, s2) )
            break;
        }
        v16 = ++v15;
      }
      while ( v15 < v13 );
      v21 = a1;
      v8 = n.m128i_i64[0];
      v22 = v17;
      v12 = (__int64 *)n.m128i_i64[1];
      v10 = v15;
      v9 = (char *)v50.m128i_i64[0];
      v5 = v21;
      if ( v13 != v16 )
        goto LABEL_12;
    }
    else
    {
      v10 = 0;
    }
    v50.m128i_i64[0] = (__int64)v9;
    n.m128i_i64[1] = (__int64)v12;
    n.m128i_i64[0] = v8;
    v54 = -1;
    netnode_check(&v54, 0, 0, 1);
    v24 = sub_60A410(*(_QWORD *)(qword_2CA1698 + 1480) + 2240LL, qword_2CA1698, (__int64)s2, v54);
    v25 = (char *)n.m128i_i64[1];
    v8 = n.m128i_i64[0];
    v26 = v24;
    v27 = *(_QWORD *)(a2 + 96);
    v9 = (char *)v50.m128i_i64[0];
    if ( v27 == v26 )
    {
      ptr = nullptr;
      n.m128i_i64[1] = a2 + 88;
      v56 = 0;
      if ( s2 )
      {
        v53 = v50.m128i_i64[0];
        v52 = v25;
        v51 = n.m128i_i64[0];
        n.m128i_i64[0] = strlen(s2);
        v50.m128i_i64[0] = n.m128i_i64[0] + 1;
        ptr = (void *)qvector_reserve(&ptr, 0, n.m128i_i64[0] + 1, 1);
        v56.m128i_i64[0] = n.m128i_i64[0] + 1;
        memmove(ptr, s2, n.m128i_u64[0]);
        v9 = (char *)v53;
        v25 = v52;
        *((_BYTE *)ptr + n.m128i_i64[0]) = 0;
        v8 = v51;
        v27 = *(_QWORD *)(a2 + 96);
      }
      v28 = *(_QWORD *)(a2 + 88);
      v29 = *(_QWORD *)(a2 + 104);
      v30 = v27 + 1;
      if ( (unsigned __int64)&ptr >= v28 && (unsigned __int64)&ptr < v28 + 24 * v29 )
      {
        v34 = ptr;
        v35 = _mm_loadl_epi64(&v56);
        ptr = nullptr;
        v36 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
        v56 = 0;
        if ( v29 < v30 )
        {
          v52 = v9;
          v51 = (__int64)v25;
          s2c = (char *)v8;
          v50.m128i_i64[0] = v36.m128i_i64[0];
          n.m128i_i64[0] = v35.m128i_i64[0];
          v42 = qvector_reserve(n.m128i_i64[1], v28, v27 + 1, 24);
          *(_QWORD *)(a2 + 88) = v42;
          v28 = v42;
          v27 = *(_QWORD *)(a2 + 96);
          v9 = v52;
          v25 = (char *)v51;
          v36 = _mm_loadl_epi64(&v50);
          v35 = _mm_loadl_epi64(&n);
          v8 = (__int64)s2c;
        }
        v37 = v28 + 24 * v27;
        *(_QWORD *)v37 = v34;
        v38 = ptr;
        *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v35, v36);
        ++*(_QWORD *)(a2 + 96);
        if ( v38 )
        {
          n.m128i_i64[1] = (__int64)v9;
          n.m128i_i64[0] = (__int64)v25;
          s2d = (char *)v8;
          v56.m128i_i64[0] = 0;
          qfree(v38);
          v9 = (char *)n.m128i_i64[1];
          v25 = (char *)n.m128i_i64[0];
          v8 = (__int64)s2d;
        }
      }
      else
      {
        if ( v29 < v30 )
        {
          v50.m128i_i64[0] = (__int64)v9;
          n.m128i_i64[0] = (__int64)v25;
          s2a = (char *)v8;
          v41 = qvector_reserve(n.m128i_i64[1], v28, v27 + 1, 24);
          *(_QWORD *)(a2 + 88) = v41;
          v28 = v41;
          v9 = (char *)v50.m128i_i64[0];
          v27 = *(_QWORD *)(a2 + 96);
          v25 = (char *)n.m128i_i64[0];
          v8 = (__int64)s2a;
        }
        v31 = _mm_loadu_si128(&v56);
        v32 = v28 + 24 * v27;
        *(_QWORD *)v32 = ptr;
        *(__m128i *)(v32 + 8) = v31;
        ++*(_QWORD *)(a2 + 96);
      }
      if ( v26 == v10 )
      {
        v33 = *((_QWORD *)v25 + 1) + 1LL;
        if ( *(_QWORD *)(v5 + 24 * v50.m128i_i64[1] + 16) < v33 )
        {
          v39 = *(_QWORD *)v25;
          n.m128i_i64[1] = (__int64)v9;
          n.m128i_i64[0] = v8;
          s2b = v25;
          v40 = qvector_reserve(v25, v39, v33, 4);
          v25 = s2b;
          v9 = (char *)n.m128i_i64[1];
          v8 = n.m128i_i64[0];
          *(_QWORD *)s2b = v40;
          v33 = *((_QWORD *)s2b + 1) + 1LL;
        }
        *((_QWORD *)v25 + 1) = v33;
        v22 = *(_QWORD *)v25;
        v16 = v13;
LABEL_12:
        *(_DWORD *)(v22 + 4 * v16) = a3;
        *(_DWORD *)(*(_QWORD *)v9 + 4 * v8) = v10;
        return v10;
      }
      if ( !under_debugger )
        interr(2447);
    }
    else if ( !under_debugger )
    {
      interr(2446);
    }
    BUG();
  }
  return v10;
}

