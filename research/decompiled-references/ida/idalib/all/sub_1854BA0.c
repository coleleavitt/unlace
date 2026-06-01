__int64 __fastcall sub_1854BA0(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5, double a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r12
  __m128i v13; // xmm1
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  char *v23; // r10
  __int64 v24; // r13
  unsigned int v26; // edx
  __int64 v27; // rax
  _QWORD *v28; // r10
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // r15
  int v49; // edx
  char v50; // al
  unsigned __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  _QWORD *v57; // rax
  char v58; // al
  __int64 v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 *v92; // [rsp-10h] [rbp-458h]
  __int64 v95; // [rsp+18h] [rbp-430h]
  int v96[2]; // [rsp+28h] [rbp-420h]
  int v97[2]; // [rsp+28h] [rbp-420h]
  int v98[2]; // [rsp+28h] [rbp-420h]
  int v99; // [rsp+34h] [rbp-414h]
  __int64 v100; // [rsp+38h] [rbp-410h]
  _BYTE v101[9]; // [rsp+47h] [rbp-401h] BYREF
  __int64 v102; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 v103; // [rsp+58h] [rbp-3F0h] BYREF
  __m128i v104; // [rsp+60h] [rbp-3E8h] BYREF
  __int64 v105; // [rsp+70h] [rbp-3D8h]
  __int64 v106; // [rsp+80h] [rbp-3C8h] BYREF
  char v107; // [rsp+88h] [rbp-3C0h]
  __int64 v108; // [rsp+8Ch] [rbp-3BCh]
  char v109; // [rsp+94h] [rbp-3B4h]
  void *v110; // [rsp+98h] [rbp-3B0h]
  __int64 v111; // [rsp+A0h] [rbp-3A8h]
  _BYTE v112[24]; // [rsp+A8h] [rbp-3A0h] BYREF
  __int64 v113[18]; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v114; // [rsp+150h] [rbp-2F8h] BYREF
  __int64 *v115; // [rsp+158h] [rbp-2F0h]
  __int64 v116; // [rsp+160h] [rbp-2E8h]
  __int64 v117; // [rsp+168h] [rbp-2E0h] BYREF
  void *v118[2]; // [rsp+1A8h] [rbp-2A0h]
  __int64 v119; // [rsp+1B8h] [rbp-290h]
  __int64 v120; // [rsp+1C0h] [rbp-288h]
  __m128i v121; // [rsp+1C8h] [rbp-280h]
  __int64 v122; // [rsp+1D8h] [rbp-270h]
  __int64 v123; // [rsp+1E0h] [rbp-268h]
  __int64 v124; // [rsp+1E8h] [rbp-260h]
  __int64 v125; // [rsp+1F0h] [rbp-258h]
  _QWORD v126[2]; // [rsp+200h] [rbp-248h] BYREF
  __int64 v127; // [rsp+210h] [rbp-238h]
  unsigned __int8 *v128; // [rsp+220h] [rbp-228h] BYREF
  void *v129; // [rsp+250h] [rbp-1F8h]
  __int64 v130; // [rsp+258h] [rbp-1F0h]
  int v131; // [rsp+260h] [rbp-1E8h]
  char v132; // [rsp+264h] [rbp-1E4h]
  _BYTE v133[24]; // [rsp+268h] [rbp-1E0h] BYREF
  unsigned int v134; // [rsp+280h] [rbp-1C8h]
  char v135; // [rsp+284h] [rbp-1C4h]
  __int64 v136; // [rsp+368h] [rbp-E0h]
  void *ptr; // [rsp+370h] [rbp-D8h]
  __int64 v138; // [rsp+378h] [rbp-D0h]
  _QWORD v139[3]; // [rsp+380h] [rbp-C8h] BYREF
  int v140; // [rsp+398h] [rbp-B0h]
  int v141; // [rsp+39Ch] [rbp-ACh]
  char v142; // [rsp+3A8h] [rbp-A0h]
  void *v143; // [rsp+3B0h] [rbp-98h]
  __int64 v144; // [rsp+3B8h] [rbp-90h]
  int v145; // [rsp+3C0h] [rbp-88h]
  char v146; // [rsp+3C4h] [rbp-84h]
  __int64 v147; // [rsp+3C8h] [rbp-80h] BYREF

  v8 = *(_DWORD *)(a3 + 80);
  v95 = *(_QWORD *)a3;
  v12 = (_QWORD *)sub_1E85170(a1, a3);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    v26 = v8;
    v24 = 0;
    sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v26, 0x14F0u, 0);
    sub_15F7200(v126);
  }
  else
  {
    sub_17B46E0((__int64)&v104, (__int64 *)a1, a3, v9, v10, v11, a6);
    if ( !(unsigned __int8)sub_1E535C0(a1, v8, v12, 9)
      && !(unsigned __int8)sub_1E536B0(a1, &v104, 9)
      && !(unsigned __int8)sub_1E53090(a1, a3 + 8, 9) )
    {
      v13 = _mm_load_si128(&v104);
      v114 = 0;
      v115 = &v117;
      v116 = 0x800000000LL;
      *(_OWORD *)v118 = 0;
      v122 = v105;
      v119 = 0;
      v120 = a1;
      v121 = v13;
      v123 = 0;
      v124 = 0;
      v125 = 65793;
      sub_1A395A0(&v114);
      v18 = *(_QWORD *)(a3 + 16);
      v99 = *(_DWORD *)(a3 + 56);
      if ( v18 )
      {
        if ( sub_E917A0(v18, a3 + 8, v14, v15, v16, v17) )
        {
          v22 = *(_QWORD *)(a1 + 544);
          v23 = (char *)a2;
          v100 = 0;
          *(_QWORD *)&v101[1] = v22;
        }
        else
        {
          v74 = sub_16A2930(a1, a3 + 8, 0, v19, v20, v21);
          *(_QWORD *)&v101[1] = v74;
          if ( !v74 || (unsigned __int8)sub_169F990(a1, a3 + 8, v74) )
          {
LABEL_76:
            v24 = 0;
LABEL_42:
            sub_169D230((__int64)&v114);
            return v24;
          }
          sub_1A48440(a1, &v114, *(_QWORD *)&v101[1], 0);
          v22 = *(_QWORD *)&v101[1];
          v100 = *(_QWORD *)(a1 + 544);
          if ( v100 )
          {
            v79 = sub_B91570(*(__int64 *)&v101[1], (__int64)&v114, v75, v76, v77, v78);
            if ( v79 == sub_B91570(v100, (__int64)&v114, v80, v81, v82, v83) )
            {
              sub_168B9F0(
                (__int64)v126,
                (__int64 *)(a1 + 8),
                *(_DWORD *)(v95 + 264),
                (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 ? 3854 : 6768,
                0);
              sub_15F7200(v126);
            }
            v22 = *(_QWORD *)&v101[1];
            v23 = (char *)a2;
            v100 = 0;
          }
          else
          {
            v23 = (char *)a2;
          }
        }
      }
      else
      {
        v45 = *(_QWORD *)(a1 + 544);
        v46 = v45 - 64;
        if ( !v45 )
          v46 = 0;
        while ( 1 )
        {
          v47 = *(_QWORD *)(v46 + 16);
          v48 = v47 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v47 & 4) != 0 )
            v48 = *(_QWORD *)v48;
          v49 = *(_BYTE *)(v48 + 8) & 0x7F;
          if ( (unsigned int)(v49 - 59) > 2 )
            break;
          v46 = v48 - 64;
          if ( !v46 )
            goto LABEL_49;
        }
        if ( (unsigned int)(v49 - 34) <= 5 )
        {
          v100 = v48 - 72;
          if ( v48 != 72 )
          {
            v56 = *(_QWORD *)(a2 + 24);
            LODWORD(v114) = 0;
            LODWORD(v116) = 0;
            if ( v118[0] )
            {
              *(_QWORD *)v97 = v56;
              sub_1A39780(v118[0]);
              v56 = *(_QWORD *)v97;
            }
            *(_QWORD *)v98 = v56;
            *(_OWORD *)v118 = 0;
            BYTE6(v125) = 0;
            LODWORD(v124) = 10;
            sub_1A395A0(&v114);
            sub_1A49A10(a1, &v114, a2, 0, 0);
            if ( (_DWORD)v116 )
            {
              v57 = (_QWORD *)(*(_QWORD *)((*v115 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)((*v115 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
                v57 = (_QWORD *)*v57;
              *(_QWORD *)&v101[1] = v57;
            }
            else
            {
              *(_QWORD *)&v101[1] = v48;
            }
            sub_17A42D0((unsigned __int64 *)&v101[1]);
            v22 = *(_QWORD *)&v101[1];
            v23 = *(char **)v98;
            goto LABEL_8;
          }
        }
LABEL_49:
        v50 = *(_BYTE *)(v45 + 8);
        *(_QWORD *)&v101[1] = *(_QWORD *)(a1 + 544);
        if ( ((v50 + 70) & 0x7Fu) <= 3 )
        {
          do
          {
            v45 = sub_B72690(v45);
            *(_QWORD *)&v101[1] = v45;
          }
          while ( ((*(_BYTE *)(v45 + 8) + 70) & 0x7Fu) <= 3 );
        }
        v51 = sub_B8E650(v45);
        if ( v99 == 7 )
        {
          while ( 1 )
          {
            sub_1A48440(a1, &v114, v51, 0);
            v54 = (unsigned int)v116;
            if ( (_DWORD)v116 )
              break;
            if ( (*(_BYTE *)(v51 + 8) & 0x7F) == 0 )
            {
LABEL_54:
              v51 = *(_QWORD *)&v101[1];
              goto LABEL_55;
            }
            v51 = sub_B72690(v51);
          }
        }
        else
        {
          while ( 1 )
          {
            sub_1A48440(a1, &v114, v51, 0);
            v55 = (unsigned int)v116;
            if ( (_DWORD)v116 )
              break;
            if ( (*(_BYTE *)(v51 + 8) & 0x7F) == 0 || (*(_BYTE *)(v51 + 8) & 0x7F) == 0x18 )
              goto LABEL_54;
            v51 = sub_B72690(v51);
          }
        }
        *(_QWORD *)&v101[1] = v51;
LABEL_55:
        v22 = *(_QWORD *)&v101[1];
        v100 = 0;
        v23 = sub_17A3280((char *)a2, v51, v52, v53, v54, v55);
      }
LABEL_8:
      if ( ((*(_BYTE *)(v22 + 8) + 70) & 0x7Fu) > 3 )
      {
        switch ( *(_DWORD *)(a3 + 56) )
        {
          case 2:
            v59 = 2;
            break;
          case 4:
          case 5:
            v59 = 0;
            break;
          case 6:
            v59 = 1;
            break;
          case 9:
            v59 = 3;
            break;
          default:
            goto LABEL_13;
        }
        sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v8, 0xFA8u, 0);
        if ( v133[16] )
        {
          sub_AE9DF0(&v128, v59, 2u);
        }
        else if ( v135 )
        {
          v87 = sub_168B9E0(v126);
          v90 = v127;
          if ( v127 )
            v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 32LL))(v127);
          v113[0] = v90;
          v91 = sub_1587BC0(v87, v113, v85, v86, v88, v89);
          sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v134 + 8), v59, 2u);
        }
        sub_15F7200(v126);
        goto LABEL_76;
      }
