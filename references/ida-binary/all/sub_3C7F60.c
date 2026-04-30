unsigned __int64 __fastcall sub_3C7F60(__int64 a1, const char *a2, const char *a3, __int64 a4, __int64 a5)
{
  size_t v8; // r15
  size_t v9; // r12
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // r12
  void *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // r13
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r12
  void *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r12
  void *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r13
  __int64 v45; // r12
  _BYTE *v46; // rax
  __int64 v47; // r14
  _BYTE *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // rax
  __m128i si128; // xmm0
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  __int64 v77; // r14
  __int64 v78; // rax
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // r13
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rsi
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  __int64 v102; // r13
  __int64 v103; // rax
  __m128i v104; // xmm0
  __m128i v105; // xmm0
  __int64 v106; // rax
  __int64 v107; // rsi
  unsigned int tinfo_size; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  void *v114; // rax
  void *v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // [rsp+0h] [rbp-98h]
  _QWORD *v131; // [rsp+8h] [rbp-90h]
  _QWORD *v132; // [rsp+8h] [rbp-90h]
  __int64 v133; // [rsp+18h] [rbp-80h]
  __int64 v134; // [rsp+20h] [rbp-78h]
  __int64 v135; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v138; // [rsp+58h] [rbp-40h]

  v138 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( a2 )
  {
    v8 = strlen(a2);
    src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
    n[0] = v8 + 1;
    memmove(src, a2, v8);
    *((_BYTE *)src + v8) = 0;
    v9 = n[0];
  }
  else
  {
    v9 = 0;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( v9 )
  {
    v114 = (void *)qalloc_or_throw(v9);
    *(_QWORD *)(a1 + 144) = v114;
    v115 = src;
    *(_QWORD *)(a1 + 160) = v9;
    memcpy(v114, v115, v9);
    *(_QWORD *)(a1 + 152) = v9;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_3C5140(a1 + 176, 2, -1);
  sub_3C5140(a1 + 176, 4, -1);
  if ( src )
  {
    n[0] = 0;
    qfree(src, &byte_4);
  }
  *(_QWORD *)a1 = &edit_argloc_dialog_t___vtable;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  if ( a3 )
  {
    v10 = strlen(a3);
    v11 = v10 + 1;
    v12 = v10;
    v13 = (void *)qvector_reserve(a1 + 264, 0, v10 + 1, 1);
    *(_QWORD *)(a1 + 264) = v13;
    *(_QWORD *)(a1 + 272) = v11;
    memmove(v13, a3, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 264) + v12) = 0;
  }
  *(_DWORD *)(a1 + 288) = 0;
  copy_argloc(a1 + 288, a4);
  *(_QWORD *)(a1 + 304) = 0;
  copy_tinfo_t(a1 + 304, a5, v14);
  v15 = *(__int64 **)(a1 + 176);
  v16 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  v17 = &v15[v16];
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  if ( v17 == v15 )
  {
LABEL_55:
    v18 = 0;
  }
  else
  {
    while ( 1 )
    {
      v18 = *v15;
      if ( *(_DWORD *)(*v15 + 132) == 2 )
        break;
      if ( v17 == ++v15 )
        goto LABEL_55;
    }
  }
  *(_DWORD *)(v18 + 12) = 12;
  v19 = operator new(0x28u);
  *(_QWORD *)(a1 + 104) = v19;
  v20 = (_QWORD *)v19;
  *(_QWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v19 + 32) = 2;
  *(_QWORD *)v19 = &forms::vlayout_t___vtable;
  *(_OWORD *)(v19 + 16) = 0;
  LODWORD(v19) = *(_DWORD *)(a1 + 288);
  *(_BYTE *)(a1 + 400) = (_DWORD)v19 == 0;
  *(_BYTE *)(a1 + 401) = (_DWORD)v19 == 1;
  *(_BYTE *)(a1 + 402) = (_DWORD)v19 == 2;
  *(_BYTE *)(a1 + 403) = (_DWORD)v19 == 3;
  *(_BYTE *)(a1 + 404) = (_DWORD)v19 == 4;
  v21 = operator new(0x90u);
  *(_QWORD *)(v21 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v21 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v21 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 48) = 0;
  *(_QWORD *)(v21 + 56) = 0;
  *(_QWORD *)(v21 + 80) = 0;
  *(_QWORD *)(v21 + 104) = 0;
  *(_QWORD *)v21 = &forms::container_t___vtable;
  *(_DWORD *)(v21 + 112) = 0;
  *(_QWORD *)(v21 + 120) = 0;
  *(_OWORD *)(v21 + 64) = 0;
  *(_OWORD *)(v21 + 88) = 0;
  *(_OWORD *)(v21 + 128) = 0;
  v22 = operator new(0x28u);
  *(_QWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v22 + 32) = 1;
  *(_QWORD *)v22 = &forms::hlayout_t___vtable;
  *(_QWORD *)(v21 + 104) = v22;
  *(_OWORD *)(v22 + 16) = 0;
  v130 = (_QWORD *)v22;
  v23 = operator new(0x90u);
  *(_QWORD *)(v23 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v23 + 24) = 0xFFFFFFFFLL;
  v24 = v23;
  *(_QWORD *)(v23 + 8) = 0xFFFFFFFF00000001LL;
  v133 = v23;
  *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v23 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v23 + 48) = 0;
  *(_QWORD *)(v23 + 56) = 0;
  *(_QWORD *)(v23 + 80) = 0;
  *(_QWORD *)(v23 + 104) = 0;
  *(_QWORD *)v23 = &forms::container_t___vtable;
  *(_DWORD *)(v23 + 112) = 0;
  *(_QWORD *)(v23 + 120) = 0;
  *(_OWORD *)(v23 + 64) = 0;
  *(_OWORD *)(v23 + 88) = 0;
  *(_OWORD *)(v23 + 128) = 0;
  v25 = operator new(0x28u);
  *(_QWORD *)v25 = &forms::vlayout_t___vtable;
  v26 = (_QWORD *)v25;
  *(_QWORD *)(v25 + 8) = 0;
  *(_DWORD *)(v25 + 32) = 2;
  *(_QWORD *)(v24 + 104) = v25;
  *(_OWORD *)(v25 + 16) = 0;
  v27 = operator new(0x88u);
  *(_QWORD *)(v27 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v27 + 8) = 0x200000006LL;
  *(_QWORD *)(v27 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v27 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v27 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v27 + 48) = 0;
  *(_QWORD *)(v27 + 56) = 0;
  *(_QWORD *)(v27 + 80) = 0;
  *(_QWORD *)v27 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v27 + 104) = a1 + 400;
  *(_QWORD *)(v27 + 112) = 0;
  *(_OWORD *)(v27 + 64) = 0;
  *(_OWORD *)(v27 + 88) = 0;
  *(_OWORD *)(v27 + 120) = 0;
  v28 = qvector_reserve(v27 + 112, 0, 6, 1);
  *(_QWORD *)(v27 + 112) = v28;
  *(_QWORD *)(v27 + 120) = 6;
  *(_DWORD *)v28 = 1953841446;
  *(_BYTE *)(v28 + 4) = 111;
  *(_BYTE *)(*(_QWORD *)(v27 + 112) + 5LL) = 0;
  v29 = v26[1];
  *(_QWORD *)v27 = &forms::radio_button_t___vtable;
  v131 = v26 + 1;
  v30 = v26[2];
  *(_DWORD *)(v27 + 32) = 1;
  if ( v26[3] < (unsigned __int64)(v30 + 1) )
  {
    v118 = qvector_reserve(v131, v29, v30 + 1, 8);
    v26[1] = v118;
    v29 = v118;
    v30 = v26[2];
  }
  *(_QWORD *)(v29 + 8 * v30) = v27;
  ++v26[2];
  v31 = operator new(0x88u);
  *(_QWORD *)v31 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v31 + 8) = 0x400000006LL;
  *(_QWORD *)(v31 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v31 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v31 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v31 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v31 + 48) = 0;
  *(_QWORD *)(v31 + 56) = 0;
  *(_QWORD *)(v31 + 80) = 0;
  *(_QWORD *)(v31 + 104) = a1 + 403;
  *(_QWORD *)(v31 + 112) = 0;
  *(_OWORD *)(v31 + 64) = 0;
  *(_OWORD *)(v31 + 88) = 0;
  *(_OWORD *)(v31 + 120) = 0;
  v32 = qvector_reserve(v31 + 112, 0, 10, 1);
  *(_QWORD *)(v31 + 112) = v32;
  *(_QWORD *)(v31 + 120) = 10;
  *(_QWORD *)v32 = 0x6574736967655226LL;
  *(_BYTE *)(v32 + 8) = 114;
  *(_BYTE *)(*(_QWORD *)(v31 + 112) + 9LL) = 0;
  v33 = v26[1];
  *(_QWORD *)v31 = &forms::radio_button_t___vtable;
  v34 = v26[2];
  *(_DWORD *)(v31 + 32) = 1;
  if ( v26[3] < (unsigned __int64)(v34 + 1) )
  {
    v117 = qvector_reserve(v131, v33, v34 + 1, 8);
    v26[1] = v117;
    v33 = v117;
    v34 = v26[2];
  }
  *(_QWORD *)(v33 + 8 * v34) = v31;
  ++v26[2];
  v35 = operator new(0x88u);
  *(_QWORD *)v35 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v35 + 8) = 0x500000006LL;
  *(_QWORD *)(v35 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v35 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v35 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v35 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v35 + 48) = 0;
  *(_QWORD *)(v35 + 56) = 0;
  *(_QWORD *)(v35 + 80) = 0;
  *(_QWORD *)(v35 + 104) = a1 + 404;
  *(_QWORD *)(v35 + 112) = 0;
  *(_OWORD *)(v35 + 64) = 0;
  *(_OWORD *)(v35 + 88) = 0;
  *(_OWORD *)(v35 + 120) = 0;
  v36 = (void *)qvector_reserve(v35 + 112, 0, 15, 1);
  *(_QWORD *)(v35 + 112) = v36;
  *(_QWORD *)(v35 + 120) = 15;
  qmemcpy(v36, "Register &pair", 14);
  *(_BYTE *)(*(_QWORD *)(v35 + 112) + 14LL) = 0;
  v37 = v26[1];
  *(_QWORD *)v35 = &forms::radio_button_t___vtable;
  v38 = v26[2];
  *(_DWORD *)(v35 + 32) = 1;
  if ( v26[3] < (unsigned __int64)(v38 + 1) )
  {
    v116 = qvector_reserve(v131, v37, v38 + 1, 8);
    v26[1] = v116;
    v37 = v116;
    v38 = v26[2];
  }
  *(_QWORD *)(v37 + 8 * v38) = v35;
  ++v26[2];
  v39 = operator new(0x88u);
  *(_QWORD *)v39 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v39 + 8) = 0x300000006LL;
  *(_QWORD *)(v39 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v39 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v39 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v39 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v39 + 48) = 0;
  *(_QWORD *)(v39 + 56) = 0;
  *(_QWORD *)(v39 + 80) = 0;
  *(_QWORD *)(v39 + 104) = a1 + 401;
  *(_QWORD *)(v39 + 112) = 0;
  *(_OWORD *)(v39 + 64) = 0;
  *(_OWORD *)(v39 + 88) = 0;
  *(_OWORD *)(v39 + 120) = 0;
  v40 = (void *)qvector_reserve(v39 + 112, 0, 14, 1);
  *(_QWORD *)(v39 + 112) = v40;
  *(_QWORD *)(v39 + 120) = 14;
  qmemcpy(v40, "&Stack offset", 13);
  *(_BYTE *)(*(_QWORD *)(v39 + 112) + 13LL) = 0;
  v41 = v26[1];
  *(_QWORD *)v39 = &forms::radio_button_t___vtable;
  v42 = v26[2];
  *(_DWORD *)(v39 + 32) = 1;
  if ( v26[3] < (unsigned __int64)(v42 + 1) )
  {
    v127 = qvector_reserve(v131, v41, v42 + 1, 8);
    v26[1] = v127;
    v41 = v127;
    v42 = v26[2];
  }
  *(_QWORD *)(v41 + 8 * v42) = v39;
  ++v26[2];
  v134 = operator new(0x90u);
  *(_QWORD *)(v134 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v134 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v134 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v134 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v134 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v134 + 48) = 0;
  *(_QWORD *)(v134 + 56) = 0;
  *(_QWORD *)(v134 + 80) = 0;
  *(_QWORD *)(v134 + 104) = 0;
  *(_QWORD *)v134 = &forms::container_t___vtable;
  *(_DWORD *)(v134 + 112) = 0;
  *(_QWORD *)(v134 + 120) = 0;
  *(_OWORD *)(v134 + 64) = 0;
  *(_OWORD *)(v134 + 88) = 0;
  *(_OWORD *)(v134 + 128) = 0;
  v43 = operator new(0x28u);
  *(_QWORD *)(v134 + 104) = v43;
  v44 = (_QWORD *)v43;
  *(_QWORD *)(v43 + 8) = 0;
  *(_DWORD *)(v43 + 32) = 4;
  *(_QWORD *)v43 = &forms::flayout_t___vtable;
  *(_OWORD *)(v43 + 16) = 0;
  v45 = operator new(0x88u);
  *(_QWORD *)(v45 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v45 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v45 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)v45 = &forms::label_t___vtable;
  *(_QWORD *)(v45 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v45 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v45 + 48) = 0;
  *(_QWORD *)(v45 + 56) = 0;
  *(_QWORD *)(v45 + 80) = 0;
  *(_QWORD *)(v45 + 104) = 0;
  *(_OWORD *)(v45 + 64) = 0;
  *(_OWORD *)(v45 + 88) = 0;
  *(_OWORD *)(v45 + 112) = 0;
  v46 = (_BYTE *)qvector_reserve(v45 + 104, 0, 1, 1);
  *(_QWORD *)(v45 + 104) = v46;
  *(_QWORD *)(v45 + 112) = 1;
  *v46 = 0;
  *(_BYTE *)(v45 + 128) = 0;
  *(_DWORD *)(v45 + 32) = 1;
  v47 = operator new(0x88u);
  *(_QWORD *)(v47 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v47 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v47 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)v47 = &forms::label_t___vtable;
  *(_QWORD *)(v47 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v47 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v47 + 48) = 0;
  *(_QWORD *)(v47 + 56) = 0;
  *(_QWORD *)(v47 + 80) = 0;
  *(_QWORD *)(v47 + 104) = 0;
  *(_OWORD *)(v47 + 64) = 0;
  *(_OWORD *)(v47 + 88) = 0;
  *(_OWORD *)(v47 + 112) = 0;
  v48 = (_BYTE *)qvector_reserve(v47 + 104, 0, 1, 1);
  *(_QWORD *)(v47 + 104) = v48;
  *(_QWORD *)(v47 + 112) = 1;
  *v48 = 0;
  v49 = v44[1];
  v132 = v44 + 1;
  v50 = v44[2];
  *(_BYTE *)(v47 + 128) = 0;
  *(_DWORD *)(v47 + 32) = 1;
  if ( v44[3] < (unsigned __int64)(v50 + 1) )
  {
    v126 = qvector_reserve(v132, v49, v50 + 1, 8);
    v44[1] = v126;
    v49 = v126;
    v50 = v44[2];
  }
  *(_QWORD *)(v49 + 8 * v50) = v47;
  v51 = v44[2];
  v52 = v44[1];
  v53 = v51 + 1;
  v54 = v51 + 2;
  v44[2] = v53;
  if ( v44[3] < v54 )
  {
    v125 = qvector_reserve(v132, v52, v54, 8);
    v44[1] = v125;
    v52 = v125;
    v53 = v44[2];
  }
  *(_QWORD *)(v52 + 8 * v53) = v45;
  ++v44[2];
  v55 = operator new(0x90u);
  *(_QWORD *)v55 = &forms::text_line_t___vtable;
  *(_QWORD *)(v55 + 8) = 0x800000003LL;
  *(_QWORD *)(v55 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v55 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v55 + 136) = a1 + 312;
  *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v55 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v55 + 48) = 0;
  *(_QWORD *)(v55 + 56) = 0;
  *(_QWORD *)(v55 + 80) = 0;
  *(_QWORD *)(v55 + 104) = 0;
  *(_QWORD *)(v55 + 128) = 0;
  v135 = a1 + 312;
  *(_OWORD *)(v55 + 64) = 0;
  *(_OWORD *)(v55 + 88) = 0;
  *(_OWORD *)(v55 + 112) = 0;
  v56 = qvector_reserve(v55 + 104, 0, 22, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD700);
  *(_QWORD *)(v55 + 104) = v56;
  *(_QWORD *)(v55 + 112) = 22;
  *(__m128i *)v56 = si128;
  *(_QWORD *)(v56 + 13) = 0x3172657473696765LL;
  *(_BYTE *)(*(_QWORD *)(v55 + 104) + 21LL) = 0;
  v58 = operator new(0x88u);
  *(_QWORD *)(v58 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v58 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v58 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v58 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v58 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v58 + 48) = 0;
  *(_QWORD *)(v58 + 56) = 0;
  *(_QWORD *)(v58 + 80) = 0;
  *(_QWORD *)v58 = &forms::label_t___vtable;
  *(_QWORD *)(v58 + 104) = 0;
  *(_OWORD *)(v58 + 64) = 0;
  *(_OWORD *)(v58 + 88) = 0;
  *(_OWORD *)(v58 + 112) = 0;
  v59 = qvector_reserve(v58 + 104, 0, 6, 1);
  *(_QWORD *)(v58 + 104) = v59;
  *(_QWORD *)(v58 + 112) = 6;
  *(_DWORD *)v59 = 1699901260;
  *(_BYTE *)(v59 + 4) = 103;
  *(_BYTE *)(*(_QWORD *)(v58 + 104) + 5LL) = 0;
  v60 = v44[2];
  *(_BYTE *)(v58 + 128) = 0;
  v61 = v44[1];
  *(_DWORD *)(v58 + 32) = 1;
  if ( v44[3] < (unsigned __int64)(v60 + 1) )
  {
    v124 = qvector_reserve(v132, v61, v60 + 1, 8);
    v44[1] = v124;
    v61 = v124;
    v60 = v44[2];
  }
  *(_QWORD *)(v61 + 8 * v60) = v58;
  v62 = v44[2];
  v63 = v44[1];
  v64 = v62 + 1;
  v65 = v62 + 2;
  v44[2] = v64;
  if ( v44[3] < v65 )
  {
    v123 = qvector_reserve(v132, v63, v65, 8);
    v44[1] = v123;
    v63 = v123;
    v64 = v44[2];
  }
  *(_QWORD *)(v63 + 8 * v64) = v55;
  ++v44[2];
  v66 = operator new(0x90u);
  *(_QWORD *)v66 = &forms::text_line_t___vtable;
  *(_QWORD *)(v66 + 8) = 0x900000003LL;
  *(_QWORD *)(v66 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v66 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v66 + 136) = a1 + 336;
  *(_QWORD *)(v66 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v66 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v66 + 48) = 0;
  *(_QWORD *)(v66 + 56) = 0;
  *(_QWORD *)(v66 + 80) = 0;
  *(_QWORD *)(v66 + 104) = 0;
  *(_QWORD *)(v66 + 128) = 0;
  *(_OWORD *)(v66 + 64) = 0;
  *(_OWORD *)(v66 + 88) = 0;
  *(_OWORD *)(v66 + 112) = 0;
  v67 = qvector_reserve(v66 + 104, 0, 22, 1);
  v68 = _mm_load_si128((const __m128i *)&xmmword_5DD700);
  *(_QWORD *)(v66 + 104) = v67;
  *(_QWORD *)(v66 + 112) = 22;
  *(__m128i *)v67 = v68;
  *(_QWORD *)(v67 + 13) = 0x3272657473696765LL;
  *(_BYTE *)(*(_QWORD *)(v66 + 104) + 21LL) = 0;
  v69 = operator new(0x88u);
  *(_QWORD *)(v69 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v69 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v69 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v69 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v69 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v69 + 48) = 0;
  *(_QWORD *)(v69 + 56) = 0;
  *(_QWORD *)(v69 + 80) = 0;
  *(_QWORD *)v69 = &forms::label_t___vtable;
  *(_QWORD *)(v69 + 104) = 0;
  *(_OWORD *)(v69 + 64) = 0;
  *(_OWORD *)(v69 + 88) = 0;
  *(_OWORD *)(v69 + 112) = 0;
  v70 = qvector_reserve(v69 + 104, 0, 6, 1);
  *(_QWORD *)(v69 + 104) = v70;
  *(_QWORD *)(v69 + 112) = 6;
  *(_DWORD *)v70 = 1699899720;
  *(_BYTE *)(v70 + 4) = 103;
  *(_BYTE *)(*(_QWORD *)(v69 + 104) + 5LL) = 0;
  v71 = v44[2];
  *(_BYTE *)(v69 + 128) = 0;
  v72 = v44[1];
  *(_DWORD *)(v69 + 32) = 1;
  if ( v44[3] < (unsigned __int64)(v71 + 1) )
  {
    v122 = qvector_reserve(v132, v72, v71 + 1, 8);
    v44[1] = v122;
    v72 = v122;
    v71 = v44[2];
  }
  *(_QWORD *)(v72 + 8 * v71) = v69;
  v73 = v44[2];
  v74 = v44[1];
  v75 = v73 + 1;
  v76 = v73 + 2;
  v44[2] = v75;
  if ( v44[3] < v76 )
  {
    v121 = qvector_reserve(v132, v74, v76, 8);
    v44[1] = v121;
    v74 = v121;
    v75 = v44[2];
  }
  *(_QWORD *)(v74 + 8 * v75) = v66;
  ++v44[2];
  v77 = operator new(0xB0u);
  *(_QWORD *)(v77 + 8) = 0xA00000004LL;
  *(_QWORD *)(v77 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v77 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v77 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v77 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v77 + 136) = a1 + 360;
  v78 = *(_QWORD *)(a1 + 360);
  *(_QWORD *)v77 = &forms::number_t___vtable;
  *(_QWORD *)(v77 + 48) = 0;
  *(_QWORD *)(v77 + 56) = 0;
  *(_QWORD *)(v77 + 80) = 0;
  *(_QWORD *)(v77 + 104) = 0;
  *(_QWORD *)(v77 + 128) = 0;
  *(_QWORD *)(v77 + 144) = 0;
  *(_BYTE *)(v77 + 152) = 1;
  *(_DWORD *)(v77 + 168) = 0;
  *(_QWORD *)(v77 + 160) = v78;
  *(_OWORD *)(v77 + 64) = 0;
  *(_OWORD *)(v77 + 88) = 0;
  *(_OWORD *)(v77 + 112) = 0;
  v79 = qvector_reserve(v77 + 104, 0, 19, 1);
  v80 = _mm_load_si128((const __m128i *)&xmmword_5DD710);
  *(_QWORD *)(v77 + 104) = v79;
  *(_QWORD *)(v77 + 112) = 19;
  *(_WORD *)(v79 + 16) = 29797;
  *(__m128i *)v79 = v80;
  *(_BYTE *)(*(_QWORD *)(v77 + 104) + 18LL) = 0;
  v81 = operator new(0x88u);
  *(_QWORD *)(v81 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v81 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v81 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v81 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v81 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v81 + 48) = 0;
  *(_QWORD *)(v81 + 56) = 0;
  *(_QWORD *)(v81 + 80) = 0;
  *(_QWORD *)v81 = &forms::label_t___vtable;
  *(_QWORD *)(v81 + 104) = 0;
  *(_OWORD *)(v81 + 64) = 0;
  *(_OWORD *)(v81 + 88) = 0;
  *(_OWORD *)(v81 + 112) = 0;
  v82 = qvector_reserve(v81 + 104, 0, 7, 1);
  *(_QWORD *)(v81 + 104) = v82;
  *(_QWORD *)(v81 + 112) = 7;
  *(_DWORD *)v82 = 1936090703;
  *(_WORD *)(v82 + 4) = 29797;
  *(_BYTE *)(*(_QWORD *)(v81 + 104) + 6LL) = 0;
  v83 = v44[2];
  *(_BYTE *)(v81 + 128) = 0;
  v84 = v44[1];
  *(_DWORD *)(v81 + 32) = 1;
  if ( v44[3] < (unsigned __int64)(v83 + 1) )
  {
    v120 = qvector_reserve(v132, v84, v83 + 1, 8);
    v44[1] = v120;
    v84 = v120;
    v83 = v44[2];
  }
  *(_QWORD *)(v84 + 8 * v83) = v81;
  v85 = v44[2];
  v86 = v44[1];
  v87 = v85 + 1;
  v88 = v85 + 2;
  v44[2] = v87;
  if ( v44[3] < v88 )
  {
    v119 = qvector_reserve(v132, v86, v88, 8);
    v44[1] = v119;
    v86 = v119;
    v87 = v44[2];
  }
  *(_QWORD *)(v86 + 8 * v87) = v77;
  ++v44[2];
  v89 = v130[2];
  v90 = v130[1];
  if ( v130[3] < (unsigned __int64)(v89 + 1) )
  {
    v90 = qvector_reserve(v130 + 1, v90, v89 + 1, 8);
    v130[1] = v90;
    v89 = v130[2];
  }
  *(_QWORD *)(v90 + 8 * v89) = v133;
  v91 = v130[2];
  v92 = v130[1];
  v93 = v91 + 1;
  v94 = v91 + 2;
  v130[2] = v93;
  if ( v130[3] < v94 )
  {
    v92 = qvector_reserve(v130 + 1, v92, v94, 8);
    v130[1] = v92;
    v93 = v130[2];
  }
  *(_QWORD *)(v92 + 8 * v93) = v134;
  ++v130[2];
  v95 = operator new(0x90u);
  v96 = v20[1];
  *(_QWORD *)(v95 + 48) = 0;
  *(_QWORD *)(v95 + 8) = 0xB00000003LL;
  *(_QWORD *)(v95 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v95 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v95 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v95 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v95 = &forms::text_line_t___vtable;
  *(_QWORD *)(v95 + 136) = a1 + 376;
  v97 = v20[2];
  *(_QWORD *)(v95 + 56) = 0;
  *(_QWORD *)(v95 + 80) = 0;
  *(_QWORD *)(v95 + 104) = 0;
  *(_QWORD *)(v95 + 128) = 0;
  *(_OWORD *)(v95 + 64) = 0;
  *(_OWORD *)(v95 + 88) = 0;
  *(_OWORD *)(v95 + 112) = 0;
  if ( v20[3] < (unsigned __int64)(v97 + 1) )
  {
    v113 = qvector_reserve(v20 + 1, v96, v97 + 1, 8);
    v20[1] = v113;
    v96 = v113;
    v97 = v20[2];
  }
  *(_QWORD *)(v96 + 8 * v97) = v95;
  v98 = v20[2];
  v99 = v20[1];
  v100 = v98 + 1;
  v101 = v98 + 2;
  v20[2] = v100;
  if ( v20[3] < v101 )
  {
    v112 = qvector_reserve(v20 + 1, v99, v101, 8);
    v20[1] = v112;
    v99 = v112;
    v100 = v20[2];
  }
  *(_QWORD *)(v99 + 8 * v100) = v21;
  ++v20[2];
  v102 = operator new(0x88u);
  *(_QWORD *)(v102 + 48) = 0;
  *(_QWORD *)(v102 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v102 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v102 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v102 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v102 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v102 + 56) = 0;
  *(_QWORD *)(v102 + 80) = 0;
  *(_QWORD *)v102 = &forms::label_t___vtable;
  *(_QWORD *)(v102 + 104) = 0;
  *(_OWORD *)(v102 + 64) = 0;
  *(_OWORD *)(v102 + 88) = 0;
  *(_OWORD *)(v102 + 112) = 0;
  v103 = qvector_reserve(v102 + 104, 0, 53, 1);
  v104 = _mm_load_si128((const __m128i *)&xmmword_5DD720);
  *(_QWORD *)(v102 + 104) = v103;
  *(_QWORD *)(v102 + 112) = 53;
  *(__m128i *)v103 = v104;
  v105 = _mm_load_si128((const __m128i *)&xmmword_5DD730);
  *(_DWORD *)(v103 + 48) = 1819042147;
  *(__m128i *)(v103 + 16) = v105;
  *(__m128i *)(v103 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DD740);
  *(_BYTE *)(*(_QWORD *)(v102 + 104) + 52LL) = 0;
  v106 = v20[2];
  *(_BYTE *)(v102 + 128) = 0;
  v107 = v20[1];
  *(_DWORD *)(v102 + 32) = 1;
  if ( v20[3] < (unsigned __int64)(v106 + 1) )
  {
    v111 = qvector_reserve(v20 + 1, v107, v106 + 1, 8);
    v20[1] = v111;
    v107 = v111;
    v106 = v20[2];
  }
  *(_QWORD *)(v107 + 8 * v106) = v102;
  ++v20[2];
  LODWORD(src) = 0;
  copy_argloc(&src, a1 + 288);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
  if ( !(unsigned int)verify_argloc(&src, tinfo_size, 0) )
  {
    if ( *(_BYTE *)(a1 + 403) )
    {
      v110 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
      get_reg_name(v135, LOWORD(n[0]), v110, 0xFFFFFFFFLL);
      *(_QWORD *)(a1 + 360) = WORD1(n[0]);
    }
    else if ( *(_BYTE *)(a1 + 404) )
    {
      v128 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
      get_reg_name(v135, LOWORD(n[0]), v128, 0xFFFFFFFFLL);
      v129 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
      get_reg_name(a1 + 336, WORD1(n[0]), v129, 0xFFFFFFFFLL);
    }
    else if ( *(_BYTE *)(a1 + 401) )
    {
      *(_QWORD *)(a1 + 360) = n[0];
    }
    else if ( !*(_BYTE *)(a1 + 402) && *(_BYTE *)(a1 + 400) )
    {
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 368) = 0;
    }
  }
  cleanup_argloc(&src);
  return v138 - __readfsqword(0x28u);
}
