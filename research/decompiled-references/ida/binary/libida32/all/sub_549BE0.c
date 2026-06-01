unsigned __int64 __fastcall sub_549BE0(__int64 a1, void *a2)
{
  __int64 v3; // rbp
  __m128i v4; // xmm0
  __int64 v5; // r14
  __m128i v6; // xmm2
  void *v7; // rax
  bool v8; // cf
  __m128i v9; // xmm1
  __int64 *v10; // rdi
  __m128i v11; // xmm0
  __m128i *v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  void *v19; // rdi
  __m128i *v20; // r15
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rcx
  void *v24; // rdi
  __int64 v25; // r13
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int32 v28; // ecx
  __m128i v29; // xmm0
  __int32 v30; // ecx
  __m128i v31; // xmm0
  void *v32; // rdi
  void *v33; // r14
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v36; // r14
  __m128i v37; // xmm0
  __int64 *v38; // rbx
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 *v43; // rdi
  __m128i v44; // xmm0
  __int64 v45; // rbx
  int v46; // eax
  __m128i v47; // xmm0
  int v48; // eax
  unsigned __int64 v49; // rax
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r14
  __m128i v53; // xmm0
  void *v54; // rdi
  __int64 v55; // r14
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  unsigned __int64 v58; // rdx
  int v59; // eax
  __m128i v60; // xmm0
  int v61; // eax
  void *v62; // rdi
  void *v63; // rax
  __m128i v64; // xmm0
  void *v65; // rdi
  void *v66; // rax
  __m128i v67; // xmm0
  __int64 *v68; // r15
  __m128i v69; // xmm0
  __int64 v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // r14
  __m128i v73; // [rsp+0h] [rbp-F8h] BYREF
  __int64 *v74; // [rsp+18h] [rbp-E0h]
  void *v75; // [rsp+20h] [rbp-D8h]
  void *v76; // [rsp+28h] [rbp-D0h]
  __m128i v77; // [rsp+30h] [rbp-C8h] BYREF
  void *v78; // [rsp+40h] [rbp-B8h]
  __m128i v79; // [rsp+48h] [rbp-B0h] BYREF
  void *ptr; // [rsp+58h] [rbp-A0h]
  __m128i v81; // [rsp+60h] [rbp-98h] BYREF
  __int64 v82; // [rsp+70h] [rbp-88h] BYREF
  __m128i v83; // [rsp+78h] [rbp-80h] BYREF
  __m128i v84; // [rsp+88h] [rbp-70h] BYREF
  __int64 v85; // [rsp+98h] [rbp-60h]
  __int64 v86; // [rsp+A0h] [rbp-58h]
  char v87; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-40h]

  v76 = a2;
  v88 = __readfsqword(0x28u);
  if ( (void *)a1 != a2 && a2 != (void *)(a1 + 128) )
  {
    v3 = a1 + 192;
    v74 = &v82;
    do
    {
      v4 = _mm_loadu_si128((const __m128i *)(v3 - 64));
      v5 = v3 - 64;
      v6 = _mm_loadu_si128((const __m128i *)(v3 - 40));
      v7 = *(void **)(v3 - 24);
      v8 = v4.m128i_i64[0] < *(_QWORD *)a1;
      v9 = _mm_loadu_si128((const __m128i *)(v3 - 16));
      v78 = *(void **)(v3 - 48);
      v77 = v4;
      *(_QWORD *)(v3 - 48) = 0;
      v79 = v6;
      if ( v8 )
      {
        *(_QWORD *)(v3 - 24) = 0;
        v10 = v74;
        *(_OWORD *)(v3 - 40) = 0;
        *(_OWORD *)(v3 - 16) = 0;
        ptr = v7;
        v82 = 0;
        v81 = v9;
        copy_tinfo_t(v10);
        v11 = _mm_loadu_si128((const __m128i *)(v3 + 8));
        v12 = (__m128i *)v3;
        v13 = v5 - a1;
        v85 = *(_QWORD *)(v3 + 40);
        v14 = *(_DWORD *)(v3 + 48);
        v83 = v11;
        v15 = _mm_loadu_si128((const __m128i *)(v3 + 24));
        v16 = (v5 - a1) >> 7;
        LODWORD(v86) = v14;
        v17 = *(_DWORD *)(v3 + 52);
        v84 = v15;
        HIDWORD(v86) = v17;
        v87 = *(_BYTE *)(v3 + 56);
        v75 = (void *)(v3 + 64);
        if ( v13 > 0 )
        {
          do
          {
            v18 = v12[-12].m128i_i64[0];
            v19 = (void *)v12[-3].m128i_i64[0];
            v20 = v12;
            v21 = v12[-11].m128i_i64[0];
            v22 = _mm_loadu_si128((__m128i *)((char *)v12 - 168));
            v12[-11].m128i_i64[0] = 0;
            v12[-4].m128i_i64[0] = v18;
            v23 = v12[-12].m128i_i64[1];
            *(__m128i *)((char *)&v12[-11] + 8) = 0;
            v12[-4].m128i_i64[1] = v23;
            if ( v19 )
            {
              v12[-3].m128i_i64[1] = 0;
              v73 = v22;
              qfree(v19);
              v22 = _mm_load_si128(&v73);
            }
            v24 = (void *)v12[-2].m128i_i64[1];
            v12[-3].m128i_i64[0] = v21;
            *(__m128i *)((char *)v12 - 40) = v22;
            v25 = v12[-10].m128i_i64[1];
            v26 = _mm_loadu_si128(v12 - 9);
            v12[-10].m128i_i64[1] = 0;
            v12[-9] = 0;
            if ( v24 )
            {
              v12[-1].m128i_i64[0] = 0;
              v73 = v26;
              qfree(v24);
              v26 = _mm_load_si128(&v73);
            }
            v12[-2].m128i_i64[1] = v25;
            v12 -= 8;
            v12[7] = v26;
            copy_tinfo_t(v20);
            v27 = _mm_loadu_si128((__m128i *)((char *)v20 - 120));
            v20[2].m128i_i32[2] = v20[-6].m128i_i32[2];
            v28 = v20[-5].m128i_i32[0];
            *(__m128i *)((char *)v20 + 8) = v27;
            v29 = _mm_loadu_si128((__m128i *)((char *)v20 - 104));
            v20[3].m128i_i32[0] = v28;
            v30 = v20[-5].m128i_i32[1];
            *(__m128i *)((char *)v20 + 24) = v29;
            v20[3].m128i_i32[1] = v30;
            v20[3].m128i_i8[8] = v20[-5].m128i_i8[8];
            --v16;
          }
          while ( v16 );
        }
        v31 = _mm_load_si128(&v77);
        v32 = *(void **)(a1 + 16);
        v33 = v78;
        v78 = nullptr;
        *(__m128i *)a1 = v31;
        v34 = _mm_loadu_si128(&v79);
        v79 = 0;
        if ( v32 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v73 = v34;
          qfree(v32);
          v34 = _mm_load_si128(&v73);
        }
        v35 = *(void **)(a1 + 40);
        *(_QWORD *)(a1 + 16) = v33;
        *(__m128i *)(a1 + 24) = v34;
        v36 = ptr;
        v37 = _mm_load_si128(&v81);
        ptr = nullptr;
        v81 = 0;
        if ( v35 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v73 = v37;
          qfree(v35);
          v37 = _mm_load_si128(&v73);
        }
        v38 = v74;
        *(_QWORD *)(a1 + 40) = v36;
        *(__m128i *)(a1 + 48) = v37;
        copy_tinfo_t(a1 + 64);
        v39 = _mm_loadu_si128(&v83);
        *(_DWORD *)(a1 + 104) = v85;
        v40 = v86;
        *(__m128i *)(a1 + 72) = v39;
        v41 = _mm_loadu_si128(&v84);
        *(_QWORD *)(a1 + 112) = v40;
        LOBYTE(v40) = v87;
        *(__m128i *)(a1 + 88) = v41;
        *(_BYTE *)(a1 + 120) = v40;
        clear_tinfo_t(v38);
        if ( ptr )
        {
          v81.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v78 )
        {
          v79.m128i_i64[0] = 0;
          qfree(v78);
        }
      }
      else
      {
        *(_QWORD *)(v3 - 24) = 0;
        v43 = v74;
        *(_OWORD *)(v3 - 40) = 0;
        *(_OWORD *)(v3 - 16) = 0;
        ptr = v7;
        v82 = 0;
        v81 = v9;
        copy_tinfo_t(v43);
        v44 = _mm_loadu_si128((const __m128i *)(v3 + 8));
        v45 = v3 - 192;
        v85 = *(_QWORD *)(v3 + 40);
        v46 = *(_DWORD *)(v3 + 48);
        v83 = v44;
        v47 = _mm_loadu_si128((const __m128i *)(v3 + 24));
        LODWORD(v86) = v46;
        v48 = *(_DWORD *)(v3 + 52);
        v84 = v47;
        HIDWORD(v86) = v48;
        v87 = *(_BYTE *)(v3 + 56);
        v49 = *(_QWORD *)(v3 - 192);
        if ( v77.m128i_i64[0] < v49 )
        {
          while ( 1 )
          {
            *(_QWORD *)(v45 + 128) = v49;
            v50 = *(void **)(v45 + 144);
            v51 = *(_QWORD *)(v45 + 8);
            v52 = *(_QWORD *)(v45 + 16);
            *(_QWORD *)(v45 + 16) = 0;
            v53 = _mm_loadu_si128((const __m128i *)(v45 + 24));
            *(_OWORD *)(v45 + 24) = 0;
            *(_QWORD *)(v45 + 136) = v51;
            if ( v50 )
            {
              *(_QWORD *)(v45 + 152) = 0;
              v73 = v53;
              qfree(v50);
              v53 = _mm_load_si128(&v73);
            }
            v54 = *(void **)(v45 + 168);
            *(_QWORD *)(v45 + 144) = v52;
            *(__m128i *)(v45 + 152) = v53;
            v55 = *(_QWORD *)(v45 + 40);
            v56 = _mm_loadu_si128((const __m128i *)(v45 + 48));
            *(_QWORD *)(v45 + 40) = 0;
            *(_OWORD *)(v45 + 48) = 0;
            if ( v54 )
            {
              *(_QWORD *)(v45 + 176) = 0;
              v73 = v56;
              qfree(v54);
              v56 = _mm_load_si128(&v73);
            }
            *(_QWORD *)(v45 + 168) = v55;
            v72 = v45 + 64;
            *(__m128i *)(v45 + 176) = v56;
            copy_tinfo_t(v45 + 192);
            v57 = _mm_loadu_si128((const __m128i *)(v45 + 72));
            v58 = v77.m128i_i64[0];
            *(_DWORD *)(v45 + 232) = *(_DWORD *)(v45 + 104);
            v59 = *(_DWORD *)(v45 + 112);
            *(__m128i *)(v45 + 200) = v57;
            v60 = _mm_loadu_si128((const __m128i *)(v45 + 88));
            *(_DWORD *)(v45 + 240) = v59;
            v61 = *(_DWORD *)(v45 + 116);
            *(__m128i *)(v45 + 216) = v60;
            *(_DWORD *)(v45 + 244) = v61;
            *(_BYTE *)(v45 + 248) = *(_BYTE *)(v45 + 120);
            v49 = *(_QWORD *)(v45 - 128);
            if ( v58 >= v49 )
              break;
            v45 -= 128;
          }
        }
        else
        {
          v45 = v3 - 64;
          v72 = v3;
        }
        v62 = *(void **)(v45 + 16);
        v63 = v78;
        v78 = nullptr;
        *(__m128 *)v45 = _mm_loadh_ps((const double *)&v77.m128i_i64[1]);
        v64 = _mm_loadu_si128(&v79);
        v79 = 0;
        if ( v62 )
        {
          *(_QWORD *)(v45 + 24) = 0;
          v75 = v63;
          v73 = v64;
          qfree(v62);
          v63 = v75;
          v64 = _mm_load_si128(&v73);
        }
        v65 = *(void **)(v45 + 40);
        *(_QWORD *)(v45 + 16) = v63;
        *(__m128i *)(v45 + 24) = v64;
        v66 = ptr;
        v67 = _mm_load_si128(&v81);
        ptr = nullptr;
        v81 = 0;
        if ( v65 )
        {
          *(_QWORD *)(v45 + 48) = 0;
          v75 = v66;
          v73 = v67;
          qfree(v65);
          v66 = v75;
          v67 = _mm_load_si128(&v73);
        }
        v68 = v74;
        *(_QWORD *)(v45 + 40) = v66;
        *(__m128i *)(v45 + 48) = v67;
        copy_tinfo_t(v72);
        v69 = _mm_loadu_si128(&v83);
        *(_DWORD *)(v45 + 104) = v85;
        v70 = v86;
        *(__m128i *)(v45 + 72) = v69;
        v71 = _mm_loadu_si128(&v84);
        *(_QWORD *)(v45 + 112) = v70;
        LOBYTE(v70) = v87;
        *(__m128i *)(v45 + 88) = v71;
        *(_BYTE *)(v45 + 120) = v70;
        clear_tinfo_t(v68);
        if ( ptr )
        {
          v81.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v78 )
        {
          v79.m128i_i64[0] = 0;
          qfree(v78);
        }
        v75 = (void *)(v3 + 64);
      }
      v3 += 128;
    }
    while ( v76 != v75 );
  }
  return v88 - __readfsqword(0x28u);
}

