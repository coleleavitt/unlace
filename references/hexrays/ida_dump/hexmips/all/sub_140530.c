unsigned __int64 __fastcall sub_140530(__int64 a1, const void *a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD **v4; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __m128i v10; // xmm4
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 i; // r12
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __m128i v17; // xmm5
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __m128i v25; // xmm1
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __m128i v30; // xmm0
  _QWORD *v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rax
  size_t v43; // r15
  void *v44; // rax
  void *v45; // rax
  size_t v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __m128i v50; // [rsp+0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-60h]
  __m128i v53; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD ***)(a1 + 792);
  v54 = __readfsqword(0x28u);
  v6 = sub_139930(v4, (unsigned __int64)a2);
  if ( v6 )
  {
    v7 = *v6;
    if ( v7 )
    {
      v51 = 0;
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(a3 + 8);
      v50.m128i_i64[0] = v9;
      if ( v9 )
        goto LABEL_27;
      while ( 1 )
      {
        v10 = _mm_loadl_epi64(&v50);
        v11 = *(_QWORD *)(v8 + 1256);
        v50 = _mm_unpacklo_epi64(v10, v10);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v8 + 1264);
          if ( v12 )
          {
            for ( i = 0; i != v12; ++i )
            {
              v14 = (_QWORD *)(v11 + 96 * i);
              v15 = v14[7];
              if ( v15 )
              {
                v14[8] = 0;
                qfree(v15);
              }
              clear_tinfo_t(v14 + 6);
              v16 = v14[3];
              if ( v16 )
              {
                v14[4] = 0;
                qfree(v16);
              }
              cleanup_argloc(v14);
              v11 = *(_QWORD *)(v8 + 1256);
            }
          }
          *(_QWORD *)(v8 + 1264) = 0;
          qfree(v11);
        }
        v17 = _mm_load_si128(&v50);
        *(_QWORD *)(v8 + 1256) = v51;
        *(__m128i *)(v8 + 1264) = v17;
        if ( a3 + 24 == v8 + 1280 )
          break;
        v53 = 0u;
        v18 = *(_QWORD *)(a3 + 32);
        v19 = 0;
        if ( !v18 )
          goto LABEL_15;
        v23 = qalloc(72);
        v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
        if ( !v23 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v23 + 64) = 0;
        v26 = v23 & 0xFFFFFFFFFFFFFFFCLL;
        *(_OWORD *)(v23 + 16) = 0;
        *(__m128i *)(v23 + 8) = v25;
        *(_OWORD *)(v23 + 32) = 0;
        *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
        v53 = (__m128i)(unsigned __int64)v23;
        v27 = *(_QWORD *)v23;
        *(_OWORD *)(v23 + 48) = 0;
        v28 = v23 & 0xFFFFFFFFFFFFFFFCLL | v27 & 3;
        *(_QWORD *)v23 = v28;
        v29 = v53.m128i_i64[0];
        v30 = (__m128i)v53.m128i_u64[0];
        *(_QWORD *)v53.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
        *(_QWORD *)v53.m128i_i64[0] |= 2uLL;
        if ( !*(_QWORD *)(a3 + 32) )
          sub_130690(72, (__int64)a2, v28, v26, v24);
        v31 = *(_QWORD **)(a3 + 24);
        if ( v31 )
          v32 = *v31 & 0xFFFFFFFFFFFFFFFCLL;
        else
          v32 = 0;
        v33 = sub_1403A0(&v53, v32, v53.m128i_i64[0]);
        v35 = v53.m128i_i64[0];
        v36 = v33 & 0xFFFFFFFFFFFFFFFCLL;
        v37 = v33 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v53.m128i_i64[0] & 3LL;
        *(_QWORD *)v53.m128i_i64[0] = v37;
        if ( (*(_BYTE *)v33 & 2) == 0 )
        {
          v47 = v33;
          do
          {
            v48 = v47;
            v47 = *(_QWORD *)(v47 + 8);
          }
          while ( (*(_BYTE *)v47 & 2) == 0 );
          v19 = v53.m128i_i64[0];
          *(_QWORD *)(v53.m128i_i64[0] + 8) = v48;
          if ( (*(_BYTE *)v33 & 2) != 0 )
          {
            if ( under_debugger )
LABEL_43:
              BUG();
            v33 = interr(3438, v36, v19, v48, v34);
          }
          do
          {
            v49 = v33;
            v33 = *(_QWORD *)(v33 + 16);
          }
          while ( (*(_BYTE *)v33 & 2) == 0 );
          *(_QWORD *)(v19 + 16) = v49;
          v18 = *(_QWORD *)(a3 + 32);
LABEL_15:
          v20 = *(_QWORD *)(v8 + 1280);
          *(_QWORD *)(v8 + 1280) = v19;
          v21 = *(_QWORD *)(v8 + 1288);
          *(_QWORD *)(v8 + 1288) = v18;
          v53.m128i_i64[0] = v20;
          v53.m128i_i64[1] = v21;
          if ( v20 )
          {
            sub_7FA10((unsigned __int64 **)&v53);
            if ( v53.m128i_i64[0] )
              qfree(v53.m128i_i64[0]);
          }
          break;
        }
        if ( under_debugger )
          goto LABEL_43;
        v9 = interr(3437, v36, v37, v35, v34);
LABEL_27:
        v38 = 0;
        v51 = qalloc_or_throw(96 * v9);
        v39 = v51;
        do
        {
          v40 = *(_QWORD *)a3 + 96 * v38;
          *(_DWORD *)v39 = 0;
          v41 = v40;
          copy_argloc(v39, v40);
          v42 = *(_QWORD *)(v41 + 16);
          *(_QWORD *)(v39 + 24) = 0;
          *(_OWORD *)(v39 + 32) = 0;
          *(_QWORD *)(v39 + 16) = v42;
          v43 = *(_QWORD *)(v41 + 32);
          if ( v43 )
          {
            v44 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 32));
            *(_QWORD *)(v39 + 24) = v44;
            *(_QWORD *)(v39 + 40) = v43;
            memcpy(v44, *(const void **)(v41 + 24), v43);
            *(_QWORD *)(v39 + 32) = v43;
          }
          *(_QWORD *)(v39 + 48) = 0;
          a2 = (const void *)(v41 + 48);
          copy_tinfo_t(v39 + 48, v41 + 48);
          *(_QWORD *)(v39 + 56) = 0;
          *(_OWORD *)(v39 + 64) = 0;
          if ( *(_QWORD *)(v41 + 64) )
          {
            n = *(_QWORD *)(v41 + 64);
            v45 = (void *)qalloc_or_throw(n);
            v46 = n;
            *(_QWORD *)(v39 + 56) = v45;
            *(_QWORD *)(v39 + 72) = v46;
            a2 = *(const void **)(v41 + 56);
            memcpy(v45, a2, v46);
            *(_QWORD *)(v39 + 64) = n;
          }
          ++v38;
          v39 += 96;
          *(_QWORD *)(v39 - 16) = *(_QWORD *)(v41 + 80);
          *(_DWORD *)(v39 - 8) = *(_DWORD *)(v41 + 88);
        }
        while ( v50.m128i_i64[0] != v38 );
      }
      *(_QWORD *)(v8 + 1296) = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(v8 + 1304) = *(_DWORD *)(a3 + 48);
    }
  }
  return v54 - __readfsqword(0x28u);
}
