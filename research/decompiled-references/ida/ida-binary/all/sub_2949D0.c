__int64 __fastcall sub_2949D0(__int64 *a1, int a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // eax
  int j; // r15d
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  int v15; // r13d
  char *v16; // rsi
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, int); // rax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  unsigned __int64 v21; // rbp
  int v23; // r13d
  __int64 i; // rax
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, int); // rdx
  int v27; // eax
  __int64 v28; // rax
  void *v29; // rax
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __m128i si128; // xmm0
  bool v35; // zf
  __int64 v36; // rdi
  __int64 (__fastcall *v37)(__int64, int); // rax
  int v38; // eax
  unsigned int v39; // [rsp+0h] [rbp-D0h]
  int v40; // [rsp+4h] [rbp-CCh]
  size_t n[2]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-B8h]
  __int64 v43; // [rsp+20h] [rbp-B0h]
  int v44; // [rsp+34h] [rbp-9Ch] BYREF
  char *v45; // [rsp+38h] [rbp-98h] BYREF
  __int128 v46; // [rsp+40h] [rbp-90h]
  __int64 v47; // [rsp+58h] [rbp-78h] BYREF
  __m128i v48; // [rsp+60h] [rbp-70h]
  void *src; // [rsp+78h] [rbp-58h] BYREF
  __int128 v50; // [rsp+80h] [rbp-50h]
  unsigned __int64 v51; // [rsp+90h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v4 = 0;
  v46 = 0;
  v45 = nullptr;
  v47 = 0;
  src = nullptr;
  v48 = 0;
  v50 = 0;
  v47 = qvector_reserve(&v47, 0, 1, 4);
  v40 = 0;
  *(_DWORD *)(v47 + 4 * v48.m128i_i64[0]++) = a2;
  while ( 1 )
  {
    if ( v40 > 0 )
    {
      v23 = 0;
      for ( i = 0; v23 < (unsigned __int64)v50; i = v23 )
      {
        v25 = *a1;
        v26 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)*a1 + 104LL);
        if ( v26 == interactive_graph_t__::vfunc_13 )
        {
          v27 = *(_DWORD *)(*(_QWORD *)(v25 + 200) + 24 * i + 8);
        }
        else
        {
          v4 = (unsigned int)v23;
          v27 = v26(v25, v23);
        }
        if ( v27 > 0 )
        {
          v28 = v46;
          v4 = (unsigned __int64)v45;
          if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
          {
            v45 = (char *)qvector_reserve(&v45, v45, v46 + 1, 4);
            v4 = (unsigned __int64)v45;
            v28 = v46;
          }
          *(_DWORD *)(v4 + 4 * v28) = v23;
          *(_QWORD *)&v46 = v46 + 1;
        }
        ++v23;
      }
      if ( src )
      {
        *(_QWORD *)&v50 = 0;
        qfree(src, (const char *)v4);
        src = nullptr;
        *((_QWORD *)&v50 + 1) = 0;
      }
    }
    v5 = v48.m128i_i64[0];
    v39 = 0;
    if ( v48.m128i_i64[0] )
    {
      v5 = 0;
      do
      {
        v6 = *a1;
        v7 = 4 * v5;
        v4 = *(int *)(v47 + 4 * v5);
        v8 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)*a1 + 104LL);
        if ( v8 == interactive_graph_t__::vfunc_13 )
          v9 = *(_DWORD *)(*(_QWORD *)(v6 + 200) + 24 * v4 + 8);
        else
          v9 = v8(v6, v4);
        if ( v9 > 0 )
        {
          for ( j = 0; ; ++j )
          {
            v17 = *a1;
            v4 = *(int *)(v47 + v7);
            v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)*a1 + 104LL);
            v11 = v18 == interactive_graph_t__::vfunc_13
                ? *(_DWORD *)(*(_QWORD *)(v17 + 200) + 24 * v4 + 8)
                : v18(v17, v4);
            if ( j >= v11 )
              break;
            v12 = *a1;
            v13 = *(int *)(v47 + v7);
            v14 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)*a1 + 120LL);
            if ( v14 == interactive_graph_t__::vfunc_15 )
              v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 200) + 24 * v13) + 4LL * j);
            else
              v15 = v14(v12, v13, j);
            v44 = v15;
            v16 = &v45[4 * v46];
            if ( v16 == (char *)sub_28FB80(v45, (__int64)v16, &v44) )
            {
              v19 = v50;
              v20 = src;
              if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
              {
                src = (void *)qvector_reserve(&src, src, v50 + 1, 4);
                v20 = src;
                v19 = v50;
              }
              v20[v19] = v15;
              *(_QWORD *)&v50 = v50 + 1;
            }
          }
        }
        v5 = (int)++v39;
      }
      while ( (unsigned __int64)(int)v39 < v48.m128i_i64[0] );
    }
    v21 = v50;
    if ( !(_QWORD)v50 )
      break;
    v42 = v5;
    n[0] = 4 * v50;
    v29 = (void *)qalloc_or_throw(4 * v50);
    v4 = (unsigned __int64)src;
    v30 = memcpy(v29, src, n[0]);
    v32 = v42;
    v33 = (__int64)v30;
    if ( v47 )
    {
      v43 = (__int64)v30;
      *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
      v48.m128i_i64[0] = 0;
      qfree(v47, (const char *)v4, v31, v42, v30);
      si128 = _mm_load_si128((const __m128i *)n);
      v32 = v42;
      v33 = v43;
    }
    else
    {
      si128 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
    }
    v35 = v40++ == -1;
    v47 = v33;
    v48 = si128;
    if ( !v35 )
    {
      v36 = *a1;
      v37 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)*a1 + 104LL);
      if ( v37 == interactive_graph_t__::vfunc_13 )
      {
        v4 = *(_QWORD *)(v36 + 200);
        v38 = *(_DWORD *)(v4 + 24 * v32 + 8);
      }
      else
      {
        v4 = v39;
        v38 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v37)(v36, v39, v31, v32);
      }
      if ( v40 < v38 )
        continue;
    }
    goto LABEL_27;
  }
  if ( v47 )
  {
    v48.m128i_i64[0] = 0;
    qfree(v47, (const char *)v4);
    v47 = 0;
  }
  v48 = 0;
LABEL_27:
  if ( src )
  {
    *(_QWORD *)&v50 = 0;
    qfree(src, (const char *)v4);
  }
  if ( v47 )
  {
    v48.m128i_i64[0] = 0;
    qfree(v47, (const char *)v4);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, (const char *)v4);
  }
  return (unsigned int)v40;
}
