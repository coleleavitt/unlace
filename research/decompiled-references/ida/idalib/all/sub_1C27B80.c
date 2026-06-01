void __fastcall sub_1C27B80(__int64 a1, __int64 a2, void *a3, __int64 a4, unsigned int a5, char a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  _BYTE *v10; // rsi
  signed __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 *v15; // r15
  __int64 *v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rdi
  int v29; // edx
  unsigned int v30; // edx
  char v31; // r15
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r12
  int v35; // r14d
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 i; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned int v41; // ecx
  _QWORD *v42; // rcx
  __int64 v43; // r14
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rbp
  unsigned __int64 v49; // r13
  __int64 v50; // rax
  void *v51; // rbp
  size_t v52; // rbx
  unsigned int v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // r15
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r14
  _QWORD *v60; // r13
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  _QWORD *v70; // r14
  char *v71; // rdx
  _QWORD *v72; // rcx
  unsigned int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // rcx
  void *v80; // r12
  __int64 v81; // rax
  _QWORD *v82; // rdi
  int v83; // edx
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // [rsp+0h] [rbp-1E8h]
  unsigned __int64 v92; // [rsp+0h] [rbp-1E8h]
  __int64 v93; // [rsp+0h] [rbp-1E8h]
  int v94; // [rsp+0h] [rbp-1E8h]
  int v95; // [rsp+0h] [rbp-1E8h]
  __int64 *dest; // [rsp+10h] [rbp-1D8h]
  __int64 v99; // [rsp+28h] [rbp-1C0h]
  __int64 v100; // [rsp+30h] [rbp-1B8h]
  __int64 v101; // [rsp+30h] [rbp-1B8h]
  __int64 *v104; // [rsp+68h] [rbp-180h] BYREF
  void *src; // [rsp+70h] [rbp-178h] BYREF
  size_t n; // [rsp+78h] [rbp-170h]
  __int64 v107; // [rsp+80h] [rbp-168h] BYREF
  void *v108; // [rsp+90h] [rbp-158h] BYREF
  __int64 v109; // [rsp+98h] [rbp-150h]
  _BYTE v110[64]; // [rsp+A0h] [rbp-148h] BYREF
  void *ptr; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-100h]
  _QWORD v113[8]; // [rsp+F0h] [rbp-F8h] BYREF
  __m128i v114; // [rsp+130h] [rbp-B8h] BYREF
  int v115; // [rsp+140h] [rbp-A8h]
  int v116; // [rsp+148h] [rbp-A0h]
  __int64 v117; // [rsp+150h] [rbp-98h]
  __int64 v118; // [rsp+158h] [rbp-90h]
  __int64 v119; // [rsp+160h] [rbp-88h]
  __int64 v120; // [rsp+168h] [rbp-80h]
  __int64 v121; // [rsp+170h] [rbp-78h]
  __int64 v122; // [rsp+178h] [rbp-70h]
  int v123; // [rsp+180h] [rbp-68h]
  __int64 v124; // [rsp+188h] [rbp-60h]
  __int64 v125; // [rsp+190h] [rbp-58h]
  __int64 v126; // [rsp+198h] [rbp-50h]
  __int64 v127; // [rsp+1A0h] [rbp-48h]

  v7 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL);
  v8 = *(_QWORD *)(a1 + 128) + 72LL * a5;
  v9 = *(_BYTE **)(v8 + 56);
  v10 = *(_BYTE **)(v8 + 48);
  v99 = v8;
  v11 = v9 - v10;
  if ( !((v9 - v10) >> 3) )
  {
    dest = nullptr;
    v12 = 0;
    if ( v10 == v9 )
    {
      v14 = sub_1C24350(v7, 0x10102464C457FLL);
      v108 = v110;
      v109 = 0x800000000LL;
      goto LABEL_9;
    }
    goto LABEL_33;
  }
  if ( (unsigned __int64)((v9 - v10) >> 3) > 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_bad_alloc();
  dest = (__int64 *)operator new(v11);
  v10 = *(_BYTE **)(v99 + 48);
  v11 = *(_QWORD *)(v99 + 56) - (_QWORD)v10;
  v12 = v11 >> 3;
  if ( v10 != *(_BYTE **)(v99 + 56) )
LABEL_33:
    memmove(dest, v10, v11);
  v13 = sub_1C24350(v7, *dest);
  v108 = v110;
  v14 = v13;
  v109 = 0x800000000LL;
  if ( v12 > 1 )
  {
    v15 = dest + 1;
    v16 = &dest[v12];
    do
    {
      while ( 1 )
      {
        v17 = sub_1C24350(v7, *v15);
        v18 = (unsigned int)v109 + 1LL;
        if ( v18 > HIDWORD(v109) )
          break;
        ++v15;
        *((_QWORD *)v108 + (unsigned int)v109) = v17;
        LODWORD(v109) = v109 + 1;
        if ( v16 == v15 )
          goto LABEL_9;
      }
      v91 = v17;
      ++v15;
      sub_2237220(&v108, v110, v18, 8);
      *((_QWORD *)v108 + (unsigned int)v109) = v91;
      LODWORD(v109) = v109 + 1;
    }
    while ( v15 != v16 );
  }
LABEL_9:
  v114.m128i_i16[0] = sub_A64670((__int64)v7, 0, 0, 1);
  v114.m128i_i64[1] = 0;
  v114.m128i_i16[1] &= 0xF000u;
  v115 = 0;
  v19 = *(_DWORD *)(a2 + 128);
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v22 = sub_A73610((__int64)v7, v14, (__int64 *)v108, (unsigned int)v109, &v114, 0);
  v23 = *(_QWORD *)(v7[283] + 80LL);
  v24 = *(_QWORD *)(v23 + 72);
  if ( (v24 & 1) != 0 )
  {
    v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_11;
  }
  v42 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v27 = 0;
    goto LABEL_19;
  }
  v27 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v24 & 2) != 0 )
  {
    v43 = v42[2295];
    v44 = v23 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v43 )
    {
      v45 = v42[294];
      v42[304] += 24LL;
      v46 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v42[295] >= v46 + 24 && v45 )
      {
        v42[294] = v46 + 24;
        v47 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v47 = sub_986170((__int64)(v42 + 294), 24, 24, 3, v20, v21);
        v46 = v47 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v47 = v43;
      v44 = v46 | 4;
      *(_DWORD *)(v47 + 8) = 0;
      *(_QWORD *)(v47 + 16) = v23;
    }
    v25 = v44 & 0xFFFFFFFFFFFFFFFELL;
    v24 = v25 | 1;
    *(_QWORD *)(v23 + 72) = v25 | 1;