LABEL_13:
      *(_QWORD *)v96 = v23;
      v27 = *(_QWORD *)(a1 + 264);
      v129 = v133;
      v138 = 0x200000000LL;
      v130 = 32;
      v131 = 0;
      v132 = 1;
      ptr = v139;
      v139[2] = v27;
      v140 = *(_DWORD *)(v27 + 196);
      LODWORD(v27) = *(_DWORD *)(v27 + 200);
      v142 = 0;
      v141 = v27;
      v143 = &v147;
      v144 = 8;
      v145 = 0;
      v146 = 1;
      sub_15ED360((__int64)v126, a2, 8);
      LODWORD(v28) = v96[0];
      if ( !*(_QWORD *)v96 )
      {
        v136 = *(_QWORD *)&v101[1];
        v28 = v126;
      }
      v101[0] = 1;
      v29 = sub_17F7EC0(a1, (int)v28, a3, *(int *)&v101[1], (int)v12, (int)&v114, a4, a5, (__int64)v101);
      v24 = v29;
      if ( !v29 )
      {
LABEL_36:
        if ( !v146 )
          free(v143);
        if ( ptr != v139 )
          free(ptr);
        if ( !v132 )
          free(v129);
        goto LABEL_42;
      }
      v30 = *(_QWORD *)(v29 + 16);
      v31 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v30 & 4) != 0 )
        v31 = (_QWORD *)*v31;
      v32 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)&v101[1] = v31;
      if ( !(unsigned __int8)sub_B8E180(v32) )
      {
        *(_QWORD *)&v101[1] = sub_B8EAA0(*(__int64 *)&v101[1]);
        sub_B94A80(*(__int64 *)&v101[1], v24, v60, v61, v62, v63);
        v68 = sub_17A3280((char *)a2, *(__int64 *)&v101[1], v64, v65, v66, v67);
        if ( v68 )
          sub_17B7670(a1, v24, (__int64)v68, 0, v69, v70);
      }
      v33 = sub_BA5C60(
              *(_QWORD **)(a1 + 248),
              *(_QWORD *)(a1 + 544),
              *(_DWORD *)(a3 + 80),
              v24 & 0xFFFFFFFFFFFFFFFBLL,
              *(_DWORD *)(v95 + 264),
              0,
              nullptr,
              0);
      *(_BYTE *)(v33 + 29) &= 0x9Fu;
      v34 = v33;
      sub_B94AD0(*(__m128i **)(a1 + 544), v33, v35, v36, v37, v38);
      v41 = v92;
      if ( *(char *)(v24 + 28) < 0 )
      {
        sub_B88650(v34, 1);
LABEL_35:
        sub_17B7510(a1, v24);
        goto LABEL_36;
      }
      if ( ((*(_BYTE *)(*(_QWORD *)&v101[1] + 8LL) + 70) & 0x7Fu) <= 3 )
      {
        v41 = (__int64 *)v24;
        sub_165BD80((_QWORD *)a1, v24);
      }
      v42 = v24;
      if ( (*(_BYTE *)(v24 + 28) & 0x7F) == 0x47 )
        v42 = *(_QWORD *)(v24 + 48);
      if ( (*(_BYTE *)(a3 + 720) & 0xC) != 0 )
      {
        v39 = *(unsigned int *)(a3 + 8);
        if ( (_DWORD)v39 && (v40 = *(unsigned int *)(a3 + 12), (_DWORD)v40) || *(_QWORD *)(a3 + 16) )
        {
          sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), v39, 0x1314u, 0);
          v41 = &v106;
          v106 = *(_QWORD *)(a3 + 16);
          sub_17AE3B0((__int64)v113, &v106);
          if ( (*(_BYTE *)(*(_QWORD *)&v101[1] + 8LL) & 0x7F) == 0x18
            || (*(_BYTE *)(*(_QWORD *)&v101[1] + 8LL) & 0x7F) == 0 )
          {
            v43 = *(_QWORD *)(a3 + 8);
            v41 = &v106;
            v110 = v112;
            v108 = 0;
            v109 = 0;
            v111 = 0;
            v112[0] = 0;
            v112[16] = 0;
            v106 = v43;
            v107 = 1;
            sub_1589170((__int64)v113, &v106);
            if ( v110 != v112 )
              operator delete(v110);
          }
          sub_15F7200(v113);
          goto LABEL_33;
        }
        if ( v100 )
        {
          v41 = (__int64 *)(a1 + 8);
          v84 = 3853;
        }
        else
        {
          if ( v99 != 7 )
            goto LABEL_33;
          v41 = (__int64 *)(a1 + 8);
          v84 = 3856;
        }
        sub_168B9F0((__int64)v113, v41, v104.m128i_u32[2], v84, 0);
        sub_15F7200(v113);
      }
