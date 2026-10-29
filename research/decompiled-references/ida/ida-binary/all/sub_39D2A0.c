unsigned __int64 __fastcall sub_39D2A0(__int64 a1, const char *a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // rbp
  unsigned __int64 *v14; // rbx
  unsigned __int64 *v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  __m128i *v21; // rax
  __m128i *v22; // rcx
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i *v25; // rdx
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  __m128i *v28; // rax
  __m128i *v29; // rdx
  __m128i *v30; // rcx
  __m128i *v31; // rdx
  __m128i *v32; // rcx
  __int64 v33; // rdx
  __m128i v34; // xmm0
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r14
  const __m128i *v38; // r12
  __int64 v39; // rbp
  __int64 *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r12
  __m128 v43; // xmm0
  __m128i *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r12
  void *v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rbx
  const __m128i *v54; // rbp
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  const __m128i *v57; // rbx
  __int64 v58; // rdi
  _QWORD *v59; // rdi
  _QWORD *v60; // rdi
  __m128i *v61; // rbx
  const __m128i *v62; // rdi
  __m128i *v63; // rax
  __m128i *v64; // rdx
  __m128i *v65; // rcx
  __m128i *v66; // rdx
  __m128i *v67; // rcx
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __int64 v70; // rbx
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // r15
  __int64 v75; // r14
  __m128 v76; // xmm0
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __m128i v80; // xmm0
  __int64 v81; // rdx
  __int64 v82; // r12
  __int64 v83; // rdi
  __int64 v84; // r14
  __int64 v85; // r15
  __int64 v86; // rbx
  __int64 v87; // r14
  __m128 v88; // xmm0
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __m128i v92; // xmm0
  __int64 v93; // rdx
  __int64 v94; // [rsp+0h] [rbp-E8h]
  __int64 v95; // [rsp+0h] [rbp-E8h]
  __int64 v96; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v97; // [rsp+8h] [rbp-E0h]
  _BYTE v98[16]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i *v99; // [rsp+20h] [rbp-C8h]
  __int64 v100; // [rsp+38h] [rbp-B0h]
  __m128i v101; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v102; // [rsp+50h] [rbp-98h]
  int v103; // [rsp+68h] [rbp-80h] BYREF
  __m128 v104; // [rsp+70h] [rbp-78h]
  __m128i *v105; // [rsp+80h] [rbp-68h]
  __int64 v106; // [rsp+88h] [rbp-60h]
  __m128i v107; // [rsp+90h] [rbp-58h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v109; // [rsp+A8h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 760);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 768);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = *(_QWORD *)(v6 + 72 * i + 16);
        if ( v9 )
        {
          do
          {
            sub_398830(*(_QWORD **)(v9 + 24));
            v10 = (void *)v9;
            v9 = *(_QWORD *)(v9 + 16);
            a2 = (const char *)&dword_30;
            operator delete(v10, 0x30u);
          }
          while ( v9 );
          v6 = *(_QWORD *)(a1 + 760);
        }
      }
    }
    *(_QWORD *)(a1 + 768) = 0;
    a3 = qfree(v6, a2);
    *(_QWORD *)(a1 + 760) = 0;
    *(_QWORD *)(a1 + 776) = 0;
  }
  v11 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v11 + 28) + 1 - *(_DWORD *)(v11 + 20) > 1 )
  {
    sub_1F7F00(*(QT::QAbstractScrollArea **)(a1 + 672), (__int64 *)(a1 + 688), v11, a5, a3);
    v13 = *(_QWORD *)(a1 + 696);
    if ( v13 )
    {
      v14 = *(unsigned __int64 **)(a1 + 688);
      v15 = &v14[2 * v13];
      while ( v15 != v14 )
      {
        v16 = *v14;
        v14 += 2;
        sub_39D080((_QWORD *)a1, v16);
      }
      sub_39D080((_QWORD *)a1, *(_QWORD *)(a1 + 680));
      sub_399440((__int64)v98, 0xFFFFFFFFFFFFFFFFLL, -1);
      v17 = *(_QWORD *)(a1 + 752);
      v18 = *(_QWORD *)(a1 + 768);
      if ( v17 < v18 )
      {
        v35 = *(_QWORD *)(a1 + 752);
        do
        {
          v36 = 9 * v35++;
          sub_398830(*(_QWORD **)(*(_QWORD *)(a1 + 760) + 8 * v36 + 16));
        }
        while ( v35 < v18 );
      }
      else
      {
        if ( v18 >= v17 )
          goto LABEL_37;
        v19 = *(_QWORD *)(a1 + 760);
        v20 = *(_QWORD *)(a1 + 776);
        if ( (unsigned __int64)v98 >= v19 && (unsigned __int64)v98 < v19 + 72 * v20 )
        {
          v103 = 0;
          v104.m128_u64[0] = 0;
          v104.m128_u64[1] = (unsigned __int64)&v103;
          v105 = (__m128i *)&v103;
          v106 = 0;
          if ( v99 )
          {
            v21 = sub_398A00(v99, (__int64)&v103);
            v22 = v21;
            do
            {
              v23 = v21;
              v21 = (__m128i *)v21[1].m128i_i64[0];
            }
            while ( v21 );
            v104.m128_u64[1] = (unsigned __int64)v23;
            v24 = v22;
            do
            {
              v25 = v24;
              v24 = (__m128i *)v24[1].m128i_i64[1];
            }
            while ( v24 );
            v105 = v25;
            v104.m128_u64[0] = (unsigned __int64)v22;
            v20 = *(_QWORD *)(a1 + 776);
            v106 = v100;
          }
          v107 = _mm_load_si128(&v101);
          v108 = v102;
          if ( v20 < v17 )
          {
            v97 = v20;
            v82 = qvector_reserve(a1 + 760, 0, v17, 72);
            v83 = *(_QWORD *)(a1 + 760);
            v84 = *(_QWORD *)(a1 + 768);
            v85 = v82 + 8;
            v95 = *(_QWORD *)(a1 + 776);
            *(_QWORD *)(a1 + 776) = v97;
            v86 = v83;
            v87 = v84 - 1;
            if ( v87 >= 0 )
            {
              do
              {
                v93 = *(_QWORD *)(v86 + 16);
                if ( v93 )
                {
                  v88 = _mm_loadh_ps((const double *)(v86 + 24));
                  *(_DWORD *)v85 = *(_DWORD *)(v86 + 8);
                  v89 = *(_QWORD *)(v86 + 32);
                  *(__m128 *)(v85 + 8) = v88;
                  *(_QWORD *)(v85 + 24) = v89;
                  *(_QWORD *)(v93 + 8) = v85;
                  v90 = *(_QWORD *)(v86 + 40);
                  *(_QWORD *)(v86 + 16) = 0;
                  *(_QWORD *)(v85 + 32) = v90;
                  *(_QWORD *)(v86 + 24) = v86 + 8;
                  *(_QWORD *)(v86 + 32) = v86 + 8;
                  *(_QWORD *)(v86 + 40) = 0;
                }
                else
                {
                  *(_DWORD *)v85 = 0;
                  *(_QWORD *)(v85 + 8) = 0;
                  *(_QWORD *)(v85 + 16) = v85;
                  *(_QWORD *)(v85 + 24) = v85;
                  *(_QWORD *)(v85 + 32) = 0;
                }
                v91 = *(_QWORD *)(v86 + 64);
                --v87;
                v86 += 72;
                v85 += 72;
                v92 = _mm_loadu_si128((const __m128i *)(v86 - 24));
                *(_QWORD *)(v85 - 16) = v91;
                *(__m128i *)(v85 - 32) = v92;
                sub_398830(*(_QWORD **)(v86 - 56));
              }
              while ( v87 != -1 );
              v83 = *(_QWORD *)(a1 + 760);
            }
            qfree(v83, nullptr);
            *(_QWORD *)(a1 + 760) = v82;
            *(_QWORD *)(a1 + 776) = v95;
          }
          v26 = *(_QWORD *)(a1 + 768);
          if ( v26 < v17 )
          {
            do
            {
              v27 = *(_QWORD *)(a1 + 760) + 72 * v26;
              *(_DWORD *)(v27 + 8) = 0;
              *(_QWORD *)(v27 + 16) = 0;
              *(_QWORD *)(v27 + 24) = v27 + 8;
              *(_QWORD *)(v27 + 32) = v27 + 8;
              *(_QWORD *)(v27 + 40) = 0;
              if ( v104.m128_u64[0] )
              {
                v28 = sub_398A00((const __m128i *)v104.m128_u64[0], v27 + 8);
                v29 = v28;
                do
                {
                  v30 = v29;
                  v29 = (__m128i *)v29[1].m128i_i64[0];
                }
                while ( v29 );
                *(_QWORD *)(v27 + 24) = v30;
                v31 = v28;
                do
                {
                  v32 = v31;
                  v31 = (__m128i *)v31[1].m128i_i64[1];
                }
                while ( v31 );
                *(_QWORD *)(v27 + 32) = v32;
                v33 = v106;
                *(_QWORD *)(v27 + 16) = v28;
                *(_QWORD *)(v27 + 40) = v33;
              }
              v34 = _mm_load_si128(&v107);
              ++v26;
              *(_QWORD *)(v27 + 64) = v108;
              *(__m128i *)(v27 + 48) = v34;
            }
            while ( v17 != v26 );
          }
          *(_QWORD *)(a1 + 768) = v17;
          sub_398830(v104.m128_u64[0]);
LABEL_37:
          v37 = a1 + 720;
          sub_398830(v99);
          v38 = *(const __m128i **)(a1 + 760);
          v39 = *(_QWORD *)(a1 + 736);
          v40 = &v38->m128i_i64[1];
          if ( v39 != a1 + 720 )
          {
            do
            {
              v41 = *(_QWORD *)(v39 + 56);
              v42 = v39 + 48;
              if ( v41 )
              {
                v43 = _mm_loadh_ps((const double *)(v39 + 64));
                v103 = *(_DWORD *)(v39 + 48);
                v44 = *(__m128i **)(v39 + 72);
                v104 = v43;
                v105 = v44;
                *(_QWORD *)(v41 + 8) = &v103;
                v45 = *(_QWORD *)(v39 + 80);
                *(_QWORD *)(v39 + 56) = 0;
                v106 = v45;
                *(_QWORD *)(v39 + 64) = v39 + 48;
                *(_QWORD *)(v39 + 72) = v39 + 48;
                *(_QWORD *)(v39 + 80) = 0;
              }
              else
              {
                v103 = 0;
                v104.m128_u64[0] = 0;
                v104.m128_u64[1] = (unsigned __int64)&v103;
                v105 = (__m128i *)&v103;
                v106 = 0;
              }
              v46 = *(_QWORD *)(v39 + 104);
              v107 = _mm_loadu_si128((const __m128i *)(v39 + 88));
              v108 = v46;
              v47 = *(_QWORD *)(v39 + 56);
              while ( v47 )
              {
                sub_398830(*(_QWORD **)(v47 + 24));
                v48 = (void *)v47;
                v47 = *(_QWORD *)(v47 + 16);
                operator delete(v48, 0x30u);
              }
              *(_QWORD *)(v39 + 56) = 0;
              *(_QWORD *)(v39 + 64) = v42;
              *(_QWORD *)(v39 + 72) = v42;
              *(_QWORD *)(v39 + 80) = 0;
              if ( v40[1] )
              {
                *(_DWORD *)(v39 + 48) = *(_DWORD *)v40;
                v49 = v40[1];
                *(_QWORD *)(v39 + 56) = v49;
                *(_QWORD *)(v39 + 64) = v40[2];
                *(_QWORD *)(v39 + 72) = v40[3];
                *(_QWORD *)(v49 + 8) = v42;
                *(_QWORD *)(v39 + 80) = v40[4];
                v40[1] = 0;
                v40[2] = (__int64)v40;
                v40[3] = (__int64)v40;
                v40[4] = 0;
              }
              *(_QWORD *)(v39 + 88) = v40[5];
              *(_DWORD *)(v39 + 96) = *((_DWORD *)v40 + 12);
              *(_QWORD *)(v39 + 104) = v40[7];
              v50 = v40[1];
              while ( v50 )
              {
                sub_398830(*(_QWORD **)(v50 + 24));
                v51 = (void *)v50;
                v50 = *(_QWORD *)(v50 + 16);
                operator delete(v51, 0x30u);
              }
              v40[1] = 0;
              v40[2] = (__int64)v40;
              v40[3] = (__int64)v40;
              v40[4] = 0;
              if ( v104.m128_u64[0] )
              {
                *(_DWORD *)v40 = v103;
                v52 = v104.m128_u64[0];
                *(__m128 *)(v40 + 1) = v104;
                v40[3] = (__int64)v105;
                *(_QWORD *)(v52 + 8) = v40;
                v40[4] = v106;
              }
              v40 += 9;
              *(v40 - 4) = v107.m128i_i64[0];
              *((_DWORD *)v40 - 6) = v107.m128i_i32[2];
              *(v40 - 2) = v108;
              v39 = std::_Rb_tree_increment(v39);
            }
            while ( v39 != v37 );
            v38 = *(const __m128i **)(a1 + 760);
          }
          v53 = 72LL * *(_QWORD *)(a1 + 768);
          v54 = (const __m128i *)((char *)v38 + v53);
          if ( &v38->m128i_i8[v53] == (__int8 *)v38 )
            goto LABEL_55;
          v55 = 0x8E38E38E38E38E39LL * (v53 >> 3);
          if ( v55 )
          {
            _BitScanReverse64(&v56, v55);
            sub_399B90((__int64)v38, v54, 2LL * (int)v56);
            if ( v53 > 1152 )
            {
              v57 = v38 + 72;
              sub_398DB0((__int64)v38, v38 + 72);
              do
              {
                v58 = (__int64)v57;
                v57 = (const __m128i *)((char *)v57 + 72);
                sub_398AD0(v58);
              }
              while ( v54 != v57 );
              goto LABEL_55;
            }
          }
          else
          {
            sub_399B90((__int64)v38, v54, -2);
          }
          sub_398DB0((__int64)v38, v54);
LABEL_55:
          sub_398660(*(_QWORD **)(a1 + 1800));
          *(_QWORD *)(a1 + 1800) = 0;
          v59 = *(_QWORD **)(a1 + 1848);
          *(_QWORD *)(a1 + 1808) = a1 + 1792;
          *(_QWORD *)(a1 + 1816) = a1 + 1792;
          *(_QWORD *)(a1 + 1824) = 0;
          sub_398660(v59);
          *(_QWORD *)(a1 + 1848) = 0;
          v60 = *(_QWORD **)(a1 + 728);
          *(_QWORD *)(a1 + 1856) = a1 + 1840;
          *(_QWORD *)(a1 + 1864) = a1 + 1840;
          *(_QWORD *)(a1 + 1872) = 0;
          sub_399100(v60);
          *(_QWORD *)(a1 + 736) = v37;
          *(_QWORD *)(a1 + 728) = 0;
          *(_QWORD *)(a1 + 744) = v37;
          *(_QWORD *)(a1 + 752) = 0;
          return v109 - __readfsqword(0x28u);
        }
        if ( v20 >= v17 )
          goto LABEL_87;
        v96 = *(_QWORD *)(a1 + 776);
        v70 = qvector_reserve(a1 + 760, 0, *(_QWORD *)(a1 + 752), 72);
        v71 = *(_QWORD *)(a1 + 768);
        v72 = *(_QWORD *)(a1 + 776);
        v73 = *(_QWORD *)(a1 + 760);
        *(_QWORD *)(a1 + 776) = v96;
        v94 = v72;
        v74 = v71 - 1;
        if ( v74 >= 0 )
        {
          v75 = v70 + 8;
          do
          {
            v81 = *(_QWORD *)(v73 + 16);
            if ( v81 )
            {
              v76 = _mm_loadh_ps((const double *)(v73 + 24));
              *(_DWORD *)v75 = *(_DWORD *)(v73 + 8);
              v77 = *(_QWORD *)(v73 + 32);
              *(__m128 *)(v75 + 8) = v76;
              *(_QWORD *)(v75 + 24) = v77;
              *(_QWORD *)(v81 + 8) = v75;
              v78 = *(_QWORD *)(v73 + 40);
              *(_QWORD *)(v73 + 16) = 0;
              *(_QWORD *)(v75 + 32) = v78;
              *(_QWORD *)(v73 + 24) = v73 + 8;
              *(_QWORD *)(v73 + 32) = v73 + 8;
              *(_QWORD *)(v73 + 40) = 0;
            }
            else
            {
              *(_DWORD *)v75 = 0;
              *(_QWORD *)(v75 + 8) = 0;
              *(_QWORD *)(v75 + 16) = v75;
              *(_QWORD *)(v75 + 24) = v75;
              *(_QWORD *)(v75 + 32) = 0;
            }
            v79 = *(_QWORD *)(v73 + 64);
            --v74;
            v73 += 72;
            v75 += 72;
            v80 = _mm_loadu_si128((const __m128i *)(v73 - 24));
            *(_QWORD *)(v75 - 16) = v79;
            *(__m128i *)(v75 - 32) = v80;
            sub_398830(*(_QWORD **)(v73 - 56));
          }
          while ( v74 != -1 );
          v73 = *(_QWORD *)(a1 + 760);
        }
        qfree(v73, nullptr);
        v18 = *(_QWORD *)(a1 + 768);
        *(_QWORD *)(a1 + 760) = v70;
        v19 = v70;
        *(_QWORD *)(a1 + 776) = v94;
        if ( v18 < v17 )
        {
LABEL_87:
          while ( 1 )
          {
            v61 = (__m128i *)(v19 + 72 * v18);
            v61->m128i_i32[2] = 0;
            v61[1].m128i_i64[0] = 0;
            v62 = v99;
            v61[1].m128i_i64[1] = (__int64)&v61->m128i_i64[1];
            v61[2].m128i_i64[0] = (__int64)&v61->m128i_i64[1];
            v61[2].m128i_i64[1] = 0;
            if ( v62 )
            {
              v63 = sub_398A00(v62, (__int64)&v61->m128i_i64[1]);
              v64 = v63;
              do
              {
                v65 = v64;
                v64 = (__m128i *)v64[1].m128i_i64[0];
              }
              while ( v64 );
              v61[1].m128i_i64[1] = (__int64)v65;
              v66 = v63;
              do
              {
                v67 = v66;
                v66 = (__m128i *)v66[1].m128i_i64[1];
              }
              while ( v66 );
              v61[2].m128i_i64[0] = (__int64)v67;
              v68 = v100;
              v61[1].m128i_i64[0] = (__int64)v63;
              v61[2].m128i_i64[1] = v68;
            }
            v69 = _mm_load_si128(&v101);
            ++v18;
            v61[4].m128i_i64[0] = v102;
            v61[3] = v69;
            if ( v18 >= v17 )
              break;
            v19 = *(_QWORD *)(a1 + 760);
          }
        }
      }
      *(_QWORD *)(a1 + 768) = v17;
      goto LABEL_37;
    }
  }
  return v109 - __readfsqword(0x28u);
}