LABEL_11:
    v26 = v24 & 0xFFFFFFFFFFFFFFF8LL;
    v27 = v26;
    if ( v25 && (v25 & 4) != 0 )
    {
      v27 = 0;
      if ( !v26 )
        goto LABEL_19;
      v28 = *(_QWORD *)v26;
      v29 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
      if ( *(_DWORD *)(v26 + 8) != v29 )
      {
        *(_DWORD *)(v26 + 8) = v29;
        v92 = v26;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 152LL))(v28, v23);
        v26 = v92;
      }
      v27 = *(_QWORD *)(v26 + 16);
    }
  }
  if ( v27 )
    v27 += 40LL;
LABEL_19:
  LODWORD(n) = 0;
  src = nullptr;
  v30 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL);
  if ( ((v30 >> 3) & 7) == 7 )
  {
    v31 = 1;
    if ( (v30 & 0x104) != 0 )
      goto LABEL_21;
  }
  else
  {
    v31 = 1;
    if ( ((v30 >> 3) & 7) != 1 )
      goto LABEL_21;
  }
  v31 = 1;
  if ( (unsigned __int8)v30 >> 6 != 3 )
  {
    if ( (unsigned __int8)v30 >> 6 )
      goto LABEL_21;
    v83 = v30 & 0x100;
    goto LABEL_76;
  }
  v83 = v30 & 0x100;
  if ( !v83 )
LABEL_76:
    v31 = v83 != 0;
