unsigned __int64 __fastcall sub_4C2240(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  signed __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 i; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  void *v14; // r13
  int v15; // eax
  __int64 *v16; // rbx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  int v19; // r13d
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // r12
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // rbx
  __m128i v27; // xmm0
  __m128i v28; // xmm5
  void *v29; // r15
  __m128i v30; // xmm0
  int v31; // r13d
  void *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm0
  void *v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm6
  __m128i v41; // xmm0
  __m128i v44; // [rsp+10h] [rbp-138h] BYREF
  __m128i v45; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-118h]
  __int64 v47; // [rsp+38h] [rbp-110h]
  __m128i v48; // [rsp+40h] [rbp-108h] BYREF
  __m128i v49; // [rsp+50h] [rbp-F8h] BYREF
  int v50; // [rsp+60h] [rbp-E8h]
  __int64 v51; // [rsp+68h] [rbp-E0h]
  __int64 v52; // [rsp+70h] [rbp-D8h]
  __m128i v53; // [rsp+78h] [rbp-D0h]
  __m128i v54; // [rsp+88h] [rbp-C0h] BYREF
  int v55; // [rsp+98h] [rbp-B0h]
  __m128i v56; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v57; // [rsp+B0h] [rbp-98h]
  int v58; // [rsp+C0h] [rbp-88h]
  void *ptr[2]; // [rsp+C8h] [rbp-80h]
  __m128i v60; // [rsp+D8h] [rbp-70h]
  __m128i v61; // [rsp+E8h] [rbp-60h]
  int v62; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+108h] [rbp-40h]

  v3 = a2;
  v63 = __readfsqword(0x28u);
  v47 = a2 - a1;
  if ( (__int64)(a2 - a1) > 96 )
  {
    v5 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a2 - a1) >> 5) - 2;
    v46 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a2 - a1) >> 5);
    v6 = v5 / 2;
    for ( i = a1 + 32 * (v5 / 2 + ((v5 + ((unsigned __int64)v5 >> 63)) & 0xFFFFFFFFFFFFFFFELL)); ; i -= 96LL )
    {
      v15 = *(_DWORD *)(i + 32);
      v16 = *(__int64 **)(i + 40);
      v48 = _mm_loadu_si128((const __m128i *)i);
      v17 = _mm_loadu_si128((const __m128i *)(i + 16));
      v50 = v15;
      v49 = v17;
      if ( v16 )
        v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v16 + 16))(v16);
      v18 = _mm_loadu_si128((const __m128i *)(i + 72));
      v10 = _mm_loadl_epi64((const __m128i *)(i + 48));
      *(_QWORD *)(i + 48) = 0;
      v11 = _mm_loadu_si128((const __m128i *)(i + 56));
      v19 = *(_DWORD *)(i + 88);
      *(_OWORD *)(i + 56) = 0;
      v54 = v18;
      v20 = _mm_load_si128(&v48);
      v55 = v19;
      v56 = v20;
      v21 = _mm_load_si128(&v49);
      v58 = v50;
      v52 = v10.m128i_i64[0];
      v53 = v11;
      v57 = v21;
      if ( v16 )
      {
        v8 = *v16;
        v45 = v11;
        v44.m128i_i64[0] = v10.m128i_i64[0];
        v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 16))(v16);
        v10 = _mm_loadl_epi64(&v44);
        v11 = _mm_load_si128(&v45);
        v12 = (__m128i)(unsigned __int64)v9;
      }
      else
      {
        v12 = 0;
      }
      v62 = v19;
      v60 = v11;
      v13 = _mm_loadu_si128(&v54);
      v52 = 0;
      v53 = 0;
      v61 = v13;
      *(__m128i *)ptr = _mm_unpacklo_epi64(v12, v10);
      sub_4BF020(a1, v6, v46, (__int64)&v56);
      v14 = ptr[0];
      if ( ptr[1] )
        qfree(ptr[1]);
      if ( v14 )
        qfree(v14);
      if ( !v6 )
        break;
      --v6;
      if ( v16 )
        qfree(v16);
    }
    v51 = (__int64)v16;
    sub_4BED10(&v48);
  }
  if ( a2 < a3 )
  {
    v22 = 0xAAAAAAAAAAAAAAABLL * (v47 >> 5);
    do
    {
      while ( 1 )
      {
        v23 = *(_DWORD *)(v3 + 80);
        v24 = *(_DWORD *)(a1 + 80);
        if ( v23 < v24 || v24 >= v23 && *(_QWORD *)(v3 + 72) < *(_QWORD *)(a1 + 72) )
          break;
        v3 += 96LL;
        if ( v3 >= a3 )
          return v63 - __readfsqword(0x28u);
      }
      v25 = *(_DWORD *)(v3 + 32);
      v26 = *(_QWORD *)(v3 + 40);
      v48 = _mm_loadu_si128((const __m128i *)v3);
      v27 = _mm_loadu_si128((const __m128i *)(v3 + 16));
      v50 = v25;
      v49 = v27;
      if ( v26 )
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      v28 = _mm_loadu_si128((const __m128i *)(v3 + 56));
      v29 = *(void **)(v3 + 48);
      *(_QWORD *)(v3 + 48) = 0;
      v30 = _mm_loadu_si128((const __m128i *)(v3 + 72));
      v31 = *(_DWORD *)(v3 + 88);
      *(_OWORD *)(v3 + 56) = 0;
      v52 = (__int64)v29;
      v55 = v31;
      v44 = v28;
      v53 = v28;
      v54 = v30;
      if ( a1 != v3 )
      {
        v32 = *(void **)(v3 + 40);
        if ( v32 )
        {
          qfree(v32);
          *(_QWORD *)(v3 + 40) = 0;
        }
        *(__m128i *)v3 = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)(v3 + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_DWORD *)(v3 + 32) = *(_DWORD *)(a1 + 32);
        v33 = *(_QWORD *)(a1 + 40);
        if ( v33 )
          *(_QWORD *)(v3 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = *(_QWORD *)(a1 + 48);
      v35 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = 0;
      *(_OWORD *)(a1 + 56) = 0;
      v36 = *(void **)(v3 + 48);
      if ( v36 )
      {
        *(_QWORD *)(v3 + 56) = 0;
        v46 = v34;
        v45 = v35;
        qfree(v36);
        v34 = v46;
        v35 = _mm_load_si128(&v45);
      }
      *(__m128i *)(v3 + 56) = v35;
      v37 = _mm_load_si128(&v48);
      *(_QWORD *)(v3 + 48) = v34;
      v38 = *(_QWORD *)(a1 + 72);
      v56 = v37;
      v39 = _mm_load_si128(&v49);
      *(_QWORD *)(v3 + 72) = v38;
      LODWORD(v38) = *(_DWORD *)(a1 + 80);
      ptr[0] = nullptr;
      *(_DWORD *)(v3 + 80) = v38;
      LODWORD(v38) = *(_DWORD *)(a1 + 88);
      v57 = v39;
      *(_DWORD *)(v3 + 88) = v38;
      v58 = v50;
      if ( v26 )
        ptr[0] = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      v62 = v31;
      v40 = _mm_load_si128(&v44);
      v41 = _mm_loadu_si128(&v54);
      ptr[1] = v29;
      v52 = 0;
      v60 = v40;
      v53 = 0;
      v61 = v41;
      sub_4BF020(a1, 0, v22, (__int64)&v56);
      v3 += 96LL;
      sub_4BED10(&v56);
      v51 = v26;
      sub_4BED10(&v48);
    }
    while ( v3 < a3 );
  }
  return v63 - __readfsqword(0x28u);
}
