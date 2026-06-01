__int64 __fastcall sub_3937C0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int16 v17; // ax
  __int16 v18; // dx
  __m128i *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdi
  int v22; // eax
  __m128i v23; // xmm0
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 n; // rbp
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 ii; // rbp
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 i; // rax
  __int64 *v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 j; // rdx
  __int64 *v49; // rax
  __int64 v50; // rdi
  _QWORD *v51; // rax
  __int32 v52; // ecx
  char v53; // al
  char v54; // r8
  char v55; // al
  char v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 k; // r15
  __int64 *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 m; // r15
  __int64 *v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // r15
  __int64 *v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // r15
  __int64 *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // r15
  __int64 *v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // r15
  __int64 *v87; // rax
  __int64 v88; // rdi
  _QWORD *v89; // rax
  unsigned int v90; // [rsp+0h] [rbp-118h]
  __int64 v91; // [rsp+0h] [rbp-118h]
  __int64 v92; // [rsp+0h] [rbp-118h]
  __int64 v93; // [rsp+0h] [rbp-118h]
  __int64 v94; // [rsp+0h] [rbp-118h]
  __int64 v95; // [rsp+0h] [rbp-118h]
  __int64 v96; // [rsp+0h] [rbp-118h]
  __int64 v98; // [rsp+8h] [rbp-110h]
  __int64 v99; // [rsp+8h] [rbp-110h]
  __int64 v100; // [rsp+8h] [rbp-110h]
  __int64 v101; // [rsp+8h] [rbp-110h]
  __int64 v102; // [rsp+8h] [rbp-110h]
  __int64 v103; // [rsp+8h] [rbp-110h]
  __int64 v104; // [rsp+8h] [rbp-110h]
  __int64 v105; // [rsp+8h] [rbp-110h]
  __int64 v106; // [rsp+8h] [rbp-110h]
  __int64 v107; // [rsp+8h] [rbp-110h]
  __int64 v108; // [rsp+8h] [rbp-110h]
  __int64 v109; // [rsp+8h] [rbp-110h]
  __int64 v110; // [rsp+8h] [rbp-110h]
  __int64 v111; // [rsp+8h] [rbp-110h]
  __int64 v112; // [rsp+8h] [rbp-110h]
  __int64 v113; // [rsp+8h] [rbp-110h]
  __int16 v115; // [rsp+14h] [rbp-104h]
  __int64 v116; // [rsp+18h] [rbp-100h]
  __int64 v117; // [rsp+18h] [rbp-100h]
  __int64 v118; // [rsp+18h] [rbp-100h]
  __int64 v119; // [rsp+18h] [rbp-100h]
  __int64 v120; // [rsp+18h] [rbp-100h]
  __int64 v121; // [rsp+18h] [rbp-100h]
  __int64 v122; // [rsp+18h] [rbp-100h]
  int v123; // [rsp+20h] [rbp-F8h] BYREF
  int v124; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v125; // [rsp+28h] [rbp-F0h] BYREF
  _QWORD *v126; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD *v127; // [rsp+38h] [rbp-E0h]
  __int64 v128; // [rsp+40h] [rbp-D8h]
  __m128i v129; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v130; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v131[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+80h] [rbp-98h]
  __int128 v133; // [rsp+88h] [rbp-90h]
  __m128i v134; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v135; // [rsp+B0h] [rbp-68h] BYREF
  int v136; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v137; // [rsp+D8h] [rbp-40h]

  v137 = __readfsqword(0x28u);
  sub_3909B0((__int64)&v126, a4);
  v10 = *(_DWORD *)a4;
  v131[0] = 0;
  v123 = v10;
  v11 = *(_DWORD *)(a4 + 4);
  v131[1] = -1;
  v124 = v11;
  v12 = *(_DWORD *)(a4 + 8);
  v132 = 0;
  v115 = v12;
  v13 = *(_QWORD *)(a4 + 24);
  v133 = 0;
  v125 = v13;
  if ( v126 )
  {
    if ( !(unsigned __int8)sub_384450((__int64 *)&v125, 0) )
    {
      v90 = 0;
      goto LABEL_33;
    }
  }
  else if ( !v128 )
  {
    v90 = 0;
    goto LABEL_35;
  }
  if ( !a3 || a6 == 1 )
  {
    v37 = *(_QWORD *)(a3 + 32);
    if ( !v37
      || (v38 = *(_QWORD **)(v37 + 8), v39 = sub_330F80(v38, v125),
                                       !(unsigned __int8)sub_332920((__int64)(v38 + 1), v39)) )
    {
      sub_14CDC0(v134.m128i_i64, *(_QWORD *)(a2 + 112), &v126, v131, 0);
      v14 = v134.m128i_i64[0];
      if ( v134.m128i_i64[0] )
      {
        if ( !*(_DWORD *)(v134.m128i_i64[0] + 104) )
        {
          sub_258970((__int64 *)v134.m128i_i64[0]);
          v40 = *(_QWORD *)(v14 + 184);
          if ( v40 )
          {
            v41 = *(_QWORD *)(v14 + 192);
            if ( v41 )
            {
              for ( i = 0; i != v41; ++i )
              {
                v43 = (__int64 *)(v40 + 24 * i);
                v44 = *v43;
                if ( *v43 )
                {
                  v43[1] = 0;
                  v116 = i;
                  qfree(v44);
                  v40 = *(_QWORD *)(v14 + 184);
                  i = v116;
                }
              }
            }
            *(_QWORD *)(v14 + 192) = 0;
            qfree(v40);
          }
          v45 = *(_QWORD *)(v14 + 160);
          if ( v45 )
          {
            *(_QWORD *)(v14 + 168) = 0;
            qfree(v45);
          }
          v46 = *(_QWORD *)(v14 + 128);
          if ( v46 )
          {
            v47 = *(_QWORD *)(v14 + 136);
            if ( v47 )
            {
              for ( j = 0; j != v47; ++j )
              {
                v49 = (__int64 *)(v46 + 32 * j);
                v50 = *v49;
                if ( *v49 )
                {
                  v49[1] = 0;
                  v117 = j;
                  qfree(v50);
                  v46 = *(_QWORD *)(v14 + 128);
                  j = v117;
                }
              }
            }
            *(_QWORD *)(v14 + 136) = 0;
            qfree(v46);
          }
          sub_255050(v14 + 16);
          j__qfree(v14);
        }
        v51 = v126;
        v15 = v125;
        if ( !v126 )
          v51 = v127;
        if ( v125 == *v51 )
        {
          v123 = 0;
          v124 = 0;
          v115 = 0;
        }
        goto LABEL_7;
      }
      if ( v126 )
      {
        if ( *v126 != v125 )
          goto LABEL_94;
      }
      else if ( v125 != *v127 )
      {
        goto LABEL_94;
      }
      v123 = 0;
      v124 = 0;
      goto LABEL_94;
    }
  }
  v14 = *(_QWORD *)(a3 + 32);
  if ( v14 )
  {
    ++*(_DWORD *)(v14 + 104);
    v15 = v125;
LABEL_7:
    v16 = *(_QWORD *)v14;
    if ( a5 != 1 && v123 >= 0 )
    {
      v129.m128i_i32[3] = v123;
      v17 = v115;
      v129.m128i_i32[2] = 0;
      v129.m128i_i64[0] = (__int64)off_4E6538;
      v130.m128i_i64[0] = v16;
      v130.m128i_i64[1] = v15;
      goto LABEL_10;
    }
    if ( v15 == v16 )
    {
      v123 = 0;
      v17 = v115;
      v52 = 0;
      goto LABEL_65;
    }
    v118 = v15;
    v53 = sub_3327E0((_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL), &v126);
    v15 = v118;
    if ( v53 )
    {
LABEL_71:
      v54 = *(_BYTE *)(a2 + 718);
      ++*(_DWORD *)(v14 + 104);
      v98 = v15;
      v134.m128i_i64[0] = v14;
      v55 = sub_38BEC0(&v134, v15, &v124, &v123, v54, (__m128i)0LL);
      v24 = (*(_DWORD *)(v14 + 104))-- == 1;
      v15 = v98;
      v56 = v55;
      if ( v24 )
      {
        sub_258970((__int64 *)v14);
        v57 = *(_QWORD *)(v14 + 184);
        v58 = v98;
        if ( v57 )
        {
          v59 = *(_QWORD *)(v14 + 192);
          if ( v59 )
          {
            for ( k = 0; k != v59; ++k )
            {
              v61 = (__int64 *)(v57 + 24 * k);
              v62 = *v61;
              if ( *v61 )
              {
                v61[1] = 0;
                v99 = v59;
                v91 = v58;
                qfree(v62);
                v57 = *(_QWORD *)(v14 + 184);
                v59 = v99;
                v58 = v91;
              }
            }
          }
          *(_QWORD *)(v14 + 192) = 0;
          v92 = v58;
          qfree(v57);
          v58 = v92;
        }
        v63 = *(_QWORD *)(v14 + 160);
        if ( v63 )
        {
          *(_QWORD *)(v14 + 168) = 0;
          v93 = v58;
          qfree(v63);
          v58 = v93;
        }
        v64 = *(_QWORD *)(v14 + 128);
        if ( v64 )
        {
          v65 = *(_QWORD *)(v14 + 136);
          if ( v65 )
          {
            for ( m = 0; m != v65; ++m )
            {
              v67 = (__int64 *)(v64 + 32 * m);
              v68 = *v67;
              if ( *v67 )
              {
                v67[1] = 0;
                v100 = v65;
                v94 = v58;
                qfree(v68);
                v64 = *(_QWORD *)(v14 + 128);
                v65 = v100;
                v58 = v94;
              }
            }
          }
          *(_QWORD *)(v14 + 136) = 0;
          v95 = v58;
          qfree(v64);
          v58 = v95;
        }
        v96 = v58;
        sub_255050(v14 + 16);
        j__qfree(v14);
        v15 = v96;
      }
      v16 = *(_QWORD *)v14;
      if ( v56 )
      {
        v52 = v123;
        v17 = 15;
      }
      else if ( a3 )
      {
        v52 = *(_DWORD *)(a3 + 44);
        v124 = *(_DWORD *)(a3 + 48);
        v17 = *(_WORD *)(a3 + 52);
        v123 = v52;
      }
      else
      {
        v17 = v115;
        v52 = v123;
      }
LABEL_65:
      v129.m128i_i32[3] = v52;
      v129.m128i_i32[2] = 0;
      v129.m128i_i64[0] = (__int64)off_4E6538;
      v130.m128i_i64[0] = v16;
      v130.m128i_i64[1] = v15;
      if ( a5 == 1 && !*(_BYTE *)(*(_QWORD *)(a3 + 128) + 714LL) )
      {
        v18 = *(_WORD *)(a4 + 4);
        goto LABEL_11;
      }
LABEL_10:
      v18 = v124;
LABEL_11:
      v135.m128i_i16[7] = v17;
      v135.m128i_i64[0] = 0;
      v135.m128i_i32[2] = -1;
      v135.m128i_i16[6] = v18;
      v136 = 1;
      v134 = 0;
      v19 = (__m128i *)qalloc();
      v20 = (__int64)v19;
      if ( !v19 )
        sub_3880B0((__int64)"hexrays_place_t");
      *v19 = _mm_load_si128(&v129);
      v19[1] = _mm_load_si128(&v130);
      v21 = a1[2].m128i_i64[1];
      if ( v21 )
      {
        qfree(v21);
        a1[2].m128i_i64[1] = 0;
      }
      v22 = v136;
      *a1 = _mm_load_si128(&v134);
      v23 = _mm_load_si128(&v135);
      a1[2].m128i_i32[0] = v22;
      a1[1] = v23;
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      qfree(v20);
      v90 = 1;
      goto LABEL_15;
    }
    v90 = 0;
    if ( !a6 )
    {
LABEL_15:
      v24 = (*(_DWORD *)(v14 + 104))-- == 1;
      if ( v24 )
      {
        sub_258970((__int64 *)v14);
        v25 = *(_QWORD *)(v14 + 184);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v14 + 192);
          if ( v26 )
          {
            for ( n = 0; n != v26; ++n )
            {
              v28 = (__int64 *)(v25 + 24 * n);
              v29 = *v28;
              if ( *v28 )
              {
                v28[1] = 0;
                qfree(v29);
                v25 = *(_QWORD *)(v14 + 184);
              }
            }
          }
          *(_QWORD *)(v14 + 192) = 0;
          qfree(v25);
        }
        v30 = *(_QWORD *)(v14 + 160);
        if ( v30 )
        {
          *(_QWORD *)(v14 + 168) = 0;
          qfree(v30);
        }
        v31 = *(_QWORD *)(v14 + 128);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v14 + 136);
          if ( v32 )
          {
            for ( ii = 0; ii != v32; ++ii )
            {
              v34 = (__int64 *)(v31 + 32 * ii);
              v35 = *v34;
              if ( *v34 )
              {
                v34[1] = 0;
                qfree(v35);
                v31 = *(_QWORD *)(v14 + 128);
              }
            }
          }
          *(_QWORD *)(v14 + 136) = 0;
          qfree(v31);
        }
        sub_255050(v14 + 16);
        j__qfree(v14);
      }
      goto LABEL_33;
    }
    sub_14CDC0(v134.m128i_i64, *(_QWORD *)(a2 + 112), &v126, v131, 0);
    v24 = (*(_DWORD *)(v14 + 104))-- == 1;
    v15 = v118;
    if ( v24 )
    {
      sub_258970((__int64 *)v14);
      v69 = *(_QWORD *)(v14 + 184);
      v70 = v118;
      if ( v69 )
      {
        v71 = 0;
        v101 = *(_QWORD *)(v14 + 192);
        if ( v101 )
        {
          do
          {
            v72 = (__int64 *)(v69 + 24 * v71);
            v73 = *v72;
            if ( *v72 )
            {
              v72[1] = 0;
              v119 = v70;
              qfree(v73);
              v69 = *(_QWORD *)(v14 + 184);
              v70 = v119;
            }
            ++v71;
          }
          while ( v101 != v71 );
        }
        *(_QWORD *)(v14 + 192) = 0;
        v102 = v70;
        qfree(v69);
        v70 = v102;
      }
      v74 = *(_QWORD *)(v14 + 160);
      if ( v74 )
      {
        *(_QWORD *)(v14 + 168) = 0;
        v103 = v70;
        qfree(v74);
        v70 = v103;
      }
      v75 = *(_QWORD *)(v14 + 128);
      if ( v75 )
      {
        v76 = 0;
        v104 = *(_QWORD *)(v14 + 136);
        if ( v104 )
        {
          do
          {
            v77 = (__int64 *)(v75 + 32 * v76);
            v78 = *v77;
            if ( *v77 )
            {
              v77[1] = 0;
              v120 = v70;
              qfree(v78);
              v75 = *(_QWORD *)(v14 + 128);
              v70 = v120;
            }
            ++v76;
          }
          while ( v104 != v76 );
        }
        *(_QWORD *)(v14 + 136) = 0;
        v105 = v70;
        qfree(v75);
        v70 = v105;
      }
      v106 = v70;
      sub_255050(v14 + 16);
      j__qfree(v14);
      v15 = v106;
    }
    v14 = v134.m128i_i64[0];
    if ( v134.m128i_i64[0] )
    {
      if ( !*(_DWORD *)(v134.m128i_i64[0] + 104) )
      {
        v107 = v15;
        sub_258970((__int64 *)v134.m128i_i64[0]);
        v79 = *(_QWORD *)(v14 + 184);
        v80 = v107;
        if ( v79 )
        {
          v81 = 0;
          v108 = *(_QWORD *)(v14 + 192);
          if ( v108 )
          {
            do
            {
              v82 = (__int64 *)(v79 + 24 * v81);
              v83 = *v82;
              if ( *v82 )
              {
                v82[1] = 0;
                v121 = v80;
                qfree(v83);
                v79 = *(_QWORD *)(v14 + 184);
                v80 = v121;
              }
              ++v81;
            }
            while ( v108 != v81 );
          }
          *(_QWORD *)(v14 + 192) = 0;
          v109 = v80;
          qfree(v79);
          v80 = v109;
        }
        v84 = *(_QWORD *)(v14 + 160);
        if ( v84 )
        {
          *(_QWORD *)(v14 + 168) = 0;
          v110 = v80;
          qfree(v84);
          v80 = v110;
        }
        v85 = *(_QWORD *)(v14 + 128);
        if ( v85 )
        {
          v86 = 0;
          v111 = *(_QWORD *)(v14 + 136);
          if ( v111 )
          {
            do
            {
              v87 = (__int64 *)(v85 + 32 * v86);
              v88 = *v87;
              if ( *v87 )
              {
                v87[1] = 0;
                v122 = v80;
                qfree(v88);
                v85 = *(_QWORD *)(v14 + 128);
                v80 = v122;
              }
              ++v86;
            }
            while ( v111 != v86 );
          }
          *(_QWORD *)(v14 + 136) = 0;
          v112 = v80;
          qfree(v85);
          v80 = v112;
        }
        v113 = v80;
        sub_255050(v14 + 16);
        j__qfree(v14);
        v15 = v113;
      }
      v89 = v126;
      if ( !v126 )
        v89 = v127;
      if ( *v89 == v15 )
      {
        v123 = 0;
        v16 = *(_QWORD *)v14;
        v52 = 0;
        v17 = 0;
        v124 = 0;
        goto LABEL_65;
      }
      goto LABEL_71;
    }
  }
LABEL_94:
  v90 = -(LODWORD(v131[0]) == -18);
LABEL_33:
  if ( v132 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v132);
  }
LABEL_35:
  if ( v127 )
  {
    v128 = 0;
    qfree((__int64)v127);
  }
  return v90;
}