LABEL_21:
  ptr = a3;
  LODWORD(v112) = v19;
  sub_B85890(v113, (__int64)a3);
  v32 = sub_B7CBC0((__int64)v7, v27, v19, (__int64 *)&ptr, v22, 0, 1, v31, 0, 1, 0, (__int64)&src);
  v33 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
  v34 = v32;
  ptr = v113;
  v112 = 0x800000000LL;
  v35 = *(unsigned __int16 *)(v33 + 22);
  if ( *(_WORD *)(v33 + 22) )
  {
    v36 = 0;
    if ( v34 )
      v36 = v34 + 72;
    v37 = 0;
    v93 = v36;
    for ( i = sub_B74530((__int64)v7, v36, v19, v19, 0, *(_QWORD *)(v33 + 48), 0, 0, 0);
          ;
          i = sub_B74530((__int64)v7, v93, v19, v19, 0, *(_QWORD *)(v33 + 8 * v37 + 48), 0, 0, 0) )
    {
      *(_DWORD *)(i + 96) &= 0xFFF01FFF;
      if ( v37 <= 0xFE )
      {
        *(_WORD *)(i + 98) = (16 * (unsigned __int8)v37) | *(_WORD *)(i + 98) & 0xF00F;
      }
      else
      {
        v100 = i;
        sub_B74850(i, v37);
        i = v100;
      }
      v39 = (unsigned int)v112;
      v40 = (unsigned int)v112 + 1LL;
      if ( v40 > HIDWORD(v112) )
      {
        v101 = i;
        sub_2237220(&ptr, v113, v40, 8);
        v39 = (unsigned int)v112;
        i = v101;
      }
      *((_QWORD *)ptr + v39) = i;
      ++v37;
      v41 = v112 + 1;
      LODWORD(v112) = v112 + 1;
      if ( v35 == (_DWORD)v37 )
        break;
    }
    v48 = ptr;
    v49 = v41;
  }
  else
  {
    v49 = 0;
    v48 = v113;
  }
  v50 = sub_B8C330(v34);
  sub_B7C440(v34, v50, v48, v49);
  if ( a6 )
  {
    v85 = sub_B32D80((__int64)v7, 0, 0);
    sub_B8CC60(v34, v85, v86, v87, v88, v89);
  }
  if ( *(_QWORD *)(v99 + 40) )
  {
    v64 = sub_B36EB0((__int64)v7, *(const void **)(v99 + 32), *(_QWORD *)(v99 + 40), 0, 0);
    sub_B8CC60(v34, v64, v65, v66, v67, v68);
  }
  sub_C05100((__int64)&src, "__builtin_rvv_", v99);
  v51 = src;
  v52 = n;
  v53 = sub_2244B30(src, n);
  v54 = (unsigned int)sub_2244CB0(a4 + 552, v51, v52, v53);
  v56 = (__int64 *)(*(_QWORD *)(a4 + 552) + 8 * v54);
  if ( *v56 )
  {
    if ( *v56 != -8 )
    {
      sub_989490(&v104, v56, 0);
      v59 = *v104;
      v60 = *(_QWORD **)(*v104 + 8);
      if ( v60 )
        goto LABEL_63;
      goto LABEL_50;
    }
    --*(_DWORD *)(a4 + 568);
  }
  v69 = *(_QWORD *)(a4 + 576);
  *(_QWORD *)(a4 + 656) += v52 + 17;
  v70 = (_QWORD *)((v69 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v71 = (char *)v70 + v52 + 17;
  if ( *(_QWORD *)(a4 + 584) >= (unsigned __int64)v71 && v69 )
  {
    *(_QWORD *)(a4 + 576) = v71;
  }
  else
  {
    v95 = v54;
    v90 = sub_986170(a4 + 576, v52 + 17, v52 + 17, 3, v54, v55);
    LODWORD(v54) = v95;
    v70 = (_QWORD *)v90;
  }
  v72 = v70 + 2;
  if ( v52 )
  {
    v94 = v54;
    v84 = memcpy(v70 + 2, v51, v52);
    LODWORD(v54) = v94;
    v72 = v84;
  }
  *((_BYTE *)v72 + v52) = 0;
  *v70 = v52;
  v70[1] = 0;
  *v56 = (__int64)v70;
  ++*(_DWORD *)(a4 + 564);
  v73 = sub_22450D0(a4 + 552, (unsigned int)v54);
  sub_989490(&v104, (__int64 *)(*(_QWORD *)(a4 + 552) + 8LL * v73), 0);
  v59 = *v104;
  v60 = *(_QWORD **)(*v104 + 8);
  if ( !v60 )
  {
LABEL_50:
    v61 = *(_QWORD *)(a4 + 672);
    if ( !v61
      || (v60 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v61 + 16LL))(v61, v51, v52),
          (*(_QWORD *)(v59 + 8) = v60) == 0) )
    {
      v62 = *(_QWORD *)(a4 + 576);
      *(_QWORD *)(a4 + 656) += 24LL;
      v60 = (_QWORD *)((v62 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(a4 + 584) >= (unsigned __int64)(v60 + 3) && v62 )
        *(_QWORD *)(a4 + 576) = v60 + 3;
      else
        v60 = (_QWORD *)sub_986170(a4 + 576, 24, 24, 3, v57, v58);
      v63 = *v60 & 0xFFFFF80000000000LL;
      v60[1] = 0;
      *v60 = v63 | 0x1FFFC05;
      *(_QWORD *)(v59 + 8) = v60;
      v60[2] = v59;
    }
  }
LABEL_63:
  if ( src != &v107 )
    operator delete(src);
  v74 = sub_B31D40(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), (__int64)v60, 0, 0);
  sub_B8CC60(v34, v74, v75, v76, v77, v78);
  v79 = *(unsigned int *)(a2 + 20);
  v80 = (void *)((*(_BYTE *)(v34 + 29) >> 5) & 3 | (unsigned __int64)v34);
  v81 = *(unsigned int *)(a2 + 16);
  src = v80;
  if ( v81 + 1 > v79 )
  {
    sub_2237220(a2 + 8, a2 + 24, v81 + 1, 8);
    v81 = *(unsigned int *)(a2 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v81) = v80;
  v82 = ptr;
  ++*(_DWORD *)(a2 + 16);
  *(_DWORD *)a2 = 2;
  if ( v82 != v113 )
    free(v82);
  if ( v108 != v110 )
    free(v108);
  operator delete(dest);
}
