__int64 __fastcall sub_58C940(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __m128 v9; // xmm1
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // ebp
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __m128i *v15; // rax
  __m128i si128; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm3
  __m128i v19; // xmm0
  __m128i v20; // xmm3
  __int64 v21; // rcx
  void **v22; // r14
  void *v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  void *v29; // rdi
  __m128i *v31; // [rsp+0h] [rbp-160h] BYREF
  __int64 v32; // [rsp+8h] [rbp-158h] BYREF
  __m128i v33; // [rsp+10h] [rbp-150h]
  _BYTE v34[28]; // [rsp+28h] [rbp-138h] BYREF
  __m128 v35; // [rsp+48h] [rbp-118h] BYREF
  int v36; // [rsp+58h] [rbp-108h]
  void *v37; // [rsp+60h] [rbp-100h]
  __int128 v38; // [rsp+68h] [rbp-F8h]
  int v39; // [rsp+78h] [rbp-E8h]
  unsigned int v40; // [rsp+7Ch] [rbp-E4h]
  unsigned int v41; // [rsp+80h] [rbp-E0h]
  char v42; // [rsp+84h] [rbp-DCh]
  __m128i v43[2]; // [rsp+88h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+A8h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-A8h]
  __int128 v46; // [rsp+C0h] [rbp-A0h]
  __int64 v47; // [rsp+D0h] [rbp-90h]
  int v48; // [rsp+D8h] [rbp-88h]
  __m128i v49; // [rsp+E8h] [rbp-78h]
  __m128i v50; // [rsp+F8h] [rbp-68h]
  __m128i v51; // [rsp+108h] [rbp-58h]
  __int64 v52; // [rsp+118h] [rbp-48h]
  unsigned __int64 v53; // [rsp+120h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v31 = v43;
  v9 = _mm_loadh_ps((const double *)&v31);
  if ( a6 )
  {
    *(__m128i *)v34 = _mm_loadu_si128((const __m128i *)a6);
    v10 = *(_DWORD *)&v34[8];
    *(__m128i *)&v34[12] = _mm_loadu_si128((const __m128i *)(a6 + 12));
    v11 = *(_QWORD *)&v34[20];
  }
  else
  {
    *(_DWORD *)&v34[24] = 2;
    v10 = 0;
    *(_QWORD *)&v34[16] = 0x5000000000LL;
    v11 = 0x200000050LL;
    *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_23836B0);
  }
  v40 = v10;
  v47 = v11;
  v36 = 0;
  v37 = nullptr;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  LODWORD(v45) = 0;
  *(_QWORD *)&v46 = a2;
  *((_QWORD *)&v46 + 1) = a5;
  v48 = 0;
  v38 = 0;
  v35 = v9;
  *(_OWORD *)ptr = 0;
  v12 = sub_58C4A0((__int64)&v35, a3, a4, (unsigned int *)v34);
  if ( (_BYTE)v12 )
    set_qerrno(0, a3);
  v32 = 0;
  v33 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v41), _mm_cvtsi32_si128(v40)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(HIDWORD(v47))));
  if ( v42 )
  {
    v13 = ptr[0];
    v33.m128i_i32[2] = 0;
    v14 = *(_QWORD *)ptr[0];
    if ( 56LL * *((_QWORD *)ptr[0] + 1) )
    {
      do
      {
        sub_588460(v14, (__int64)&v32, 0);
        v14 += 56;
      }
      while ( v14 != *v13 + 56LL * v13[1] );
    }
  }
  else
  {
    sub_588460((__int64)v31, (__int64)&v32, 0);
  }
  if ( (_QWORD)v46 )
    sub_589680((__int64)&v35, (__int64)v31, 0);
  v15 = *((__m128i **)&v46 + 1);
  if ( *((_QWORD *)&v46 + 1) )
  {
    si128 = _mm_load_si128(v43);
    v17 = _mm_load_si128(&v43[1]);
    v43[0] = _mm_loadu_si128(*((const __m128i **)&v46 + 1));
    v18 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v46 + 1) + 16LL));
    v19 = _mm_load_si128((const __m128i *)ptr);
    v52 = v45;
    v43[1] = v18;
    v20 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v46 + 1) + 32LL));
    v49 = si128;
    *(__m128i *)ptr = v20;
    v21 = *(_QWORD *)(*((_QWORD *)&v46 + 1) + 48LL);
    v50 = v17;
    v45 = v21;
    *(_QWORD *)(*((_QWORD *)&v46 + 1) + 48LL) = v52;
    v51 = v19;
    *v15 = si128;
    v15[1] = v17;
    v15[2] = v19;
  }
  if ( (_BYTE)v12 )
    LOBYTE(v12) = (unsigned int)get_qerrno() == 0;
  v22 = (void **)ptr[0];
  v35.m128_u64[0] = (unsigned __int64)&off_2B052F8;
  v46 = 0;
  if ( ptr[0] )
  {
    v23 = *(void **)ptr[0];
    if ( *(_QWORD *)ptr[0] )
    {
      v24 = *((_QWORD *)ptr[0] + 1);
      if ( v24 )
      {
        v25 = 0;
        v26 = 0;
        do
        {
          v27 = (__int64)v23 + v25;
          ++v26;
          v25 += 56;
          sub_378C80(v27);
          v23 = *v22;
        }
        while ( v24 != v26 );
      }
      v22[1] = nullptr;
      qfree(v23);
    }
    qfree(v22);
  }
  v28 = ptr[1];
  if ( ptr[1] )
  {
    clear_tinfo_t((char *)ptr[1] + 40);
    v29 = (void *)v28[2];
    if ( v29 )
    {
      v28[3] = 0;
      qfree(v29);
    }
    cleanup_argloc(v28);
    qfree(v28);
  }
  if ( v43[0].m128i_i64[0] )
  {
    v43[0].m128i_i64[1] = 0;
    qfree((void *)v43[0].m128i_i64[0]);
  }
  v35.m128_u64[1] = 0;
  v35.m128_u64[0] = (unsigned __int64)&off_2B05298;
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v12;
}

