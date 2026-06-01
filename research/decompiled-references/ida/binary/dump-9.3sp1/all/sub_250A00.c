__int64 __fastcall sub_250A00(_QWORD *a1, int a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, int, int); // rcx
  _QWORD *v4; // r12
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  unsigned int v7; // r13d
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // edx
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64, int); // rax
  int v32; // eax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbp
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  unsigned __int64 *v41; // rbp
  __int64 v42; // r14
  unsigned __int64 v43; // rdx
  int v44; // r13d
  __int64 *v45; // r9
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbp
  _QWORD *v50; // r15
  __int64 v51; // r12
  __int64 v52; // rbx
  _QWORD *v53; // r14
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r13
  __int64 v59; // rbp
  __int64 v60; // rbx
  void *v61; // rax
  __int64 v62; // rbx
  __m128i *v63; // rax
  __int64 (__fastcall *v64)(__int64, int, int); // rax
  unsigned int v65; // r13d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  _QWORD *v70; // rsi
  __int64 v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 *v77; // rbx
  bool v79; // cc
  __int64 *v80; // rax
  int v81; // r13d
  __int64 *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  _DWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r13
  unsigned __int64 v91; // r13
  size_t v92; // rbx
  void *v93; // rax
  void *v94; // rax
  int v95; // [rsp+8h] [rbp-100h]
  __int64 *v96; // [rsp+8h] [rbp-100h]
  __int64 v98; // [rsp+10h] [rbp-F8h]
  unsigned __int64 *v99; // [rsp+18h] [rbp-F0h]
  unsigned __int64 *v100; // [rsp+18h] [rbp-F0h]
  _QWORD *v101; // [rsp+20h] [rbp-E8h]
  size_t v102; // [rsp+28h] [rbp-E0h]
  size_t v103; // [rsp+28h] [rbp-E0h]
  size_t v104; // [rsp+28h] [rbp-E0h]
  __int64 v105; // [rsp+28h] [rbp-E0h]
  __int64 n; // [rsp+30h] [rbp-D8h]
  size_t na; // [rsp+30h] [rbp-D8h]
  __int64 *v109; // [rsp+40h] [rbp-C8h]
  __int64 v110; // [rsp+48h] [rbp-C0h]
  __int64 v111; // [rsp+50h] [rbp-B8h] BYREF
  int v112; // [rsp+58h] [rbp-B0h]
  __int64 v113; // [rsp+5Ch] [rbp-ACh]
  void *src[2]; // [rsp+68h] [rbp-A0h]
  __int128 v115; // [rsp+78h] [rbp-90h]
  __int64 v116; // [rsp+90h] [rbp-78h] BYREF
  int v117; // [rsp+98h] [rbp-70h]
  __int64 v118; // [rsp+9Ch] [rbp-6Ch]
  void *v119; // [rsp+B0h] [rbp-58h]
  __int128 v120; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-40h]

  v3 = sub_650D0;
  v4 = a1;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  v121 = __readfsqword(0x28u);
  if ( v5 == sub_650D0 )
    v7 = **(_DWORD **)(a1[6] + 24LL * a2);
  else
    v7 = v5((__int64)a1, a2, 0);
  v8 = sub_24FFD0(a1, v7, a3, (__int64)v3);
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    sub_32C270(&v116, *(_QWORD *)(a1[41] + 112LL), *(unsigned __int8 *)(a1[41] + 130LL));
    v8 = sub_244E70(v8, (__int64)&v116, v86, v87);
    clear_tinfo_t();
  }
  v9 = sub_311E90(a1, v7);
  v11 = *(_QWORD *)(a1[22] + 8LL);
  if ( v9 >= *(_DWORD *)(v11 + 64) )
    sub_23E340();
  v12 = *(_QWORD *)(v11 + 528);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8LL * v9) + 56LL);
  if ( !v13 || *(_DWORD *)v13 != 53 )
  {
    if ( !under_debugger )
      sub_383060(50383);
LABEL_91:
    BUG();
  }
  v14 = *(_QWORD *)(v13 + 24);
  v15 = sub_2413C0(a3, v14, v12, v10);
  *((_DWORD *)v15 + 2) = 77;
  v16 = v15;
  v109 = v15;
  v19 = j__qalloc_or_throw(136, v14, v17, v18);
  *(_QWORD *)v19 = -1;
  v20 = v19;
  *(_QWORD *)(v19 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0;
  *(_DWORD *)(v19 + 56) = 0;
  *(_QWORD *)(v19 + 64) = 0;
  *(_QWORD *)(v19 + 72) = 0;
  *(_QWORD *)(v19 + 80) = 0;
  *(_QWORD *)(v19 + 104) = 0;
  *(_QWORD *)(v19 + 112) = 0;
  *(_OWORD *)(v19 + 88) = 0;
  *(_OWORD *)(v19 + 120) = 0;
  v16[3] = v19;
  v21 = *(_QWORD *)v8;
  *(_QWORD *)v8 = *(_QWORD *)v20;
  v22 = *(_DWORD *)(v20 + 8);
  *(_QWORD *)v20 = v21;
  LODWORD(v21) = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = v22;
  v23 = *(_DWORD *)(v20 + 12);
  *(_DWORD *)(v20 + 8) = v21;
  LODWORD(v21) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v8 + 12) = v23;
  v24 = *(_QWORD *)(v20 + 24);
  *(_DWORD *)(v20 + 12) = v21;
  v25 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 24) = v24;
  *(_QWORD *)(v20 + 24) = v25;
  v26 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v20 + 32);
  v27 = *(_QWORD *)(v20 + 40);
  *(_QWORD *)(v20 + 32) = v26;
  v28 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 40) = v27;
  v29 = *(_QWORD *)(v20 + 48);
  *(_QWORD *)(v20 + 40) = v28;
  v30 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = v29;
  LODWORD(v29) = *(_DWORD *)(v20 + 56);
  *(_QWORD *)(v20 + 48) = v30;
  LODWORD(v30) = *(_DWORD *)(v8 + 56);
  *(_DWORD *)(v8 + 56) = v29;
  *(_DWORD *)(v20 + 56) = v30;
  if ( v8 )
  {
    sub_255630(v8);
    clear_tinfo_t();
    j__qfree(v8);
  }
  if ( *(_DWORD *)v13 != 53 )
  {
    if ( !under_debugger )
      sub_383060(50384);
    goto LABEL_91;
  }
  v31 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  v99 = *(unsigned __int64 **)(v13 + 56);
  if ( v31 == sub_65090 )
  {
    if ( !a1[7] )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(v13 + 56) + 32LL);
      if ( v33 == -1 )
      {
        if ( *(_QWORD *)(v20 + 120) == -1 )
          return sub_2420C0(v20, v4[22], *v109, 0);
        v56 = v20 + 112;
        v111 = -1;
        v112 = 70;
        v113 = -1;
        v95 = -1;
        *(_OWORD *)src = 0;
        v115 = 0;
        goto LABEL_35;
      }
      goto LABEL_87;
    }
    v32 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v14 = (unsigned int)a2;
    v32 = v31((__int64)a1, a2);
  }
  v95 = v32 - 1;
  v33 = v32 - 1;
  if ( v33 != v99[4] )
  {
LABEL_87:
    if ( !under_debugger )
      sub_383060(50385);
    goto LABEL_91;
  }
  v34 = *(_QWORD *)(v20 + 120);
  if ( v33 == v34 )
    goto LABEL_25;
  v111 = -1;
  v112 = 70;
  v113 = -1;
  *(_OWORD *)src = 0;
  v115 = 0;
  if ( v33 >= v34 )
  {
    v56 = v20 + 112;
LABEL_35:
    v14 = *(_QWORD *)(v20 + 112);
    v57 = *(_QWORD *)(v20 + 128);
    if ( (unsigned __int64)&v111 < v14 || (unsigned __int64)&v111 >= v14 + 56 * v57 )
    {
      if ( v57 < v33 )
        *(_QWORD *)(v20 + 112) = qvector_reserve(v56, v14, v33, 56);
      v58 = *(_QWORD *)(v20 + 120);
      if ( v58 < v33 )
      {
        v59 = 56 * v58;
        do
        {
          while ( 1 )
          {
            v14 = (unsigned __int64)&v111;
            v60 = v59 + *(_QWORD *)(v20 + 112);
            *(_QWORD *)v60 = -1;
            *(_DWORD *)(v60 + 8) = 70;
            *(_QWORD *)(v60 + 12) = -1;
            sub_25AA70(v60, &v111);
            *(_QWORD *)(v60 + 32) = 0;
            *(_OWORD *)(v60 + 40) = 0;
            if ( (_QWORD)v115 )
              break;
            ++v58;
            v59 += 56;
            if ( v58 == v33 )
              goto LABEL_43;
          }
          v103 = v115;
          n = 8 * v115;
          v61 = (void *)qalloc_or_throw(8 * v115, (__int64)&v111, 8 * v115, v115);
          *(_QWORD *)(v60 + 32) = v61;
          ++v58;
          v14 = (unsigned __int64)src[1];
          v59 += 56;
          *(_QWORD *)(v60 + 48) = v103;
          memcpy(v61, (const void *)v14, n);
          *(_QWORD *)(v60 + 40) = v103;
        }
        while ( v58 != v33 );
      }
LABEL_43:
      *(_QWORD *)(v20 + 120) = v33;
    }
    else
    {
      v14 = (unsigned __int64)&v111;
      v116 = -1;
      v117 = 70;
      v118 = -1;
      sub_25AA70(&v116, &v111);
      v90 = v115;
      v119 = nullptr;
      v120 = 0;
      if ( (_QWORD)v115 )
      {
        v105 = 8 * v115;
        v94 = (void *)qalloc_or_throw(8 * v115, (__int64)&v111, 8 * v115, v89);
        v14 = (unsigned __int64)src[1];
        v119 = v94;
        *((_QWORD *)&v120 + 1) = v90;
        memcpy(v94, src[1], v105);
        *(_QWORD *)&v120 = v90;
      }
      if ( *(_QWORD *)(v20 + 128) < v33 )
      {
        v14 = *(_QWORD *)(v20 + 112);
        *(_QWORD *)(v20 + 112) = qvector_reserve(v56, v14, v33, 56);
      }
      v91 = *(_QWORD *)(v20 + 120);
      if ( v91 < v33 )
      {
        v104 = 56 * v91;
        do
        {
          v14 = (unsigned __int64)&v116;
          v92 = *(_QWORD *)(v20 + 112) + v104;
          *(_QWORD *)v92 = -1;
          *(_DWORD *)(v92 + 8) = 70;
          *(_QWORD *)(v92 + 12) = -1;
          sub_25AA70(v92, &v116);
          *(_QWORD *)(v92 + 32) = 0;
          *(_OWORD *)(v92 + 40) = 0;
          if ( (_QWORD)v120 )
          {
            na = v120;
            v110 = 8 * v120;
            v93 = (void *)qalloc_or_throw(8 * v120, (__int64)&v116, 8 * v120, v120);
            *(_QWORD *)(v92 + 32) = v93;
            *(_QWORD *)(v92 + 48) = na;
            v14 = (unsigned __int64)v119;
            memcpy(v93, v119, v110);
            *(_QWORD *)(v92 + 40) = na;
          }
          ++v91;
          v104 += 56LL;
        }
        while ( v91 != v33 );
      }
      *(_QWORD *)(v20 + 120) = v33;
      if ( v119 )
      {
        *(_QWORD *)&v120 = 0;
        qfree((__int64)v119);
      }
      sub_255050(&v116);
    }
    goto LABEL_22;
  }
  v35 = v33;
  v36 = v34;
  v37 = 56 * v33;
  do
  {
    v38 = v37 + *(_QWORD *)(v20 + 112);
    v39 = *(_QWORD *)(v38 + 32);
    if ( v39 )
    {
      *(_QWORD *)(v38 + 40) = 0;
      qfree(v39);
    }
    ++v35;
    v37 += 56;
    sub_255050(v38);
  }
  while ( v35 < v36 );
  *(_QWORD *)(v20 + 120) = v33;
  v4 = a1;
