__int64 __fastcall sub_F340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 result; // rax
  unsigned int v10; // eax
  __int64 *v11; // rdx
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // rbp
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned int v29; // eax
  __int64 *v30; // rdx
  unsigned int v31; // eax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 *v34; // rdx
  unsigned int v35; // eax
  _DWORD *v36; // rdx
  unsigned int v37; // eax
  _DWORD *v38; // rdx
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 *v41; // r12
  __int64 v42; // rdx
  __int64 *v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rbp
  _QWORD *v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 *v53; // rax
  unsigned int v54; // eax
  _DWORD *v55; // rdx
  const char *v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  bool v59; // zf
  const char *v60; // rax
  __int64 v61; // rdx
  int v62; // eax
  unsigned int v63; // eax
  __int64 *v64; // rdx
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 *v68; // rdi
  _QWORD **v69; // rax
  unsigned int v70; // eax
  __int64 *v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdi
  unsigned __int8 **v81; // rax
  unsigned int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rsi
  const char *v85; // rdi
  __int64 v86; // rcx
  int v87; // r9d
  __int64 v88; // rsi
  _DWORD *v89; // r10
  __int64 v90; // rcx
  __int64 *v91; // r12
  _DWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // r14
  _QWORD *v98; // rbx
  __int64 v99; // rdi
  __int64 v100; // r12
  __int64 i; // r15
  __int64 *v102; // r13
  __int64 v103; // rdi
  __int64 v104; // rdi
  __int64 v105; // rdi
  __int64 v106; // rdi
  unsigned int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rsi
  __int64 *v111; // rax
  unsigned int v112; // eax
  __int64 *v113; // rdx
  unsigned int v114; // eax
  __int64 *v115; // rdx
  unsigned int v116; // edx
  __int64 *v117; // rdx
  _DWORD **v118; // rdx
  __int64 **v119; // rdx
  __int64 *v120; // rdx
  __int64 *v121; // rdx
  const char **v122; // rax
  int *v123; // rdx
  _DWORD **v124; // rax
  _QWORD **v125; // rdx
  _QWORD **v126; // rdx
  __int64 v127; // rax
  __int64 v128; // [rsp+0h] [rbp-1C8h]
  __int64 v129; // [rsp+8h] [rbp-1C0h]
  __int64 v130; // [rsp+18h] [rbp-1B0h] BYREF
  __int128 v131; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v132; // [rsp+30h] [rbp-198h]
  __int64 v133; // [rsp+38h] [rbp-190h]
  __int64 v134; // [rsp+40h] [rbp-188h]
  char v135; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v136[8]; // [rsp+188h] [rbp-40h] BYREF

  v136[0] = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      hook_event_listener(3, a1 + 224, &LPH, 0);
      goto LABEL_3;
    case 1LL:
      v94 = a1 + 224;
      unhook_event_listener(3, a1 + 224);
      v96 = *(_QWORD *)(a1 + 152);
      if ( v96 )
      {
        v129 = *(_QWORD *)(a1 + 160);
        if ( v129 )
        {
          v128 = 0;
          v97 = 0;
          do
          {
            v98 = (_QWORD *)(v96 + v97);
            v99 = *(_QWORD *)(v96 + v97 + 56);
            if ( v99 )
            {
              v100 = v98[8];
              if ( v100 )
              {
                for ( i = 0; i != v100; ++i )
                {
                  v102 = (__int64 *)(v99 + 48 * i);
                  v103 = v102[3];
                  if ( v103 )
                  {
                    v102[4] = 0;
                    qfree(v103, v94, v95, a7);
                  }
                  v104 = *v102;
                  if ( *v102 )
                  {
                    v102[1] = 0;
                    qfree(v104, v94, v95, a7);
                  }
                  v99 = v98[7];
                }
              }
              v98[8] = 0;
              qfree(v99, v94, v95, a7);
            }
            v105 = v98[4];
            if ( v105 )
            {
              v98[5] = 0;
              qfree(v105, v94, v95, a7);
            }
            v106 = v98[1];
            if ( v106 )
            {
              v98[2] = 0;
              qfree(v106, v94, v95, a7);
            }
            ++v128;
            v96 = *(_QWORD *)(a1 + 152);
            v97 += 88;
          }
          while ( v129 != v128 );
        }
        *(_QWORD *)(a1 + 160) = 0;
        qfree(v96, v94, v95, a7);
        *(_QWORD *)(a1 + 152) = 0;
        *(_QWORD *)(a1 + 168) = 0;
      }
      clr_module_data((unsigned int)dword_16050);
      return 0;
    case 2LL:
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v36 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v36 + 2;
      }
      else
      {
        v36 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v35);
        *(_DWORD *)a3 = v35 + 8;
      }
      *(_DWORD *)(a1 + 280) = *v36;
      v37 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v38 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v38 + 2;
      }
      else
      {
        v38 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v37);
        *(_DWORD *)a3 = v37 + 8;
      }
      sub_F250(a1, *v38 != 0);
      if ( netnode_qsupstr(**(_QWORD **)(a1 + 208), a1 + 128, -1, 83) > 0 )
        sub_E0C0(a1 + 120, 0, a7);
      return 0;
    case 4LL:
      v26 = getinf(5);
      if ( (unsigned int)v26 <= 0xD )
      {
        v27 = -8293;
        if ( !_bittest64(&v27, v26) )
          sub_EF30(a1, a7);
      }
      v28 = *(_QWORD *)(a1 + 248);
      v130 = *(unsigned __int16 *)(a1 + 256);
      netnode_supset(v28, -3, &v130, 8, 65);
      return 0;
    case 5LL:
      goto LABEL_7;
    case 8LL:
      v82 = *(_DWORD *)a3;
      if ( v82 > 0x2F )
      {
        v122 = *(const char ***)(a3 + 8);
        v123 = (int *)(v122 + 1);
        *(_QWORD *)(a3 + 8) = v122 + 1;
        v85 = *v122;
LABEL_153:
        v124 = (_DWORD **)(v123 + 2);
        *(_QWORD *)(a3 + 8) = v123 + 2;
        v87 = *v123;
LABEL_154:
        v125 = (_QWORD **)(v124 + 1);
        *(_QWORD *)(a3 + 8) = v124 + 1;
        v89 = *v124;
LABEL_155:
        v92 = v125 + 1;
        *(_QWORD *)(a3 + 8) = v125 + 1;
        v91 = *v125;
        goto LABEL_156;
      }
      v83 = *(_QWORD *)(a3 + 16);
      v84 = v82 + 8;
      *(_DWORD *)a3 = v84;
      v85 = *(const char **)(v83 + v82);
      if ( (unsigned int)v84 > 0x2F )
      {
        v123 = *(int **)(a3 + 8);
        goto LABEL_153;
      }
      v86 = v82 + 16;
      *(_DWORD *)a3 = v86;
      v87 = *(_DWORD *)(v83 + v84);
      if ( (unsigned int)v86 > 0x2F )
      {
        v124 = *(_DWORD ***)(a3 + 8);
        goto LABEL_154;
      }
      v88 = v82 + 24;
      *(_DWORD *)a3 = v88;
      v89 = *(_DWORD **)(v83 + v86);
      if ( (unsigned int)v88 > 0x2F )
      {
        v125 = *(_QWORD ***)(a3 + 8);
        goto LABEL_155;
      }
      v90 = v82 + 32;
      *(_DWORD *)a3 = v90;
      v91 = *(__int64 **)(v83 + v88);
      if ( (unsigned int)v90 <= 0x2F )
      {
        v92 = (_DWORD *)(v90 + v83);
        *(_DWORD *)a3 = v82 + 40;
        goto LABEL_93;
      }
      v92 = *(_DWORD **)(a3 + 8);