LABEL_33:
      if ( sub_1838CB0(v42, (__int64)v41, v39, v40) )
      {
        v58 = *(_BYTE *)(a3 + 720);
        if ( (v58 & 0x10) != 0 )
        {
          sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), *(_DWORD *)(v42 + 24), 0xF0Bu, 0);
          sub_15F7200(v113);
          sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), *(_DWORD *)((*v115 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x70u, 0);
          sub_15F7200(v113);
        }
        else if ( (v58 & 0xC) == 0 )
        {
          sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), *(_DWORD *)(v42 + 24), 0xF0Au, 0);
          sub_15F7200(v113);
        }
      }
      v44 = *(_QWORD *)(v42 + 56);
      if ( (v44 & 4) != 0 && *(_DWORD *)((v44 & 0xFFFFFFFFFFFFFFF8LL) + 16) && *(_QWORD *)(a3 + 16) )
      {
        sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), *(_DWORD *)(v42 + 24), 0x1D06u, 0);
        v102 = *(_QWORD *)(a3 + 16);
        v71 = sub_17AE3B0((__int64)v113, &v102);
        v106 = *(_QWORD *)(a3 + 8);
        v72 = sub_1587DB0(v71, &v106);
        v73 = *(_QWORD *)(a1 + 544);
        if ( v73 )
          v73 -= 64;
        v103 = v73;
        sub_1852F10(v72, &v103);
        sub_15F7200(v113);
        *(_BYTE *)(v34 + 64) |= 1u;
      }
      goto LABEL_35;
    }
    return 0;
  }
  return v24;
}
