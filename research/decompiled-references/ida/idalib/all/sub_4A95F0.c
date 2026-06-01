unsigned __int64 __fastcall sub_4A95F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned __int64 i; // r15
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rax
  void (__fastcall *v17)(__int128 *, const __m128i *, __int64); // rax
  __m128i v18; // xmm0
  void *v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v26; // [rsp+10h] [rbp-1F8h]
  __m128i v27; // [rsp+20h] [rbp-1E8h] BYREF
  void *v28; // [rsp+30h] [rbp-1D8h]
  __m128i v29; // [rsp+38h] [rbp-1D0h] BYREF
  void *ptr; // [rsp+48h] [rbp-1C0h]
  __m128i v31; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-1A8h] BYREF
  __m128i v33; // [rsp+68h] [rbp-1A0h] BYREF
  __m128i v34; // [rsp+78h] [rbp-190h] BYREF
  __m128i v35; // [rsp+88h] [rbp-180h] BYREF
  __int64 v36; // [rsp+98h] [rbp-170h]
  __int64 v37; // [rsp+A0h] [rbp-168h]
  char v38; // [rsp+A8h] [rbp-160h]
  __int64 v39; // [rsp+B0h] [rbp-158h]
  __int64 v40; // [rsp+B8h] [rbp-150h]
  __int64 v41; // [rsp+C0h] [rbp-148h]
  __int64 v42; // [rsp+C8h] [rbp-140h]
  char v43; // [rsp+D0h] [rbp-138h]
  __int64 v44; // [rsp+D8h] [rbp-130h]
  __m128i v45; // [rsp+E0h] [rbp-128h] BYREF
  void *v46; // [rsp+F0h] [rbp-118h]
  __m128i v47; // [rsp+F8h] [rbp-110h]
  void *v48; // [rsp+108h] [rbp-100h]
  __m128i v49; // [rsp+110h] [rbp-F8h]
  __int64 v50; // [rsp+120h] [rbp-E8h] BYREF
  __m128i v51; // [rsp+128h] [rbp-E0h]
  __m128i v52; // [rsp+138h] [rbp-D0h]
  __m128i v53; // [rsp+148h] [rbp-C0h]
  __int64 v54; // [rsp+158h] [rbp-B0h]
  __int64 v55; // [rsp+160h] [rbp-A8h]
  char v56; // [rsp+168h] [rbp-A0h]
  __int64 v57; // [rsp+170h] [rbp-98h]
  __int64 v58; // [rsp+178h] [rbp-90h]
  __int64 v59; // [rsp+180h] [rbp-88h]
  __int64 v60; // [rsp+188h] [rbp-80h]
  char v61; // [rsp+190h] [rbp-78h]
  __int64 v62; // [rsp+198h] [rbp-70h]
  __int128 v63; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v64; // [rsp+1B0h] [rbp-58h]
  unsigned __int64 v65; // [rsp+1C8h] [rbp-40h]

  v3 = a2 - a1;
  v65 = __readfsqword(0x28u);
  if ( v3 > 192 )
  {
    v26 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 6);
    v5 = (v26 - 2) / 2;
    for ( i = a1 + ((v5 + ((v26 - 2 + ((unsigned __int64)(v26 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL)) << 6) + 64; ; i -= 192LL )
    {
      v7 = _mm_loadu_si128((const __m128i *)(i - 64));
      v8 = *(void **)(i - 48);
      *(_QWORD *)(i - 48) = 0;
      v27 = v7;
      v9 = _mm_loadu_si128((const __m128i *)(i - 40));
      v28 = v8;
      v10 = *(void **)(i - 24);
      *(_QWORD *)(i - 24) = 0;
      v29 = v9;
      v11 = _mm_loadu_si128((const __m128i *)(i - 16));
      *(_OWORD *)(i - 40) = 0;
      *(_OWORD *)(i - 16) = 0;
      ptr = v10;
      v32 = 0;
      v31 = v11;
      copy_tinfo_t(&v32);
      v12 = *(_QWORD *)(i + 56);
      v13 = _mm_loadu_si128((const __m128i *)(i + 8));
      v64 = 0u;
      v36 = v12;
      LODWORD(v12) = *(_DWORD *)(i + 64);
      v33 = v13;
      v14 = _mm_loadu_si128((const __m128i *)(i + 24));
      LODWORD(v37) = v12;
      LODWORD(v12) = *(_DWORD *)(i + 68);
      v34 = v14;
      v15 = _mm_loadu_si128((const __m128i *)(i + 40));
      HIDWORD(v37) = v12;
      LOBYTE(v12) = *(_BYTE *)(i + 72);
      v35 = v15;
      v38 = v12;
      v16 = *(_QWORD *)(i + 80);
      v63 = 0;
      v39 = v16;
      v40 = *(_QWORD *)(i + 88);
      v41 = *(_QWORD *)(i + 96);
      v42 = *(_QWORD *)(i + 104);
      v43 = *(_BYTE *)(i + 112);
      v44 = *(_QWORD *)(i + 120);
      v17 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      if ( v17 )
      {
        v17(&v63, a3, 2);
        v64 = _mm_loadu_si128(a3 + 1);
      }
      v18 = _mm_load_si128(&v27);
      v19 = v28;
      v28 = nullptr;
      v45 = v18;
      v20 = _mm_loadu_si128(&v29);
      v46 = v19;
      v47 = v20;
      v21 = _mm_load_si128(&v31);
      v48 = ptr;
      ptr = nullptr;
      v50 = 0;
      v29 = 0;
      v49 = v21;
      v31 = 0;
      copy_tinfo_t(&v50);
      v22 = _mm_loadu_si128(&v33);
      v54 = v36;
      v51 = v22;
      v23 = _mm_loadu_si128(&v34);
      v55 = v37;
      v52 = v23;
      v24 = _mm_loadu_si128(&v35);
      v56 = v38;
      v53 = v24;
      v57 = v39;
      v58 = v40;
      v59 = v41;
      v60 = v42;
      v61 = v43;
      v62 = v44;
      sub_4A8E60(a1, v5, v26, (__int64)&v45, (__int64)&v63);
      clear_tinfo_t(&v50);
      if ( v48 )
      {
        v49.m128i_i64[0] = 0;
        qfree(v48);
      }
      if ( v46 )
      {
        v47.m128i_i64[0] = 0;
        qfree(v46);
      }
      if ( v64.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
      if ( !v5 )
        break;
      --v5;
      clear_tinfo_t(&v32);
      if ( ptr )
      {
        v31.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v28 )
      {
        v29.m128i_i64[0] = 0;
        qfree(v28);
      }
    }
    sub_379560(&v27);
  }
  return v65 - __readfsqword(0x28u);
}
