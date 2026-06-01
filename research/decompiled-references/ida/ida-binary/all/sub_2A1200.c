__int64 __fastcall interactive_graph_t__::vfunc_28(
        _QWORD *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v7; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  char *v22; // rdx
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  _DWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbp
  _DWORD *v28; // rdi
  __int64 v29; // rax
  unsigned __int64 *v30; // rbp
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  void *v36; // r12
  __int64 v37; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rax
  void *v40; // rax
  __m128i v41; // [rsp+0h] [rbp-98h] BYREF
  size_t n; // [rsp+10h] [rbp-88h]
  _QWORD *v43; // [rsp+18h] [rbp-80h]
  _DWORD v44[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v45; // [rsp+28h] [rbp-70h] BYREF
  __int64 v46; // [rsp+30h] [rbp-68h] BYREF
  __int64 v47; // [rsp+38h] [rbp-60h]
  void *src; // [rsp+40h] [rbp-58h]
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v7 = a3;
  v9 = ((__int64)a3 << 32) | a2;
  v10 = *a1;
  v50 = __readfsqword(0x28u);
  v11 = a5;
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(v10 + 160);
  if ( v12 == interactive_graph_t__::vfunc_20 )
    v13 = (_QWORD *)interactive_graph_t__::vfunc_20((__int64)a1, v9);
  else
    v13 = (_QWORD *)v12((__int64)a1, v9);
  if ( !v13 )
    return 0;
  v46 = *v13;
  v14 = v13[1];
  v49 = 0;
  v15 = v13[3];
  v47 = v14;
  src = nullptr;
  if ( v15 )
  {
    v43 = v13;
    v41.m128i_i64[0] = v15;
    n = 8 * v15;
    src = (void *)qalloc_or_throw(8 * v15);
    *((_QWORD *)&v49 + 1) = v41.m128i_i64[0];
    memcpy(src, (const void *)v43[2], n);
    *(_QWORD *)&v49 = v41.m128i_i64[0];
    if ( a4 != a2 )
    {
LABEL_6:
      v16 = a2;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 216LL))(a1, a2, (unsigned int)v7) )
      {
        v16 = a4;
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64 *))(*a1 + 208LL))(a1, a4, (unsigned int)v11, &v46);
LABEL_8:
        v17 = 1;
        goto LABEL_9;
      }
      goto LABEL_31;
    }
  }
  else if ( a4 != a2 )
  {
    goto LABEL_6;
  }
  v19 = a1[22] + 24LL * (int)a4;
  v16 = *(_QWORD *)v19;
  v20 = *(_QWORD *)v19 + 4LL * *(_QWORD *)(v19 + 8);
  if ( *(_QWORD *)v19 != v20 )
  {
    v21 = *(char **)v19;
    while ( *(_DWORD *)v21 != (_DWORD)v7 )
    {
      v21 += 4;
      if ( (char *)v20 == v21 )
        goto LABEL_31;
    }
    if ( &v21[-v16] != (char *)-4LL )
    {
      v22 = (char *)v16;
      while ( *(_DWORD *)v22 != (_DWORD)v11 )
      {
        v22 += 4;
        if ( (char *)v20 == v22 )
          goto LABEL_33;
      }
      if ( &v22[-v16] != (char *)-4LL )
      {
        if ( (_DWORD)v7 != (_DWORD)v11 )
        {
          v23 = (v11 << 32) | a4;
          v24 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 160LL);
          if ( v24 == interactive_graph_t__::vfunc_20 )
            v25 = (_DWORD *)interactive_graph_t__::vfunc_20((__int64)a1, v23);
          else
            v25 = (_DWORD *)v24((__int64)a1, v23);
          if ( v25 && *v25 != (_DWORD)v46 )
            *v25 = -1;
          v16 = a2;
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 216LL))(a1, a2, (unsigned int)v7);
        }
        goto LABEL_8;
      }
LABEL_33:
      *(_DWORD *)v21 = v11;
      v26 = a1[25];
      v27 = v26 + 24 * v7;
      v28 = *(_DWORD **)v27;
      v29 = *(_QWORD *)v27 + 4LL * *(_QWORD *)(v27 + 8);
      if ( *(_QWORD *)v27 != v29 )
      {
        while ( *v28 != a2 )
        {
          if ( (_DWORD *)v29 == ++v28 )
            goto LABEL_39;
        }
        if ( (_DWORD *)v29 != v28 )
        {
          memmove(v28, v28 + 1, v29 - (_QWORD)v28 - 4);
          --*(_QWORD *)(v27 + 8);
          v26 = a1[25];
        }
      }
LABEL_39:
      v30 = (unsigned __int64 *)(v26 + 24LL * (int)v11);
      v31 = v30[1];
      v16 = *v30;
      if ( v30[2] < v31 + 1 )
      {
        v39 = qvector_reserve(v30, v16, v31 + 1, 4);
        *v30 = v39;
        v16 = v39;
        v31 = v30[1];
      }
      *(_DWORD *)(v16 + 4 * v31) = a2;
      ++v30[1];
      v32 = (_QWORD *)a1[31];
      v44[0] = a4;
      v33 = v32[2];
      v44[1] = v11;
      v34 = (__int64)(v32 + 1);
      if ( !v33 )
        goto LABEL_59;
      do
      {
        if ( (signed int)a4 > *(_DWORD *)(v33 + 32) || a4 == *(_DWORD *)(v33 + 32) && *(_DWORD *)(v33 + 36) < (int)v11 )
        {
          v33 = *(_QWORD *)(v33 + 24);
        }
        else
        {
          v34 = v33;
          v33 = *(_QWORD *)(v33 + 16);
        }
      }
      while ( v33 );
      if ( (_QWORD *)v34 == v32 + 1
        || (signed int)a4 < *(_DWORD *)(v34 + 32)
        || a4 == *(_DWORD *)(v34 + 32) && *(_DWORD *)(v34 + 36) > (int)v11 )
      {
LABEL_59:
        v16 = v34;
        v45 = (__int64 *)v44;
        v34 = sub_2A1110(v32, v34, &v45);
      }
      v35 = v49;
      v36 = nullptr;
      *(_QWORD *)(v34 + 40) = v46;
      *(_QWORD *)(v34 + 48) = v47;
      if ( v35 )
      {
        v40 = (void *)qalloc_or_throw(8 * v35);
        v16 = (unsigned __int64)src;
        v36 = v40;
        memcpy(v40, src, 8 * v35);
      }
      v37 = *(_QWORD *)(v34 + 56);
      v38 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
      if ( v37 )
      {
        *(_QWORD *)(v34 + 64) = 0;
        v41 = v38;
        qfree(v37, (const char *)v16);
        v38 = _mm_load_si128(&v41);
      }
      *(_QWORD *)(v34 + 56) = v36;
      *(__m128i *)(v34 + 64) = v38;
      goto LABEL_8;
    }
  }
LABEL_31:
  v17 = 0;
LABEL_9:
  if ( src )
  {
    *(_QWORD *)&v49 = 0;
    qfree(src, (const char *)v16);
  }
  return v17;
}
