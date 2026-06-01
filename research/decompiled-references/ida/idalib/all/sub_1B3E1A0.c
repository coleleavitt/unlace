__int64 __fastcall sub_1B3E1A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 v29; // rdx
  char v30; // al
  unsigned __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r15d
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  int v53; // edx
  __int64 v54; // rsi
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // ebp
  unsigned __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // r15
  __int64 v66; // rbx
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  char v69; // cl
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 *v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rsi
  unsigned int v94; // [rsp+4h] [rbp-274h]
  unsigned __int64 *v95; // [rsp+8h] [rbp-270h]
  unsigned __int64 *v96; // [rsp+10h] [rbp-268h]
  _QWORD **v97; // [rsp+18h] [rbp-260h]
  unsigned __int64 v98; // [rsp+20h] [rbp-258h]
  _QWORD *v99; // [rsp+40h] [rbp-238h] BYREF
  __int64 v100; // [rsp+48h] [rbp-230h]
  unsigned __int64 v101; // [rsp+50h] [rbp-228h]
  __int64 v102; // [rsp+58h] [rbp-220h]
  unsigned __int8 v103; // [rsp+63h] [rbp-215h]
  int v104; // [rsp+64h] [rbp-214h]
  __m128 *v105; // [rsp+68h] [rbp-210h]
  __int64 v106; // [rsp+70h] [rbp-208h]
  void **v107; // [rsp+78h] [rbp-200h]
  void **v108; // [rsp+80h] [rbp-1F8h]
  unsigned __int64 v109; // [rsp+88h] [rbp-1F0h]
  void **p_ptr; // [rsp+90h] [rbp-1E8h]
  __int64 v111; // [rsp+98h] [rbp-1E0h]
  unsigned int v112; // [rsp+ACh] [rbp-1CCh] BYREF
  unsigned __int64 v113; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-1C0h] BYREF
  void *v115; // [rsp+C0h] [rbp-1B8h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-1B0h]
  char v117; // [rsp+D0h] [rbp-1A8h] BYREF
  void *v118; // [rsp+110h] [rbp-168h] BYREF
  __int64 v119; // [rsp+118h] [rbp-160h]
  char v120; // [rsp+120h] [rbp-158h] BYREF
  void *ptr; // [rsp+160h] [rbp-118h] BYREF
  __int64 v122; // [rsp+168h] [rbp-110h]
  char v123; // [rsp+170h] [rbp-108h] BYREF
  __m128 v124; // [rsp+1B0h] [rbp-C8h] BYREF

  v106 = a4;
  v118 = &v120;
  ptr = &v123;
  v9 = *(unsigned int *)(a1 + 16);
  v108 = &v118;
  v107 = &v115;
  p_ptr = &ptr;
  v10 = *(_QWORD *)(a1 + 40 * v9 + 64);
  v115 = &v117;
  v102 = a1;
  v11 = *(_QWORD *)(a1 + 40 * v9 + 72);
  v111 = a2;
  v116 = 0x800000000LL;
  v119 = 0x800000000LL;
  v122 = 0x800000000LL;
  v109 = v10;
  if ( v10 )
  {
    v12 = 8 * v9;
    if ( v11 )
      v109 = *(_QWORD *)(v11 + 16);
    v13 = (unsigned __int64 *)(v102 + v12 + 64);
    v97 = (_QWORD **)(v102 + v12 + 64 + v12);
    v14 = (unsigned __int64 *)(v102 + 64);
    v96 = v13;
    v104 = *(_DWORD *)(v102 + 48);
    if ( v13 != (unsigned __int64 *)(v102 + 64) )
      goto LABEL_5;
    v103 = 0;
    v54 = *(_QWORD *)(v102 + 40 * v9 + 64);
LABEL_48:
    sub_14B7B40((__int64)p_ptr, v54);
    v53 = *(_DWORD *)(v102 + 16);
    goto LABEL_36;
  }
  v92 = sub_18C1B30(a3, 0, 1);
  v52 = v102;
  v51 = *(unsigned int *)(v102 + 16);
  v109 = v92 & 0xFFFFFFFFFFFFFFFELL;
  v53 = v51;
  v93 = 8 * v51 + 64;
  v96 = (unsigned __int64 *)(v102 + v93);
  v97 = (_QWORD **)(v102 + v93 + 8 * v51);
  v104 = *(_DWORD *)(v102 + 48);
  v14 = (unsigned __int64 *)(v102 + 64);
  if ( v102 + v93 != v102 + 64 )
  {
LABEL_5:
    v15 = v14;
    v103 = 0;
    v95 = v96;
    v105 = &v124;
    while ( 1 )
    {
      v16 = *v15;
      v112 = 0;
      v114 = 0;
      v113 = v16;
      v17 = sub_1B31D70(a3, &v113, &v112, &v114, (__int64)&byte_22F0C30, 0, *(double *)a6.m128_u64);
      if ( v18 | (v17 == 0) )
      {
        v47 = (unsigned int)v116;
        v48 = (unsigned int)v116 + 1LL;
        if ( v48 > HIDWORD(v116) )
        {
          sub_2237220(v107, v107 + 2, v48, 8);
          v47 = (unsigned int)v116;
        }
        *((_QWORD *)v115 + v47) = 0;
        v49 = (unsigned int)v119;
        LODWORD(v116) = v116 + 1;
        v50 = (unsigned int)v119 + 1LL;
        if ( v50 > HIDWORD(v119) )
        {
          sub_2237220(v108, v108 + 2, v50, 8);
          v49 = (unsigned int)v119;
        }
        *((_QWORD *)v118 + v49) = 0;
        LODWORD(v119) = v119 + 1;
      }
      else
      {
        v19 = v17;
        v20 = 103;
        v94 = sub_1AFA3A0(a5, v17);
        v23 = *(unsigned int *)(a5 + 344);
        if ( (_DWORD)v23 )
        {
          v21 = *(_QWORD *)(a5 + 336) + 6776 * v23 - 6776;
          if ( *(_QWORD *)(v21 + 6768) == *(_QWORD *)(a5 + 328) )
          {
            v84 = *(unsigned int *)(v21 + 8);
            v22 = *(unsigned int *)(a5 + 27504);
            if ( (unsigned int)v84 > (unsigned int)v22 )
            {
              v85 = v84 - v22;
              if ( v85 )
              {
                v86 = *(_QWORD *)v21 + 1688 * (v85 - 1);
                if ( v86 )
                  v20 = *(unsigned int *)(v86 + 976);
              }
            }
          }
        }
        if ( !sub_FFED80(v20, v19, v21, v22) )
          goto LABEL_14;
        v27 = *(unsigned int *)(a5 + 344);
        v28 = 103;
        if ( (_DWORD)v27 )
        {
          v29 = *(_QWORD *)(a5 + 336) + 6776 * v27 - 6776;
          if ( *(_QWORD *)(v29 + 6768) == *(_QWORD *)(a5 + 328) )
          {
            v87 = *(unsigned int *)(v29 + 8);
            v88 = *(unsigned int *)(a5 + 27504);
            if ( (unsigned int)v87 > (unsigned int)v88 )
            {
              v89 = v87 - v88;
              if ( v89 )
              {
                v90 = *(_QWORD *)v29 + 1688 * (v89 - 1);
                if ( v90 )
                  v28 = *(_DWORD *)(v90 + 976);
              }
            }
          }
        }
        v30 = sub_FFEBC0(v28, v19);
        v26 = v94;
        if ( v94 || !v30 )
        {
LABEL_14:
          v31 = v113;
          v99 = *v97;
          if ( v104 == 2 )
          {
            v100 = sub_B73640(*(_QWORD *)(v113 + 16));
            v42 = *v95;
            if ( !v94 )
              goto LABEL_73;
          }
          else
          {
            v35 = sub_C00A40(v113, v19, v24, v25, v26);
            v36 = *(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v36 + 8) & 0xF) != 0 )
              v36 = sub_F64F00(*(_QWORD *)(v31 + 8), v19, v32, v33, v34);
            v37 = *(_QWORD *)(v31 + 16);
            v101 = v36 & 0xFFFFFFFFFFFFFFF0LL;
            *(_BYTE *)(v37 + 29) |= 8u;
            v38 = *(_QWORD *)(a3 + 248);
            v100 = v37;
            sub_B8C4D0(v37, v38);
            v19 = 0;
            v100 = sub_C09130(*(_QWORD **)(a3 + 248), 0, 0, 0, v100, 1, v35, v101, 1, 0, 0, 0);
            v42 = *v95;
            if ( v94 )
              goto LABEL_18;
LABEL_73:
            v78 = sub_C00A40(v16, v19, v39, v40, v41);
            v42 = sub_1B005B0(a3, v106, v78, v42, (unsigned __int64)v99, v111, a6, a7, v109, 0, 0, 0);
          }
LABEL_18:
          if ( (*(_QWORD *)v31 & 0x80000LL) != 0 )
          {
            v43 = *(_QWORD *)(v31 + 32);
            if ( v43 )
            {
              v99 = *(_QWORD **)(v31 + 40);
              a6 = _mm_loadh_ps((const double *)&v99);
              v124 = a6;
              v44 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v44 )
              {
                v124.m128_u64[0] = v44;
                v45 = 0;
                while ( (*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  v45 = 1;
                  v44 = *(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( v45 )
                  v124.m128_u64[0] = v44;
              }
              v46 = (unsigned int)sub_E90530((__int64 *)v105);
            }
            else
            {
              v46 = 0;
            }
          }
          else
          {
            v46 = *(unsigned int *)(v31 + 4);
          }
          v65 = sub_19B4A30(a3, v42 & 0xFFFFFFFFFFFFFFFELL, v46, 0, 0, 0, a6, a7);
          if ( v94 )
          {
            v66 = *v95;
          }
          else
          {
            v79 = *v95;
            v99 = (_QWORD *)(sub_19146F0(a3, (_QWORD *)*v95, v61, v62, v63, v64, a6, a7) & 0xFFFFFFFFFFFFFFFELL);
            v83 = sub_C00A40(v16, v79, v80, v81, v82);
            v66 = sub_1929BB0(a3, v106, v83, 0x15u, v100, v99, a6, a7, 0);
          }
          if ( (*(_QWORD *)v31 & 0x80000LL) != 0 )
          {
            v67 = *(_QWORD *)(v31 + 32);
            if ( v67 )
            {
              v99 = *(_QWORD **)(v31 + 40);
              a6 = _mm_loadh_ps((const double *)&v99);
              v124 = a6;
              v68 = *(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v68 )
              {
                v124.m128_u64[0] = v68;
                v69 = 0;
                while ( (*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  v69 = 1;
                  v68 = *(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( v69 )
                  v124.m128_u64[0] = v68;
              }
              v70 = (unsigned int)sub_E90530((__int64 *)v105);
            }
            else
            {
              v70 = 0;
            }
          }
          else
          {
            v70 = *(unsigned int *)(v31 + 4);
          }
          v71 = sub_19B4A30(a3, v66 & 0xFFFFFFFFFFFFFFFELL, v70, 0, 0, 0, a6, a7);
          if ( v65 > 1 && v71 > 1 )
          {
            v98 = v71;
            sub_14B7B40((__int64)v107, v65 & 0xFFFFFFFFFFFFFFFELL);
            sub_14B7B40((__int64)v108, v98 & 0xFFFFFFFFFFFFFFFELL);
            if ( !v94 )
              sub_14B7B40((__int64)p_ptr, v113);
          }
          else
          {
            v72 = (unsigned int)v116;
            v73 = (unsigned int)v116 + 1LL;
            if ( v73 > HIDWORD(v116) )
            {
              sub_2237220(v107, v107 + 2, v73, 8);
              v72 = (unsigned int)v116;
            }
            *((_QWORD *)v115 + v72) = 0;
            v74 = (unsigned int)v119;
            LODWORD(v116) = v116 + 1;
            v75 = (unsigned int)v119 + 1LL;
            if ( v75 > HIDWORD(v119) )
            {
              sub_2237220(v108, v108 + 2, v75, 8);
              v74 = (unsigned int)v119;
            }
            *((_QWORD *)v118 + v74) = 0;
            v76 = (unsigned int)v122;
            LODWORD(v119) = v119 + 1;
            v77 = (unsigned int)v122 + 1LL;
            if ( v77 > HIDWORD(v122) )
            {
              sub_2237220(p_ptr, p_ptr + 2, v77, 8);
              v76 = (unsigned int)v122;
            }
            v103 = 1;
            *((_QWORD *)ptr + v76) = 0;
            LODWORD(v122) = v122 + 1;
          }
          ++v97;
          ++v95;
          goto LABEL_33;
        }
        v91 = (__int64 *)v105;
        sub_168B9F0((__int64)v105, (__int64 *)(a3 + 8), v112, 0x11B6u, 0);
        sub_15F7200(v91);
        sub_1AE97C0((__int64)v107);
        sub_1AE97C0((__int64)v108);
      }
      v103 = 1;
LABEL_33:
      if ( v96 == ++v15 )
      {
        v51 = *(unsigned int *)(v102 + 16);
        v52 = v102;
        v53 = *(_DWORD *)(v102 + 16);
        goto LABEL_35;
      }
    }
  }
  v103 = 0;
LABEL_35:
  v54 = *(_QWORD *)(v52 + 40 * v51 + 64);
  if ( v54 )
    goto LABEL_48;
LABEL_36:
  v55 = (unsigned int)(v53 + 1);
  v56 = (unsigned int)v122;
  v57 = v55;
  v58 = v55 - (unsigned int)v122;
  if ( v55 > HIDWORD(v122) )
  {
    sub_2237220(p_ptr, p_ptr + 2, v55, 8);
    v56 = (unsigned int)v122;
    v57 = v58 + v122;
  }
  if ( v58 )
    memset((char *)ptr + 8 * v56, 0, 8 * v58);
  v59 = v102;
  LODWORD(v122) = v57;
  sub_EB84D0(v102, (__int64)v115, (unsigned int)v116);
  sub_EB8500(v59, (__int64)v118, (unsigned int)v119);
  sub_EB8530(v59, (__int64)ptr, (unsigned int)v122);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  if ( v118 != v108 + 2 )
    free(v118);
  if ( v115 != v107 + 2 )
    free(v115);
  return v103;
}
