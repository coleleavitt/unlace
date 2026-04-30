unsigned __int64 __fastcall sub_2A07E0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  const char *v12; // rsi
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 v17; // rax
  int v18; // esi
  _QWORD *v19; // r14
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  size_t v24; // rdx
  __int64 v25; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  size_t v30; // rcx
  __int64 v31; // rdi
  __m128i si128; // xmm0
  void *v33; // rax
  bool v34; // [rsp+0h] [rbp-E8h]
  size_t v35; // [rsp+0h] [rbp-E8h]
  __int64 v36; // [rsp+8h] [rbp-E0h]
  size_t n[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD *v38; // [rsp+20h] [rbp-C8h]
  _QWORD *v39; // [rsp+28h] [rbp-C0h]
  __int64 *v40; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-A0h]
  void *src; // [rsp+50h] [rbp-98h]
  __int128 v44; // [rsp+58h] [rbp-90h]
  int v45; // [rsp+78h] [rbp-70h] BYREF
  __int64 v46; // [rsp+80h] [rbp-68h]
  int *v47; // [rsp+88h] [rbp-60h]
  int *v48; // [rsp+90h] [rbp-58h]
  __int64 v49; // [rsp+98h] [rbp-50h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 24);
  v39 = a3;
  v50 = __readfsqword(0x28u);
  v45 = 0;
  v47 = &v45;
  v48 = &v45;
  v46 = 0;
  v49 = 0;
  v36 = a2 + 8;
  v38 = a3 + 1;
  if ( v5 == a2 + 8 )
    return v50 - __readfsqword(0x28u);
  do
  {
    v7 = *(_QWORD *)(v5 + 32);
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
    if ( v8 == interactive_graph_t__::vfunc_20 )
      v9 = interactive_graph_t__::vfunc_20(a1, v7);
    else
      v9 = v8(a1, v7);
    v41 = *(_QWORD *)v9;
    v10 = *(_QWORD *)(v9 + 8);
    v44 = 0;
    v11 = *(_QWORD *)(v9 + 24);
    v42 = v10;
    src = nullptr;
    if ( v11 )
    {
      n[0] = 8 * v11;
      src = (void *)qalloc_or_throw(8 * v11);
      *((_QWORD *)&v44 + 1) = v11;
      memcpy(src, *(const void **)(v9 + 16), n[0]);
      *(_QWORD *)&v44 = v11;
    }
    v12 = (const char *)*(unsigned int *)(v5 + 32);
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, v12, *(unsigned int *)(v5 + 36));
    v13 = *(_DWORD *)(v5 + 32);
    v14 = *(_DWORD *)(v5 + 36);
    if ( v13 != v14 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, 0);
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, 0);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a1 + 208LL))(
        a1,
        v15,
        *(unsigned int *)(v5 + 36),
        &v41);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a1 + 208LL))(
        a1,
        *(unsigned int *)(v5 + 32),
        v16,
        &v41);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a1 + 208LL))(a1, v15, v16, &v41);
      v17 = a4[2];
      v18 = *(_DWORD *)(v5 + 36);
      v19 = a4 + 1;
      if ( v17 )
      {
        v20 = a4 + 1;
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v17 + 16);
            v22 = *(_QWORD *)(v17 + 24);
            if ( v18 > *(_DWORD *)(v17 + 32) )
              break;
            v20 = (_QWORD *)v17;
            v17 = *(_QWORD *)(v17 + 16);
            if ( !v21 )
              goto LABEL_12;
          }
          v17 = *(_QWORD *)(v17 + 24);
        }
        while ( v22 );
LABEL_12:
        if ( v19 != v20 && v18 >= *((_DWORD *)v20 + 8) )
          sub_292510(a4, v18);
      }
      v12 = (const char *)v15;
      v23 = sub_28FD20((__int64)a4, v15);
      if ( v24 )
      {
        v34 = v19 == (_QWORD *)v24 || v23 != 0;
        if ( !v34 )
          v34 = (int)v15 < *(_DWORD *)(v24 + 32);
        n[0] = v24;
        v25 = operator new(0x28u);
        *(_DWORD *)(v25 + 32) = v15;
        v12 = (const char *)v25;
        std::_Rb_tree_insert_and_rebalance(v34, v25, n[0], a4 + 1);
        ++a4[5];
      }
      goto LABEL_19;
    }
    v27 = (__int64)v38;
    v28 = v39[2];
    if ( !v28 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        if ( v13 > *(_DWORD *)(v28 + 32) )
        {
          v28 = *(_QWORD *)(v28 + 24);
          goto LABEL_29;
        }
        if ( v13 == *(_DWORD *)(v28 + 32) && v14 > *(_DWORD *)(v28 + 36) )
          break;
        v27 = v28;
        v28 = *(_QWORD *)(v28 + 16);
        if ( !v28 )
          goto LABEL_30;
      }
      v28 = *(_QWORD *)(v28 + 24);
LABEL_29:
      ;
    }
    while ( v28 );
LABEL_30:
    if ( v38 == (_QWORD *)v27
      || v13 < *(_DWORD *)(v27 + 32)
      || v13 == *(_DWORD *)(v27 + 32) && v14 < *(_DWORD *)(v27 + 36) )
    {
LABEL_42:
      v12 = (const char *)v27;
      v40 = (__int64 *)(v5 + 32);
      v27 = sub_2A06F0(v39, v27, &v40);
    }
    v29 = v44;
    v30 = 0;
    *(_QWORD *)(v27 + 40) = v41;
    *(_QWORD *)(v27 + 48) = v42;
    if ( v29 )
    {
      v33 = (void *)qalloc_or_throw(8 * v29);
      v12 = (const char *)src;
      v30 = (size_t)memcpy(v33, src, 8 * v29);
    }
    v31 = *(_QWORD *)(v27 + 56);
    si128 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
    if ( v31 )
    {
      *(_QWORD *)(v27 + 64) = 0;
      v35 = v30;
      *(__m128i *)n = si128;
      qfree(v31, v12);
      si128 = _mm_load_si128((const __m128i *)n);
      v30 = v35;
    }
    *(_QWORD *)(v27 + 56) = v30;
    *(__m128i *)(v27 + 64) = si128;
LABEL_19:
    if ( src )
    {
      *(_QWORD *)&v44 = 0;
      qfree(src, v12);
    }
    v5 = std::_Rb_tree_increment(v5);
  }
  while ( v5 != v36 );
  return v50 - __readfsqword(0x28u);
}
