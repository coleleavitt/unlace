ClpCholeskyDense *__fastcall ClpCholeskyDense::factorizePart2(ClpCholeskyDense *this, int *a2)
{
  int v3; // ebx
  __int64 v4; // r15
  int v5; // edi
  signed int v6; // ebp
  int v7; // r8d
  int v8; // r11d
  int v9; // edx
  __int64 v10; // r9
  int v11; // ebx
  int v12; // r14d
  int v13; // edi
  int v14; // r10d
  int v15; // ecx
  int v16; // esi
  int v17; // ebx
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // rbx
  int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // ecx
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r8
  unsigned int v34; // esi
  __int64 v35; // rax
  unsigned int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rsi
  bool v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edi
  int v53; // r11d
  unsigned int v54; // esi
  unsigned int v55; // r10d
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edi
  int v62; // edx
  int v63; // r8d
  __int64 v64; // rdi
  unsigned __int64 v65; // r9
  int v66; // edi
  int v67; // r13d
  int v68; // r12d
  unsigned __int64 v69; // r15
  int v70; // r8d
  unsigned int v71; // ebx
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // r10d
  int v77; // r11d
  unsigned int v78; // ebx
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r10d
  int v85; // r11d
  __int64 v86; // r10
  __int64 v87; // r11
  int v88; // r8d
  int v89; // eax
  __int64 v90; // xmm0_8
  __int64 v91; // r9
  int v92; // eax
  double *v93; // rcx
  __int64 v94; // rdx
  double v95; // xmm2_8
  double *v96; // rax
  double v97; // xmm1_8
  __int64 v98; // rsi
  int v99; // edx
  double v100; // xmm0_8
  double v102; // xmm1_8
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // [rsp+0h] [rbp-148h]
  int v106; // [rsp+0h] [rbp-148h]
  int v107; // [rsp+8h] [rbp-140h]
  __int64 v108; // [rsp+8h] [rbp-140h]
  __int64 v109; // [rsp+10h] [rbp-138h]
  __int64 v110; // [rsp+18h] [rbp-130h]
  int v111; // [rsp+18h] [rbp-130h]
  __int64 v112; // [rsp+20h] [rbp-128h]
  __int64 v113; // [rsp+20h] [rbp-128h]
  int v114; // [rsp+28h] [rbp-120h]
  __int64 v115; // [rsp+40h] [rbp-108h]
  __int64 v116; // [rsp+48h] [rbp-100h]
  __int64 v117; // [rsp+50h] [rbp-F8h]
  int v118; // [rsp+5Ch] [rbp-ECh]
  __int64 v119; // [rsp+60h] [rbp-E8h]
  __int64 v120; // [rsp+68h] [rbp-E0h]
  int v121; // [rsp+70h] [rbp-D8h]
  int v122; // [rsp+74h] [rbp-D4h]
  unsigned int v123; // [rsp+78h] [rbp-D0h]
  int v124; // [rsp+80h] [rbp-C8h]
  int v125; // [rsp+8Ch] [rbp-BCh]
  int v126; // [rsp+90h] [rbp-B8h]
  int v127; // [rsp+94h] [rbp-B4h]
  __int64 v128; // [rsp+98h] [rbp-B0h]
  int v129; // [rsp+A0h] [rbp-A8h]
  int v130; // [rsp+A4h] [rbp-A4h]
  __int64 v131; // [rsp+A8h] [rbp-A0h]
  int v133; // [rsp+C0h] [rbp-88h]
  _QWORD v135[5]; // [rsp+D0h] [rbp-78h] BYREF
  int v136; // [rsp+F8h] [rbp-50h]

  v3 = *((_DWORD *)this + 11);
  v4 = *((_QWORD *)this + 11);
  v125 = v3;
  v5 = (v3 + 15) >> 4;
  v6 = v3 & 0xFFFFFFF0;
  v133 = v5;
  v7 = v5 << 8;
  if ( v3 == (v3 & 0xFFFFFFF0) )
    v6 = v3 - 16;
  v8 = v3 - 1;
  v9 = v3;
  v10 = 8LL * v7;
  v11 = v3 - v6;
  v129 = v11;
  v122 = v8;
  v128 = v4 + v10;
  v12 = v8 * v9 / 2;
  v13 = v5 * (v5 + 1) / 2;
  v115 = *((_QWORD *)this + 15);
  if ( v11 == 16 )
  {
    v118 = v8;
    v127 = v13;
    v6 = v125;
    v126 = 0;
  }
  else
  {
    v127 = v13 - 1;
    v105 = v4 + v10 + 8LL * ((v13 - 1) << 8);
    v118 = v6 - 1;
    v14 = -17 * (16 - v11) + 256;
    v15 = -17 * (16 - v11);
    v16 = v14;
    if ( v8 >= v6 )
    {
      v17 = v8;
      v18 = 1;
      v19 = 16LL * (unsigned int)(v8 - v6);
      v20 = v125 - 2;
      v21 = v13 << 8;
      v22 = v21 + v7 + v15 + 240;
      v23 = 8 * v22;
      v110 = 8 * (v22 - v19);
      v24 = v115 + 8 * (v17 - v20);
      v112 = v105 - 8 * v21 - v10;
      v114 = v15 + 255;
      while ( 1 )
      {
        v25 = 16 * v18;
        v26 = v14 - 16 * v18;
        *(_QWORD *)(v105 + 8LL * (v16 - 1)) = *(_QWORD *)(v24 + 8 * v20);
        if ( v23 == v110 )
          break;
        if ( v122 <= (int)v20 )
        {
          v16 = v14 - 16 * v18;
        }
        else
        {
          v27 = 8LL * v12;
          v28 = v27 - 16;
          if ( (v27 <= v23 - 2064 || v27 - 16 >= v23 - 2048) && v18 > 0x18 )
          {
            if ( (((unsigned __int64)(v4 + v28) >> 3) & 1) != 0 )
            {
              v29 = v12 - 1;
              v26 = v114 - v25;
              *(_QWORD *)(v105 + 8LL * (v114 - v25)) = *(_QWORD *)(v4 + 8LL * (v12 - 1));
              v107 = v125 - 2;
            }
            else
            {
              v107 = v122;
              v29 = v12;
            }
            v30 = v18 - (((unsigned __int64)(v4 + v28) >> 3) & 1);
            v31 = -8LL * (((unsigned __int64)(v4 + v28) >> 3) & 1);
            v32 = v4 + v31 + v28;
            v33 = v4 + v23 - 2064 + v31;
            v34 = 0;
            v35 = 0;
            do
            {
              ++v34;
              *(_OWORD *)(v33 + v35) = *(_OWORD *)(v32 + v35);
              v35 -= 16;
            }
            while ( v30 >> 1 > v34 );
            v36 = v29 - (v30 & 0xFFFFFFFE);
            v37 = v26 - (v30 & 0xFFFFFFFE);
            if ( v30 != (v30 & 0xFFFFFFFE) )
            {
              v38 = (int)(v37 - 1);
              v39 = 8LL * (int)(v36 - 1);
              *(_QWORD *)(v105 + 8 * v38) = *(_QWORD *)(v4 + v39);
              if ( (int)(v107 - (v30 & 0xFFFFFFFE) - 1) > (int)v20 )
                *(_QWORD *)(v105 + 8 * v38 - 8) = *(_QWORD *)(v4 + v39 - 8);
            }
          }
          else
          {
            v40 = v4 + v27;
            v41 = 0;
            do
            {
              *(_QWORD *)(v23 + v112 + v41 - 8) = *(_QWORD *)(v40 + v41 - 8);
              v41 -= 8;
            }
            while ( v41 != 8 * ~(unsigned __int64)(v18 - 1) );
          }
          v12 -= v18;
          v16 = v14 - 17 * v18;
        }
        --v20;
        ++v18;
        v23 -= 128;
      }
    }
    v126 = 1;
  }
  if ( v6 > 0 )
  {
    v106 = v12;
    v42 = v4;
    v130 = v126 + 1;
    v111 = v118 - 16;
    v131 = v6 - 1LL;
    v123 = v125 - v118 - 1;
    v124 = v118 - v125 + 1;
    do
    {
      v120 = v128 + 8LL * ((v127 - 1) << 8);
      if ( v126 )
      {
        v119 = v128 + 8LL * ((v127 - 1) << 8);
        v120 = v119 - 2048;
        v121 = v129 + 240;
      }
      else
      {
        v121 = 0;
        v119 = 0;
      }
      v108 = 256;
      v117 = 255;
      v116 = 2048;
      v109 = -2048;
      v113 = v131;
      do
      {
        if ( v119 )
        {
          if ( v122 > v118 )
          {
            v43 = 8LL * v121;
            v44 = v119 + v43;
            v45 = 8LL * v106;
            v46 = v43 - 16;
            v47 = v42 + v45;
            v48 = v42 + v45 <= (unsigned __int64)(v119 + v46);
            v49 = v45 - 16;
            if ( (v44 <= v42 + v49 || v48) && v123 > 0x18 )
            {
              v50 = ((unsigned __int64)(v42 + v49) >> 3) & 1;
              if ( 2 - (unsigned int)((_DWORD)v50 == 0) > v125 - 2 - v118 )
              {
                v61 = v121;
                v60 = v106;
                v62 = v122;
LABEL_39:
                v63 = v60 - 1;
                v64 = 8LL * (v61 - 1);
                *(_QWORD *)(v119 + v64) = *(_QWORD *)(v42 + 8LL * v63);
                if ( v62 - 1 > v118 )
                  *(_QWORD *)(v119 + v64 - 8) = *(_QWORD *)(v42 + 8LL * v63 - 8);
              }
              else
              {
                if ( (_DWORD)v50 )
                {
                  v51 = v106 - 1;
                  v52 = v121 - 1;
                  v53 = v125 - 2;
                  *(_QWORD *)(v119 + 8LL * (v121 - 1)) = *(_QWORD *)(v42 + 8LL * (v106 - 1));
                }
                else
                {
                  v52 = v121;
                  v51 = v106;
                  v53 = v122;
                }
                v54 = 0;
                v55 = v123 - v50;
                v56 = -8 * v50;
                v57 = v119 + v56 + v46;
                v58 = v42 + v56 + v49;
                v59 = 0;
                do
                {
                  ++v54;
                  *(_OWORD *)(v57 + v59) = *(_OWORD *)(v58 + v59);
                  v59 -= 16;
                }
                while ( v55 >> 1 > v54 );
                v60 = v51 - (v55 & 0xFFFFFFFE);
                v61 = v52 - (v55 & 0xFFFFFFFE);
                v62 = v53 - (v55 & 0xFFFFFFFE);
                if ( v55 != (v55 & 0xFFFFFFFE) )
                  goto LABEL_39;
              }
            }
            else
            {
              v104 = 0;
              do
              {
                *(_QWORD *)(v44 + v104 - 8) = *(_QWORD *)(v47 + v104 - 8);
                v104 -= 8;
              }
              while ( v104 != 8 * ~(unsigned __int64)(unsigned int)(v125 - 2 - v118) );
            }
            v106 += v124;
            v121 += v124;
          }
          v121 -= 16 - v129;
        }
        v65 = v120 - v109;
        v66 = v118;
        do
        {
          v67 = v66 - 16;
          v68 = v66;
          v69 = v65 + v109;
          v70 = v113;
          if ( v66 - 16 >= (int)v113 )
            v70 = v66 - 16;
          if ( v70 < v66 )
          {
            v71 = v66 - v70;
            v72 = 8LL * v106;
            v73 = v42 + v72;
            v74 = v72 - 16;
            if ( (v73 <= v65 - 16 || v65 <= v42 + v74) && v71 > 0x18 )
            {
              v75 = ((unsigned __int64)(v42 + v74) >> 3) & 1;
              if ( 2 - (unsigned int)((_DWORD)v75 == 0) > v66 - 1 - v70 )
              {
                v84 = v106;
                v85 = v108;
LABEL_55:
                v86 = v84 - 1;
                v87 = v85 - 1;
                *(_QWORD *)(v69 + 8 * v87) = *(_QWORD *)(v42 + 8 * v86);
                if ( v70 < v68 - 1 )
                  *(_QWORD *)(v69 + 8 * v87 - 8) = *(_QWORD *)(v42 + 8 * v86 - 8);
              }
              else
              {
                if ( (_DWORD)v75 )
                {
                  v76 = v106 - 1;
                  v77 = v117;
                  v68 = v66 - 1;
                  *(_QWORD *)(v65 + 8 * (v117 - v108)) = *(_QWORD *)(v42 + 8LL * (v106 - 1));
                }
                else
                {
                  v76 = v106;
                  v77 = v108;
                }
                v78 = v71 - v75;
                v79 = 0;
                v80 = -8 * v75;
                v81 = 0;
                v82 = v42 + v80 + v74;
                v83 = v69 + v116 - 16 + v80;
                do
                {
                  ++v81;
                  *(_OWORD *)(v83 + v79) = *(_OWORD *)(v82 + v79);
                  v79 -= 16;
                }
                while ( v78 >> 1 > v81 );
                v84 = v76 - (v78 & 0xFFFFFFFE);
                v85 = v77 - (v78 & 0xFFFFFFFE);
                v68 -= v78 & 0xFFFFFFFE;
                if ( (v78 & 0xFFFFFFFE) != v78 )
                  goto LABEL_55;
              }
            }
            else
            {
              v103 = 0;
              do
              {
                *(_QWORD *)(v65 + v103 - 8) = *(_QWORD *)(v73 + v103 - 8);
                v103 -= 8;
              }
              while ( v103 != 8 * ~(unsigned __int64)(unsigned int)(v66 - 1 - v70) );
            }
            v106 = v70 + v106 - v66;
            v88 = v108 - v66 + v70;
            goto LABEL_58;
          }
          v88 = v108;
LABEL_58:
          if ( (int)v113 >= v66 - 15 )
            *(_QWORD *)(v69 + 8LL * (v88 - 1)) = *(_QWORD *)(v115 + 8 * v113);
          v65 -= 2048LL;
          v66 -= 16;
        }
        while ( v67 != v111 );
        --v113;
        v109 += 128;
        v116 -= 128;
        v117 -= 16;
        v108 -= 16;
      }
      while ( v108 );
      v111 -= 16;
      v127 -= v130;
      v131 -= 16;
      ++v130;
    }
    while ( v111 != v118 - 32 - ((v6 - 1) & 0xFFFFFFF0) );
  }
  v89 = *((_DWORD *)this + 77);
  v90 = *((_QWORD *)this + 64);
  v135[0] = v115;
  v91 = *((_QWORD *)this + 16);
  v135[4] = v90;
  v136 = v89;
  ClpCholeskyCfactor((int)v135, v128, v125, v133, v115, v91, (__int64)a2);
  v92 = *((_DWORD *)this + 11);
  if ( v92 > 0 )
  {
    v93 = *((double **)this + 15);
    v94 = (unsigned int)(v92 - 1);
    v95 = 1.797693134862316e308;
    v96 = v93 + 1;
    v97 = 0.0;
    v98 = (__int64)&v93[v94 + 1];
    v99 = 0;
    while ( 1 )
    {
      v100 = *v93;
      if ( *v93 == 0.0 )
      {
        ++v99;
        v93 = v96;
        if ( v96 == (double *)v98 )
          goto LABEL_71;
      }
      else
      {
        if ( v100 < 0.0 )
          v100 = -v100;
        v97 = fmax(v97, v100);
        v93 = v96;
        v95 = fmin(v95, v100);
        if ( v96 == (double *)v98 )
          goto LABEL_71;
      }
      ++v96;
    }
  }
  v99 = 0;
  v95 = 1.797693134862316e308;
  v97 = 0.0;
LABEL_71:
  *((_DWORD *)this + 63) += v99;
  v102 = fmin(*((double *)this + 58), 1.0 / v97);
  *((double *)this + 57) = fmax(*((double *)this + 57), 1.0 / v95);
  *((double *)this + 58) = v102;
  return this;
}

