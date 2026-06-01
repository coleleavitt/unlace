unsigned __int64 __fastcall sub_51B680(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // edi
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // r14
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  char *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbx
  char *v38; // rax
  void *v39; // rdi
  __m128i v41; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+10h] [rbp-68h]
  void **p_ptr; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v46 = __readfsqword(0x28u);
  v45 = 0;
  ptr = nullptr;
  v3 = *(int *)(v1 + 28);
  v42 = v3;
  if ( v3 )
  {
    v4 = v3;
    p_ptr = &ptr;
    v5 = qvector_reserve(&ptr, 0, v42, 24);
    v6 = *((_QWORD *)&v45 + 1);
    *((_QWORD *)&v45 + 1) = 0;
    v7 = (char *)ptr;
    v8 = v45 - 1;
    if ( (__int64)v45 - 1 >= 0 )
    {
      v9 = v5;
      do
      {
        v10 = *(_QWORD *)v7;
        v11 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        v9 += 24;
        v7 += 24;
        *((_QWORD *)v7 - 3) = 0;
        *(_QWORD *)(v9 - 24) = v10;
        *(__m128i *)(v9 - 16) = v11;
        *((_QWORD *)v7 - 1) = 0;
      }
      while ( v8-- != 0 );
      v7 = (char *)ptr;
    }
    v41.m128i_i64[0] = v5;
    qfree(v7);
    v13 = v45;
    *((_QWORD *)&v45 + 1) = v6;
    v14 = v42;
    ptr = (void *)v41.m128i_i64[0];
    if ( (unsigned __int64)v45 < v42 )
    {
      v15 = 24 * v45;
      v16 = 24 * v45 + v41.m128i_i64[0];
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      v17 = v13 + 1;
      if ( v13 + 1 < v14 )
      {
        v18 = v15 + 24;
        do
        {
          ++v17;
          v19 = (char *)ptr + v18;
          v18 += 24;
          *(_QWORD *)v19 = 0;
          *(_OWORD *)(v19 + 8) = 0;
        }
        while ( v42 != v17 );
      }
    }
    *(_QWORD *)&v45 = v42;
    if ( v4 > 0 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * (int)v20 + 16)) + 1768);
        v22 = *(_DWORD *)(a1 + 176);
        if ( !*(_BYTE *)(v21 + 152) )
          break;
        v23 = v22 - *(_DWORD *)(*(_QWORD *)(v21 + 8) + 68LL);
        if ( (unsigned __int64)v23 >= *(_QWORD *)(v21 + 40) )
        {
          if ( !under_debugger )
            interr(1335);
          goto LABEL_34;
        }
        v24 = (__int64)v23 << 6;
        *(_DWORD *)(*(_QWORD *)(v21 + 32) + v24 + 56) = v22;
        v25 = (__int64 *)(*(_QWORD *)(v21 + 32) + v24);
        v26 = *v25;
        v27 = *v25 + 33 * v25[1];
        if ( v27 != *v25 )
        {
          v28 = 24 * v20;
          do
          {
            v29 = _mm_loadl_epi64((const __m128i *)v26);
            v30 = _mm_loadl_epi64((const __m128i *)(v26 + 8));
            v31 = (__int64 *)((char *)ptr + v28);
            v32 = *(_QWORD *)((char *)ptr + v28 + 8);
            v33 = *(_QWORD *)((char *)ptr + v28);
            if ( *(_QWORD *)((char *)ptr + v28 + 16) < (unsigned __int64)(v32 + 1) )
            {
              v41.m128i_i64[1] = v30.m128i_i64[0];
              v41.m128i_i64[0] = v29.m128i_i64[0];
              v34 = qvector_reserve((char *)ptr + v28, v33, v32 + 1, 16);
              *v31 = v34;
              v33 = v34;
              v32 = v31[1];
              v30 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
              v29 = _mm_loadl_epi64(&v41);
            }
            v26 += 33;
            *(__m128i *)(v33 + 16 * v32) = _mm_unpacklo_epi64(v29, v30);
            ++v31[1];
          }
          while ( v27 != v26 );
        }
        if ( v42 == ++v20 )
          goto LABEL_20;
      }
      if ( !under_debugger )
        interr(1336);
LABEL_34:
      BUG();
    }
  }
  else
  {
    p_ptr = &ptr;
  }
LABEL_20:
  sub_459830((__int64 *)(a1 + 152), p_ptr);
  v35 = (char *)ptr;
  if ( ptr )
  {
    v36 = v45;
    if ( (_QWORD)v45 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[24 * v37];
        v39 = *(void **)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          qfree(v39);
          v35 = (char *)ptr;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v35);
  }
  return v46 - __readfsqword(0x28u);
}
