unsigned __int64 __fastcall sub_4928A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 i; // rcx
  __int64 v9; // rdi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rcx
  void *v16; // rcx
  __m128 v17; // xmm0
  __m128i v18; // xmm0
  void *v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rsi
  char v23; // cl
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r13
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // r13
  __m128i v31; // xmm0
  void *v32; // rdi
  __m128i v33; // xmm0
  void *v34; // r14
  __m128i v35; // xmm0
  void *v36; // rdi
  __m128i v37; // xmm0
  void *v38; // rdi
  void *v39; // r14
  __m128i v40; // xmm0
  __int64 v41; // r14
  __m128i v42; // xmm0
  __int64 v43; // rcx
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  void *v46; // rax
  __m128i v47; // xmm0
  void *v48; // rax
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  int v51; // eax
  __m128i v52; // xmm0
  int v53; // eax
  __int64 v54; // r15
  __m128i v55; // xmm0
  void *v56; // rdi
  __int64 v57; // r15
  __m128i v58; // xmm0
  void *v59; // rdi
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  int v62; // eax
  __m128i v63; // xmm0
  int v64; // eax
  __m128i v65; // xmm0
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __m128i v69; // [rsp+0h] [rbp-178h] BYREF
  __m128i v70; // [rsp+10h] [rbp-168h] BYREF
  __int64 *v71; // [rsp+20h] [rbp-158h]
  __int64 v72; // [rsp+28h] [rbp-150h]
  __m128i v73; // [rsp+30h] [rbp-148h] BYREF
  void *v74; // [rsp+40h] [rbp-138h]
  __m128i v75; // [rsp+48h] [rbp-130h] BYREF
  void *v76; // [rsp+58h] [rbp-120h]
  __m128i v77; // [rsp+60h] [rbp-118h] BYREF
  __int64 v78; // [rsp+70h] [rbp-108h] BYREF
  __m128i v79; // [rsp+78h] [rbp-100h] BYREF
  __m128i v80; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v81; // [rsp+98h] [rbp-E0h]
  __int64 v82; // [rsp+A0h] [rbp-D8h]
  char v83; // [rsp+A8h] [rbp-D0h]
  __m128i v84; // [rsp+B0h] [rbp-C8h] BYREF
  void *v85; // [rsp+C0h] [rbp-B8h]
  __m128i v86; // [rsp+C8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+D8h] [rbp-A0h]
  __m128i v88; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v90; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v91; // [rsp+108h] [rbp-70h] BYREF
  __int64 v92; // [rsp+118h] [rbp-60h]
  __int64 v93; // [rsp+120h] [rbp-58h]
  char v94; // [rsp+128h] [rbp-50h]
  unsigned __int64 v95; // [rsp+138h] [rbp-40h]

  v72 = a3;
  v71 = a4;
  v95 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 > 2048 )
  {
    v6 = a2;
    if ( v72 )
    {
      while ( 1 )
      {
        v7 = a1 + 128;
        --v72;
        sub_492820(a1, (__int64 *)(a1 + 128), (__int64 *)(a1 + (v4 >> 8 << 7)), (__int64 *)(v6 - 128), v71);
        for ( i = v6; ; i = v13 )
        {
          v9 = *v71;
          v10 = *(_DWORD *)(*v71 + 4LL * *(_QWORD *)v7);
          if ( v10 == -1 )
            goto LABEL_36;
          v11 = *(_DWORD *)(v9 + 4LL * *(_QWORD *)a1);
          if ( v11 == -1 )
            goto LABEL_36;
          while ( v11 > v10 )
          {
            v12 = *(_QWORD *)(v7 + 128);
            v7 += 128LL;
            v10 = *(_DWORD *)(v9 + 4 * v12);
            if ( v10 == -1 )
              goto LABEL_36;
          }
          v13 = i - 128;
          v14 = *(_DWORD *)(v9 + 4LL * *(_QWORD *)(i - 128));
          if ( v14 == -1 )
          {
LABEL_36:
            if ( !under_debugger )
              interr(2166);
            BUG();
          }
          while ( v14 > v11 )
          {
            v15 = *(_QWORD *)(v13 - 128);
            v13 -= 128LL;
            v14 = *(_DWORD *)(v9 + 4 * v15);
            if ( v14 == -1 )
              goto LABEL_36;
          }
          if ( v7 >= v13 )
            break;
          v16 = *(void **)(v7 + 16);
          *(_QWORD *)(v7 + 16) = 0;
          v17 = _mm_loadh_ps((const double *)(v7 + 8));
          v89 = 0;
          v84 = (__m128i)v17;
          v18 = _mm_loadu_si128((const __m128i *)(v7 + 24));
          v85 = v16;
          v19 = *(void **)(v7 + 40);
          *(_QWORD *)(v7 + 40) = 0;
          v86 = v18;
          v20 = _mm_loadu_si128((const __m128i *)(v7 + 48));
          *(_OWORD *)(v7 + 24) = 0;
          *(_OWORD *)(v7 + 48) = 0;
          ptr = v19;
          v69.m128i_i64[0] = (__int64)&v89;
          v88 = v20;
          copy_tinfo_t(&v89);
          v21 = _mm_loadu_si128((const __m128i *)(v7 + 72));
          v22 = *(_QWORD *)(v7 + 112);
          v92 = *(_QWORD *)(v7 + 104);
          v23 = *(_BYTE *)(v7 + 120);
          v90 = v21;
          v24 = _mm_loadu_si128((const __m128i *)(v7 + 88));
          v94 = v23;
          v25 = *(_QWORD *)v13;
          v91 = v24;
          *(_QWORD *)v7 = v25;
          v26 = *(_QWORD *)(v13 + 8);
          v93 = v22;
          *(_QWORD *)(v7 + 8) = v26;
          v27 = *(_QWORD *)(v13 + 16);
          v28 = _mm_loadu_si128((const __m128i *)(v13 + 24));
          *(_QWORD *)(v13 + 16) = 0;
          *(_OWORD *)(v13 + 24) = 0;
          v29 = *(void **)(v7 + 16);
          if ( v29 )
          {
            *(_QWORD *)(v7 + 24) = 0;
            v70 = v28;
            qfree(v29);
            v28 = _mm_load_si128(&v70);
          }
          *(_QWORD *)(v7 + 16) = v27;
          *(__m128i *)(v7 + 24) = v28;
          v30 = *(_QWORD *)(v13 + 40);
          v31 = _mm_loadu_si128((const __m128i *)(v13 + 48));
          *(_QWORD *)(v13 + 40) = 0;
          *(_OWORD *)(v13 + 48) = 0;
          v32 = *(void **)(v7 + 40);
          if ( v32 )
          {
            *(_QWORD *)(v7 + 48) = 0;
            v70 = v31;
            qfree(v32);
            v31 = _mm_load_si128(&v70);
          }
          *(_QWORD *)(v7 + 40) = v30;
          *(__m128i *)(v7 + 48) = v31;
          copy_tinfo_t(v7 + 64);
          v33 = _mm_loadu_si128((const __m128i *)(v13 + 72));
          v34 = v85;
          v85 = nullptr;
          *(__m128i *)(v7 + 72) = v33;
          *(__m128i *)(v7 + 88) = _mm_loadu_si128((const __m128i *)(v13 + 88));
          v35 = _mm_load_si128(&v84);
          *(_DWORD *)(v7 + 104) = *(_DWORD *)(v13 + 104);
          *(_DWORD *)(v7 + 112) = *(_DWORD *)(v13 + 112);
          *(_DWORD *)(v7 + 116) = *(_DWORD *)(v13 + 116);
          *(_BYTE *)(v7 + 120) = *(_BYTE *)(v13 + 120);
          v36 = *(void **)(v13 + 16);
          *(__m128i *)v13 = v35;
          v37 = _mm_loadu_si128(&v86);
          v86 = 0;
          if ( v36 )
          {
            *(_QWORD *)(v13 + 24) = 0;
            v70 = v37;
            qfree(v36);
            v37 = _mm_load_si128(&v70);
          }
          v38 = *(void **)(v13 + 40);
          *(_QWORD *)(v13 + 16) = v34;
          *(__m128i *)(v13 + 24) = v37;
          v39 = ptr;
          v40 = _mm_load_si128(&v88);
          ptr = nullptr;
          v88 = 0;
          if ( v38 )
          {
            *(_QWORD *)(v13 + 48) = 0;
            v70 = v40;
            qfree(v38);
            v40 = _mm_load_si128(&v70);
          }
          *(_QWORD *)(v13 + 40) = v39;
          v41 = v69.m128i_i64[0];
          *(__m128i *)(v13 + 48) = v40;
          copy_tinfo_t(v13 + 64);
          v42 = _mm_loadu_si128(&v90);
          *(_DWORD *)(v13 + 104) = v92;
          v43 = v93;
          *(__m128i *)(v13 + 72) = v42;
          v44 = _mm_loadu_si128(&v91);
          *(_QWORD *)(v13 + 112) = v43;
          LOBYTE(v43) = v94;
          *(__m128i *)(v13 + 88) = v44;
          *(_BYTE *)(v13 + 120) = v43;
          clear_tinfo_t(v41);
          if ( ptr )
          {
            v88.m128i_i64[0] = 0;
            qfree(ptr);
          }
          if ( v85 )
          {
            v86.m128i_i64[0] = 0;
            qfree(v85);
          }
          v7 += 128LL;
        }
        sub_4928A0(v7, v6, v72, v71);
        v4 = v7 - a1;
        if ( (__int64)(v7 - a1) <= 2048 )
          break;
        v6 = v7;
        if ( !v72 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      v84.m128i_i64[0] = (__int64)v71;
      sub_4921C0(a1, v6, &v84);
      while ( v6 - a1 > 128 )
      {
        v45 = _mm_loadu_si128((const __m128i *)(v6 - 128));
        v46 = *(void **)(v6 - 112);
        v6 -= 128;
        *(_QWORD *)(v6 + 16) = 0;
        v73 = v45;
        v47 = _mm_loadu_si128((const __m128i *)(v6 + 24));
        v74 = v46;
        v48 = *(void **)(v6 + 40);
        *(_QWORD *)(v6 + 40) = 0;
        v75 = v47;
        v49 = _mm_loadu_si128((const __m128i *)(v6 + 48));
        *(_OWORD *)(v6 + 24) = 0;
        *(_OWORD *)(v6 + 48) = 0;
        v76 = v48;
        v78 = 0;
        v77 = v49;
        copy_tinfo_t(&v78);
        v50 = _mm_loadu_si128((const __m128i *)(v6 + 72));
        v81 = *(_QWORD *)(v6 + 104);
        v51 = *(_DWORD *)(v6 + 112);
        v79 = v50;
        v52 = _mm_loadu_si128((const __m128i *)(v6 + 88));
        LODWORD(v82) = v51;
        v53 = *(_DWORD *)(v6 + 116);
        v80 = v52;
        HIDWORD(v82) = v53;
        v83 = *(_BYTE *)(v6 + 120);
        *(_QWORD *)v6 = *(_QWORD *)a1;
        *(_QWORD *)(v6 + 8) = *(_QWORD *)(a1 + 8);
        v54 = *(_QWORD *)(a1 + 16);
        v55 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v56 = *(void **)(v6 + 16);
        if ( v56 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          v69 = v55;
          qfree(v56);
          v55 = _mm_load_si128(&v69);
        }
        *(_QWORD *)(v6 + 16) = v54;
        *(__m128i *)(v6 + 24) = v55;
        v57 = *(_QWORD *)(a1 + 40);
        v58 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        v59 = *(void **)(v6 + 40);
        if ( v59 )
        {
          *(_QWORD *)(v6 + 48) = 0;
          v69 = v58;
          qfree(v59);
          v58 = _mm_load_si128(&v69);
        }
        *(_QWORD *)(v6 + 40) = v57;
        *(__m128i *)(v6 + 48) = v58;
        copy_tinfo_t(v6 + 64);
        v60 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        v89 = 0;
        *(__m128i *)(v6 + 72) = v60;
        *(__m128i *)(v6 + 88) = _mm_loadu_si128((const __m128i *)(a1 + 88));
        v61 = _mm_load_si128(&v73);
        *(_DWORD *)(v6 + 104) = *(_DWORD *)(a1 + 104);
        v62 = *(_DWORD *)(a1 + 112);
        v84 = v61;
        v63 = _mm_loadu_si128(&v75);
        *(_DWORD *)(v6 + 112) = v62;
        v64 = *(_DWORD *)(a1 + 116);
        v86 = v63;
        v65 = _mm_load_si128(&v77);
        *(_DWORD *)(v6 + 116) = v64;
        LOBYTE(v64) = *(_BYTE *)(a1 + 120);
        v75 = 0;
        *(_BYTE *)(v6 + 120) = v64;
        v88 = v65;
        v85 = v74;
        v74 = nullptr;
        ptr = v76;
        v76 = nullptr;
        v77 = 0;
        copy_tinfo_t(&v89);
        v66 = _mm_loadu_si128(&v79);
        v92 = v81;
        v90 = v66;
        v67 = _mm_loadu_si128(&v80);
        v93 = v82;
        v91 = v67;
        v94 = v83;
        sub_491C30(a1, 0, (v6 - a1) >> 7, (__int64)&v84, v71);
        sub_375BF0(&v84);
        sub_375BF0(&v73);
      }
    }
  }
  return v95 - __readfsqword(0x28u);
}

