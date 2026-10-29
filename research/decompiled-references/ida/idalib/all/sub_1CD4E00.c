unsigned __int64 __fastcall sub_1CD4E00(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned int a9,
        char a10)
{
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebp
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // r14
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rax
  unsigned int v32; // r9d
  void *v33; // rdx
  _QWORD *v34; // rax
  char v35; // cl
  size_t v36; // rax
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rax
  _DWORD *v39; // rdx
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r15
  __int64 v54; // rax
  _QWORD *v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 *v58; // rsi
  __int64 v59; // r14
  __int64 v60; // rdx
  _QWORD *v61; // rbx
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  _DWORD *v71; // rax
  __m128i v72; // xmm1
  __int64 v73; // rax
  __int64 v74; // rdx
  void *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned int v79; // eax
  void *v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r15
  __int64 v87; // rax
  _QWORD *v88; // rax
  unsigned int v89; // [rsp+0h] [rbp-228h]
  int v90; // [rsp+0h] [rbp-228h]
  unsigned __int64 v91; // [rsp+0h] [rbp-228h]
  __int64 v92; // [rsp+8h] [rbp-220h]
  unsigned __int64 v94; // [rsp+10h] [rbp-218h]
  unsigned __int64 v95; // [rsp+20h] [rbp-208h] BYREF
  __int64 v96; // [rsp+28h] [rbp-200h] BYREF
  unsigned __int64 v97; // [rsp+30h] [rbp-1F8h] BYREF
  unsigned __int64 v98; // [rsp+38h] [rbp-1F0h] BYREF
  __int128 v99; // [rsp+40h] [rbp-1E8h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-1D8h]
  __int128 v101; // [rsp+60h] [rbp-1C8h]
  void *v102; // [rsp+70h] [rbp-1B8h] BYREF
  signed __int64 v103; // [rsp+78h] [rbp-1B0h]
  char v104; // [rsp+80h] [rbp-1A8h] BYREF
  void *v105; // [rsp+88h] [rbp-1A0h]
  __int64 v106; // [rsp+98h] [rbp-190h] BYREF
  void *v107[2]; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v108; // [rsp+C0h] [rbp-168h]
  __int64 v109; // [rsp+C8h] [rbp-160h] BYREF
  unsigned __int8 *v110[11]; // [rsp+D0h] [rbp-158h] BYREF
  char v111; // [rsp+128h] [rbp-100h]
  unsigned int v112; // [rsp+130h] [rbp-F8h]
  char v113; // [rsp+134h] [rbp-F4h]
  __int64 v114; // [rsp+140h] [rbp-E8h] BYREF
  _QWORD *v115; // [rsp+148h] [rbp-E0h]
  __int64 v116; // [rsp+150h] [rbp-D8h]
  _OWORD v117[5]; // [rsp+158h] [rbp-D0h] BYREF
  __int64 v118; // [rsp+1A8h] [rbp-80h]
  __int64 v119; // [rsp+1B0h] [rbp-78h]
  __int64 v120; // [rsp+1B8h] [rbp-70h]
  unsigned int v121; // [rsp+1C0h] [rbp-68h]
  __int64 v122; // [rsp+1C8h] [rbp-60h] BYREF
  __int128 v123; // [rsp+1D0h] [rbp-58h]
  __int64 v124; // [rsp+1E0h] [rbp-48h]

  v89 = a3;
  v99 = 0;
  *(_OWORD *)ptr = 0;
  v101 = 0;
  sub_15AB8B0((__int64)&v99, (__int64)a4, a5);
  v95 = 0;
  if ( a4 )
  {
    v16 = sub_16A2930(a1, (__int64)&v99, 0, v13, v14, v15);
    v95 = v16;
    if ( !v16 )
    {
      v17 = sub_AB77C0(*(_QWORD **)(a1 + 248), a2, (__int64)a4, a6);
      if ( !HIDWORD(ptr[1]) )
        return v17;
LABEL_11:
      free(ptr[0]);
      return v17;
    }
    if ( (unsigned __int8)sub_169F990(a1, (__int64)&v99, v16) )
    {
      v17 = 0;
      goto LABEL_5;
    }
  }
  v96 = a6;
  v117[4] = 0;
  v115 = v117;
  v116 = 0x800000000LL;
  v114 = 0;
  v121 = a9;
  v118 = 0;
  v119 = a1;
  v120 = a6;
  sub_B85890(&v122, a6);
  v123 = 0;
  v124 = 0x101010000LL;
  sub_1A395A0((__int64)&v114);
  if ( v95 )
    sub_1A5DB10(a1, (__int64)&v114, v95, (__int64)&v99, v19, v20, 0.0, a8);
  else
    sub_1A49A10(a1, (__int64)&v114, *(__int64 **)(a1 + 608), 0, 0, v20, 0.0, a8);
  v21 = v114;
  switch ( (int)v114 )
  {
    case 0:
      v97 = 0;
      v22 = v95;
      if ( v95 )
      {
        v39 = *(_DWORD **)(a6 + 16);
        v102 = a4;
        v40 = *v39 == 4;
        v103 = a5;
        if ( v40 && v39[4] == 1701869940 && a4 && ((a4[1] >> 1) & 3) == 2 && a4[2] )
        {
          v59 = sub_E90670(&v102);
          v92 = v60;
          if ( !(v59 & 7 | (v59 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 49 )
          {
            if ( v59 )
            {
              if ( *(_DWORD *)(v59 + 20) )
              {
                v107[0] = *(void **)(v59 + 32);
                v64 = sub_F22BD0((__int64 *)v107, 0);
                if ( v64 )
                {
                  v94 = v64;
                  if ( !sub_F62670(v59, nullptr, v65, v66, v67, v68) )
                  {
                    v69 = *(_QWORD *)(v94 + 40);
                    if ( (v69 & 7) == 0 )
                    {
                      v70 = v69 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v70 )
                      {
                        v71 = *(_DWORD **)(v70 + 16);
                        if ( *v71 == 9 && !memcmp(v71 + 4, "enable_if", 9u) )
                        {
                          v72 = _mm_loadu_si128((const __m128i *)(v59 + 48));
                          v73 = *(_QWORD *)(v92 + 16);
                          *(__m128i *)v107 = v72;
                          v74 = *(_QWORD *)(v59 + 64);
                          v109 = v73;
                          v108 = v74;
                          v97 = sub_F1E510((__int64)v107, (__int64)"enable_if", 0.0);
                          if ( (*(_DWORD *)(v59 + 48) & 0x7FFFFFFF) == 8
                            && (v91 = *(_QWORD *)(v92 + 16) & 0xFFFFFFFFFFFFFFFCLL,
                                (*(_WORD *)sub_BFD550(v91) & 0x1FF) != 0x73)
                            && v91 )
                          {
                            v103 = 0;
                            v102 = &v104;
                            v104 = 0;
                            sub_1CB4750((char **)v107, a1, v91, (__m128)0LL, *(double *)v72.m128i_i64);
                            v75 = v107[0];
                            sub_A0AAD0((__int64)&v102, &v107[1]);
                            if ( v107[1] != &v109 )
                              operator delete(v107[1]);
                            v79 = sub_C00A40((unsigned __int64)v75, (__int64)&v107[1], v76, v77, v78);
                            v80 = (void *)(a1 + 8);
                            sub_168B9F0((__int64)v107, (__int64 *)(a1 + 8), v79, 0x14D4u, 0);
                            if ( v111 )
                            {
                              v80 = v102;
                              sub_AEC220(v110, v102, v103);
                            }
                            else if ( v113 )
                            {
                              v86 = sub_168B9E0(v107);
                              v87 = v108;
                              if ( v108 )
                                v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
                              v98 = v87;
                              v88 = sub_1587BC0(v86, (__int64 *)&v98, v82, v83, v84, v85);
                              v80 = v102;
                              sub_AEC220((unsigned __int8 **)(*v88 + 32LL * v112 + 8), v102, v103);
                            }
                            v17 = 0;
                            v98 = sub_EEC8C0((unsigned __int64)v75, (__int64)v80, 0.0);
                            sub_1587DB0((__int64)v107, (__int64 *)&v98);
                            sub_15F7200(v107);
                            if ( v102 != &v104 )
                              operator delete(v102);
                          }
                          else
                          {
                            v17 = 0;
                            sub_168B9F0((__int64)v107, (__int64 *)(a1 + 8), v97, 0x14D3u, 0);
                            v81 = sub_17BABD0((__int64)v107, (__int64 *)&v95);
                            sub_15884C0(v81, (__int64 *)&v97);
                            sub_15F7200(v107);
                          }
                          goto LABEL_24;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v22 = v95;
          v23 = v95 == 0 ? 5376 : 5330;
        }
        else
        {
          v23 = 5330;
        }
      }
      else
      {
        v23 = 5376;
      }
      v24 = 0;
      goto LABEL_13;
    case 1:
      goto LABEL_40;
    case 2:
      v24 = sub_16C47B0(*v115 & 0xFFFFFFFFFFFFFFF8LL);
      v37 = *(_BYTE *)(v24 + 28) & 0x7F;
      if ( (unsigned int)v37 - 58 <= 9 )
      {
        if ( a2 != 5 )
          v21 = 0;
        v38 = sub_17C3D60(a1, v95, v21, v24, a9);
        v17 = sub_A76250(*(_QWORD *)(a1 + 248), a2, (__int64)a4, v38, 0);
        goto LABEL_24;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0
        || (unsigned int)v37 - 68 > 6
        || (v56 = (v37 + 67) & 0x7F, (unsigned __int8)v56 > 0xBu)
        || (v57 = 2689, !_bittest64(&v57, v56)) )
      {
        v22 = v95;
        if ( v95 )
        {
          if ( a3 )
          {
            v102 = (void *)__PAIR64__(a9, a3);
            v25 = (__int64 *)(a1 + 8);
            v23 = 5333;
LABEL_16:
            sub_168B9F0((__int64)v107, v25, a9, v23, 0);
            v26 = sub_15884C0((__int64)v107, (__int64 *)&v102);
            v27 = v26;
            if ( *(_BYTE *)(v26 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v26 + 32), v96, 9u);
            }
            else if ( *(_BYTE *)(v26 + 132) )
            {
              v53 = sub_168B9E0((_QWORD *)v26);
              v54 = *(_QWORD *)(v27 + 16);
              if ( v54 )
                v54 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 32LL))(*(_QWORD *)(v27 + 16));
              v98 = v54;
              v55 = sub_1587BC0(v53, (__int64 *)&v98, v49, v50, v51, v52);
              sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * *(unsigned int *)(v27 + 128) + 8), v96, 9u);
            }
            sub_17BABD0(v27, (__int64 *)&v95);
            sub_15F7200(v107);
LABEL_19:
            if ( v24 )
            {
              sub_168B9F0((__int64)v107, v25, *(_DWORD *)(v24 + 24), 6430 - (v95 != 0), 0);
              if ( v111 )
              {
                sub_AE9DF0(v110, v96, 9u);
              }
              else if ( v113 )
              {
                v44 = sub_168B9E0(v107);
                v47 = v108;
                if ( v108 )
                  v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
                v98 = v47;
                v48 = sub_1587BC0(v44, (__int64 *)&v98, v42, v43, v45, v46);
                sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v112 + 8), v96, 9u);
              }
              sub_15F7200(v107);
            }
LABEL_23:
            v17 = 0;
            goto LABEL_24;
          }
          v23 = 5333;
        }
        else
        {
          if ( a3 )
          {
            v102 = (void *)__PAIR64__(a9, a3);
            v25 = (__int64 *)(a1 + 8);
            v23 = 5334;
            goto LABEL_51;
          }
          v23 = 5334;
        }
LABEL_14:
        v89 = v99;
LABEL_15:
        v25 = (__int64 *)(a1 + 8);
        v102 = (void *)__PAIR64__(a9, v89);
        if ( v22 )
          goto LABEL_16;
LABEL_51:
        sub_168B9F0((__int64)v107, v25, a9, v23, 0);
        v41 = sub_15884C0((__int64)v107, (__int64 *)&v102);
        sub_17B3DD0(v41, &v96);
        sub_15F7200(v107);
        goto LABEL_19;
      }
      if ( !a10 )
      {
        v58 = (__int64 *)(a1 + 8);
        if ( a4 && ((a4[1] >> 1) & 3) == 2 )
        {
          v98 = a4[2] & 0xFFFFFFFFFFFFFFF0LL;
          if ( v98 )
          {
            sub_168B9F0((__int64)v107, v58, a9, 0xE52u, 0);
            sub_F22AA0((unsigned __int64 *)&v102, v24);
            LODWORD(v97) = sub_17A2D70(a1, (__int64)v102);
            v63 = sub_1587D10((__int64)v107, (int *)&v97);
            sub_1605D30(v63, (__int64 *)&v98);
            sub_15F7200(v107);
            goto LABEL_70;
          }
        }
        else
        {
          v98 = 0;
        }
        sub_168B9F0((__int64)v107, v58, a9, 0xE1Eu, 0);
        sub_F22AA0((unsigned __int64 *)&v102, v24);
        LODWORD(v97) = sub_17A2D70(a1, (__int64)v102);
        sub_1587D10((__int64)v107, (int *)&v97);
        sub_15F7200(v107);
LABEL_70:
        v17 = 0;
        LODWORD(v107[1]) = 0;
        sub_1CCCAD0(a1, v24, (__int64)v107[0], 0);
        goto LABEL_24;
      }
      v61 = *(_QWORD **)(a1 + 248);
      sub_F22AA0((unsigned __int64 *)v107, v24);
      v62 = sub_AB7C40(v61, (__int64)v107[0], 0, 0);
      v17 = sub_A76250((__int64)v61, a2, (__int64)a4, v62, 0);
LABEL_24:
      sub_169D230((__int64)&v114);
LABEL_5:
      if ( HIDWORD(ptr[1]) )
        goto LABEL_11;
      return v17;
    case 3:
      v22 = v95;
      v23 = (v95 == 0) + 5333;
      v24 = *v115 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_13;
    case 4:
      if ( !a3 )
        v89 = v99;
      v98 = __PAIR64__(a9, v89);
      sub_168B9F0((__int64)v107, (__int64 *)(a1 + 8), a9, 0x14D7u, 0);
      v28 = sub_17B3DD0((__int64)v107, &v96);
      v29 = sub_17BABD0(v28, (__int64 *)&v95);
      sub_15884C0(v29, (__int64 *)&v98);
      sub_15F7200(v107);
      v30 = *v115 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v30 + 28) & 0x7F) == 0x1C )
      {
        v31 = *(_QWORD **)(v30 + 64);
        v32 = 0;
        if ( v31 )
        {
          v33 = *(void **)(v30 + 72);
          v107[0] = v31;
          v107[1] = v33;
          v34 = (_QWORD *)(v31[1] & 0xFFFFFFFFFFFFFFF8LL);
          if ( v34 )
          {
            v107[0] = v34;
            v35 = 0;
            while ( (v34[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v35 = 1;
              v34 = (_QWORD *)(v34[1] & 0xFFFFFFFFFFFFFFF8LL);
            }
            if ( v35 )
              v107[0] = v34;
          }
          v32 = sub_E90530((__int64 *)v107);
        }
        v90 = v32;
        sub_168B9F0((__int64)v107, (__int64 *)(a1 + 8), v32, 0x193Cu, 0);
        v36 = j__strlen("typename ");
        sub_9EC740((__int64)&v102, v90, "typename ", v36, 0);
        sub_1589170((__int64)v107, &v102);
        if ( v105 != &v106 )
          operator delete(v105);
        sub_15F7200(v107);
      }
LABEL_40:
      v17 = sub_AB77C0(*(_QWORD **)(a1 + 248), a2, (__int64)a4, a6);
      goto LABEL_24;
    case 5:
      goto LABEL_23;
    default:
      v22 = v95;
      v24 = 0;
      v23 = 0;
LABEL_13:
      if ( !a3 )
        goto LABEL_14;
      goto LABEL_15;
  }
}
