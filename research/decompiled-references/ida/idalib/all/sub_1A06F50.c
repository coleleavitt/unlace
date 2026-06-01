void __fastcall sub_1A06F50(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned int v6; // r12d
  __int64 v9; // rax
  int v10; // r13d
  bool v11; // zf
  __int64 v12; // rax
  char v13; // r13
  unsigned int v14; // esi
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  size_t v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r15
  void *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rdx
  void *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  void *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  void *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  void *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r15
  void *v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // [rsp+0h] [rbp-188h]
  __int64 v96; // [rsp+0h] [rbp-188h]
  __int64 v97; // [rsp+8h] [rbp-180h]
  __int64 v98; // [rsp+8h] [rbp-180h]
  __int64 v99; // [rsp+8h] [rbp-180h]
  __int64 v100; // [rsp+8h] [rbp-180h]
  bool v101; // [rsp+17h] [rbp-171h]
  __int64 v102; // [rsp+18h] [rbp-170h]
  __int64 v103; // [rsp+18h] [rbp-170h]
  __int64 v104; // [rsp+28h] [rbp-160h] BYREF
  __m128i v105; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v106[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v107[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v108[2]; // [rsp+60h] [rbp-128h] BYREF
  __m128i v109; // [rsp+70h] [rbp-118h] BYREF
  void *v110; // [rsp+80h] [rbp-108h] BYREF
  signed __int64 v111; // [rsp+88h] [rbp-100h]
  __int64 v112; // [rsp+90h] [rbp-F8h] BYREF
  void *v113; // [rsp+A0h] [rbp-E8h] BYREF
  signed __int64 v114; // [rsp+A8h] [rbp-E0h]
  _BYTE v115[16]; // [rsp+B0h] [rbp-D8h] BYREF
  _QWORD v116[2]; // [rsp+C0h] [rbp-C8h] BYREF
  void *v117; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v118[11]; // [rsp+E0h] [rbp-A8h] BYREF
  char v119; // [rsp+138h] [rbp-50h]
  unsigned int v120; // [rsp+140h] [rbp-48h]
  char v121; // [rsp+144h] [rbp-44h]

  v4 = HIDWORD(a4);
  v6 = a4;
  v9 = a3[8].m128i_i64[1];
  if ( v9 )
  {
    v10 = *(_DWORD *)(a1 + 128);
    if ( !v10 )
      return;
    v11 = v10 == (unsigned int)sub_1805D60(*(_QWORD *)(v9 + 16) + 16LL, **(unsigned int **)(v9 + 16));
    v12 = *(_QWORD *)(a1 + 16);
    v13 = v11;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 232) + 89LL) & 2) != 0 )
      return;
    v13 = 1;
    if ( *(_BYTE *)(a1 + 136) )
      return;
  }
  v14 = a3[3].m128i_u32[0];
  v15 = *(__int64 **)(*(_QWORD *)(v12 + 248) + 17448LL);
  v105 = _mm_loadu_si128(a3 + 3);
  v16 = v15[47];
  v17 = v15[48] & 0x7FFFFFFF;
  v18 = HIDWORD(v16) & 0x7FFFFFFF;
  if ( (unsigned int)v16 < v14
    || (v19 = v105.m128i_i32[2] & 0x7FFFFFFF, v20 = v105.m128i_i32[1] & 0x7FFFFFFF, (_DWORD)v16 == v14)
    && (v20 > v18
     || v20 == v18
     && (v19 > (unsigned int)v17
      || (v105.m128i_i32[3] & 0x7FFFFFFFu) > (HIDWORD(v15[48]) & 0x7FFFFFFF) && v19 == (_DWORD)v17))
    || !v13 )
  {
    v21 = sub_B8FAD0(v15[45], v15[46]);
    v22 = *(unsigned int *)(a1 + 128);
    v106[0] = v21;
    v106[1] = v23;
    v107[0] = sub_22B6CA0(v22);
    v24 = a3[8].m128i_i64[1];
    v107[1] = v25;
    if ( v24 )
    {
      v26 = *(unsigned int **)(v24 + 16);
      v27 = *v26;
      v108[0] = v26 + 4;
    }
    else
    {
      v108[0] = &byte_22F0C30;
      v27 = j__strlen(&byte_22F0C30);
    }
    v108[1] = v27;
    v101 = v27 != 0;
    v28 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL);
    if ( v13 )
    {
      sub_168B9F0((__int64)v116, v28, v6, 0x1B38u, 0);
      if ( v119 )
      {
        v113 = (void *)__PAIR64__(v4, v6);
        LOBYTE(v114) = 1;
        sub_AEC610((__int64 *)v118, (__int64 *)&v113);
      }
      else
      {
        if ( !v121 )
        {
LABEL_12:
          v97 = sub_1682BA0((__int64)v116, (__int64)v106);
          sub_2257830(&v113, &v105);
          v29 = sub_1682AF0(v97, (__int64)&v113);
          v30 = v29;
          if ( *(_BYTE *)(v29 + 120) )
          {
            v98 = v29;
            sub_AE9DF0((unsigned __int8 **)(v29 + 32), v101, 2u);
            v30 = v98;
          }
          else if ( *(_BYTE *)(v29 + 132) )
          {
            v99 = v29;
            v60 = sub_168B9E0((_QWORD *)v29);
            v63 = v99;
            v64 = v60;
            v65 = *(void **)(v99 + 16);
            if ( v65 )
            {
              v103 = v64;
              v65 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v65 + 32LL))(v65);
              v64 = v103;
              v63 = v99;
            }
            v100 = v63;
            v110 = v65;
            v66 = sub_1587BC0(v64, (__int64 *)&v110, v64, v63, v61, v62);
            sub_AE9DF0((unsigned __int8 **)(*v66 + 32LL * *(unsigned int *)(v100 + 128) + 8), v101, 2u);
            v30 = v100;
          }
          sub_1682BA0(v30, (__int64)v107);
          if ( v113 != v115 )
            operator delete(v113);
          sub_15F7200(v116);
LABEL_17:
          sub_168B9F0((__int64)v116, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a2 + 24), 0x1877u, 0);
          if ( v119 )
          {
            sub_AE9DF0(v118, a2, 0xAu);
          }
          else if ( v121 )
          {
            v47 = sub_168B9E0(v116);
            v51 = v117;
            if ( v117 )
            {
              v102 = v47;
              v51 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v117 + 32LL))(v117);
              v47 = v102;
            }
            v113 = v51;
            v52 = sub_1587BC0(v47, (__int64 *)&v113, v47, v48, v49, v50);
            sub_AE9DF0((unsigned __int8 **)(*v52 + 32LL * v120 + 8), a2, 0xAu);
          }
          v31 = sub_1682BA0((__int64)v116, (__int64)v106);
          sub_2257830(&v110, &v105);
          if ( *(_BYTE *)(v31 + 120) )
          {
            sub_AEC220((unsigned __int8 **)(v31 + 32), v110, v111);
          }
          else if ( *(_BYTE *)(v31 + 132) )
          {
            v37 = sub_168B9E0((_QWORD *)v31);
            v38 = *(void **)(v31 + 16);
            if ( v38 )
              v38 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 32LL))(*(_QWORD *)(v31 + 16));
            v113 = v38;
            v39 = sub_1587BC0(v37, (__int64 *)&v113, v33, v34, v35, v36);
            sub_AEC220((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v31 + 128) + 8), v110, v111);
          }
          v109 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) + 17448LL)
                                                 + 376LL));
          sub_2257830(&v113, &v109);
          if ( *(_BYTE *)(v31 + 120) )
          {
            sub_AEC220((unsigned __int8 **)(v31 + 32), v113, v114);
          }
          else
          {
            if ( !*(_BYTE *)(v31 + 132) )
            {
LABEL_23:
              v32 = sub_1682BA0(v31, (__int64)v108);
              sub_1682BA0(v32, (__int64)v107);
              if ( v113 != v115 )
                operator delete(v113);
              if ( v110 != &v112 )
                operator delete(v110);
              sub_15F7200(v116);
              return;
            }
            v55 = sub_168B9E0((_QWORD *)v31);
            v58 = *(_QWORD *)(v31 + 16);
            if ( v58 )
              v58 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v58 + 32LL))(*(_QWORD *)(v31 + 16));
            v104 = v58;
            v59 = sub_1587BC0(v55, &v104, v53, v54, v56, v57);
            sub_AEC220((unsigned __int8 **)(*v59 + 32LL * *(unsigned int *)(v31 + 128) + 8), v113, v114);
          }
          if ( *(_BYTE *)(v31 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v31 + 32), v101, 2u);
          }
          else if ( *(_BYTE *)(v31 + 132) )
          {
            v42 = sub_168B9E0((_QWORD *)v31);
            v45 = *(_QWORD *)(v31 + 16);
            if ( v45 )
              v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v45 + 32LL))(*(_QWORD *)(v31 + 16));
            v104 = v45;
            v46 = sub_1587BC0(v42, &v104, v40, v41, v43, v44);
            sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * *(unsigned int *)(v31 + 128) + 8), v101, 2u);
          }
          goto LABEL_23;
        }
        v81 = sub_168B9E0(v116);
        v85 = v117;
        if ( v117 )
        {
          v96 = v81;
          v85 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v117 + 32LL))(v117);
          v81 = v96;
        }
        v110 = v85;
        v86 = sub_1587BC0(v81, (__int64 *)&v110, v81, v82, v83, v84);
        v87 = *v86 + 32LL * v120;
        v113 = (void *)__PAIR64__(v4, v6);
        LOBYTE(v114) = 1;
        sub_AEC610((__int64 *)(v87 + 8), (__int64 *)&v113);
      }
      if ( v119 )
      {
        sub_AE9DF0(v118, a2, 0xAu);
      }
      else if ( v121 )
      {
        v71 = sub_168B9E0(v116);
        v72 = v117;
        if ( v117 )
          v72 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v117 + 32LL))(v117);
        v113 = v72;
        v73 = sub_1587BC0(v71, (__int64 *)&v113, v67, v68, v69, v70);
        sub_AE9DF0((unsigned __int8 **)(*v73 + 32LL * v120 + 8), a2, 0xAu);
      }
      goto LABEL_12;
    }
    sub_168B9F0((__int64)v116, v28, v6, 0x1B39u, 0);
    if ( v119 )
    {
      v113 = (void *)__PAIR64__(v4, v6);
      LOBYTE(v114) = 1;
      sub_AEC610((__int64 *)v118, (__int64 *)&v113);
    }
    else
    {
      if ( !v121 )
      {
LABEL_34:
        sub_15F7200(v116);
        goto LABEL_17;
      }
      v74 = sub_168B9E0(v116);
      v78 = v117;
      if ( v117 )
      {
        v95 = v74;
        v78 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v117 + 32LL))(v117);
        v74 = v95;
      }
      v110 = v78;
      v79 = sub_1587BC0(v74, (__int64 *)&v110, v74, v75, v76, v77);
      v80 = *v79 + 32LL * v120;
      v113 = (void *)__PAIR64__(v4, v6);
      LOBYTE(v114) = 1;
      sub_AEC610((__int64 *)(v80 + 8), (__int64 *)&v113);
    }
    if ( v119 )
    {
      sub_AE9DF0(v118, a2, 0xAu);
    }
    else if ( v121 )
    {
      v92 = sub_168B9E0(v116);
      v93 = v117;
      if ( v117 )
        v93 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v117 + 32LL))(v117);
      v113 = v93;
      v94 = sub_1587BC0(v92, (__int64 *)&v113, v88, v89, v90, v91);
      sub_AE9DF0((unsigned __int8 **)(*v94 + 32LL * v120 + 8), a2, 0xAu);
    }
    goto LABEL_34;
  }
}
