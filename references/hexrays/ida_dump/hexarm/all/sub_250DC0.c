__int64 __fastcall sub_250DC0(_QWORD *a1, int a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, int, int); // rcx
  _QWORD *v4; // r12
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  __int64 v7; // r8
  unsigned int v8; // r13d
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64, int); // rax
  int v28; // eax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbp
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rdi
  _QWORD *v36; // rbp
  __int64 v37; // r14
  int v38; // r13d
  __int64 *v39; // r9
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rbp
  _QWORD *v44; // r15
  __int64 v45; // r12
  __int64 v46; // rbx
  _QWORD *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r13
  __int64 v55; // rbp
  __int64 v56; // rbx
  void *v57; // rax
  const void *v58; // rsi
  __int64 v59; // rbx
  __m128i *v60; // rax
  __int64 (__fastcall *v61)(__int64, int, int); // rax
  unsigned int v62; // r13d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // eax
  _QWORD *v67; // rsi
  __int64 v68; // r13
  unsigned __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // r13
  __int64 v72; // rax
  _QWORD *v73; // rbx
  bool v75; // cc
  _QWORD *v76; // rax
  int v77; // r13d
  _QWORD *v78; // rbx
  _DWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // r13
  unsigned __int64 v82; // r13
  size_t v83; // rbx
  void *v84; // rax
  int v85; // [rsp+8h] [rbp-100h]
  __int64 *v86; // [rsp+8h] [rbp-100h]
  __int64 v88; // [rsp+10h] [rbp-F8h]
  _QWORD *v89; // [rsp+18h] [rbp-F0h]
  _QWORD *v90; // [rsp+18h] [rbp-F0h]
  _QWORD *v91; // [rsp+20h] [rbp-E8h]
  size_t v92; // [rsp+28h] [rbp-E0h]
  size_t v93; // [rsp+28h] [rbp-E0h]
  size_t v94; // [rsp+28h] [rbp-E0h]
  __int64 v95; // [rsp+28h] [rbp-E0h]
  __int64 n; // [rsp+30h] [rbp-D8h]
  size_t na; // [rsp+30h] [rbp-D8h]
  __int64 *v99; // [rsp+40h] [rbp-C8h]
  __int64 v100; // [rsp+48h] [rbp-C0h]
  __int64 v101; // [rsp+50h] [rbp-B8h] BYREF
  int v102; // [rsp+58h] [rbp-B0h]
  __int64 v103; // [rsp+5Ch] [rbp-ACh]
  void *src[2]; // [rsp+68h] [rbp-A0h]
  __int128 v105; // [rsp+78h] [rbp-90h]
  __int64 v106; // [rsp+90h] [rbp-78h] BYREF
  int v107; // [rsp+98h] [rbp-70h]
  __int64 v108; // [rsp+9Ch] [rbp-6Ch]
  void *v109; // [rsp+B0h] [rbp-58h]
  __int128 v110; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v111; // [rsp+C8h] [rbp-40h]

  v3 = sub_64AD0;
  v4 = a1;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  v111 = __readfsqword(0x28u);
  if ( v5 == sub_64AD0 )
  {
    v7 = a1[6];
    v8 = **(_DWORD **)(v7 + 24LL * a2);
  }
  else
  {
    v8 = v5((__int64)a1, a2, 0);
  }
  v9 = (__int64)sub_250390(a1, v8, a3, (__int64)v3, v7);
  if ( (get_tinfo_property(*(_QWORD *)(v9 + 48), 2) & 0xF) == 0xB )
  {
    sub_32C5A0(&v106, *(_QWORD *)(a1[41] + 112LL), *(unsigned __int8 *)(a1[41] + 130LL));
    v9 = sub_245230(v9, &v106);
    clear_tinfo_t(&v106);
  }
  v10 = sub_312250(a1, v8);
  v11 = *(_QWORD *)(a1[22] + 8LL);
  if ( v10 >= *(_DWORD *)(v11 + 64) )
    sub_23E700();
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 528) + 8LL * v10) + 56LL);
  if ( !v12 || *(_DWORD *)v12 != 53 )
  {
    if ( !under_debugger )
      sub_3835A0(50383);
LABEL_91:
    BUG();
  }
  v13 = sub_241780(a3, *(_QWORD *)(v12 + 24));
  *((_DWORD *)v13 + 2) = 77;
  v14 = v13;
  v99 = v13;
  v15 = j__qalloc_or_throw(136);
  *(_QWORD *)v15 = -1;
  v16 = v15;
  *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  *(_QWORD *)(v15 + 64) = 0;
  *(_QWORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 80) = 0;
  *(_QWORD *)(v15 + 104) = 0;
  *(_QWORD *)(v15 + 112) = 0;
  *(_OWORD *)(v15 + 88) = 0;
  *(_OWORD *)(v15 + 120) = 0;
  v14[3] = v15;
  v17 = *(_QWORD *)v9;
  *(_QWORD *)v9 = *(_QWORD *)v16;
  v18 = *(_DWORD *)(v16 + 8);
  *(_QWORD *)v16 = v17;
  LODWORD(v17) = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 8) = v18;
  v19 = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 8) = v17;
  LODWORD(v17) = *(_DWORD *)(v9 + 12);
  *(_DWORD *)(v9 + 12) = v19;
  v20 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 12) = v17;
  v21 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 24) = v20;
  *(_QWORD *)(v16 + 24) = v21;
  v22 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(v16 + 32);
  v23 = *(_QWORD *)(v16 + 40);
  *(_QWORD *)(v16 + 32) = v22;
  v24 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 40) = v23;
  v25 = *(_QWORD *)(v16 + 48);
  *(_QWORD *)(v16 + 40) = v24;
  v26 = *(_QWORD *)(v9 + 48);
  *(_QWORD *)(v9 + 48) = v25;
  LODWORD(v25) = *(_DWORD *)(v16 + 56);
  *(_QWORD *)(v16 + 48) = v26;
  LODWORD(v26) = *(_DWORD *)(v9 + 56);
  *(_DWORD *)(v9 + 56) = v25;
  *(_DWORD *)(v16 + 56) = v26;
  if ( v9 )
  {
    sub_2559F0(v9);
    clear_tinfo_t(v9 + 48);
    j__qfree(v9);
  }
  if ( *(_DWORD *)v12 != 53 )
  {
    if ( !under_debugger )
      sub_3835A0(50384);
    goto LABEL_91;
  }
  v27 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  v89 = *(_QWORD **)(v12 + 56);
  if ( v27 == sub_64A90 )
  {
    if ( !a1[7] )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(v12 + 56) + 32LL);
      if ( v29 == -1 )
      {
        if ( *(_QWORD *)(v16 + 120) == -1 )
          return sub_242480(v16, v4[22], *v99, 0);
        v51 = v16 + 112;
        v101 = -1;
        v102 = 70;
        v103 = -1;
        v85 = -1;
        *(_OWORD *)src = 0;
        v105 = 0;
        goto LABEL_35;
      }
      goto LABEL_87;
    }
    v28 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v28 = v27((__int64)a1, a2);
  }
  v85 = v28 - 1;
  v29 = v28 - 1;
  if ( v29 != v89[4] )
  {
LABEL_87:
    if ( !under_debugger )
      sub_3835A0(50385);
    goto LABEL_91;
  }
  v30 = *(_QWORD *)(v16 + 120);
  if ( v29 == v30 )
    goto LABEL_25;
  v101 = -1;
  v102 = 70;
  v103 = -1;
  *(_OWORD *)src = 0;
  v105 = 0;
  if ( v29 >= v30 )
  {
    v51 = v16 + 112;
LABEL_35:
    v52 = *(_QWORD *)(v16 + 112);
    v53 = *(_QWORD *)(v16 + 128);
    if ( (unsigned __int64)&v101 < v52 || (unsigned __int64)&v101 >= v52 + 56 * v53 )
    {
      if ( v53 < v29 )
        *(_QWORD *)(v16 + 112) = qvector_reserve(v51, v52, v29, 56);
      v54 = *(_QWORD *)(v16 + 120);
      if ( v54 < v29 )
      {
        v55 = 56 * v54;
        do
        {
          while ( 1 )
          {
            v56 = v55 + *(_QWORD *)(v16 + 112);
            *(_QWORD *)v56 = -1;
            *(_DWORD *)(v56 + 8) = 70;
            *(_QWORD *)(v56 + 12) = -1;
            sub_25AE30(v56, &v101);
            *(_QWORD *)(v56 + 32) = 0;
            *(_OWORD *)(v56 + 40) = 0;
            if ( (_QWORD)v105 )
              break;
            ++v54;
            v55 += 56;
            if ( v54 == v29 )
              goto LABEL_43;
          }
          v93 = v105;
          n = 8 * v105;
          v57 = (void *)qalloc_or_throw(8 * v105);
          *(_QWORD *)(v56 + 32) = v57;
          ++v54;
          v58 = src[1];
          v55 += 56;
          *(_QWORD *)(v56 + 48) = v93;
          memcpy(v57, v58, n);
          *(_QWORD *)(v56 + 40) = v93;
        }
        while ( v54 != v29 );
      }
LABEL_43:
      *(_QWORD *)(v16 + 120) = v29;
    }
    else
    {
      v106 = -1;
      v107 = 70;
      v108 = -1;
      sub_25AE30(&v106, &v101);
      v81 = v105;
      v109 = nullptr;
      v110 = 0;
      if ( (_QWORD)v105 )
      {
        v95 = 8 * v105;
        v109 = (void *)qalloc_or_throw(8 * v105);
        *((_QWORD *)&v110 + 1) = v81;
        memcpy(v109, src[1], v95);
        *(_QWORD *)&v110 = v81;
      }
      if ( *(_QWORD *)(v16 + 128) < v29 )
        *(_QWORD *)(v16 + 112) = qvector_reserve(v51, *(_QWORD *)(v16 + 112), v29, 56);
      v82 = *(_QWORD *)(v16 + 120);
      if ( v82 < v29 )
      {
        v94 = 56 * v82;
        do
        {
          v83 = *(_QWORD *)(v16 + 112) + v94;
          *(_QWORD *)v83 = -1;
          *(_DWORD *)(v83 + 8) = 70;
          *(_QWORD *)(v83 + 12) = -1;
          sub_25AE30(v83, &v106);
          *(_QWORD *)(v83 + 32) = 0;
          *(_OWORD *)(v83 + 40) = 0;
          if ( (_QWORD)v110 )
          {
            na = v110;
            v100 = 8 * v110;
            v84 = (void *)qalloc_or_throw(8 * v110);
            *(_QWORD *)(v83 + 32) = v84;
            *(_QWORD *)(v83 + 48) = na;
            memcpy(v84, v109, v100);
            *(_QWORD *)(v83 + 40) = na;
          }
          ++v82;
          v94 += 56LL;
        }
        while ( v82 != v29 );
      }
      *(_QWORD *)(v16 + 120) = v29;
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        qfree(v109);
      }
      sub_255410(&v106);
    }
    goto LABEL_22;
  }
  v31 = v29;
  v32 = v30;
  v33 = 56 * v29;
  do
  {
    v34 = v33 + *(_QWORD *)(v16 + 112);
    v35 = *(_QWORD *)(v34 + 32);
    if ( v35 )
    {
      *(_QWORD *)(v34 + 40) = 0;
      qfree(v35);
    }
    ++v31;
    v33 += 56;
    sub_255410(v34);
  }
  while ( v31 < v32 );
  *(_QWORD *)(v16 + 120) = v29;
  v4 = a1;
