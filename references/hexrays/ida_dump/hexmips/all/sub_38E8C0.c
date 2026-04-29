__int64 __fastcall sub_38E8C0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int16 v19; // ax
  __int16 v20; // dx
  __m128i *v21; // rax
  __m128i *v22; // r12
  __int64 v23; // rdi
  int v24; // eax
  __m128i v25; // xmm0
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 n; // rbp
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 ii; // rbp
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v39; // rax
  _QWORD *v40; // rdi
  unsigned __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 i; // rax
  __int64 *v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 j; // rdx
  __int64 *v51; // rax
  __int64 v52; // rdi
  _QWORD *v53; // rax
  __int32 v54; // ecx
  char v55; // al
  char v56; // r8
  char v57; // al
  char v58; // r14
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 k; // r15
  __int64 *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 m; // r15
  __int64 *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // r15
  __int64 *v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // r15
  __int64 *v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // r15
  __int64 *v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 *v89; // rax
  __int64 v90; // rdi
  _QWORD *v91; // rax
  unsigned int v92; // [rsp+0h] [rbp-118h]
  __int64 v93; // [rsp+0h] [rbp-118h]
  __int64 v94; // [rsp+0h] [rbp-118h]
  __int64 v95; // [rsp+0h] [rbp-118h]
  __int64 v96; // [rsp+0h] [rbp-118h]
  __int64 v97; // [rsp+0h] [rbp-118h]
  __int64 v98; // [rsp+0h] [rbp-118h]
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
  __int64 v114; // [rsp+8h] [rbp-110h]
  __int64 v115; // [rsp+8h] [rbp-110h]
  __int16 v117; // [rsp+14h] [rbp-104h]
  __int64 v118; // [rsp+18h] [rbp-100h]
  __int64 v119; // [rsp+18h] [rbp-100h]
  __int64 v120; // [rsp+18h] [rbp-100h]
  __int64 v121; // [rsp+18h] [rbp-100h]
  __int64 v122; // [rsp+18h] [rbp-100h]
  __int64 v123; // [rsp+18h] [rbp-100h]
  __int64 v124; // [rsp+18h] [rbp-100h]
  int v125; // [rsp+20h] [rbp-F8h] BYREF
  int v126; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v127; // [rsp+28h] [rbp-F0h] BYREF
  _QWORD *v128; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD *v129; // [rsp+38h] [rbp-E0h]
  __int64 v130; // [rsp+40h] [rbp-D8h]
  __m128i v131; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v132; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v133[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v134; // [rsp+80h] [rbp-98h]
  __int128 v135; // [rsp+88h] [rbp-90h]
  __m128i v136; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v137; // [rsp+B0h] [rbp-68h] BYREF
  int v138; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v139; // [rsp+D8h] [rbp-40h]

  v139 = __readfsqword(0x28u);
  sub_38BAB0((__int64)&v128, a4);
  v12 = *(_DWORD *)a4;
  v133[0] = 0;
  v125 = v12;
  v13 = *(_DWORD *)(a4 + 4);
  v133[1] = -1;
  v126 = v13;
  v14 = *(_DWORD *)(a4 + 8);
  v134 = 0;
  v117 = v14;
  v15 = *(_QWORD *)(a4 + 24);
  v135 = 0;
  v127 = v15;
  if ( v128 )
  {
    if ( !(unsigned __int8)sub_37F550((__int64 *)&v127, 0) )
    {
      v92 = 0;
      goto LABEL_33;
    }
  }
  else if ( !v130 )
  {
    v92 = 0;
    goto LABEL_35;
  }
  if ( !a3 || a6 == 1 )
  {
    v39 = *(_QWORD *)(a3 + 32);
    if ( !v39 || (v40 = *(_QWORD **)(v39 + 8), v41 = sub_32BF20(v40, v127), !(unsigned __int8)sub_32D8E0(v40 + 1, v41)) )
    {
      sub_148BC0(&v136, *(_QWORD *)(a2 + 112), &v128, v133, 0);
      v16 = v136.m128i_i64[0];
      if ( v136.m128i_i64[0] )
      {
        if ( !*(_DWORD *)(v136.m128i_i64[0] + 104) )
        {
          sub_2540F0((__int64 *)v136.m128i_i64[0]);
          v42 = *(_QWORD *)(v16 + 184);
          if ( v42 )
          {
            v43 = *(_QWORD *)(v16 + 192);
            if ( v43 )
            {
              for ( i = 0; i != v43; ++i )
              {
                v45 = (__int64 *)(v42 + 24 * i);
                v46 = *v45;
                if ( *v45 )
                {
                  v45[1] = 0;
                  v118 = i;
                  qfree(v46);
                  v42 = *(_QWORD *)(v16 + 184);
                  i = v118;
                }
              }
            }
            *(_QWORD *)(v16 + 192) = 0;
            qfree(v42);
          }
          v47 = *(_QWORD *)(v16 + 160);
          if ( v47 )
          {
            *(_QWORD *)(v16 + 168) = 0;
            qfree(v47);
          }
          v48 = *(_QWORD *)(v16 + 128);
          if ( v48 )
          {
            v49 = *(_QWORD *)(v16 + 136);
            if ( v49 )
            {
              for ( j = 0; j != v49; ++j )
              {
                v51 = (__int64 *)(v48 + 32 * j);
                v52 = *v51;
                if ( *v51 )
                {
                  v51[1] = 0;
                  v119 = j;
                  qfree(v52);
                  v48 = *(_QWORD *)(v16 + 128);
                  j = v119;
                }
              }
            }
            *(_QWORD *)(v16 + 136) = 0;
            qfree(v48);
          }
          sub_2507D0(v16 + 16);
          j__qfree(v16);
        }
        v53 = v128;
        v17 = v127;
        if ( !v128 )
          v53 = v129;
        if ( v127 == *v53 )
        {
          v125 = 0;
          v126 = 0;
          v117 = 0;
        }
        goto LABEL_7;
      }
      if ( v128 )
      {
        if ( *v128 != v127 )
          goto LABEL_94;
      }
      else if ( v127 != *v129 )
      {
        goto LABEL_94;
      }
      v125 = 0;
      v126 = 0;
      goto LABEL_94;
    }
  }
  v16 = *(_QWORD *)(a3 + 32);
  if ( v16 )
  {
    ++*(_DWORD *)(v16 + 104);
    v17 = v127;
LABEL_7:
    v18 = *(_QWORD *)v16;
    if ( a5 != 1 )
    {
      v10 = (unsigned int)v125;
      if ( v125 >= 0 )
      {
        v131.m128i_i32[3] = v125;
        v19 = v117;
        v131.m128i_i32[2] = 0;
        v131.m128i_i64[0] = (__int64)off_4C6C58;
        v132.m128i_i64[0] = v18;
        v132.m128i_i64[1] = v17;
        goto LABEL_10;
      }
    }
    if ( v17 == v18 )
    {
      v125 = 0;
      v19 = v117;
      v54 = 0;
      goto LABEL_65;
    }
    v120 = v17;
    v55 = sub_32D7A0((_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL), &v128, v18, v10, v11, v17);
    v17 = v120;
    if ( v55 )
    {
LABEL_71:
      v56 = *(_BYTE *)(a2 + 718);
      ++*(_DWORD *)(v16 + 104);
      v100 = v17;
      v136.m128i_i64[0] = v16;
      v57 = sub_386FC0(&v136, v17, &v126, &v125, v56, (__m128i)0LL);
      v26 = (*(_DWORD *)(v16 + 104))-- == 1;
      v17 = v100;
      v58 = v57;
      if ( v26 )
      {
        sub_2540F0((__int64 *)v16);
        v59 = *(_QWORD *)(v16 + 184);
        v60 = v100;
        if ( v59 )
        {
          v61 = *(_QWORD *)(v16 + 192);
          if ( v61 )
          {
            for ( k = 0; k != v61; ++k )
            {
              v63 = (__int64 *)(v59 + 24 * k);
              v64 = *v63;
              if ( *v63 )
              {
                v63[1] = 0;
                v101 = v61;
                v93 = v60;
                qfree(v64);
                v59 = *(_QWORD *)(v16 + 184);
                v61 = v101;
                v60 = v93;
              }
            }
          }
          *(_QWORD *)(v16 + 192) = 0;
          v94 = v60;
          qfree(v59);
          v60 = v94;
        }
        v65 = *(_QWORD *)(v16 + 160);
        if ( v65 )
        {
          *(_QWORD *)(v16 + 168) = 0;
          v95 = v60;
          qfree(v65);
          v60 = v95;
        }
        v66 = *(_QWORD *)(v16 + 128);
        if ( v66 )
        {
          v67 = *(_QWORD *)(v16 + 136);
          if ( v67 )
          {
            for ( m = 0; m != v67; ++m )
            {
              v69 = (__int64 *)(v66 + 32 * m);
              v70 = *v69;
              if ( *v69 )
              {
                v69[1] = 0;
                v102 = v67;
                v96 = v60;
                qfree(v70);
                v66 = *(_QWORD *)(v16 + 128);
                v67 = v102;
                v60 = v96;
              }
            }
          }
          *(_QWORD *)(v16 + 136) = 0;
          v97 = v60;
          qfree(v66);
          v60 = v97;
        }
        v98 = v60;
        sub_2507D0(v16 + 16);
        j__qfree(v16);
        v17 = v98;
      }
      v18 = *(_QWORD *)v16;
      if ( v58 )
      {
        v54 = v125;
        v19 = 15;
      }
      else if ( a3 )
      {
        v54 = *(_DWORD *)(a3 + 44);
        v126 = *(_DWORD *)(a3 + 48);
        v19 = *(_WORD *)(a3 + 52);
        v125 = v54;
      }
      else
      {
        v19 = v117;
        v54 = v125;
      }
LABEL_65:
      v131.m128i_i32[3] = v54;
      v131.m128i_i32[2] = 0;
      v131.m128i_i64[0] = (__int64)off_4C6C58;
      v132.m128i_i64[0] = v18;
      v132.m128i_i64[1] = v17;
      if ( a5 == 1 && !*(_BYTE *)(*(_QWORD *)(a3 + 128) + 714LL) )
      {
        v20 = *(_WORD *)(a4 + 4);
        goto LABEL_11;
      }
LABEL_10:
      v20 = v126;
LABEL_11:
      v137.m128i_i16[7] = v19;
      v137.m128i_i64[0] = 0;
      v137.m128i_i32[2] = -1;
      v137.m128i_i16[6] = v20;
      v138 = 1;
      v136 = 0;
      v21 = (__m128i *)qalloc(32);
      v22 = v21;
      if ( !v21 )
        sub_3831B0((__int64)"hexrays_place_t");
      *v21 = _mm_load_si128(&v131);
      v21[1] = _mm_load_si128(&v132);
      v23 = a1[2].m128i_i64[1];
      if ( v23 )
      {
        qfree(v23);
        a1[2].m128i_i64[1] = 0;
      }
      v24 = v138;
      *a1 = _mm_load_si128(&v136);
      v25 = _mm_load_si128(&v137);
      a1[2].m128i_i32[0] = v24;
      a1[1] = v25;
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__m128i *))(v22->m128i_i64[0] + 16))(v22);
      qfree(v22);
      v92 = 1;
      goto LABEL_15;
    }
    v92 = 0;
    if ( !a6 )
    {
LABEL_15:
      v26 = (*(_DWORD *)(v16 + 104))-- == 1;
      if ( v26 )
      {
        sub_2540F0((__int64 *)v16);
        v27 = *(_QWORD *)(v16 + 184);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v16 + 192);
          if ( v28 )
          {
            for ( n = 0; n != v28; ++n )
            {
              v30 = (__int64 *)(v27 + 24 * n);
              v31 = *v30;
              if ( *v30 )
              {
                v30[1] = 0;
                qfree(v31);
                v27 = *(_QWORD *)(v16 + 184);
              }
            }
          }
          *(_QWORD *)(v16 + 192) = 0;
          qfree(v27);
        }
        v32 = *(_QWORD *)(v16 + 160);
        if ( v32 )
        {
          *(_QWORD *)(v16 + 168) = 0;
          qfree(v32);
        }
        v33 = *(_QWORD *)(v16 + 128);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v16 + 136);
          if ( v34 )
          {
            for ( ii = 0; ii != v34; ++ii )
            {
              v36 = (__int64 *)(v33 + 32 * ii);
              v37 = *v36;
              if ( *v36 )
              {
                v36[1] = 0;
                qfree(v37);
                v33 = *(_QWORD *)(v16 + 128);
              }
            }
          }
          *(_QWORD *)(v16 + 136) = 0;
          qfree(v33);
        }
        sub_2507D0(v16 + 16);
        j__qfree(v16);
      }
      goto LABEL_33;
    }
    sub_148BC0(&v136, *(_QWORD *)(a2 + 112), &v128, v133, 0);
    v26 = (*(_DWORD *)(v16 + 104))-- == 1;
    v17 = v120;
    if ( v26 )
    {
      sub_2540F0((__int64 *)v16);
      v71 = *(_QWORD *)(v16 + 184);
      v72 = v120;
      if ( v71 )
      {
        v73 = 0;
        v103 = *(_QWORD *)(v16 + 192);
        if ( v103 )
        {
          do
          {
            v74 = (__int64 *)(v71 + 24 * v73);
            v75 = *v74;
            if ( *v74 )
            {
              v74[1] = 0;
              v121 = v72;
              qfree(v75);
              v71 = *(_QWORD *)(v16 + 184);
              v72 = v121;
            }
            ++v73;
          }
          while ( v103 != v73 );
        }
        *(_QWORD *)(v16 + 192) = 0;
        v104 = v72;
        qfree(v71);
        v72 = v104;
      }
      v76 = *(_QWORD *)(v16 + 160);
      if ( v76 )
      {
        *(_QWORD *)(v16 + 168) = 0;
        v105 = v72;
        qfree(v76);
        v72 = v105;
      }
      v77 = *(_QWORD *)(v16 + 128);
      if ( v77 )
      {
        v78 = 0;
        v106 = *(_QWORD *)(v16 + 136);
        if ( v106 )
        {
          do
          {
            v79 = (__int64 *)(v77 + 32 * v78);
            v80 = *v79;
            if ( *v79 )
            {
              v79[1] = 0;
              v122 = v72;
              qfree(v80);
              v77 = *(_QWORD *)(v16 + 128);
              v72 = v122;
            }
            ++v78;
          }
          while ( v106 != v78 );
        }
        *(_QWORD *)(v16 + 136) = 0;
        v107 = v72;
        qfree(v77);
        v72 = v107;
      }
      v108 = v72;
      sub_2507D0(v16 + 16);
      j__qfree(v16);
      v17 = v108;
    }
    v16 = v136.m128i_i64[0];
    if ( v136.m128i_i64[0] )
    {
      if ( !*(_DWORD *)(v136.m128i_i64[0] + 104) )
      {
        v109 = v17;
        sub_2540F0((__int64 *)v136.m128i_i64[0]);
        v81 = *(_QWORD *)(v16 + 184);
        v82 = v109;
        if ( v81 )
        {
          v83 = 0;
          v110 = *(_QWORD *)(v16 + 192);
          if ( v110 )
          {
            do
            {
              v84 = (__int64 *)(v81 + 24 * v83);
              v85 = *v84;
              if ( *v84 )
              {
                v84[1] = 0;
                v123 = v82;
                qfree(v85);
                v81 = *(_QWORD *)(v16 + 184);
                v82 = v123;
              }
              ++v83;
            }
            while ( v110 != v83 );
          }
          *(_QWORD *)(v16 + 192) = 0;
          v111 = v82;
          qfree(v81);
          v82 = v111;
        }
        v86 = *(_QWORD *)(v16 + 160);
        if ( v86 )
        {
          *(_QWORD *)(v16 + 168) = 0;
          v112 = v82;
          qfree(v86);
          v82 = v112;
        }
        v87 = *(_QWORD *)(v16 + 128);
        if ( v87 )
        {
          v88 = 0;
          v113 = *(_QWORD *)(v16 + 136);
          if ( v113 )
          {
            do
            {
              v89 = (__int64 *)(v87 + 32 * v88);
              v90 = *v89;
              if ( *v89 )
              {
                v89[1] = 0;
                v124 = v82;
                qfree(v90);
                v87 = *(_QWORD *)(v16 + 128);
                v82 = v124;
              }
              ++v88;
            }
            while ( v113 != v88 );
          }
          *(_QWORD *)(v16 + 136) = 0;
          v114 = v82;
          qfree(v87);
          v82 = v114;
        }
        v115 = v82;
        sub_2507D0(v16 + 16);
        j__qfree(v16);
        v17 = v115;
      }
      v91 = v128;
      if ( !v128 )
        v91 = v129;
      if ( *v91 == v17 )
      {
        v125 = 0;
        v18 = *(_QWORD *)v16;
        v54 = 0;
        v19 = 0;
        v126 = 0;
        goto LABEL_65;
      }
      goto LABEL_71;
    }
  }
LABEL_94:
  v92 = -(LODWORD(v133[0]) == -18);
LABEL_33:
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
LABEL_35:
  if ( v129 )
  {
    v130 = 0;
    qfree(v129);
  }
  return v92;
}
