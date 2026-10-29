unsigned __int64 __fastcall sub_490950(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  void (__fastcall *v6)(__int128 *, __int64, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // rax
  void *v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // r14
  void *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  int v16; // eax
  __m128i v17; // xmm0
  int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  void *v21; // rdi
  __int64 v22; // r15
  __m128i v23; // xmm0
  __int64 v24; // r13
  __int64 v25; // rcx
  void *v26; // rdi
  __int64 v27; // r13
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  int v30; // ecx
  __m128i v31; // xmm0
  int v32; // ecx
  __m128i v33; // xmm0
  void *v34; // rdi
  void *v35; // rbx
  __m128i v36; // xmm0
  void *v37; // rdi
  void *v38; // rbx
  __m128i v39; // xmm0
  __int64 *v40; // rbx
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i v43; // xmm0
  __m128i v45; // [rsp+0h] [rbp-168h] BYREF
  __int64 v46; // [rsp+18h] [rbp-150h]
  __int64 v47; // [rsp+20h] [rbp-148h]
  __int64 *v48; // [rsp+28h] [rbp-140h]
  __m128i v49; // [rsp+30h] [rbp-138h] BYREF
  void *v50; // [rsp+40h] [rbp-128h]
  __m128i v51; // [rsp+48h] [rbp-120h] BYREF
  void *ptr; // [rsp+58h] [rbp-110h]
  __m128i v53; // [rsp+60h] [rbp-108h] BYREF
  __int64 v54; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v55; // [rsp+78h] [rbp-F0h] BYREF
  __m128i v56; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v57; // [rsp+98h] [rbp-D0h]
  __int64 v58; // [rsp+A0h] [rbp-C8h]
  char v59; // [rsp+A8h] [rbp-C0h]
  int v60; // [rsp+B0h] [rbp-B8h]
  __int64 v61; // [rsp+B8h] [rbp-B0h]
  __int64 v62; // [rsp+C0h] [rbp-A8h]
  int v63; // [rsp+C8h] [rbp-A0h]
  char v64; // [rsp+CCh] [rbp-9Ch]
  __int64 v65; // [rsp+D0h] [rbp-98h]
  __int128 v66; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v67; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v68; // [rsp+100h] [rbp-68h] BYREF
  __m128i v69; // [rsp+110h] [rbp-58h]
  unsigned __int64 v70; // [rsp+128h] [rbp-40h]

  v47 = a2;
  v70 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 168 )
  {
    v5 = a1 + 168;
    while ( 1 )
    {
      if ( !*(_QWORD *)(a3 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5, a1) >= 0 )
        break;
      v9 = *(void **)(v5 + 16);
      v10 = _mm_loadu_si128((const __m128i *)v5);
      v11 = v5 + 64;
      *(_QWORD *)(v5 + 16) = 0;
      v50 = v9;
      v12 = *(void **)(v5 + 40);
      v49 = v10;
      v13 = _mm_loadu_si128((const __m128i *)(v5 + 24));
      *(_QWORD *)(v5 + 40) = 0;
      ptr = v12;
      v51 = v13;
      v14 = _mm_loadu_si128((const __m128i *)(v5 + 48));
      *(_OWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 48) = 0;
      v54 = 0;
      v48 = &v54;
      v53 = v14;
      copy_tinfo_t(&v54);
      v15 = _mm_loadu_si128((const __m128i *)(v5 + 72));
      v57 = *(_QWORD *)(v5 + 104);
      v16 = *(_DWORD *)(v5 + 112);
      v55 = v15;
      v17 = _mm_loadu_si128((const __m128i *)(v5 + 88));
      LODWORD(v58) = v16;
      v18 = *(_DWORD *)(v5 + 116);
      v56 = v17;
      HIDWORD(v58) = v18;
      v59 = *(_BYTE *)(v5 + 120);
      v60 = *(_DWORD *)(v5 + 128);
      v61 = *(_QWORD *)(v5 + 136);
      v62 = *(_QWORD *)(v5 + 144);
      v63 = *(_DWORD *)(v5 + 152);
      v64 = *(_BYTE *)(v5 + 156);
      v65 = *(_QWORD *)(v5 + 160);
      v46 = v5 + 168;
      v19 = 0xCF3CF3CF3CF3CF3DLL * ((v5 - a1) >> 3);
      if ( v5 - a1 > 0 )
      {
        do
        {
          v20 = *(_QWORD *)(v11 - 232);
          v21 = *(void **)(v11 - 48);
          v22 = v11;
          v23 = _mm_loadu_si128((const __m128i *)(v11 - 208));
          v24 = *(_QWORD *)(v11 - 216);
          *(_OWORD *)(v11 - 208) = 0;
          *(_QWORD *)(v11 - 64) = v20;
          v25 = *(_QWORD *)(v11 - 224);
          *(_QWORD *)(v11 - 216) = 0;
          *(_QWORD *)(v11 - 56) = v25;
          if ( v21 )
          {
            *(_QWORD *)(v11 - 40) = 0;
            v45 = v23;
            qfree(v21);
            v23 = _mm_load_si128(&v45);
          }
          v26 = *(void **)(v11 - 24);
          *(_QWORD *)(v11 - 48) = v24;
          *(__m128i *)(v11 - 40) = v23;
          v27 = *(_QWORD *)(v11 - 192);
          v28 = _mm_loadu_si128((const __m128i *)(v11 - 184));
          *(_QWORD *)(v11 - 192) = 0;
          *(_OWORD *)(v11 - 184) = 0;
          if ( v26 )
          {
            *(_QWORD *)(v11 - 16) = 0;
            v45 = v28;
            qfree(v26);
            v28 = _mm_load_si128(&v45);
          }
          *(_QWORD *)(v11 - 24) = v27;
          v11 -= 168;
          *(__m128i *)(v11 + 152) = v28;
          copy_tinfo_t(v22);
          v29 = _mm_loadu_si128((const __m128i *)(v22 - 160));
          *(_DWORD *)(v22 + 40) = *(_DWORD *)(v22 - 128);
          v30 = *(_DWORD *)(v22 - 120);
          *(__m128i *)(v22 + 8) = v29;
          v31 = _mm_loadu_si128((const __m128i *)(v22 - 144));
          *(_DWORD *)(v22 + 48) = v30;
          v32 = *(_DWORD *)(v22 - 116);
          *(__m128i *)(v22 + 24) = v31;
          *(_DWORD *)(v22 + 52) = v32;
          *(_BYTE *)(v22 + 56) = *(_BYTE *)(v22 - 112);
          *(_DWORD *)(v22 + 64) = *(_DWORD *)(v22 - 104);
          *(_QWORD *)(v22 + 72) = *(_QWORD *)(v22 - 96);
          *(_DWORD *)(v22 + 80) = *(_DWORD *)(v22 - 88);
          *(_DWORD *)(v22 + 84) = *(_DWORD *)(v22 - 84);
          *(_DWORD *)(v22 + 88) = *(_DWORD *)(v22 - 80);
          *(_BYTE *)(v22 + 92) = *(_BYTE *)(v22 - 76);
          *(_QWORD *)(v22 + 96) = *(_QWORD *)(v22 - 72);
          --v19;
        }
        while ( v19 );
      }
      v33 = _mm_load_si128(&v49);
      v34 = *(void **)(a1 + 16);
      v35 = v50;
      v50 = nullptr;
      *(__m128i *)a1 = v33;
      v36 = _mm_loadu_si128(&v51);
      v51 = 0;
      if ( v34 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v45 = v36;
        qfree(v34);
        v36 = _mm_load_si128(&v45);
      }
      v37 = *(void **)(a1 + 40);
      *(_QWORD *)(a1 + 16) = v35;
      *(__m128i *)(a1 + 24) = v36;
      v38 = ptr;
      v39 = _mm_load_si128(&v53);
      ptr = nullptr;
      v53 = 0;
      if ( v37 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v45 = v39;
        qfree(v37);
        v39 = _mm_load_si128(&v45);
      }
      *(_QWORD *)(a1 + 40) = v38;
      v40 = v48;
      *(__m128i *)(a1 + 48) = v39;
      copy_tinfo_t(a1 + 64);
      v41 = _mm_loadu_si128(&v55);
      *(_DWORD *)(a1 + 104) = v57;
      v42 = v58;
      *(__m128i *)(a1 + 72) = v41;
      v43 = _mm_loadu_si128(&v56);
      *(_QWORD *)(a1 + 112) = v42;
      LOBYTE(v42) = v59;
      *(__m128i *)(a1 + 88) = v43;
      *(_BYTE *)(a1 + 120) = v42;
      *(_DWORD *)(a1 + 128) = v60;
      *(_QWORD *)(a1 + 136) = v61;
      *(_QWORD *)(a1 + 144) = v62;
      *(_DWORD *)(a1 + 152) = v63;
      *(_BYTE *)(a1 + 156) = v64;
      *(_QWORD *)(a1 + 160) = v65;
      clear_tinfo_t(v40);
      if ( ptr )
      {
        v53.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v50 )
      {
        v51.m128i_i64[0] = 0;
        qfree(v50);
        v5 = v46;
        if ( v47 == v46 )
          return v70 - __readfsqword(0x28u);
      }
      else
      {
LABEL_12:
        v5 = v46;
        if ( v47 == v46 )
          return v70 - __readfsqword(0x28u);
      }
    }
    v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
    v67 = 0u;
    v66 = 0;
    if ( v6 )
    {
      v6(&v66, a3, 2);
      v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
      v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
      v69 = 0u;
      v68 = 0;
      v67 = v7;
      if ( v8 )
      {
        v8(&v68, &v66, 2);
        v69 = _mm_load_si128(&v67);
      }
    }
    else
    {
      v68 = 0;
      v69 = 0u;
    }
    sub_4904B0(v5, (__int64)&v68);
    if ( v69.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v69.m128i_i64[0])(&v68, &v68, 3);
    if ( v67.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v67.m128i_i64[0])(&v66, &v66, 3);
    v46 = v5 + 168;
    goto LABEL_12;
  }
  return v70 - __readfsqword(0x28u);
}

