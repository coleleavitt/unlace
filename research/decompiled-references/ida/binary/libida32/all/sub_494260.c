unsigned __int64 __fastcall sub_494260(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 i; // r15
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  void (__fastcall *v15)(__int128 *, const __m128i *, __int64); // rax
  __m128i v16; // xmm0
  void *v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v23; // [rsp+10h] [rbp-1D8h]
  __m128i v24; // [rsp+20h] [rbp-1C8h] BYREF
  void *v25; // [rsp+30h] [rbp-1B8h]
  __m128i v26; // [rsp+38h] [rbp-1B0h] BYREF
  void *ptr; // [rsp+48h] [rbp-1A0h]
  __m128i v28; // [rsp+50h] [rbp-198h] BYREF
  __int64 v29; // [rsp+60h] [rbp-188h] BYREF
  __m128i v30; // [rsp+68h] [rbp-180h] BYREF
  __m128i v31; // [rsp+78h] [rbp-170h] BYREF
  __int64 v32; // [rsp+88h] [rbp-160h]
  __int64 v33; // [rsp+90h] [rbp-158h]
  char v34; // [rsp+98h] [rbp-150h]
  int v35; // [rsp+A0h] [rbp-148h]
  __int64 v36; // [rsp+A8h] [rbp-140h]
  __int64 v37; // [rsp+B0h] [rbp-138h]
  int v38; // [rsp+B8h] [rbp-130h]
  char v39; // [rsp+BCh] [rbp-12Ch]
  __int64 v40; // [rsp+C0h] [rbp-128h]
  __m128i v41; // [rsp+D0h] [rbp-118h] BYREF
  void *v42; // [rsp+E0h] [rbp-108h]
  __m128i v43; // [rsp+E8h] [rbp-100h]
  void *v44; // [rsp+F8h] [rbp-F0h]
  __m128i v45; // [rsp+100h] [rbp-E8h]
  __int64 v46; // [rsp+110h] [rbp-D8h] BYREF
  __m128i v47; // [rsp+118h] [rbp-D0h]
  __m128i v48; // [rsp+128h] [rbp-C0h]
  __int64 v49; // [rsp+138h] [rbp-B0h]
  __int64 v50; // [rsp+140h] [rbp-A8h]
  char v51; // [rsp+148h] [rbp-A0h]
  int v52; // [rsp+150h] [rbp-98h]
  __int64 v53; // [rsp+158h] [rbp-90h]
  __int64 v54; // [rsp+160h] [rbp-88h]
  int v55; // [rsp+168h] [rbp-80h]
  char v56; // [rsp+16Ch] [rbp-7Ch]
  __int64 v57; // [rsp+170h] [rbp-78h]
  __int128 v58; // [rsp+180h] [rbp-68h] BYREF
  __m128i v59; // [rsp+190h] [rbp-58h]
  unsigned __int64 v60; // [rsp+1A8h] [rbp-40h]

  v3 = a2 - a1;
  v60 = __readfsqword(0x28u);
  if ( v3 > 168 )
  {
    v23 = 0xCF3CF3CF3CF3CF3DLL * (v3 >> 3);
    v5 = (v23 - 2) / 2;
    for ( i = a1 + 168 * v5 + 64; ; i -= 168 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(i - 64));
      v8 = *(void **)(i - 48);
      *(_QWORD *)(i - 48) = 0;
      v24 = v7;
      v9 = _mm_loadu_si128((const __m128i *)(i - 40));
      v25 = v8;
      v10 = *(void **)(i - 24);
      *(_QWORD *)(i - 24) = 0;
      v26 = v9;
      v11 = _mm_loadu_si128((const __m128i *)(i - 16));
      *(_OWORD *)(i - 40) = 0;
      *(_OWORD *)(i - 16) = 0;
      ptr = v10;
      v29 = 0;
      v28 = v11;
      copy_tinfo_t(&v29);
      v12 = *(_QWORD *)(i + 40);
      v13 = _mm_loadu_si128((const __m128i *)(i + 8));
      v59 = 0u;
      v32 = v12;
      LODWORD(v12) = *(_DWORD *)(i + 48);
      v30 = v13;
      v14 = _mm_loadu_si128((const __m128i *)(i + 24));
      LODWORD(v33) = v12;
      LODWORD(v12) = *(_DWORD *)(i + 52);
      v31 = v14;
      HIDWORD(v33) = v12;
      LOBYTE(v12) = *(_BYTE *)(i + 56);
      v58 = 0;
      v34 = v12;
      v35 = *(_DWORD *)(i + 64);
      v36 = *(_QWORD *)(i + 72);
      v37 = *(_QWORD *)(i + 80);
      v38 = *(_DWORD *)(i + 88);
      v39 = *(_BYTE *)(i + 92);
      v40 = *(_QWORD *)(i + 96);
      v15 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      if ( v15 )
      {
        v15(&v58, a3, 2);
        v59 = _mm_loadu_si128(a3 + 1);
      }
      v16 = _mm_load_si128(&v24);
      v17 = v25;
      v25 = nullptr;
      v41 = v16;
      v18 = _mm_loadu_si128(&v26);
      v42 = v17;
      v43 = v18;
      v19 = _mm_load_si128(&v28);
      v44 = ptr;
      ptr = nullptr;
      v46 = 0;
      v26 = 0;
      v45 = v19;
      v28 = 0;
      copy_tinfo_t(&v46);
      v20 = _mm_loadu_si128(&v30);
      v49 = v32;
      v47 = v20;
      v21 = _mm_loadu_si128(&v31);
      v50 = v33;
      v48 = v21;
      v51 = v34;
      v52 = v35;
      v53 = v36;
      v54 = v37;
      v55 = v38;
      v56 = v39;
      v57 = v40;
      sub_493B20(a1, v5, v23, (__int64)&v41, (__int64)&v58);
      clear_tinfo_t(&v46);
      if ( v44 )
      {
        v45.m128i_i64[0] = 0;
        qfree(v44);
      }
      if ( v42 )
      {
        v43.m128i_i64[0] = 0;
        qfree(v42);
      }
      if ( v59.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v59.m128i_i64[0])(&v58, &v58, 3);
      if ( !v5 )
        break;
      --v5;
      clear_tinfo_t(&v29);
      if ( ptr )
      {
        v28.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v25 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v25);
      }
    }
    sub_375BF0(&v24);
  }
  return v60 - __readfsqword(0x28u);
}

