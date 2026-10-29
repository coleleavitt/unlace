__int64 __fastcall sub_7F80F0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // r12
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rcx
  __int64 (__fastcall *v36)(); // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  _QWORD *v43; // rcx
  _QWORD *v44; // rbx
  _QWORD *v45; // rbx
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _QWORD *v50; // rcx
  _QWORD *v51; // rbx
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v64; // r13d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r12d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // r15d
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // r15d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rcx
  unsigned int v80; // ecx
  size_t v81; // rsi
  unsigned int *v82; // rax
  unsigned int v83; // r15d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  unsigned int v93; // [rsp+Ch] [rbp-15Ch]
  __int64 v94; // [rsp+10h] [rbp-158h] BYREF
  __int64 v95; // [rsp+18h] [rbp-150h] BYREF
  __int64 v96; // [rsp+20h] [rbp-148h] BYREF
  __int64 v97; // [rsp+28h] [rbp-140h] BYREF
  _QWORD *v98; // [rsp+30h] [rbp-138h] BYREF
  __int64 v99; // [rsp+38h] [rbp-130h] BYREF
  _QWORD v100[2]; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v101[2]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v102[2]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v103[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v104[2]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v105[2]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v106[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v107[2]; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD v108[2]; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v109[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v110[2]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v111[2]; // [rsp+F0h] [rbp-78h] BYREF
  _QWORD v112[2]; // [rsp+100h] [rbp-68h] BYREF
  __int64 v113[11]; // [rsp+110h] [rbp-58h] BYREF

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  v9 = (_QWORD *)sub_186B270(0xC0u);
  *v9 = 0;
  v9[1] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[15] = 0;
  v9[16] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[21] = 0;
  v9[22] = 0;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 24) = 8;
  *(_DWORD *)(a1 + 32) = 0;
  v10 = sub_186B270(0xE8u);
  *(_QWORD *)v10 = &off_1C54C38;
  *(_QWORD *)(v10 + 8) = a2;
  sub_16669D0(v10 + 16, a2);
  *(_QWORD *)(v10 + 32) = 0;
  *(_BYTE *)(v10 + 40) = 0;
  v11 = sub_186B270(0x140u);
  *(_QWORD *)v11 = 0;
  *(_QWORD *)(v11 + 224) = 1;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 24) = 1;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 1;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = 1;
  *(_QWORD *)(v11 + 112) = 0;
  *(_QWORD *)(v11 + 120) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 144) = 1;
  *(_QWORD *)(v11 + 152) = 0;
  *(_QWORD *)(v11 + 160) = 0;
  *(_QWORD *)(v11 + 168) = 0;
  *(_QWORD *)(v11 + 176) = 0;
  *(_QWORD *)(v11 + 184) = 1;
  *(_QWORD *)(v11 + 192) = 0;
  *(_QWORD *)(v11 + 200) = 0;
  *(_QWORD *)(v11 + 208) = 0;
  *(_QWORD *)(v11 + 216) = 0;
  *(_BYTE *)(v11 + 228) = 0;
  *(_QWORD *)(v11 + 248) = 0;
  *(_OWORD *)(v11 + 232) = 0;
  *(_QWORD *)(v11 + 256) = 0;
  *(_QWORD *)(v11 + 264) = 1;
  *(_QWORD *)(v11 + 272) = 0;
  *(_QWORD *)(v11 + 280) = 0;
  *(_QWORD *)(v11 + 288) = 0;
  *(_QWORD *)(v11 + 296) = 0;
  *(_QWORD *)(v11 + 304) = 1;
  *(_QWORD *)(v11 + 312) = 0;
  *(_QWORD *)(v10 + 48) = v11;
  *(_QWORD *)(v10 + 56) = 8;
  *(_DWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 88) = 1;
  *(_QWORD *)(v10 + 96) = 0;
  v12 = sub_186B270(0x140u);
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 224) = 1;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 1;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 1;
  *(_QWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_QWORD *)(v12 + 104) = 1;
  *(_QWORD *)(v12 + 112) = 0;
  *(_QWORD *)(v12 + 120) = 0;
  *(_QWORD *)(v12 + 128) = 0;
  *(_QWORD *)(v12 + 136) = 0;
  *(_QWORD *)(v12 + 144) = 1;
  *(_QWORD *)(v12 + 152) = 0;
  *(_QWORD *)(v12 + 160) = 0;
  *(_QWORD *)(v12 + 168) = 0;
  *(_QWORD *)(v12 + 176) = 0;
  *(_QWORD *)(v12 + 184) = 1;
  *(_QWORD *)(v12 + 192) = 0;
  *(_QWORD *)(v12 + 200) = 0;
  *(_QWORD *)(v12 + 208) = 0;
  *(_QWORD *)(v12 + 216) = 0;
  *(_BYTE *)(v12 + 228) = 0;
  *(_QWORD *)(v12 + 248) = 0;
  *(_OWORD *)(v12 + 232) = 0;
  *(_QWORD *)(v12 + 256) = 0;
  *(_QWORD *)(v12 + 264) = 1;
  *(_QWORD *)(v12 + 272) = 0;
  *(_QWORD *)(v12 + 280) = 0;
  *(_QWORD *)(v12 + 288) = 0;
  *(_QWORD *)(v12 + 296) = 0;
  *(_QWORD *)(v12 + 304) = 1;
  *(_QWORD *)(v12 + 312) = 0;
  *(_QWORD *)(v10 + 104) = v12;
  *(_QWORD *)(v10 + 112) = 8;
  *(_DWORD *)(v10 + 120) = 0;
  *(_QWORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 136) = 0;
  *(_QWORD *)(v10 + 144) = 1;
  *(_QWORD *)(v10 + 168) = 0;
  *(_OWORD *)(v10 + 152) = 0;
  sub_180C5A0(v10 + 176, "farkas");
  sub_180C5A0(v10 + 184, "implied-eq");
  sub_180C5A0(v10 + 192, "bound");
  sub_180C5A0(v10 + 200, "cut");
  v13 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(v10 + 224) = 0;
  *(_OWORD *)(v10 + 208) = 0;
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v64 = (3 * v14 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v65 || v14 >= v64 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (unsigned int *)sub_186B300(v13 - 1, v65);
      v67 = v66[1];
      v13 = v66 + 2;
      *v66 = v64;
      *(_QWORD *)(a1 + 8) = v66 + 2;
      LODWORD(v66) = v67;
      v17 = &v13[v67];
      v16 = (_DWORD)v66 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v88 = (_QWORD *)sub_186B270(0x18u);
    v13 = v88 + 1;
    *v88 = 2;
    v16 = 1;
    *(_QWORD *)(a1 + 8) = v13;
    v17 = v13;
  }
  *v17 = v10;
  *((_DWORD *)v13 - 1) = v16;
  v18 = *(_QWORD *)(v10 + 176);
  v103[1] = v10;
  v103[0] = v18;
  sub_7FEA60(a1 + 16, v103);
  v19 = *(_QWORD *)(v10 + 192);
  v102[1] = v10;
  v102[0] = v19;
  sub_7FEA60(a1 + 16, v102);
  v20 = *(_QWORD *)(v10 + 184);
  v101[1] = v10;
  v101[0] = v20;
  sub_7FEA60(a1 + 16, v101);
  v21 = *(_QWORD *)(v10 + 200);
  v100[1] = v10;
  v100[0] = v21;
  sub_7FEA60(a1 + 16, v100);
  v22 = sub_186B270(0x68u);
  *(_QWORD *)v22 = &off_1C54CF8;
  *(_QWORD *)(v22 + 8) = a2;
  sub_16669D0(v22 + 16, a2);
  *(_QWORD *)(v22 + 32) = a2;
  *(_QWORD *)(v22 + 40) = 0;
  *(_QWORD *)(v22 + 48) = 0;
  *(_QWORD *)(v22 + 56) = 0;
  *(_QWORD *)(v22 + 64) = 0;
  *(_QWORD *)(v22 + 72) = 0;
  *(_QWORD *)(v22 + 80) = 0;
  *(_QWORD *)(v22 + 88) = 0;
  *(_DWORD *)(v22 + 96) = 0;
  v94 = v22;
  sub_7F6120((_QWORD *)(a1 + 8), &v94);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, a1);
  v23 = (_QWORD *)sub_186B270(0x18u);
  v24 = *(_QWORD **)(a1 + 8);
  v25 = v23;
  *v23 = off_1C54D38;
  v23[1] = a2;
  v23[2] = a1;
  if ( v24 )
  {
    v26 = *((_DWORD *)v24 - 1);
    if ( v26 == *((_DWORD *)v24 - 2) )
    {
      v83 = (3 * v26 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v84 || v26 >= v83 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300(v24 - 1, v84);
      v86 = v85[1];
      v24 = v85 + 2;
      *v85 = v83;
      *(_QWORD *)(a1 + 8) = v85 + 2;
      LODWORD(v85) = v86;
      v29 = &v24[v86];
      v28 = (_DWORD)v85 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = &v24[v27];
    }
  }
  else
  {
    v89 = (_QWORD *)sub_186B270(0x18u);
    v24 = v89 + 1;
    *v89 = 2;
    v28 = 1;
    *(_QWORD *)(a1 + 8) = v24;
    v29 = v24;
  }
  *v29 = v25;
  *((_DWORD *)v24 - 1) = v28;
  sub_180C5A0(&v95, "res");
  v104[1] = v25;
  v104[0] = v95;
  sub_7FEA60(a1 + 16, v104);
  v30 = (_QWORD *)sub_186B270(0x20u);
  v30[1] = a2;
  *v30 = off_1C551B8;
  sub_180C5A0(v30 + 2, "inst");
  sub_180C5A0(v30 + 3, "bind");
  v31 = *(_QWORD **)(a1 + 8);
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v80 = (3 * v32 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v81 || v32 >= v80 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v93 = (3 * v32 + 1) >> 1;
      v82 = (unsigned int *)sub_186B300(v31 - 1, v81);
      v31 = v82 + 2;
      *(_QWORD *)(a1 + 8) = v82 + 2;
      *v82 = v93;
      LODWORD(v82) = v82[1];
      v35 = &v31[(unsigned int)v82];
      v34 = (_DWORD)v82 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v31[v33];
    }
  }
  else
  {
    v90 = (_QWORD *)sub_186B270(0x18u);
    v31 = v90 + 1;
    *v90 = 2;
    v34 = 1;
    *(_QWORD *)(a1 + 8) = v31;
    v35 = v31;
  }
  *v35 = v30;
  *((_DWORD *)v31 - 1) = v34;
  v36 = *(__int64 (__fastcall **)())(*v30 + 32LL);
  if ( v36 == sub_7FF030 )
  {
    sub_180C5A0(&v96, "inst");
    v105[1] = v30;
    v105[0] = v96;
    sub_7FEA60(a1 + 16, v105);
  }
  else
  {
    ((void (__fastcall *)(_QWORD *, __int64))v36)(v30, a1);
  }
  v37 = (_QWORD *)sub_186B270(0x10u);
  v38 = *(_QWORD **)(a1 + 8);
  v39 = v37;
  *v37 = off_1C54CB8;
  v37[1] = a2;
  if ( v38 )
  {
    v40 = *((_DWORD *)v38 - 1);
    if ( v40 == *((_DWORD *)v38 - 2) )
    {
      v76 = (3 * v40 + 1) >> 1;
      v77 = 8 * v76 + 8;
      if ( 8 * v40 + 8 >= (unsigned int)v77 || v40 >= v76 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v78 = (unsigned int *)sub_186B300(v38 - 1, v77);
      v79 = v78[1];
      v38 = v78 + 2;
      *v78 = v76;
      *(_QWORD *)(a1 + 8) = v78 + 2;
      LODWORD(v78) = v79;
      v43 = &v38[v79];
      v42 = (_DWORD)v78 + 1;
    }
    else
    {
      v41 = v40;
      v42 = v40 + 1;
      v43 = &v38[v41];
    }
  }
  else
  {
    v87 = (_QWORD *)sub_186B270(0x18u);
    v38 = v87 + 1;
    *v87 = 2;
    v42 = 1;
    *(_QWORD *)(a1 + 8) = v38;
    v43 = v38;
  }
  *v43 = v39;
  *((_DWORD *)v38 - 1) = v42;
  sub_180C5A0(&v97, "alldiff");
  v106[1] = v39;
  v106[0] = v97;
  sub_7FEA60(a1 + 16, v106);
  v44 = (_QWORD *)sub_186B270(0x10u);
  *v44 = off_1C54D78;
  v44[1] = a2;
  v98 = v44;
  sub_7F6120((_QWORD *)(a1 + 8), &v98);
  sub_7F8020((__int64)v44, a1);
  v45 = (_QWORD *)sub_186B270(0x130u);
  v45[1] = a2;
  v45[20] = v45 + 22;
  v46 = *(_QWORD **)(a1 + 8);
  *v45 = &off_1C550C0;
  v45[2] = v45 + 4;
  v45[3] = 0x1000000000LL;
  v45[21] = 0x1000000000LL;
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 - 1);
    if ( v47 == *((_DWORD *)v46 - 2) )
    {
      v72 = (3 * v47 + 1) >> 1;
      v73 = 8 * v72 + 8;
      if ( 8 * v47 + 8 >= (unsigned int)v73 || v47 >= v72 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v74 = (unsigned int *)sub_186B300(v46 - 1, v73);
      v75 = v74[1];
      v46 = v74 + 2;
      *v74 = v72;
      *(_QWORD *)(a1 + 8) = v74 + 2;
      LODWORD(v74) = v75;
      v50 = &v46[v75];
      v49 = (_DWORD)v74 + 1;
    }
    else
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
    }
  }
  else
  {
    v91 = (_QWORD *)sub_186B270(0x18u);
    v46 = v91 + 1;
    *v91 = 2;
    v49 = 1;
    *(_QWORD *)(a1 + 8) = v46;
    v50 = v46;
  }
  *v50 = v45;
  *((_DWORD *)v46 - 1) = v49;
  sub_180C5A0(&v99, "tseitin");
  v107[1] = v45;
  v107[0] = v99;
  sub_7FEA60(a1 + 16, v107);
  v51 = (_QWORD *)sub_186B270(0x58u);
  *v51 = off_1C54C78;
  v51[1] = a2;
  sub_16744A0(v51 + 2, a2);
  sub_180C5A0(v51 + 5, "eq2bit");
  sub_180C5A0(v51 + 6, "ne2bit");
  sub_180C5A0(v51 + 7, "bit2eq");
  sub_180C5A0(v51 + 8, "bit2ne");
  sub_180C5A0(v51 + 9, "bv2int");
  sub_180C5A0(v51 + 10, "bv");
  v52 = *(_QWORD **)(a1 + 8);
  if ( v52 )
  {
    v53 = *((_DWORD *)v52 - 1);
    if ( v53 == *((_DWORD *)v52 - 2) )
    {
      v68 = (3 * v53 + 1) >> 1;
      v69 = 8 * v68 + 8;
      if ( 8 * v53 + 8 >= (unsigned int)v69 || v53 >= v68 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v113, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v113);
        sub_233E40((__int64)v113);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v70 = (unsigned int *)sub_186B300(v52 - 1, v69);
      v71 = v70[1];
      v52 = v70 + 2;
      *v70 = v68;
      *(_QWORD *)(a1 + 8) = v70 + 2;
      LODWORD(v70) = v71;
      v56 = &v52[v71];
      v55 = (_DWORD)v70 + 1;
    }
    else
    {
      v54 = v53;
      v55 = v53 + 1;
      v56 = &v52[v54];
    }
  }
  else
  {
    v92 = (_QWORD *)sub_186B270(0x18u);
    v52 = v92 + 1;
    *v92 = 2;
    v55 = 1;
    *(_QWORD *)(a1 + 8) = v52;
    v56 = v52;
  }
  *v56 = v51;
  *((_DWORD *)v52 - 1) = v55;
  v57 = v51[10];
  v113[1] = (__int64)v51;
  v113[0] = v57;
  sub_7FEA60(a1 + 16, v113);
  v58 = v51[7];
  v112[1] = v51;
  v112[0] = v58;
  sub_7FEA60(a1 + 16, v112);
  v59 = v51[8];
  v111[1] = v51;
  v111[0] = v59;
  sub_7FEA60(a1 + 16, v111);
  v60 = v51[5];
  v110[1] = v51;
  v110[0] = v60;
  sub_7FEA60(a1 + 16, v110);
  v61 = v51[6];
  v109[1] = v51;
  v109[0] = v61;
  sub_7FEA60(a1 + 16, v109);
  v62 = v51[9];
  v108[1] = v51;
  v108[0] = v62;
  return sub_7FEA60(a1 + 16, v108);
}

