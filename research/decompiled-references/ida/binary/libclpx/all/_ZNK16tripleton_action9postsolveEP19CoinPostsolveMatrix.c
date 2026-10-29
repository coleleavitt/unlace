void __fastcall tripleton_action::postsolve(tripleton_action *this, CoinPostsolveMatrix *a2)
{
  unsigned __int64 v2; // r15
  int v3; // r14d
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  double *v9; // rax
  size_t v10; // rdx
  unsigned __int64 v11; // rbx
  double *v12; // r15
  __int64 v14; // rax
  double v15; // xmm6_8
  __int64 v16; // r11
  double v17; // xmm7_8
  double v18; // xmm11_8
  __int64 v19; // r14
  double v20; // xmm10_8
  __int64 v21; // xmm1_8
  __int64 v22; // xmm0_8
  __int64 v23; // r9
  double *v24; // rdi
  double *v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rax
  double v28; // xmm3_8
  double v29; // xmm5_8
  double v30; // xmm6_8
  double v31; // xmm4_8
  __int64 v32; // rbp
  __int64 v33; // rax
  int v34; // r10d
  __int64 v35; // rdi
  __int64 v36; // rsi
  double v37; // xmm0_8
  int *v38; // r9
  int v39; // edx
  int v40; // r8d
  __int64 v41; // rcx
  double v42; // xmm1_8
  double v43; // xmm2_8
  double v44; // xmm2_8
  int v45; // edi
  int v46; // r14d
  __int64 v47; // rax
  int v48; // ecx
  int v49; // r11d
  int v50; // esi
  __int64 v51; // rbp
  double *v52; // r10
  int *v53; // rdx
  double *v54; // r8
  double v55; // xmm0_8
  int v56; // r8d
  int *v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r8
  double *v60; // rsi
  int v61; // ecx
  double v62; // xmm0_8
  __int64 v63; // rsi
  int v64; // ecx
  int v65; // r14d
  __int64 v66; // rax
  int v67; // r11d
  int v68; // esi
  __int64 v69; // rbp
  double *v70; // r10
  int *v71; // rdx
  double *v72; // r8
  double v73; // xmm0_8
  int v74; // r8d
  int *v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdi
  double *v78; // rsi
  int v79; // ecx
  double v80; // xmm0_8
  __int64 v81; // rsi
  double *v82; // rbp
  double *v83; // r14
  __int64 v84; // rax
  double *v85; // rcx
  char v86; // si
  double v87; // xmm3_8
  int v88; // [rsp+0h] [rbp-168h]
  __int64 v89; // [rsp+8h] [rbp-160h]
  __int64 v90; // [rsp+10h] [rbp-158h]
  char *v91; // [rsp+18h] [rbp-150h]
  double *v92; // [rsp+20h] [rbp-148h]
  int *v93; // [rsp+28h] [rbp-140h]
  int *v94; // [rsp+30h] [rbp-138h]
  __int64 v95; // [rsp+38h] [rbp-130h]
  __int64 v96; // [rsp+40h] [rbp-128h]
  __int64 v97; // [rsp+48h] [rbp-120h]
  __int64 v98; // [rsp+50h] [rbp-118h]
  double v99; // [rsp+50h] [rbp-118h]
  int *v100; // [rsp+58h] [rbp-110h]
  int *v101; // [rsp+58h] [rbp-110h]
  double v102; // [rsp+58h] [rbp-110h]
  __int64 v103; // [rsp+60h] [rbp-108h]
  __int64 v104; // [rsp+68h] [rbp-100h]
  __int64 v105; // [rsp+70h] [rbp-F8h]
  __int64 v106; // [rsp+78h] [rbp-F0h]
  __int64 v107; // [rsp+80h] [rbp-E8h]
  __int64 v108; // [rsp+88h] [rbp-E0h]
  __int64 v109; // [rsp+98h] [rbp-D0h]
  __int64 v110; // [rsp+A0h] [rbp-C8h]
  __int64 v111; // [rsp+C8h] [rbp-A0h]
  __int64 v112; // [rsp+D0h] [rbp-98h]
  double *v113; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v114; // [rsp+E0h] [rbp-88h]
  __int64 v115; // [rsp+E8h] [rbp-80h]
  __int64 v116; // [rsp+F0h] [rbp-78h]
  __int64 v117; // [rsp+F8h] [rbp-70h]
  __int64 v118; // [rsp+100h] [rbp-68h]
  double v119; // [rsp+108h] [rbp-60h]
  int v120; // [rsp+114h] [rbp-54h]
  double v121; // [rsp+118h] [rbp-50h]
  double v122; // [rsp+120h] [rbp-48h]

  v2 = *((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  v4 = *((_QWORD *)a2 + 8);
  v5 = *((_QWORD *)a2 + 33);
  v90 = *((_QWORD *)a2 + 7);
  v114 = v2;
  v105 = *((_QWORD *)a2 + 5);
  v106 = *((_QWORD *)a2 + 6);
  v111 = *((_QWORD *)a2 + 11);
  v112 = *((_QWORD *)a2 + 12);
  v95 = *((_QWORD *)a2 + 13);
  v96 = *((_QWORD *)a2 + 14);
  v115 = *((_QWORD *)a2 + 9);
  v116 = *((_QWORD *)a2 + 20);
  v109 = *((_QWORD *)a2 + 23);
  v6 = *((int *)a2 + 1);
  v97 = *((_QWORD *)a2 + 22);
  v119 = *((double *)a2 + 19);
  v89 = *((_QWORD *)a2 + 21);
  v121 = *((double *)a2 + 17);
  v117 = *((_QWORD *)a2 + 24);
  v122 = *((double *)a2 + 18);
  v118 = *((_QWORD *)a2 + 25);
  if ( v6 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v7 = 4 * v6;
  v8 = 8 * v6;
  v93 = (int *)operator new[](v7);
  v91 = (char *)operator new[](v8);
  memset(v91, 0, v8);
  v94 = (int *)operator new[](v7);
  v9 = (double *)operator new[](v8);
  v10 = v8;
  v92 = v9;
  v11 = v2;
  memset(v9, 0, v10);
  v12 = (double *)(v2 + 120LL * v3 - 120);
  if ( v11 <= (unsigned __int64)v12 )
  {
    while ( 1 )
    {
      v14 = *((int *)v12 + 2);
      v15 = v12[8];
      v16 = *((int *)v12 + 3);
      v17 = v12[11];
      v18 = v12[10];
      v19 = *((int *)v12 + 1);
      v20 = v12[12];
      v21 = *((_QWORD *)v12 + 2);
      v107 = 8 * v14;
      v22 = *((_QWORD *)v12 + 3);
      v23 = 8LL * *(int *)v12;
      v98 = *(int *)v12;
      v108 = 8 * v16;
      *(double *)(v95 + 8 * v14) = v15;
      v88 = v14;
      v120 = v16;
      v104 = v16;
      v110 = v23;
      *(double *)(v96 + 8 * v14) = v12[9];
      *(_QWORD *)(v111 + 8 * v16) = v21;
      *(_QWORD *)(v112 + 8 * v16) = v22;
      v24 = (double *)(8 * v16 + v115);
      v25 = (double *)(v115 + 8 * v19);
      *v24 = v12[4];
      *(double *)(v23 + v115) = v12[4] * v18 / v17 + *(double *)(v23 + v115);
      v103 = v19;
      v113 = (double *)(v23 + v116);
      *v25 = v12[4] * v20 / v17 + *v25;
      *(double *)(v116 + 8 * v16) = (v15 - *(double *)(v23 + v116) * v18 - *(double *)(v116 + 8 * v19) * v20) / v17;
      *(double *)(v97 + 8 * v14) = v15;
      if ( v118 )
        *(_BYTE *)(*((_QWORD *)a2 + 25) + v14) = *(_BYTE *)(*((_QWORD *)a2 + 25) + v14) & 0xF8 | 3;
      v26 = *((_QWORD *)v12 + 13);
      v27 = *((int *)v12 + 29);
      v28 = *v24 * v119;
      v29 = *(double *)(v23 + v115) * v119;
      v30 = v15 / v17;
      v31 = v119 * *v25;
      if ( (int)v27 <= 0 )
      {
        v45 = 0;
        v40 = -66666666;
      }
      else
      {
        v32 = v26 + 8 * v27;
        v33 = 1;
        v34 = -66666666;
        do
        {
          v35 = *((int *)a2 + 64);
          v36 = *(int *)(v32 + 4 * v33 - 4);
          v37 = *(double *)(v26 + 8 * v33 - 8);
          v38 = (int *)(v5 + 4 * v35);
          v39 = *(_DWORD *)(v32 + 4 * v33 - 4);
          v40 = *((_DWORD *)a2 + 64);
          *((_DWORD *)a2 + 64) = *v38;
          v41 = 8 * v36;
          if ( v88 != (_DWORD)v36 )
          {
            v42 = v30 * v37;
            v43 = *(double *)(v41 + v95);
            if ( v43 > -1.797693134862316e308 )
              *(double *)(v41 + v95) = v43 + v42;
            v44 = *(double *)(v41 + v96);
            if ( v44 < 1.797693134862316e308 )
              *(double *)(v41 + v96) = v44 + v42;
            *(double *)(v97 + 8 * v36) = v42 + *(double *)(v97 + 8 * v36);
            v28 = v28 - *(double *)(v89 + 8 * v36) * v37;
          }
          *(_DWORD *)(v90 + 4 * v35) = v39;
          *(double *)(v4 + 8 * v35) = v37;
          *v38 = v34;
          v34 = v40;
          v93[v33 - 1] = v39;
          *(double *)&v91[8 * v36] = v18 / v17 * v37;
          v45 = v33;
          v92[v36] = v37 * (v20 / v17);
          v94[v33++ - 1] = v39;
        }
        while ( *((_DWORD *)v12 + 29) > v45 );
      }
      *(_DWORD *)(v105 + 4 * v104) = v40;
      *(_DWORD *)(v106 + 4 * v104) = *((_DWORD *)v12 + 29);
      v46 = *(_DWORD *)(v106 + 4 * v98);
      v47 = -66666666;
      v100 = (int *)(4 * v98 + v105);
      v48 = *v100;
      v49 = v46;
      if ( v46 > 0 )
      {
        v50 = 0;
        while ( 1 )
        {
          v51 = *(int *)(v90 + 4LL * v48);
          v52 = (double *)(v4 + 8LL * v48);
          v53 = (int *)(v5 + 4LL * v48);
          v54 = (double *)&v91[8 * v51];
          v55 = *v52 + *v54;
          *v54 = 0.0;
          v56 = *v53;
          if ( fabs(v55) >= 1.0e-15 )
            break;
          --v49;
          *v53 = *((_DWORD *)a2 + 64);
          *((_DWORD *)a2 + 64) = v48;
          if ( (_DWORD)v47 == -66666666 )
          {
            *v100 = v56;
LABEL_18:
            ++v50;
            v48 = v56;
            if ( v46 == v50 )
              goto LABEL_22;
          }
          else
          {
            ++v50;
            v48 = v56;
            *(_DWORD *)(v5 + 4LL * (int)v47) = v56;
            if ( v46 == v50 )
              goto LABEL_22;
          }
        }
        *v52 = v55;
        v47 = v48;
        if ( v88 != (_DWORD)v51 )
          v29 = v29 - v55 * *(double *)(v89 + 8 * v51);
        goto LABEL_18;
      }
LABEL_22:
      if ( v45 )
      {
        v57 = v93;
        v58 = (__int64)&v93[v45 - 1 + 1];
        while ( 1 )
        {
          v59 = *v57;
          v60 = (double *)&v91[8 * v59];
          v61 = *v57;
          v62 = *v60;
          *v60 = 0.0;
          if ( fabs(v62) < 1.0e-15 )
            goto LABEL_25;
          if ( v88 != (_DWORD)v59 )
            v29 = v29 - *(double *)(v89 + 8 * v59) * v62;
          v63 = *((int *)a2 + 64);
          ++v49;
          *((_DWORD *)a2 + 64) = *(_DWORD *)(v5 + 4 * v63);
          *(_DWORD *)(v90 + 4 * v63) = v61;
          *(double *)(v4 + 8 * v63) = v62;
          if ( (_DWORD)v47 == -66666666 )
          {
            ++v57;
            *v100 = v63;
            v47 = (int)v63;
            if ( (int *)v58 == v57 )
              break;
          }
          else
          {
            *(_DWORD *)(v5 + 4 * v47) = v63;
            v47 = (int)v63;
LABEL_25:
            if ( (int *)v58 == ++v57 )
              break;
          }
        }
      }
      *(_DWORD *)(v5 + 4 * v47) = -66666666;
      *(_DWORD *)(v106 + 4 * v98) = v49;
      v101 = (int *)(4 * v103 + v105);
      v64 = *v101;
      v65 = *(_DWORD *)(v106 + 4 * v103);
      v66 = -66666666;
      v67 = v65;
      if ( v65 > 0 )
      {
        v68 = 0;
        while ( 1 )
        {
          v69 = *(int *)(v90 + 4LL * v64);
          v70 = (double *)(v4 + 8LL * v64);
          v71 = (int *)(v5 + 4LL * v64);
          v72 = &v92[v69];
          v73 = *v70 + *v72;
          *v72 = 0.0;
          v74 = *v71;
          if ( fabs(v73) >= 1.0e-15 )
            break;
          --v67;
          *v71 = *((_DWORD *)a2 + 64);
          *((_DWORD *)a2 + 64) = v64;
          if ( (_DWORD)v66 == -66666666 )
          {
            *v101 = v74;
LABEL_35:
            ++v68;
            v64 = v74;
            if ( v65 == v68 )
              goto LABEL_39;
          }
          else
          {
            ++v68;
            v64 = v74;
            *(_DWORD *)(v5 + 4LL * (int)v66) = v74;
            if ( v65 == v68 )
              goto LABEL_39;
          }
        }
        *v70 = v73;
        v66 = v64;
        if ( v88 != (_DWORD)v69 )
          v31 = v31 - v73 * *(double *)(v89 + 8 * v69);
        goto LABEL_35;
      }
LABEL_39:
      if ( v45 )
        break;
LABEL_48:
      v82 = (double *)(v89 + v107);
      *(_DWORD *)(v5 + 4 * v66) = -66666666;
      v83 = (double *)(v109 + v108);
      *(_DWORD *)(v106 + 4 * v103) = v67;
      if ( v117 )
      {
        v84 = *((_QWORD *)a2 + 24);
        v85 = (double *)(v109 + v110);
        v86 = *(_BYTE *)(v84 + v98) & 7;
        if ( v86 == 1
          || v121 > fabs(*(double *)(v111 + 8 * v98) - *v113) && *v85 >= -v122
          || v121 > fabs(*(double *)(v112 + 8 * v98) - *v113) && v122 >= *v85
          || !v86 && v122 >= COERCE_DOUBLE(*(_QWORD *)v85 & 0x7FFFFFFFFFFFFFFFLL) )
        {
          v87 = v28 / v17;
          *(_BYTE *)(v104 + v84) = *(_BYTE *)(v104 + v84) & 0xF8 | 1;
          *v82 = v87;
          *v85 = v29 - v87 * v18;
          *(double *)(v109 + 8 * v103) = v31 - v20 * *v82;
          *v83 = 0.0;
        }
        else
        {
          *(_BYTE *)(v84 + v98) = *(_BYTE *)(v84 + v98) & 0xF8 | 1;
          v102 = v31;
          v99 = v29;
          CoinPrePostsolveMatrix::setColumnStatusUsingValue(a2, v120);
          *v82 = v99 / v18;
          *(_QWORD *)(v109 + v110) = 0;
          *(double *)(v109 + 8 * v103) = v102 - v20 * *v82;
          *v83 = v28 - v17 * *v82;
        }
      }
      else
      {
        *v82 = v28 / v17;
        *v83 = 0.0;
      }
      v12 -= 15;
      if ( v114 > (unsigned __int64)v12 )
        goto LABEL_56;
    }
    v75 = v94;
    v76 = (__int64)&v94[v45 - 1 + 1];
    while ( 1 )
    {
      v77 = *v75;
      v78 = &v92[v77];
      v79 = *v75;
      v80 = *v78;
      *v78 = 0.0;
      if ( fabs(v80) < 1.0e-15 )
        goto LABEL_42;
      if ( v88 != (_DWORD)v77 )
        v31 = v31 - *(double *)(v89 + 8 * v77) * v80;
      v81 = *((int *)a2 + 64);
      ++v67;
      *((_DWORD *)a2 + 64) = *(_DWORD *)(v5 + 4 * v81);
      *(_DWORD *)(v90 + 4 * v81) = v79;
      *(double *)(v4 + 8 * v81) = v80;
      if ( (_DWORD)v66 == -66666666 )
      {
        ++v75;
        *v101 = v81;
        v66 = (int)v81;
        if ( (int *)v76 == v75 )
          goto LABEL_48;
      }
      else
      {
        *(_DWORD *)(v5 + 4 * v66) = v81;
        v66 = (int)v81;
LABEL_42:
        if ( (int *)v76 == ++v75 )
          goto LABEL_48;
      }
    }
  }
LABEL_56:
  operator delete[](v93);
  operator delete[](v91);
  operator delete[](v94);
  operator delete[](v92);
}