LABEL_22:
  if ( src[1] )
  {
    *(_QWORD *)&v105 = 0;
    qfree(src[1]);
  }
  sub_255410(&v101);
LABEL_25:
  if ( v85 > 0 )
  {
    v36 = v89;
    v37 = 0;
    v92 = v85;
    do
    {
      v38 = 0;
      v39 = &v106;
      v40 = *v36 + 24 * v37;
      v41 = 56 * v37;
      v42 = 0;
      if ( *(_QWORD *)(v40 + 8) )
      {
        v90 = v36;
        v43 = v16;
        v44 = (_QWORD *)v40;
        v91 = v4;
        v45 = 56 * v37;
        v88 = v37;
        do
        {
          v46 = *(_QWORD *)(*v44 + 8 * v42);
          v47 = (_QWORD *)(v45 + *(_QWORD *)(v43 + 112));
          v106 = v46;
          v48 = v47[5];
          v49 = v47[4];
          if ( v47[6] < (unsigned __int64)(v48 + 1) )
          {
            v86 = v39;
            v50 = qvector_reserve(v47 + 4, v49, v48 + 1, 8);
            v39 = v86;
            v47[4] = v50;
            v49 = v50;
            v48 = v47[5];
          }
          ++v38;
          *(_QWORD *)(v49 + 8 * v48) = v46;
          v42 = v38;
          ++v47[5];
        }
        while ( (unsigned __int64)v38 < v44[1] );
        v16 = v43;
        v41 = v45;
        v37 = v88;
        v36 = v90;
        v4 = v91;
      }
      v59 = *(_QWORD *)(v16 + 112) + v41;
      *(_DWORD *)(v59 + 8) = 71;
      v60 = (__m128i *)qalloc_or_throw(24);
      v60[1].m128i_i64[0] = 0;
      *v60 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v60, (__m128i)(unsigned __int64)v60);
      *(_QWORD *)(v59 + 24) = v60;
      v61 = *(__int64 (__fastcall **)(__int64, int, int))(*v4 + 112LL);
      ++v37;
      if ( v61 == sub_64AD0 )
        v62 = *(_DWORD *)(*(_QWORD *)(v4[6] + 24LL * a2) + 4 * v37);
      else
        v62 = v61((__int64)v4, a2, v37);
      sub_2508D0(v4, v62, v59, 0);
      if ( (unsigned __int8)sub_241F00(v59, v62, v63, v64, v65) )
      {
        v66 = sub_312250(v4, v62);
        if ( v66 != -1 )
        {
          v67 = (_QWORD *)v4[30];
          if ( !v67 )
            goto LABEL_52;
          v68 = 24;
          v69 = *v67 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v69 )
            goto LABEL_66;
          if ( (*(_BYTE *)(*v67 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            goto LABEL_52;
          v68 = v69 + 24;
          v75 = v66 <= *(_DWORD *)(v69 + 24);
          if ( v66 < *(_DWORD *)(v69 + 24) )
          {
LABEL_59:
            v69 = *(_QWORD *)(v69 + 8);
            goto LABEL_60;
          }
          while ( !v75 )
          {
            v69 = *(_QWORD *)(v69 + 16);
LABEL_60:
            if ( (*(_BYTE *)v69 & 2) != 0 )
              goto LABEL_52;
            v68 = v69 + 24;
            v75 = v66 <= *(_DWORD *)(v69 + 24);
            if ( v66 < *(_DWORD *)(v69 + 24) )
              goto LABEL_59;
          }
          if ( (_QWORD *)v69 == v67 )
          {
LABEL_52:
            v70 = -1;
            v71 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4[22] + 8LL) + 528LL) + 8LL * v66);
            v72 = *(_QWORD *)(v71 + 56);
            if ( v72 )
              v70 = *(_QWORD *)(v72 + 24);
            v73 = sub_241780(v59, v70);
            if ( *(int *)(v71 + 376) <= 0 )
            {
              *((_DWORD *)v73 + 2) = 80;
              v80 = j__qalloc_or_throw(64);
              *(_QWORD *)(v80 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)v80 = -1;
              *(_QWORD *)(v80 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v80 + 40) = 0;
              *(_QWORD *)(v80 + 48) = 0;
              *(_DWORD *)(v80 + 56) = 0;
              *(_OWORD *)(v80 + 24) = 0;
              v73[3] = v80;
            }
            else
            {
              *((_DWORD *)v73 + 2) = 78;
            }
          }
          else
          {
LABEL_66:
            v76 = sub_241780(v59, -1);
            v77 = *(_DWORD *)(v68 + 4);
            *((_DWORD *)v76 + 2) = 81;
            v78 = v76;
            v79 = (_DWORD *)j__qalloc_or_throw(4);
            v78[3] = v79;
            *v79 = v77;
          }
        }
      }
    }
    while ( v92 != v37 );
  }
  return sub_242480(v16, v4[22], *v99, 0);
}
