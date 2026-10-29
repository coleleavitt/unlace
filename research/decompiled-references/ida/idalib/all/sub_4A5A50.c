unsigned __int64 __fastcall sub_4A5A50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  void (__fastcall *v6)(__int128 *, __int64, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // rax
  void *v9; // rax
  __m128i v10; // xmm0
  __m128i *v11; // r14
  void *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  int v16; // eax
  __m128i v17; // xmm0
  int v18; // eax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  void *v22; // rdi
  __m128i *v23; // r15
  __m128i v24; // xmm0
  __int64 v25; // r13
  __int64 v26; // rcx
  void *v27; // rdi
  __int64 v28; // r13
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int32 v31; // ecx
  __m128i v32; // xmm0
  __int32 v33; // ecx
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  void *v36; // rdi
  void *v37; // rbx
  __m128i v38; // xmm0
  void *v39; // rdi
  void *v40; // rbx
  __m128i v41; // xmm0
  __int64 *v42; // rbx
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // rax
  __m128i v49; // [rsp+0h] [rbp-178h] BYREF
  __int64 v50; // [rsp+18h] [rbp-160h]
  __int64 v51; // [rsp+20h] [rbp-158h]
  __int64 *v52; // [rsp+28h] [rbp-150h]
  __m128i v53; // [rsp+30h] [rbp-148h] BYREF
  void *v54; // [rsp+40h] [rbp-138h]
  __m128i v55; // [rsp+48h] [rbp-130h] BYREF
  void *ptr; // [rsp+58h] [rbp-120h]
  __m128i v57; // [rsp+60h] [rbp-118h] BYREF
  __int64 v58; // [rsp+70h] [rbp-108h] BYREF
  __m128i v59; // [rsp+78h] [rbp-100h] BYREF
  __m128i v60; // [rsp+88h] [rbp-F0h] BYREF
  __m128i v61; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-D0h]
  __int64 v63; // [rsp+B0h] [rbp-C8h]
  char v64; // [rsp+B8h] [rbp-C0h]
  __int64 v65; // [rsp+C0h] [rbp-B8h]
  __int64 v66; // [rsp+C8h] [rbp-B0h]
  __int64 v67; // [rsp+D0h] [rbp-A8h]
  __int64 v68; // [rsp+D8h] [rbp-A0h]
  char v69; // [rsp+E0h] [rbp-98h]
  __int64 v70; // [rsp+E8h] [rbp-90h]
  __int128 v71; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v72; // [rsp+100h] [rbp-78h] BYREF
  __int128 v73; // [rsp+110h] [rbp-68h] BYREF
  __m128i v74; // [rsp+120h] [rbp-58h]
  unsigned __int64 v75; // [rsp+138h] [rbp-40h]

  v51 = a2;
  v75 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 192 )
  {
    v5 = a1 + 192;
    while ( 1 )
    {
      if ( !*(_QWORD *)(a3 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5, a1) >= 0 )
        break;
      v9 = *(void **)(v5 + 16);
      v10 = _mm_loadu_si128((const __m128i *)v5);
      v11 = (__m128i *)(v5 + 64);
      *(_QWORD *)(v5 + 16) = 0;
      v54 = v9;
      v12 = *(void **)(v5 + 40);
      v53 = v10;
      v13 = _mm_loadu_si128((const __m128i *)(v5 + 24));
      *(_QWORD *)(v5 + 40) = 0;
      ptr = v12;
      v55 = v13;
      v14 = _mm_loadu_si128((const __m128i *)(v5 + 48));
      *(_OWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 48) = 0;
      v58 = 0;
      v52 = &v58;
      v57 = v14;
      copy_tinfo_t(&v58);
      v15 = _mm_loadu_si128((const __m128i *)(v5 + 72));
      v62 = *(_QWORD *)(v5 + 120);
      v16 = *(_DWORD *)(v5 + 128);
      v59 = v15;
      v17 = _mm_loadu_si128((const __m128i *)(v5 + 88));
      LODWORD(v63) = v16;
      v18 = *(_DWORD *)(v5 + 132);
      v60 = v17;
      v19 = _mm_loadu_si128((const __m128i *)(v5 + 104));
      HIDWORD(v63) = v18;
      LOBYTE(v18) = *(_BYTE *)(v5 + 136);
      v61 = v19;
      v64 = v18;
      v65 = *(_QWORD *)(v5 + 144);
      v66 = *(_QWORD *)(v5 + 152);
      v67 = *(_QWORD *)(v5 + 160);
      v68 = *(_QWORD *)(v5 + 168);
      v69 = *(_BYTE *)(v5 + 176);
      v70 = *(_QWORD *)(v5 + 184);
      v50 = v5 + 192;
      v20 = 0xAAAAAAAAAAAAAAABLL * ((v5 - a1) >> 6);
      if ( v5 - a1 > 0 )
      {
        do
        {
          v21 = v11[-16].m128i_i64[0];
          v22 = (void *)v11[-3].m128i_i64[0];
          v23 = v11;
          v24 = _mm_loadu_si128((__m128i *)((char *)v11 - 232));
          v25 = v11[-15].m128i_i64[0];
          *(__m128i *)((char *)&v11[-15] + 8) = 0;
          v11[-4].m128i_i64[0] = v21;
          v26 = v11[-16].m128i_i64[1];
          v11[-15].m128i_i64[0] = 0;
          v11[-4].m128i_i64[1] = v26;
          if ( v22 )
          {
            v11[-3].m128i_i64[1] = 0;
            v49 = v24;
            qfree(v22);
            v24 = _mm_load_si128(&v49);
          }
          v27 = (void *)v11[-2].m128i_i64[1];
          v11[-3].m128i_i64[0] = v25;
          *(__m128i *)((char *)v11 - 40) = v24;
          v28 = v11[-14].m128i_i64[1];
          v29 = _mm_loadu_si128(v11 - 13);
          v11[-14].m128i_i64[1] = 0;
          v11[-13] = 0;
          if ( v27 )
          {
            v11[-1].m128i_i64[0] = 0;
            v49 = v29;
            qfree(v27);
            v29 = _mm_load_si128(&v49);
          }
          v11[-2].m128i_i64[1] = v28;
          v11 -= 12;
          v11[11] = v29;
          copy_tinfo_t(v23);
          v30 = _mm_loadu_si128((__m128i *)((char *)v23 - 184));
          v23[3].m128i_i32[2] = v23[-9].m128i_i32[2];
          v31 = v23[-8].m128i_i32[0];
          *(__m128i *)((char *)v23 + 8) = v30;
          v32 = _mm_loadu_si128((__m128i *)((char *)v23 - 168));
          v23[4].m128i_i32[0] = v31;
          v33 = v23[-8].m128i_i32[1];
          *(__m128i *)((char *)v23 + 24) = v32;
          v34 = _mm_loadu_si128((__m128i *)((char *)v23 - 152));
          v23[4].m128i_i32[1] = v33;
          LOBYTE(v33) = v23[-8].m128i_i8[8];
          *(__m128i *)((char *)v23 + 40) = v34;
          v23[4].m128i_i8[8] = v33;
          v23[5].m128i_i64[0] = v23[-7].m128i_i64[0];
          v23[5].m128i_i64[1] = v23[-7].m128i_i64[1];
          v23[6].m128i_i64[0] = v23[-6].m128i_i64[0];
          v23[6].m128i_i32[2] = v23[-6].m128i_i32[2];
          v23[6].m128i_i32[3] = v23[-6].m128i_i32[3];
          v23[7].m128i_i8[0] = v23[-5].m128i_i8[0];
          v23[7].m128i_i64[1] = v23[-5].m128i_i64[1];
          --v20;
        }
        while ( v20 );
      }
      v35 = _mm_load_si128(&v53);
      v36 = *(void **)(a1 + 16);
      v37 = v54;
      v54 = nullptr;
      *(__m128i *)a1 = v35;
      v38 = _mm_loadu_si128(&v55);
      v55 = 0;
      if ( v36 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v49 = v38;
        qfree(v36);
        v38 = _mm_load_si128(&v49);
      }
      v39 = *(void **)(a1 + 40);
      *(_QWORD *)(a1 + 16) = v37;
      *(__m128i *)(a1 + 24) = v38;
      v40 = ptr;
      v41 = _mm_load_si128(&v57);
      ptr = nullptr;
      v57 = 0;
      if ( v39 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v49 = v41;
        qfree(v39);
        v41 = _mm_load_si128(&v49);
      }
      *(_QWORD *)(a1 + 40) = v40;
      v42 = v52;
      *(__m128i *)(a1 + 48) = v41;
      copy_tinfo_t(a1 + 64);
      v43 = _mm_loadu_si128(&v59);
      *(_DWORD *)(a1 + 120) = v62;
      v44 = v63;
      *(__m128i *)(a1 + 72) = v43;
      v45 = _mm_loadu_si128(&v60);
      *(_QWORD *)(a1 + 128) = v44;
      LOBYTE(v44) = v64;
      *(__m128i *)(a1 + 88) = v45;
      v46 = _mm_loadu_si128(&v61);
      *(_BYTE *)(a1 + 136) = v44;
      v47 = v65;
      *(__m128i *)(a1 + 104) = v46;
      *(_QWORD *)(a1 + 144) = v47;
      *(_QWORD *)(a1 + 152) = v66;
      *(_QWORD *)(a1 + 160) = v67;
      *(_QWORD *)(a1 + 168) = v68;
      *(_BYTE *)(a1 + 176) = v69;
      *(_QWORD *)(a1 + 184) = v70;
      clear_tinfo_t(v42);
      if ( ptr )
      {
        v57.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v54 )
      {
        v55.m128i_i64[0] = 0;
        qfree(v54);
        v5 = v50;
        if ( v51 == v50 )
          return v75 - __readfsqword(0x28u);
      }
      else
      {
LABEL_12:
        v5 = v50;
        if ( v51 == v50 )
          return v75 - __readfsqword(0x28u);
      }
    }
    v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
    v72 = 0u;
    v71 = 0;
    if ( v6 )
    {
      v6(&v71, a3, 2);
      v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
      v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
      v74 = 0u;
      v73 = 0;
      v72 = v7;
      if ( v8 )
      {
        v8(&v73, &v71, 2);
        v74 = _mm_load_si128(&v72);
      }
    }
    else
    {
      v73 = 0;
      v74 = 0u;
    }
    sub_4A5570(v5, (__int64)&v73);
    if ( v74.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v74.m128i_i64[0])(&v73, &v73, 3);
    if ( v72.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0])(&v71, &v71, 3);
    v50 = v5 + 192;
    goto LABEL_12;
  }
  return v75 - __readfsqword(0x28u);
}
