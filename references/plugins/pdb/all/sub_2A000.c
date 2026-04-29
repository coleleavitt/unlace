unsigned __int64 __fastcall sub_2A000(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __m128i v4; // xmm0
  __int64 v5; // rbp
  __m128i v6; // xmm2
  __int64 v7; // rax
  bool v8; // cf
  __m128i v9; // xmm1
  __int64 *v10; // rdi
  __m128i v11; // xmm0
  __m128i *v12; // r14
  __int64 v13; // rdx
  int v14; // eax
  __m128i v15; // xmm0
  int v16; // eax
  __m128i v17; // xmm0
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdi
  __m128i *v21; // r15
  __m128i v22; // xmm0
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r13
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int32 v29; // ecx
  __m128i v30; // xmm0
  __int32 v31; // ecx
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rbp
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // rbp
  __m128i v39; // xmm0
  __int64 *v40; // r15
  __int64 v41; // rdi
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 *v47; // rdi
  __m128i v48; // xmm0
  __int64 v49; // r14
  int v50; // eax
  __m128i v51; // xmm0
  int v52; // eax
  __m128i v53; // xmm0
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rbp
  __m128i v58; // xmm0
  __int64 v59; // rdi
  __int64 v60; // rbp
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  unsigned __int64 v63; // rdx
  int v64; // eax
  __m128i v65; // xmm0
  int v66; // eax
  __m128i v67; // xmm0
  __int64 v68; // rdi
  __int64 v69; // rax
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 v72; // rax
  __m128i v73; // xmm0
  __int64 *v74; // r15
  __m128i v75; // xmm0
  __int64 v76; // rax
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  __int64 v79; // rbp
  __m128i v80; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v81; // [rsp+18h] [rbp-100h]
  __m128i v82; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v83; // [rsp+30h] [rbp-E8h]
  __int64 v84; // [rsp+38h] [rbp-E0h]
  __m128i v85; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-C8h]
  __m128i v87; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-B0h]
  __m128i v89; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+80h] [rbp-98h] BYREF
  __m128i v91; // [rsp+88h] [rbp-90h] BYREF
  __m128i v92; // [rsp+98h] [rbp-80h] BYREF
  __m128i v93; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-60h]
  __int64 v95; // [rsp+C0h] [rbp-58h]
  char v96; // [rsp+C8h] [rbp-50h]
  int v97; // [rsp+CCh] [rbp-4Ch]
  unsigned __int64 v98; // [rsp+D8h] [rbp-40h]

  v83 = a2;
  v98 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 144 )
  {
    v3 = a1 + 208;
    v81 = &v90;
    v84 = a1 + 64;
    do
    {
      v4 = _mm_loadu_si128((const __m128i *)(v3 - 64));
      v5 = v3 - 64;
      v6 = _mm_loadu_si128((const __m128i *)(v3 - 40));
      v7 = *(_QWORD *)(v3 - 24);
      v8 = v4.m128i_i64[0] < *(_QWORD *)a1;
      v9 = _mm_loadu_si128((const __m128i *)(v3 - 16));
      v86 = *(_QWORD *)(v3 - 48);
      v85 = v4;
      *(_QWORD *)(v3 - 48) = 0;
      v87 = v6;
      if ( v8 )
      {
        *(_QWORD *)(v3 - 24) = 0;
        v10 = v81;
        *(_OWORD *)(v3 - 40) = 0;
        *(_OWORD *)(v3 - 16) = 0;
        v88 = v7;
        v90 = 0;
        v89 = v9;
        copy_tinfo_t(v10, v3);
        v11 = _mm_loadu_si128((const __m128i *)(v3 + 8));
        v12 = (__m128i *)v3;
        v13 = v5 - a1;
        v94 = *(_QWORD *)(v3 + 56);
        v14 = *(_DWORD *)(v3 + 64);
        v91 = v11;
        v15 = _mm_loadu_si128((const __m128i *)(v3 + 24));
        LODWORD(v95) = v14;
        v16 = *(_DWORD *)(v3 + 68);
        v92 = v15;
        v17 = _mm_loadu_si128((const __m128i *)(v3 + 40));
        HIDWORD(v95) = v16;
        LOBYTE(v16) = *(_BYTE *)(v3 + 72);
        v93 = v17;
        v96 = v16;
        v97 = *(_DWORD *)(v3 + 76);
        v82.m128i_i64[0] = v3 + 80;
        v18 = 0x8E38E38E38E38E39LL * ((v5 - a1) >> 4);
        if ( v13 > 0 )
        {
          do
          {
            v19 = v12[-13].m128i_i64[0];
            v20 = v12[-3].m128i_i64[0];
            v21 = v12;
            v22 = _mm_loadu_si128((__m128i *)((char *)v12 - 184));
            v23 = v12[-12].m128i_i64[0];
            *(__m128i *)((char *)&v12[-12] + 8) = 0;
            v12[-4].m128i_i64[0] = v19;
            v24 = v12[-13].m128i_i64[1];
            v12[-12].m128i_i64[0] = 0;
            v12[-4].m128i_i64[1] = v24;
            if ( v20 )
            {
              v12[-3].m128i_i64[1] = 0;
              v80 = v22;
              qfree(v20);
              v22 = _mm_load_si128(&v80);
            }
            v25 = v12[-2].m128i_i64[1];
            v12[-3].m128i_i64[0] = v23;
            *(__m128i *)((char *)v12 - 40) = v22;
            v26 = v12[-11].m128i_i64[1];
            v27 = _mm_loadu_si128(v12 - 10);
            v12[-11].m128i_i64[1] = 0;
            v12[-10] = 0;
            if ( v25 )
            {
              v12[-1].m128i_i64[0] = 0;
              v80 = v27;
              qfree(v25);
              v27 = _mm_load_si128(&v80);
            }
            v12[-2].m128i_i64[1] = v26;
            v12 -= 9;
            v12[8] = v27;
            copy_tinfo_t(v21, v12);
            v28 = _mm_loadu_si128((__m128i *)((char *)v21 - 136));
            v21[3].m128i_i32[2] = v21[-6].m128i_i32[2];
            v29 = v21[-5].m128i_i32[0];
            *(__m128i *)((char *)v21 + 8) = v28;
            v30 = _mm_loadu_si128((__m128i *)((char *)v21 - 120));
            v21[4].m128i_i32[0] = v29;
            v31 = v21[-5].m128i_i32[1];
            *(__m128i *)((char *)v21 + 24) = v30;
            v32 = _mm_loadu_si128((__m128i *)((char *)v21 - 104));
            v21[4].m128i_i32[1] = v31;
            LOBYTE(v31) = v21[-5].m128i_i8[8];
            *(__m128i *)((char *)v21 + 40) = v32;
            v21[4].m128i_i8[8] = v31;
            v21[4].m128i_i32[3] = v21[-5].m128i_i32[3];
            --v18;
          }
          while ( v18 );
        }
        v33 = _mm_load_si128(&v85);
        v34 = *(_QWORD *)(a1 + 16);
        v35 = v86;
        v86 = 0;
        *(__m128i *)a1 = v33;
        v36 = _mm_loadu_si128(&v87);
        v87 = 0;
        if ( v34 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v80 = v36;
          qfree(v34);
          v36 = _mm_load_si128(&v80);
        }
        v37 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 16) = v35;
        *(__m128i *)(a1 + 24) = v36;
        v38 = v88;
        v39 = _mm_load_si128(&v89);
        v88 = 0;
        v89 = 0;
        if ( v37 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v80 = v39;
          qfree(v37);
          v39 = _mm_load_si128(&v80);
        }
        v40 = v81;
        v41 = v84;
        *(_QWORD *)(a1 + 40) = v38;
        *(__m128i *)(a1 + 48) = v39;
        copy_tinfo_t(v41, v40);
        v42 = _mm_loadu_si128(&v91);
        *(_DWORD *)(a1 + 120) = v94;
        v43 = v95;
        *(__m128i *)(a1 + 72) = v42;
        v44 = _mm_loadu_si128(&v92);
        *(_QWORD *)(a1 + 128) = v43;
        LOBYTE(v43) = v96;
        *(__m128i *)(a1 + 88) = v44;
        v45 = _mm_loadu_si128(&v93);
        *(_BYTE *)(a1 + 136) = v43;
        LODWORD(v43) = v97;
        *(__m128i *)(a1 + 104) = v45;
        *(_DWORD *)(a1 + 140) = v43;
        clear_tinfo_t(v40);
        if ( v88 )
        {
          v89.m128i_i64[0] = 0;
          qfree(v88);
        }
        if ( v86 )
        {
          v87.m128i_i64[0] = 0;
          qfree(v86);
        }
      }
      else
      {
        *(_QWORD *)(v3 - 24) = 0;
        v47 = v81;
        *(_OWORD *)(v3 - 40) = 0;
        *(_OWORD *)(v3 - 16) = 0;
        v88 = v7;
        v90 = 0;
        v89 = v9;
        copy_tinfo_t(v47, v3);
        v48 = _mm_loadu_si128((const __m128i *)(v3 + 8));
        v49 = v3 - 208;
        v94 = *(_QWORD *)(v3 + 56);
        v50 = *(_DWORD *)(v3 + 64);
        v91 = v48;
        v51 = _mm_loadu_si128((const __m128i *)(v3 + 24));
        LODWORD(v95) = v50;
        v52 = *(_DWORD *)(v3 + 68);
        v92 = v51;
        v53 = _mm_loadu_si128((const __m128i *)(v3 + 40));
        HIDWORD(v95) = v52;
        LOBYTE(v52) = *(_BYTE *)(v3 + 72);
        v93 = v53;
        v96 = v52;
        v97 = *(_DWORD *)(v3 + 76);
        v54 = *(_QWORD *)(v3 - 208);
        if ( v85.m128i_i64[0] < v54 )
        {
          while ( 1 )
          {
            *(_QWORD *)(v49 + 144) = v54;
            v55 = *(_QWORD *)(v49 + 160);
            v56 = *(_QWORD *)(v49 + 8);
            v57 = *(_QWORD *)(v49 + 16);
            *(_QWORD *)(v49 + 16) = 0;
            v58 = _mm_loadu_si128((const __m128i *)(v49 + 24));
            *(_OWORD *)(v49 + 24) = 0;
            *(_QWORD *)(v49 + 152) = v56;
            if ( v55 )
            {
              *(_QWORD *)(v49 + 168) = 0;
              v80 = v58;
              qfree(v55);
              v58 = _mm_load_si128(&v80);
            }
            v59 = *(_QWORD *)(v49 + 184);
            *(_QWORD *)(v49 + 160) = v57;
            *(__m128i *)(v49 + 168) = v58;
            v60 = *(_QWORD *)(v49 + 40);
            v61 = _mm_loadu_si128((const __m128i *)(v49 + 48));
            *(_QWORD *)(v49 + 40) = 0;
            *(_OWORD *)(v49 + 48) = 0;
            if ( v59 )
            {
              *(_QWORD *)(v49 + 192) = 0;
              v80 = v61;
              qfree(v59);
              v61 = _mm_load_si128(&v80);
            }
            *(_QWORD *)(v49 + 184) = v60;
            v79 = v49 + 64;
            *(__m128i *)(v49 + 192) = v61;
            copy_tinfo_t(v49 + 208, v49 + 64);
            v62 = _mm_loadu_si128((const __m128i *)(v49 + 72));
            v63 = v85.m128i_i64[0];
            *(_DWORD *)(v49 + 264) = *(_DWORD *)(v49 + 120);
            v64 = *(_DWORD *)(v49 + 128);
            *(__m128i *)(v49 + 216) = v62;
            v65 = _mm_loadu_si128((const __m128i *)(v49 + 88));
            *(_DWORD *)(v49 + 272) = v64;
            v66 = *(_DWORD *)(v49 + 132);
            *(__m128i *)(v49 + 232) = v65;
            v67 = _mm_loadu_si128((const __m128i *)(v49 + 104));
            *(_DWORD *)(v49 + 276) = v66;
            LOBYTE(v66) = *(_BYTE *)(v49 + 136);
            *(__m128i *)(v49 + 248) = v67;
            *(_BYTE *)(v49 + 280) = v66;
            *(_DWORD *)(v49 + 284) = *(_DWORD *)(v49 + 140);
            v54 = *(_QWORD *)(v49 - 144);
            if ( v63 >= v54 )
              break;
            v49 -= 144;
          }
        }
        else
        {
          v49 = v3 - 64;
          v79 = v3;
        }
        v68 = *(_QWORD *)(v49 + 16);
        v69 = v86;
        v86 = 0;
        *(__m128 *)v49 = _mm_loadh_ps((const double *)&v85.m128i_i64[1]);
        v70 = _mm_loadu_si128(&v87);
        v87 = 0;
        if ( v68 )
        {
          *(_QWORD *)(v49 + 24) = 0;
          v82.m128i_i64[0] = v69;
          v80 = v70;
          qfree(v68);
          v69 = v82.m128i_i64[0];
          v70 = _mm_load_si128(&v80);
        }
        v71 = *(_QWORD *)(v49 + 40);
        *(_QWORD *)(v49 + 16) = v69;
        *(__m128i *)(v49 + 24) = v70;
        v72 = v88;
        v73 = _mm_load_si128(&v89);
        v88 = 0;
        v89 = 0;
        if ( v71 )
        {
          *(_QWORD *)(v49 + 48) = 0;
          v80.m128i_i64[0] = v72;
          v82 = v73;
          qfree(v71);
          v73 = _mm_load_si128(&v82);
          v72 = v80.m128i_i64[0];
        }
        v74 = v81;
        *(_QWORD *)(v49 + 40) = v72;
        *(__m128i *)(v49 + 48) = v73;
        copy_tinfo_t(v79, v74);
        v75 = _mm_loadu_si128(&v91);
        *(_DWORD *)(v49 + 120) = v94;
        v76 = v95;
        *(__m128i *)(v49 + 72) = v75;
        v77 = _mm_loadu_si128(&v92);
        *(_QWORD *)(v49 + 128) = v76;
        LOBYTE(v76) = v96;
        *(__m128i *)(v49 + 88) = v77;
        v78 = _mm_loadu_si128(&v93);
        *(_BYTE *)(v49 + 136) = v76;
        LODWORD(v76) = v97;
        *(__m128i *)(v49 + 104) = v78;
        *(_DWORD *)(v49 + 140) = v76;
        clear_tinfo_t(v74);
        if ( v88 )
        {
          v89.m128i_i64[0] = 0;
          qfree(v88);
        }
        if ( v86 )
        {
          v87.m128i_i64[0] = 0;
          qfree(v86);
        }
        v82.m128i_i64[0] = v3 + 80;
      }
      v3 += 144;
    }
    while ( v83 != v82.m128i_i64[0] );
  }
  return v98 - __readfsqword(0x28u);
}
