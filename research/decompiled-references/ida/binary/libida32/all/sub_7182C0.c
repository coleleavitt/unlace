void __fastcall sub_7182C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // r12d
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r13
  size_t v19; // r12
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __m128i v25; // xmm0
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  __m128i v30; // xmm2
  __m128i v31; // xmm1
  int v32; // edi
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rax
  void (__fastcall *v35)(__int64, __int64); // rax
  void *v36; // rbp

  v5 = a4;
  v8 = (unsigned __int64)(a1 + 5);
  *(_QWORD *)(v8 - 24) = a5;
  *(_OWORD *)(v8 + 504) = 0;
  *(_QWORD *)(v8 - 40) = a2;
  *(_DWORD *)(v8 - 32) = a4;
  *(_QWORD *)(v8 - 16) = 0;
  *(_QWORD *)(v8 + 520) = 0;
  *(_DWORD *)(v8 + 528) = 0;
  *(_QWORD *)(v8 + 536) = 0;
  *(_DWORD *)(v8 + 544) = 0;
  *(_QWORD *)(v8 - 8) = 0;
  *(_QWORD *)(v8 + 496) = 0;
  memset((void *)(v8 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)a1 - (v8 & 0xFFFFFFF8) + 544) >> 3));
  *((_WORD *)a1 + 294) = 56;
  sub_71ADE0(a2, a3);
  v9 = *a1;
  byte_2CA26A0 = 0;
  v10 = sub_71B0E0(v9);
  v11 = *a1;
  a1[72] = v10;
  v12 = v10;
  v13 = sub_71ADF0(v11);
  v14 = *a1;
  if ( v12 >= v13 )
  {
    v33 = a1[72];
    a1[70] = v33;
    v34 = sub_71ADF0(v14);
    v16 = v5;
    *((_DWORD *)a1 + 142) = v33 / v34;
    if ( v5 > 1 )
      goto LABEL_4;
LABEL_11:
    v16 = 64;
    v5 = 64;
    goto LABEL_4;
  }
  v15 = sub_71ADF0(v14);
  if ( (unsigned int)sub_7181C0(a1, v15) )
    goto LABEL_14;
  v16 = v5;
  if ( v5 <= 1 )
    goto LABEL_11;
LABEL_4:
  *((_DWORD *)a1 + 2) = v5;
  v17 = v16 * (a3 + 56);
  v18 = v17 + 3;
  v19 = v17 + 1;
  v20 = (void *)qalloc(v17 + 3);
  a1[3] = v20;
  if ( v20 )
  {
    memset(v20, 0, v19);
    v25 = _mm_loadl_epi64((const __m128i *)(a1 + 3));
    v26 = *((unsigned __int16 *)a1 + 294);
    a1[68] = v25.m128i_i64[0];
    v27 = a3 + v26;
    *(_WORD *)(v25.m128i_i64[0] + 40) = 0;
    *(_DWORD *)v25.m128i_i64[0] = -1;
    *(__m128i *)(v25.m128i_i64[0] + 24) = _mm_unpacklo_epi64(v25, v25);
    *((_DWORD *)a1 + 2) = v19 / v27;
    if ( (unsigned int)(v19 / v27) > 1 )
    {
      v28 = v25.m128i_i64[0];
      v29 = 1;
      do
      {
        v30 = (__m128i)(unsigned __int64)v28;
        v28 += v27;
        *(_QWORD *)(v28 - v27 + 24) = v28;
        v31 = _mm_unpacklo_epi64(v25, v30);
        *(_WORD *)(v28 + 40) = 0;
        v32 = v29++;
        *(_DWORD *)v28 = -1;
        *(__m128i *)(v28 + 24) = v31;
      }
      while ( (unsigned int)(v19 / v27) != v29 );
      *(_QWORD *)(v25.m128i_i64[0] + 32) = v28;
      *(_WORD *)(v28 + 40) = 0;
      *(_DWORD *)v28 = -1;
      *(__m128i *)(v28 + 24) = v31;
      a1[68] = v25.m128i_i64[0] + v27 + v27 * (unsigned int)(v32 - 1);
    }
    a1[69] = v25.m128i_i64[0];
    return;
  }
  v35 = (void (__fastcall *)(__int64, __int64))a1[2];
  if ( !v35 )
    off_2C57CC0(0x22u, v18, v21, v22, v23, v24);
  v35(34, v18);
LABEL_14:
  v36 = (void *)*a1;
  if ( *a1 )
  {
    sub_71ABB0(*a1);
    operator delete(v36, 0x18u);
  }
  *a1 = 0;
}