LABEL_156:
      *(_QWORD *)(a3 + 8) = v92 + 2;
LABEL_93:
      v93 = sub_F0E0(a1, v85, v87, v89, *v92 != 0);
      if ( !v93 )
        return 1;
      if ( v91 )
        *v91 = v93;
      return -1;
    case 10LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 1;
      }
      else
      {
        v34 = (__int64 *)(*(_QWORD *)(a3 + 16) + v33);
        *(_DWORD *)a3 = v33 + 8;
      }
      return (int)sub_5E20(a1, *v34);
    case 11LL:
      v24 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v25 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v25 + 1;
      }
      else
      {
        v25 = (__int64 *)(*(_QWORD *)(a3 + 16) + v24);
        *(_DWORD *)a3 = v24 + 8;
      }
      if ( !(unsigned int)sub_BB40(a1, *v25, a7) )
        return -1;
      return 1;
    case 12LL:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v11 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (__int64 *)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      sub_DAA0(*v11);
      return 1;
    case 13LL:
      v112 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v113 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v113 + 1;
      }
      else
      {
        v113 = (__int64 *)(*(_QWORD *)(a3 + 16) + v112);
        *(_DWORD *)a3 = v112 + 8;
      }
      sub_DAC0(a1, *v113);
      return 1;
    case 14LL:
      v107 = *(_DWORD *)a3;
      if ( v107 > 0x2F )
      {
        v117 = *(__int64 **)(a3 + 8);
        v111 = v117 + 1;
        *(_QWORD *)(a3 + 8) = v117 + 1;
        v110 = *v117;
      }
      else
      {
        v108 = *(_QWORD *)(a3 + 16);
        v109 = v107 + 8;
        *(_DWORD *)a3 = v109;
        v110 = *(_QWORD *)(v108 + v107);
        if ( (unsigned int)v109 <= 0x2F )
        {
          v111 = (__int64 *)(v109 + v108);
          *(_DWORD *)a3 = v107 + 16;
          goto LABEL_118;
        }
        v111 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v111 + 1;
LABEL_118:
      sub_D780(a1, v110, *v111);
      return 1;
    case 15LL:
      v116 = *(_DWORD *)a3;
      if ( v116 > 0x2F )
      {
        v127 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v127;
      }
      else
      {
        *(_DWORD *)a3 = v116 + 8;
        if ( v116 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v116 + 16;
          goto LABEL_129;
        }
        v127 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v127 + 8;
LABEL_129:
      nullsub_2();
      return 1;
    case 17LL:
      v63 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v64 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v64 + 1;
      }
      else
      {
        v64 = (__int64 *)(*(_QWORD *)(a3 + 16) + v63);
        *(_DWORD *)a3 = v63 + 8;
      }
      sub_D770(*v64);
      return 1;
    case 19LL:
      v77 = *(_DWORD *)a3;
      if ( v77 > 0x2F )
      {
        v121 = *(__int64 **)(a3 + 8);
        v81 = (unsigned __int8 **)(v121 + 1);
        *(_QWORD *)(a3 + 8) = v121 + 1;
        v80 = *v121;
      }
      else
      {
        v78 = *(_QWORD *)(a3 + 16);
        v79 = v77 + 8;
        *(_DWORD *)a3 = v79;
        v80 = *(_QWORD *)(v78 + v77);
        if ( (unsigned int)v79 <= 0x2F )
        {
          v81 = (unsigned __int8 **)(v79 + v78);
          *(_DWORD *)a3 = v77 + 16;
          goto LABEL_85;
        }
        v81 = *(unsigned __int8 ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v81 + 1;
LABEL_85:
      if ( !(unsigned __int8)sub_D330(v80, *v81, a7) )
        return -1;
      return 1;
    case 37LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v71 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v71 + 1;
      }
      else
      {
        v71 = (__int64 *)(*(_QWORD *)(a3 + 16) + v70);
        *(_DWORD *)a3 = v70 + 8;
      }
      v72 = *v71;
      if ( (unsigned __int8)sub_98A0(*v71, 1, (__int64)v71, a4, a5, a6) )
        return 1;
      return -(unsigned __int8)sub_98A0(v72, 0, v73, v74, v75, v76);
    case 40LL:
      v49 = *(_DWORD *)a3;
      if ( v49 > 0x2F )
      {
        v120 = *(__int64 **)(a3 + 8);
        v53 = v120 + 1;
        *(_QWORD *)(a3 + 8) = v120 + 1;
        v52 = *v120;
      }
      else
      {
        v50 = *(_QWORD *)(a3 + 16);
        v51 = v49 + 8;
        *(_DWORD *)a3 = v51;
        v52 = *(_QWORD *)(v50 + v49);
        if ( (unsigned int)v51 <= 0x2F )
        {
          v53 = (__int64 *)(v51 + v50);
          *(_DWORD *)a3 = v49 + 16;
          goto LABEL_55;
        }
        v53 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v53 + 1;
LABEL_55:
      if ( !(unsigned __int8)sub_A440(v52, *v53) )
        return -1;
      return 1;
    case 43LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (__int64 *)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      return (int)sub_9A80(*v30);
    case 45LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      else
      {
        v13 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      v14 = (_QWORD *)*v13;
      v15 = &v135;
      v132 = -1;
      v131 = -1;
      v133 = 0;
      v134 = 0;
      do
      {
        *(_WORD *)v15 = 0;
        v15 += 40;
        *((_WORD *)v15 - 19) = 0;
        *((_WORD *)v15 - 18) = 0;
        *((_DWORD *)v15 - 2) = 0;
        *((_WORD *)v15 - 17) = 0;
        *((_OWORD *)v15 - 2) = 0;
        *((_QWORD *)v15 - 2) = 0;
      }
      while ( v136 != (_QWORD *)v15 );
      v16 = (unsigned int)decode_insn(&v131, *v14, v136, 0, 0, a6, 0.0);
      result = 0;
      if ( (_DWORD)v16 )
      {
        if ( (unsigned __int8)sub_98A0((__int64)&v131, 0, v16, v17, v18, v19) )
        {
          *v14 = v132 + WORD1(v133);
          return 1;
        }
        else
        {
          return (unsigned __int8)sub_98A0((__int64)&v131, 1, v20, v21, v22, v23);
        }
      }
      return result;
    case 47LL:
      v114 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v115 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v115 + 1;
      }
      else
      {
        v115 = (__int64 *)(*(_QWORD *)(a3 + 16) + v114);
        *(_DWORD *)a3 = v114 + 8;
      }
      if ( !sub_9BA0(*v115) )
        return -1;
      return 1;
    case 55LL:
      v65 = *(_DWORD *)a3;
      if ( v65 > 0x2F )
      {
        v119 = *(__int64 ***)(a3 + 8);
        v69 = v119 + 1;
        *(_QWORD *)(a3 + 8) = v119 + 1;
        v68 = *v119;
      }
      else
      {
        v66 = *(_QWORD *)(a3 + 16);
        v67 = v65 + 8;
        *(_DWORD *)a3 = v67;
        v68 = *(__int64 **)(v66 + v65);
        if ( (unsigned int)v67 <= 0x2F )
        {
          v69 = (_QWORD **)(v67 + v66);
          *(_DWORD *)a3 = v65 + 16;
          return (int)sub_9830(v68, *v69);
        }
        v69 = *(_QWORD ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v69 + 1;
      return (int)sub_9830(v68, *v69);
    case 60LL:
      v44 = *(_DWORD *)a3;
      if ( v44 > 0x2F )
      {
        v118 = *(_DWORD ***)(a3 + 8);
        v48 = v118 + 1;
        *(_QWORD *)(a3 + 8) = v118 + 1;
        v47 = *v118;
      }
      else
      {
        v45 = *(_QWORD *)(a3 + 16);
        v46 = v44 + 8;
        *(_DWORD *)a3 = v46;
        v47 = *(_DWORD **)(v45 + v44);
        if ( (unsigned int)v46 <= 0x2F )
        {
          v48 = (_QWORD *)(v46 + v45);
          *(_DWORD *)a3 = v44 + 16;
          goto LABEL_51;
        }
        v48 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v48 + 1;
LABEL_51:
      *v47 = sub_9B90(*v48);
      return 1;
    case 81LL:
      v39 = *(_DWORD *)a3;
      if ( v39 > 0x2F )
      {
        v126 = *(_QWORD ***)(a3 + 8);
        v43 = (__int64 *)(v126 + 1);
        *(_QWORD *)(a3 + 8) = v126 + 1;
        v41 = *v126;
      }
      else
      {
        v40 = *(_QWORD *)(a3 + 16);
        a4 = v39 + 8;
        *(_DWORD *)a3 = a4;
        v41 = *(__int64 **)(v40 + v39);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v42 = v39 + 16;
          v43 = (__int64 *)(a4 + v40);
          *(_DWORD *)a3 = v42;
          goto LABEL_47;
        }
        v43 = *(__int64 **)(a3 + 8);
      }
      v42 = (__int64)(v43 + 1);
      *(_QWORD *)(a3 + 8) = v43 + 1;
LABEL_47:
      *v41 = sub_B210(a1, *v43, v42, a4, a5, a6);
      return 1;
    case 86LL:
      *(_DWORD *)(a1 + 280) = sub_EBF0(*(_QWORD *)(a1 + 16));
      sub_F250(a1, 0);
      v59 = (unsigned __int8)getinf(8) == 0;
      v60 = "fsrra";
      if ( !v59 )
        v60 = "ftst/nan";
      v61 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 2384) = v60;
      v62 = *(_DWORD *)(a1 + 280);
      if ( v62 == *(_DWORD *)(a1 + 268) || v62 == *(_DWORD *)(a1 + 272) || v62 == *(_DWORD *)(a1 + 276) )
      {
        *(_QWORD *)(v61 + 120) = ".float";
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) = ".double";
      }
      else
      {
        *(_QWORD *)(v61 + 120) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) = 0;
      }
LABEL_7:
      sub_F2C0(a1, a7);
      return 0;
    case 90LL:
      v54 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v55 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v55 + 2;
      }
      else
      {
        v55 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v54);
        *(_DWORD *)a3 = v54 + 8;
      }
      v56 = "fsrra";
      if ( *v55 )
        v56 = "ftst/nan";
      v57 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 2384) = v56;
      v58 = *(_DWORD *)(a1 + 280);
      if ( v58 == *(_DWORD *)(a1 + 268) || v58 == *(_DWORD *)(a1 + 272) || v58 == *(_DWORD *)(a1 + 276) )
      {
        *(_QWORD *)(v57 + 120) = ".float";
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) = ".double";
      }
      else
      {
        *(_QWORD *)(v57 + 120) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL) = 0;
      }
      return 0;
    case 94LL:
      v31 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v32 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v32 + 1;
      }
      else
      {
        v32 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v31);
        *(_DWORD *)a3 = v31 + 8;
      }
      sub_10CC0(*v32, a2, (_DWORD)v32, a4, a5, a6);
      return 0;
    case 95LL:
LABEL_3:
      netnode_check(a1 + 248, "$ sh3 additional info", 0, 1);
      return 0;
    case 96LL:
      if ( !(_BYTE)byte_16048 && __cxa_guard_acquire(&byte_16048) )
      {
        qword_15FA0 = *(_QWORD *)(a1 + 248);
        qword_15FB8 = qword_15FA0;
        qword_15FD0 = qword_15FA0;
        qword_15FE8 = qword_15FA0;
        __cxa_guard_release(&byte_16048);
      }
      return (int)cvt64_node_supval_for_event(a3, &qword_15FA0, 4);
    default:
      return 0;
  }
}
