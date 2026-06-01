void __fastcall ClpCholeskyBase::solveKKT(ClpCholeskyBase *this, double *a2, double *a3, double *a4, double a5)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  int v11; // ecx
  int v12; // r12d
  double *v13; // rax
  int v14; // edi
  unsigned __int64 v15; // rsi
  double v16; // xmm0_8
  __int64 v17; // rdx
  unsigned int v18; // r13d
  unsigned int v19; // r9d
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r10
  const double *v22; // r11
  double *v23; // rsi
  __m128d v24; // xmm0
  signed int v25; // edi
  __int64 v26; // rdx
  int v27; // edi
  double *v28; // rsi
  double v29; // xmm0_8
  double *v30; // rsi
  double v31; // xmm0_8
  double *v32; // r13
  double v33; // xmm0_8
  double *v34; // rax
  double v35; // xmm1_8
  int v36; // r8d
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // r10d
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  const double *v42; // r9
  double *v43; // rsi
  signed int v44; // edx
  __int64 v45; // rcx
  int v46; // edx
  int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rcx
  double *v50; // r15
  bool v51; // r12
  double *v52; // rdx
  const double *v53; // rax
  __int128 v54; // xmm2
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm3
  __int64 v58; // rax
  const double *v59; // rdi
  double *v60; // rax
  double *v61; // r8
  void (__fastcall *v62)(ClpCholeskyBase *, double *, __int64, __int64, double *); // r10
  double *v63; // rdx
  double *v64; // rcx
  __int64 v65; // rax
  __int128 v66; // xmm2
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm3
  __int64 v70; // rax
  double *v71; // rdx
  double *v72; // rax
  const double *v73; // rcx
  double *v74; // rdx
  __int64 v75; // rsi
  __int128 v76; // xmm2
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm3
  __int64 v80; // rax
  double *v81; // rdx
  __int64 v82; // r11
  double *v83; // r8
  int v84; // r9d
  double *v85; // rcx
  double *v86; // rdx
  __int64 v87; // rax
  __int128 v88; // xmm2
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  __int128 v91; // xmm3
  __int64 v92; // rax
  _QWORD *v93; // rdx
  _QWORD *v94; // rdx
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rdx
  double v97; // xmm0_8
  int v99; // [rsp+8h] [rbp-50h]
  int v100; // [rsp+10h] [rbp-48h]
  double *v101; // [rsp+10h] [rbp-48h]
  double *v102; // [rsp+18h] [rbp-40h]
  int v103; // [rsp+18h] [rbp-40h]

  v8 = (unsigned __int64)a2;
  v9 = *((_QWORD *)this + 4);
  v10 = *((int *)this + 11);
  v11 = *(_DWORD *)(v9 + 108);
  if ( !*((_BYTE *)this + 12) )
  {
    v12 = v11 + v10;
    v100 = *(_DWORD *)(v9 + 108);
    if ( (unsigned __int64)v12 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v13 = (double *)operator new[](8LL * v12);
      if ( v12 > 0 )
      {
        if ( (a2 >= a4 + 2 || a4 >= a2 + 2) && (unsigned int)v12 > 9 )
        {
          v14 = 0;
          v15 = ((unsigned __int64)a2 >> 3) & 1;
          if ( ((v8 >> 3) & 1) != 0 )
          {
            v14 = 1;
            v16 = *(double *)v8 * *a4;
            *(double *)v8 = v16;
            *v13 = v16;
          }
          v17 = 0;
          v18 = 0;
          v19 = v12 - v15;
          v20 = (unsigned int)v15;
          v21 = v8 + v20 * 8;
          v22 = &a4[v20];
          v23 = &v13[v20];
          do
          {
            ++v18;
            v24 = _mm_mul_pd(*(__m128d *)&v22[v17], *(__m128d *)(v21 + v17 * 8));
            *(__m128d *)(v21 + v17 * 8) = v24;
            *(__m128d *)&v23[v17] = v24;
            v17 += 2;
          }
          while ( v18 < v19 >> 1 );
          v25 = (v19 & 0xFFFFFFFE) + v14;
          if ( v19 != (v19 & 0xFFFFFFFE) )
          {
            v26 = v25;
            v27 = v25 + 1;
            v28 = (double *)(v8 + 8 * v26);
            v29 = a4[v26] * *v28;
            *v28 = v29;
            v13[v26] = v29;
            if ( v12 > v27 )
            {
              v30 = (double *)(v8 + 8LL * v27);
              v31 = a4[v27] * *v30;
              *v30 = v31;
              v13[v27] = v31;
            }
          }
        }
        else
        {
          v96 = 0;
          do
          {
            v97 = a2[v96 / 8] * a4[v96 / 8];
            a2[v96 / 8] = v97;
            v13[v96 / 8] = v97;
            v96 += 8LL;
          }
          while ( 8LL * (unsigned int)(v12 - 1) + 8 != v96 );
        }
      }
      v32 = (double *)(v8 + 8LL * v100);
      v102 = v13;
      multiplyAdd(v32, *((_DWORD *)this + 11), -1.0, a3, 1.0);
      v33 = 1.0;
      (*(void (__fastcall **)(_QWORD, unsigned __int64, double *, double))(**(_QWORD **)(*((_QWORD *)this + 4) + 192LL)
                                                                         + 360LL))(
        *(_QWORD *)(*((_QWORD *)this + 4) + 192LL),
        v8,
        a3,
        1.0);
      maximumAbsElement(a3, *((_DWORD *)this + 11));
      v34 = v102;
      if ( 1.0 > 1.0e-30 )
      {
        if ( 1.0 > 0.5 )
        {
          if ( 1.0 < 2.0 )
          {
            v35 = 1.0;
          }
          else
          {
            v35 = 1.0;
            if ( 1.0 <= 1.797693134862316e308 )
            {
              do
              {
                v33 = v33 * 0.5;
                v35 = v35 * 0.5;
              }
              while ( v33 >= 2.0 );
              a5 = a5 / v35;
            }
          }
        }
        else
        {
          v35 = 1.0;
          do
          {
            v33 = v33 + v33;
            v35 = v35 + v35;
          }
          while ( v33 <= 0.5 );
          a5 = a5 / v35;
        }
      }
      else
      {
        v35 = 0.0;
        a5 = 0.0;
      }
      v103 = v100;
      v101 = v34;
      multiplyAdd(nullptr, *((_DWORD *)this + 11), 0.0, a3, v35);
      (*(void (__fastcall **)(ClpCholeskyBase *, double *))(*(_QWORD *)this + 24LL))(this, a3);
      multiplyAdd(nullptr, *((_DWORD *)this + 11), 0.0, a3, a5);
      multiplyAdd(a3, *((_DWORD *)this + 11), -1.0, v32, 0.0);
      if ( v103 )
      {
        if ( v103 / 8 <= 0 )
        {
          v94 = (_QWORD *)v8;
        }
        else
        {
          v93 = (_QWORD *)v8;
          do
          {
            *v93 = 0;
            v93[1] = 0;
            v93 += 8;
            *(v93 - 6) = 0;
            *(v93 - 5) = 0;
            *(v93 - 4) = 0;
            *(v93 - 3) = 0;
            *(v93 - 2) = 0;
            *(v93 - 1) = 0;
          }
          while ( v93 != (_QWORD *)(v8 + (((unsigned int)(v103 / 8 - 1) + 1LL) << 6)) );
          v94 = (_QWORD *)(v8 + ((v103 / 8 - 1 + 1LL) << 6));
        }
        switch ( v103 % 8 )
        {
          case 1:
            goto LABEL_101;
          case 2:
            goto LABEL_100;
          case 3:
            goto LABEL_99;
          case 4:
            goto LABEL_98;
          case 5:
            goto LABEL_97;
          case 6:
            goto LABEL_96;
          case 7:
            v94[6] = 0;
LABEL_96:
            v94[5] = 0;
LABEL_97:
            v94[4] = 0;
LABEL_98:
            v94[3] = 0;
LABEL_99:
            v94[2] = 0;
LABEL_100:
            v94[1] = 0;
LABEL_101:
            *v94 = 0;
            break;
          default:
            break;
        }
      }
      (*(void (__fastcall **)(_QWORD, double *, unsigned __int64, double))(**(_QWORD **)(*((_QWORD *)this + 4) + 192LL)
                                                                         + 376LL))(
        *(_QWORD *)(*((_QWORD *)this + 4) + 192LL),
        a3,
        v8,
        1.0);
      if ( v12 > 0 )
      {
        if ( ((unsigned __int64)a4 >= v8 + 16 || v8 >= (unsigned __int64)(a4 + 2)) && (unsigned int)v12 > 7 )
        {
          v36 = 0;
          if ( ((v8 >> 3) & 1) != 0 )
          {
            v36 = 1;
            *(double *)v8 = *a4 * *(double *)v8 - *v101;
          }
          v37 = 0;
          v38 = 0;
          v39 = v12 - ((v8 >> 3) & 1);
          v40 = (v8 >> 3) & 1;
          v41 = v8 + v40 * 8;
          v42 = &a4[v40];
          v43 = &v101[v40];
          do
          {
            ++v38;
            *(__m128d *)(v41 + v37 * 8) = _mm_sub_pd(
                                            _mm_mul_pd(*(__m128d *)&v42[v37], *(__m128d *)(v41 + v37 * 8)),
                                            *(__m128d *)&v43[v37]);
            v37 += 2;
          }
          while ( v38 < v39 >> 1 );
          v44 = (v39 & 0xFFFFFFFE) + v36;
          if ( v39 != (v39 & 0xFFFFFFFE) )
          {
            v45 = v44;
            v46 = v44 + 1;
            *(double *)(v8 + 8 * v45) = a4[v45] * *(double *)(v8 + 8 * v45) - v101[v45];
            if ( v46 < v12 )
              *(double *)(v8 + 8LL * v46) = a4[v46] * *(double *)(v8 + 8LL * v46) - v101[v46];
          }
        }
        else
        {
          v95 = 0;
          do
          {
            *(double *)(v8 + v95) = *(double *)(v8 + v95) * a4[v95 / 8] - v101[v95 / 8];
            v95 += 8LL;
          }
          while ( 8LL * (unsigned int)(v12 - 1) + 8 != v95 );
        }
      }
      operator delete[](v101);
      return;
    }
LABEL_115:
    __cxa_throw_bad_array_new_length();
  }
  v47 = *(_DWORD *)(v9 + 104) + v11;
  v99 = *(_DWORD *)(v9 + 104);
  if ( v10 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_115;
  v50 = (double *)operator new[](8 * v10);
  v51 = v50 == a2 || v47 == 0;
  if ( !v51 )
  {
    if ( v47 >> 3 <= 0 )
    {
      v60 = v50;
      v59 = a2;
    }
    else
    {
      v52 = v50;
      v53 = a2;
      do
      {
        v54 = *((_OWORD *)v53 + 1);
        v52 += 8;
        v53 += 8;
        v55 = *((_OWORD *)v53 - 2);
        v56 = *((_OWORD *)v53 - 1);
        v57 = *((_OWORD *)v53 - 4);
        *((_OWORD *)v52 - 3) = v54;
        *((_OWORD *)v52 - 4) = v57;
        *((_OWORD *)v52 - 2) = v55;
        *((_OWORD *)v52 - 1) = v56;
      }
      while ( v52 != &v50[8 * (unsigned int)((v47 >> 3) - 1) + 8] );
      v58 = ((v47 >> 3) - 1 + 1LL) << 6;
      v59 = (double *)((char *)a2 + v58);
      v60 = (double *)((char *)v50 + v58);
    }
    v49 = (unsigned int)(v47 >> 31) >> 29;
    v48 = (unsigned int)(v47 % 8);
    switch ( v47 % 8 )
    {
      case 1:
        goto LABEL_40;
      case 2:
        goto LABEL_39;
      case 3:
        goto LABEL_38;
      case 4:
        goto LABEL_37;
      case 5:
        goto LABEL_36;
      case 6:
        goto LABEL_35;
      case 7:
        v60[6] = v59[6];
LABEL_35:
        v60[5] = v59[5];
LABEL_36:
        v60[4] = v59[4];
LABEL_37:
        v60[3] = v59[3];
LABEL_38:
        v60[2] = v59[2];
LABEL_39:
        v60[1] = v59[1];
LABEL_40:
        *v60 = *v59;
        break;
      default:
        break;
    }
  }
  v61 = &v50[v47];
  v62 = *(void (__fastcall **)(ClpCholeskyBase *, double *, __int64, __int64, double *))(*(_QWORD *)this + 24LL);
  if ( !v99 || v61 == a3 )
  {
    v62(this, v50, v48, v49, v61);
  }
  else
  {
    if ( v99 >> 3 <= 0 )
    {
      v72 = &v50[v47];
      v71 = a3;
    }
    else
    {
      v63 = &v50[v47];
      v64 = a3;
      v65 = (unsigned int)((v99 >> 3) - 1);
      do
      {
        v66 = *((_OWORD *)v64 + 1);
        v63 += 8;
        v64 += 8;
        v67 = *((_OWORD *)v64 - 2);
        v68 = *((_OWORD *)v64 - 1);
        v69 = *((_OWORD *)v64 - 4);
        *((_OWORD *)v63 - 3) = v66;
        *((_OWORD *)v63 - 4) = v69;
        *((_OWORD *)v63 - 2) = v67;
        *((_OWORD *)v63 - 1) = v68;
      }
      while ( v63 != &v61[8 * v65 + 8] );
      v70 = ((int)v65 + 1LL) << 6;
      v71 = (double *)((char *)a3 + v70);
      v72 = (double *)((char *)v61 + v70);
    }
    switch ( v99 % 8 )
    {
      case 1:
        goto LABEL_73;
      case 2:
        goto LABEL_72;
      case 3:
        goto LABEL_71;
      case 4:
        goto LABEL_70;
      case 5:
        goto LABEL_69;
      case 6:
        goto LABEL_68;
      case 7:
        v72[6] = v71[6];
LABEL_68:
        v72[5] = v71[5];
LABEL_69:
        v72[4] = v71[4];
LABEL_70:
        v72[3] = v71[3];
LABEL_71:
        v72[2] = v71[2];
LABEL_72:
        v72[1] = v71[1];
LABEL_73:
        *v72 = *v71;
        ((void (__fastcall *)(ClpCholeskyBase *, double *))v62)(this, v50);
        v82 = (unsigned int)(v99 % 8);
        v83 = &v50[v47];
        v84 = v99 >> 3;
        break;
      default:
        ((void (__fastcall *)(ClpCholeskyBase *, double *))v62)(this, v50);
        v82 = (unsigned int)(v99 % 8);
        v84 = v99 >> 3;
        v83 = &v50[v47];
        break;
    }
    if ( v84 > 0 )
    {
      v85 = a3;
      v86 = v83;
      v87 = (unsigned int)(v84 - 1);
      do
      {
        v88 = *((_OWORD *)v86 + 1);
        v86 += 8;
        v85 += 8;
        v89 = *((_OWORD *)v86 - 2);
        v90 = *((_OWORD *)v86 - 1);
        v91 = *((_OWORD *)v86 - 4);
        *((_OWORD *)v85 - 3) = v88;
        *((_OWORD *)v85 - 4) = v91;
        *((_OWORD *)v85 - 2) = v89;
        *((_OWORD *)v85 - 1) = v90;
      }
      while ( v86 != &v83[8 * v87 + 8] );
      v92 = ((int)v87 + 1LL) << 6;
      v83 = (double *)((char *)v83 + v92);
      a3 = (double *)((char *)a3 + v92);
    }
    switch ( v82 )
    {
      case 1LL:
        goto LABEL_85;
      case 2LL:
        goto LABEL_84;
      case 3LL:
        goto LABEL_83;
      case 4LL:
        goto LABEL_82;
      case 5LL:
        goto LABEL_81;
      case 6LL:
        goto LABEL_80;
      case 7LL:
        a3[6] = v83[6];
LABEL_80:
        a3[5] = v83[5];
LABEL_81:
        a3[4] = v83[4];
LABEL_82:
        a3[3] = v83[3];
LABEL_83:
        a3[2] = v83[2];
LABEL_84:
        a3[1] = v83[1];
LABEL_85:
        *a3 = *v83;
        break;
      default:
        break;
    }
  }
  if ( !v51 )
  {
    if ( v47 >> 3 <= 0 )
    {
      v81 = v50;
    }
    else
    {
      v73 = a2;
      v74 = v50;
      v75 = (unsigned int)((v47 >> 3) - 1);
      do
      {
        v76 = *((_OWORD *)v74 + 1);
        v74 += 8;
        v73 += 8;
        v77 = *((_OWORD *)v74 - 2);
        v78 = *((_OWORD *)v74 - 1);
        v79 = *((_OWORD *)v74 - 4);
        *((_OWORD *)v73 - 3) = v76;
        *((_OWORD *)v73 - 4) = v79;
        *((_OWORD *)v73 - 2) = v77;
        *((_OWORD *)v73 - 1) = v78;
      }
      while ( v74 != &v50[8 * v75 + 8] );
      v80 = ((int)v75 + 1LL) << 6;
      v81 = (double *)((char *)v50 + v80);
      v8 += v80;
    }
    switch ( v47 % 8 )
    {
      case 1:
        goto LABEL_65;
      case 2:
        goto LABEL_64;
      case 3:
        goto LABEL_63;
      case 4:
        goto LABEL_62;
      case 5:
        goto LABEL_61;
      case 6:
        goto LABEL_60;
      case 7:
        *(double *)(v8 + 48) = v81[6];
LABEL_60:
        *(double *)(v8 + 40) = v81[5];
LABEL_61:
        *(double *)(v8 + 32) = v81[4];
LABEL_62:
        *(double *)(v8 + 24) = v81[3];
LABEL_63:
        *(double *)(v8 + 16) = v81[2];
LABEL_64:
        *(double *)(v8 + 8) = v81[1];
LABEL_65:
        *(double *)v8 = *v81;
        break;
      default:
        break;
    }
  }
  operator delete[](v50);
}