LABEL_22:
  if ( src[1] )
  {
    *(_QWORD *)&v115 = 0;
    qfree((__int64)src[1]);
  }
  sub_255050(&v111);
LABEL_25:
  v40 = (unsigned int)v95;
  if ( v95 > 0 )
  {
    v41 = v99;
    v42 = 0;
    v102 = v95;
    do
    {
      v43 = *v41;
      v44 = 0;
      v45 = &v116;
      v46 = *v41 + 24 * v42;
      v47 = 56 * v42;
      v48 = 0;
      if ( *(_QWORD *)(v46 + 8) )
      {
        v100 = v41;
        v49 = v20;
        v50 = (_QWORD *)v46;
        v101 = v4;
        v51 = 56 * v42;
        v98 = v42;
        do
        {
          v52 = *(_QWORD *)(*v50 + 8 * v48);
          v53 = (_QWORD *)(v51 + *(_QWORD *)(v49 + 112));
          v116 = v52;
          v54 = v53[5];
          v43 = v53[6];
          v14 = v53[4];
          if ( v43 < v54 + 1 )
          {
            v96 = v45;
            v55 = qvector_reserve((__int64)(v53 + 4), v14, v54 + 1, 8);
            v45 = v96;
            v53[4] = v55;
            v14 = v55;
            v54 = v53[5];
          }
          ++v44;
          *(_QWORD *)(v14 + 8 * v54) = v52;
          v48 = v44;
          ++v53[5];
        }
        while ( (unsigned __int64)v44 < v50[1] );
        v20 = v49;
        v47 = v51;
        v42 = v98;
        v41 = v100;
        v4 = v101;
      }
      v62 = *(_QWORD *)(v20 + 112) + v47;
      *(_DWORD *)(v62 + 8) = 71;
      v63 = (__m128i *)qalloc_or_throw(24, v14, v43, v40);
      v63[1].m128i_i64[0] = 0;
      *v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v63, (__m128i)(unsigned __int64)v63);
      *(_QWORD *)(v62 + 24) = v63;
      v64 = *(__int64 (__fastcall **)(__int64, int, int))(*v4 + 112LL);
      ++v42;
      if ( v64 == sub_650D0 )
        v65 = *(_DWORD *)(*(_QWORD *)(v4[6] + 24LL * a2) + 4 * v42);
      else
        v65 = v64((__int64)v4, a2, v42);
      v14 = v65;
      sub_250510(v4, v65, v62, 0);
      if ( (unsigned __int8)sub_241B40(v62, v65, v66, v67, v68) )
      {
        v14 = v65;
        v69 = sub_311E90(v4, v65);
        if ( v69 != -1 )
        {
          v70 = (_QWORD *)v4[30];
          if ( !v70 )
            goto LABEL_52;
          v71 = 24;
          v40 = *v70 & 0xFFFFFFFFFFFFFFFCLL;
          v72 = v40;
          if ( !v40 )
            goto LABEL_66;
          if ( (*(_BYTE *)v40 & 2) != 0 )
            goto LABEL_52;
          v71 = v40 + 24;
          v79 = v69 <= *(_DWORD *)(v40 + 24);
          if ( v69 < *(_DWORD *)(v40 + 24) )
          {
LABEL_59:
            v72 = *(_QWORD *)(v72 + 8);
            goto LABEL_60;
          }
          while ( !v79 )
          {
            v72 = *(_QWORD *)(v72 + 16);
LABEL_60:
            if ( (*(_BYTE *)v72 & 2) != 0 )
              goto LABEL_52;
            v71 = v72 + 24;
            v79 = v69 <= *(_DWORD *)(v72 + 24);
            if ( v69 < *(_DWORD *)(v72 + 24) )
              goto LABEL_59;
          }
          if ( (_QWORD *)v72 == v70 )
          {
LABEL_52:
            v14 = -1;
            v73 = *(_QWORD *)(*(_QWORD *)(v4[22] + 8LL) + 528LL);
            v74 = *(_QWORD *)(v73 + 8LL * v69);
            v75 = *(_QWORD *)(v74 + 56);
            if ( v75 )
              v14 = *(_QWORD *)(v75 + 24);
            v77 = sub_2413C0(v62, v14, v73, v40);
            if ( *(int *)(v74 + 376) <= 0 )
            {
              *((_DWORD *)v77 + 2) = 80;
              v88 = j__qalloc_or_throw(64, v14, v76, v40);
              *(_QWORD *)(v88 + 8) = 0xFFFFFFFF00000000LL;
              v40 = 0xFFFFFFFFLL;
              *(_QWORD *)v88 = -1;
              *(_QWORD *)(v88 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v88 + 40) = 0;
              *(_QWORD *)(v88 + 48) = 0;
              *(_DWORD *)(v88 + 56) = 0;
              *(_OWORD *)(v88 + 24) = 0;
              v77[3] = v88;
            }
            else
            {
              *((_DWORD *)v77 + 2) = 78;
            }
          }
          else
          {
LABEL_66:
            v14 = -1;
            v80 = sub_2413C0(v62, -1, v72, v40);
            v81 = *(_DWORD *)(v71 + 4);
            *((_DWORD *)v80 + 2) = 81;
            v82 = v80;
            v85 = (_DWORD *)j__qalloc_or_throw(4, -1, v83, v84);
            v82[3] = (__int64)v85;
            *v85 = v81;
          }
        }
      }
    }
    while ( v102 != v42 );
  }
  return sub_2420C0(v20, v4[22], *v109, 0);
}
