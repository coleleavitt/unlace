__int64 __fastcall ClpPrimalColumnSteepest::djsAndSteepest2(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v14; // rax
  double v15; // xmm2_8
  double v16; // xmm0_8
  __int64 v17; // rdx
  double v18; // xmm2_8
  __int64 v19; // r8
  double v20; // xmm7_8
  CoinIndexedVector *v21; // rax
  __int64 v22; // r10
  double v23; // xmm6_8
  __int64 v24; // r15
  CoinIndexedVector *v25; // r13
  int v26; // r9d
  __int64 v27; // r11
  __int64 v28; // rsi
  int v29; // ebp
  __int64 v30; // rax
  CoinIndexedVector *v31; // r15
  double *v32; // rcx
  int v33; // edx
  double v34; // xmm0_8
  __int64 v35; // r12
  double *v36; // rcx
  double v37; // xmm0_8
  __int64 *v38; // rcx
  double *v39; // r12
  bool v40; // r13
  CoinIndexedVector *v41; // rax
  int v42; // ecx
  CoinIndexedVector *v43; // r15
  double *v44; // rax
  __int64 result; // rax
  __int64 v46; // rax
  double *v47; // rdx
  int v48; // edx
  __int64 v49; // r13
  double v50; // xmm4_8
  double v51; // xmm5_8
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // r12
  __int64 v55; // r10
  _QWORD *v56; // rbp
  __int64 v57; // r9
  __int64 v58; // r12
  CoinIndexedVector *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r11
  signed int v62; // edi
  double v63; // xmm2_8
  int v64; // esi
  double v65; // xmm0_8
  double v66; // xmm0_8
  double v67; // xmm0_8
  __int64 v68; // rsi
  double v69; // xmm2_8
  double *v70; // rdx
  _QWORD *v71; // rax
  __int64 v72; // rdi
  double *v73; // rdx
  __int64 v74; // r12
  double *v75; // r12
  bool v76; // zf
  bool v77; // dl
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rdi
  double v81; // xmm0_8
  signed int v82; // edx
  double *v83; // rcx
  double v84; // xmm1_8
  double v85; // xmm0_8
  int v86; // esi
  double v87; // xmm1_8
  int v88; // eax
  __int64 v89; // r10
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r11
  __int64 v93; // rax
  __int64 v94; // r9
  double v95; // xmm0_8
  __int64 v96; // rdx
  double *v97; // rsi
  int v98; // ecx
  double v99; // xmm1_8
  double v100; // xmm0_8
  double v101; // xmm1_8
  __int64 v102; // [rsp+8h] [rbp-90h]
  int v103; // [rsp+8h] [rbp-90h]
  double v104; // [rsp+10h] [rbp-88h]
  __int64 v105; // [rsp+10h] [rbp-88h]
  double v106; // [rsp+10h] [rbp-88h]
  __int64 v107; // [rsp+10h] [rbp-88h]
  CoinIndexedVector *v109; // [rsp+18h] [rbp-80h]
  __int64 v111; // [rsp+28h] [rbp-70h]
  int v112; // [rsp+28h] [rbp-70h]
  int v113; // [rsp+30h] [rbp-68h]
  double v114; // [rsp+30h] [rbp-68h]
  __int64 v115; // [rsp+38h] [rbp-60h]
  __int64 v116; // [rsp+40h] [rbp-58h]
  __int64 v117; // [rsp+48h] [rbp-50h]
  int v118; // [rsp+54h] [rbp-44h] BYREF
  double v119[8]; // [rsp+58h] [rbp-40h] BYREF

  v14 = *((_QWORD *)this + 1);
  v15 = fmin(0.01, *(double *)(v14 + 768));
  v16 = *(double *)(v14 + 832);
  v118 = *(_DWORD *)(v14 + 1168);
  v17 = *((_QWORD *)this + 5);
  v119[0] = v16;
  v102 = *(_QWORD *)(v17 + 8);
  v104 = v15 + *(double *)(v14 + 872);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v14 + 1264), a3, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *((_QWORD *)this + 1),
    a2,
    a5,
    a4,
    -1.0);
  v18 = v104;
  v19 = *((_QWORD *)this + 1);
  v20 = 0.0;
  v21 = a2;
  v22 = *(_QWORD *)(v19 + 1184);
  v23 = -v104;
  v24 = 0;
  v25 = v21;
  while ( !v24 )
  {
    v26 = *((_DWORD *)v25 + 4);
    v27 = *(_QWORD *)v25;
    v28 = *((_QWORD *)v25 + 1);
    v29 = *(_DWORD *)(v19 + 108);
    if ( v26 > 0 )
    {
      a9 = 1.01;
      goto LABEL_5;
    }
LABEL_68:
    ++v24;
  }
  v26 = *((_DWORD *)a4 + 4);
  v22 = *(_QWORD *)(v19 + 1192);
  v27 = *(_QWORD *)a4;
  v28 = *((_QWORD *)a4 + 1);
  if ( v26 <= 0 )
    goto LABEL_16;
  a9 = 1.0;
  v29 = 0;
LABEL_5:
  v105 = v24;
  v30 = 0;
  v31 = v25;
  while ( 2 )
  {
    v32 = (double *)(v22 + 8LL * *(int *)(v27 + 4 * v30));
    v33 = v29 + *(_DWORD *)(v27 + 4 * v30);
    v34 = *v32 - *(double *)(v28 + 8 * v30);
    *(_QWORD *)(v28 + 8 * v30) = 0;
    *v32 = v34;
    switch ( *(_BYTE *)(*(_QWORD *)(v19 + 264) + v33) & 7 )
    {
      case 0:
      case 4:
        v35 = 8LL * v33;
        a7 = 100.0 * v18;
        if ( fabs(v34) <= 100.0 * v18 )
          goto LABEL_55;
        v36 = (double *)(v35 + v102);
        v37 = v34 * 10.0 * (v34 * 10.0);
        if ( *(double *)(v35 + v102) != 0.0 )
          goto LABEL_54;
        goto LABEL_9;
      case 1:
        v73 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL * v33);
        if ( *v73 != 0.0 )
          *v73 = 2.225073858507201e-308;
        goto LABEL_47;
      case 2:
        v35 = 8LL * v33;
        if ( v34 <= v18 )
        {
LABEL_55:
          v75 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v35);
          v76 = *v75 == 0.0;
          goto LABEL_56;
        }
        v36 = (double *)(v35 + v102);
        a7 = v34 * a9;
        v37 = v34 * (v34 * a9);
        if ( *(double *)(v35 + v102) != 0.0 )
          goto LABEL_54;
LABEL_9:
        v38 = *((__int64 **)this + 5);
        v39 = (double *)(v38[1] + v35);
        a7 = *v39;
        if ( *v39 == 0.0 )
        {
          if ( v37 > 0.0 )
            goto LABEL_11;
          a7 = -1.0e-50;
          v40 = v37 <= -1.0e-50;
          goto LABEL_12;
        }
        v37 = v37 + a7;
        if ( v37 > 0.0 )
          goto LABEL_70;
        goto LABEL_77;
      case 3:
        v74 = 8LL * v33;
        if ( v23 <= v34 )
        {
          v75 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v74);
          v76 = *v75 == 0.0;
LABEL_56:
          if ( !v76 )
            *v75 = 2.225073858507201e-308;
          goto LABEL_47;
        }
        a7 = v34 * a9;
        v36 = (double *)(v74 + v102);
        v37 = v34 * (v34 * a9);
        if ( *(double *)(v74 + v102) != 0.0 )
        {
LABEL_54:
          *v36 = v37;
          goto LABEL_47;
        }
        v38 = *((__int64 **)this + 5);
        v39 = (double *)(v38[1] + v74);
        a7 = *v39;
        if ( *v39 == 0.0 )
        {
          if ( v37 > 0.0 )
          {
LABEL_11:
            v40 = v37 >= 1.0e-50;
            goto LABEL_12;
          }
          v40 = v37 <= -1.0e-50;
LABEL_12:
          if ( !v40 )
            goto LABEL_47;
          v111 = *v38;
          v113 = *((_DWORD *)v38 + 4);
          *((_DWORD *)v38 + 4) = v113 + 1;
          *(_DWORD *)(v111 + 4LL * v113) = v33;
LABEL_14:
          ++v30;
          *v39 = v37;
          if ( v26 <= (int)v30 )
            goto LABEL_15;
          continue;
        }
        v37 = v37 + a7;
        if ( v37 > 0.0 )
        {
LABEL_70:
          v77 = v37 >= 1.0e-50;
        }
        else
        {
LABEL_77:
          a7 = -1.0e-50;
          v77 = v37 <= -1.0e-50;
        }
        if ( v77 )
          goto LABEL_14;
        *v39 = 1.0e-100;
LABEL_47:
        if ( v26 > (int)++v30 )
          continue;
LABEL_15:
        v41 = v31;
        v24 = v105;
        v25 = v41;
LABEL_16:
        if ( (_DWORD)v24 != 1 )
        {
          v22 = *(_QWORD *)(v19 + 1184);
          goto LABEL_68;
        }
        v42 = v118;
        *((_DWORD *)v25 + 4) = 0;
        v43 = v25;
        *((_BYTE *)v25 + 28) = 0;
        *((_DWORD *)a4 + 4) = 0;
        *((_BYTE *)a4 + 28) = 0;
        if ( v42 >= 0 )
        {
          v44 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL * *(int *)(v19 + 1152));
          if ( *v44 != 0.0 )
            *v44 = 2.225073858507201e-308;
        }
        result = *((int *)this + 23);
        *((_DWORD *)this + 23) = -1;
        v118 = result;
        if ( (int)result >= 0 )
        {
          v46 = *(int *)(*(_QWORD *)(v19 + 1256) + 4 * result);
          v47 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8 * v46);
          if ( *v47 != 0.0 )
            *v47 = 2.225073858507201e-308;
          v106 = -1.0;
          if ( *((_DWORD *)this + 19) != 1 )
          {
            v106 = 0.0;
            v48 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * ((int)v46 >> 5));
            if ( _bittest(&v48, v46) )
              v106 = 1.0;
          }
          v49 = *(int *)(v19 + 1160);
          v114 = 0.0;
          if ( (int)v49 >= 0 )
          {
            v20 = *(double *)(*((_QWORD *)this + 4) + 8LL * (int)v49);
            v114 = v20;
          }
          *((_DWORD *)v43 + 4) = 0;
          *((_BYTE *)v43 + 28) = 0;
          *((_DWORD *)a4 + 4) = 0;
          *((_BYTE *)a4 + 28) = 0;
          v119[0] = -1.0;
          CoinIndexedVector::createPacked(v43, 1, &v118, v119);
          ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a3, v43);
          v52 = *((_DWORD *)this + 19);
          v53 = *((_QWORD *)this + 1);
          v54 = *(int *)(v53 + 108);
          if ( v52 <= 3 )
          {
            v55 = *(_QWORD *)v43;
            v56 = *((_QWORD **)v43 + 1);
            v57 = *((_QWORD *)this + 4);
            v112 = *(_DWORD *)(v53 + 108);
            v58 = 8 * v54;
            v103 = *((_DWORD *)v43 + 4);
            goto LABEL_30;
          }
          v112 = *(_DWORD *)(v53 + 108);
          v58 = 8 * v54;
          v55 = *(_QWORD *)v43;
          v56 = *((_QWORD **)v43 + 1);
          v57 = *((_QWORD *)this + 4);
          v103 = *((_DWORD *)v43 + 4);
          if ( *((int *)this + 22) <= 1 && v52 <= 9 )
          {
            v109 = *((CoinIndexedVector **)this + 4);
            v107 = *(_QWORD *)v43;
            (*(void (__fastcall **)(_QWORD, __int64, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double, double, double, double, double, double, double, double))(**(_QWORD **)(v53 + 192) + 392LL))(
              *(_QWORD *)(v53 + 192),
              v53,
              v43,
              a5,
              a4,
              -1.0,
              a7,
              v18,
              a9,
              v50,
              v51,
              v23,
              v20);
            if ( *((_DWORD *)this + 19) != 4 )
              goto LABEL_62;
            if ( v103 > 0 )
            {
              v78 = *((_QWORD *)this + 8);
              v79 = 0;
              v80 = (unsigned int)(v103 - 1) + 1LL;
              do
              {
                while ( 1 )
                {
                  v81 = *(double *)&v56[v79];
                  v82 = v112 + *(_DWORD *)(v107 + 4 * v79);
                  v83 = (double *)((char *)v109 + 8 * *(int *)(v107 + 4 * v79) + v58);
                  v84 = *v83;
                  v56[v79] = 0;
                  v85 = v81 * v81 * *((double *)this + 3);
                  v86 = *(_DWORD *)(v78 + 4LL * (v82 >> 5));
                  if ( _bittest(&v86, v82) )
                    v85 = v85 + 1.0;
                  v87 = v84 * 0.99;
                  if ( v87 > v85 )
                    break;
                  ++v79;
                  *v83 = v85;
                  if ( v79 == v80 )
                    goto LABEL_91;
                }
                ++v79;
                *v83 = v87;
              }
              while ( v80 != v79 );
            }
LABEL_91:
            v88 = *((_DWORD *)a4 + 4);
            v72 = *((_QWORD *)this + 4);
            v89 = *(_QWORD *)a4;
            v90 = *((_QWORD *)a4 + 1);
            if ( v88 > 0 )
            {
              v91 = (unsigned int)(v88 - 1);
              v92 = *((_QWORD *)this + 8);
              v93 = 0;
              v94 = v91 + 1;
              do
              {
                while ( 1 )
                {
                  v95 = *(double *)(v90 + 8 * v93);
                  v96 = *(int *)(v89 + 4 * v93);
                  v97 = (double *)(v72 + 8 * v96);
                  v98 = *(_DWORD *)(v92 + 4LL * ((int)v96 >> 5));
                  v99 = *v97;
                  *(_QWORD *)(v90 + 8 * v93) = 0;
                  v100 = v95 * v95 * *((double *)this + 3);
                  if ( _bittest(&v98, v96) )
                    v100 = v100 + 1.0;
                  v101 = v99 * 0.99;
                  if ( v101 > v100 )
                    break;
                  ++v93;
                  *v97 = v100;
                  if ( v93 == v94 )
                    goto LABEL_63;
                }
                ++v93;
                *v97 = v101;
              }
              while ( v94 != v93 );
            }
            goto LABEL_63;
          }
LABEL_30:
          v59 = *((CoinIndexedVector **)this + 6);
          v117 = v57;
          v116 = v55;
          v115 = *((_QWORD *)v59 + 1);
          ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v53 + 1264), a3, v59);
          if ( v103 > 0 )
          {
            v60 = 0;
            v61 = (unsigned int)(v103 - 1) + 1LL;
            while ( 1 )
            {
              while ( 1 )
              {
                v67 = *(double *)&v56[v60];
                v68 = *(int *)(v116 + 4 * v60);
                v69 = v67 * v67;
                v70 = (double *)(v117 + v58 + 8 * v68);
                v66 = *((double *)this + 3) * (v67 * v67) - *(double *)(v115 + 8 * v68) * v67 + *v70;
                if ( v66 < 0.0001 )
                  break;
LABEL_35:
                ++v60;
                *v70 = v66;
                if ( v61 == v60 )
                  goto LABEL_39;
              }
              if ( *((_DWORD *)this + 19) != 1 )
              {
                v62 = v112 + *(_DWORD *)(v116 + 4 * v60);
                v63 = v69 * v106;
                v64 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v62 >> 5));
                v65 = v63;
                if ( _bittest(&v64, v62) )
                  v65 = v63 + 1.0;
                v66 = fmax(v65, 0.0001);
                goto LABEL_35;
              }
              ++v60;
              *v70 = fmax(0.0001, v69 + 1.0);
              if ( v61 == v60 )
              {
LABEL_39:
                ClpPrimalColumnSteepest::transposeTimes2(
                  this,
                  v43,
                  a4,
                  *((const CoinIndexedVector **)this + 6),
                  a5,
                  a3,
                  0.0);
                goto LABEL_40;
              }
            }
          }
          ClpPrimalColumnSteepest::transposeTimes2(this, v43, a4, *((const CoinIndexedVector **)this + 6), a5, a3, 0.0);
          if ( v103 )
          {
LABEL_40:
            if ( v103 / 8 > 0 )
            {
              v71 = v56;
              do
              {
                *v71 = 0;
                v71[1] = 0;
                v71 += 8;
                *(v71 - 6) = 0;
                *(v71 - 5) = 0;
                *(v71 - 4) = 0;
                *(v71 - 3) = 0;
                *(v71 - 2) = 0;
                *(v71 - 1) = 0;
              }
              while ( v71 != &v56[8 * (unsigned int)(v103 / 8 - 1) + 8] );
              v56 += 8 * (v103 / 8 - 1) + 8;
            }
            v72 = *((_QWORD *)this + 4);
            switch ( v103 % 8 )
            {
              case 1:
                goto LABEL_84;
              case 2:
                goto LABEL_83;
              case 3:
                goto LABEL_82;
              case 4:
                goto LABEL_81;
              case 5:
                goto LABEL_80;
              case 6:
                goto LABEL_79;
              case 7:
                v56[6] = 0;
LABEL_79:
                v56[5] = 0;
LABEL_80:
                v56[4] = 0;
LABEL_81:
                v56[3] = 0;
LABEL_82:
                v56[2] = 0;
LABEL_83:
                v56[1] = 0;
LABEL_84:
                *v56 = 0;
                break;
              default:
                break;
            }
          }
          else
          {
LABEL_62:
            v72 = *((_QWORD *)this + 4);
          }
LABEL_63:
          if ( (int)v49 >= 0 )
            *(double *)(v72 + 8 * v49) = v114;
          CoinIndexedVector::clear(*((CoinIndexedVector **)this + 6));
          result = (__int64)a5;
          *((_DWORD *)a5 + 4) = 0;
          *((_BYTE *)a5 + 28) = 0;
        }
        *((_DWORD *)v43 + 4) = 0;
        *((_BYTE *)v43 + 28) = 0;
        *((_DWORD *)a4 + 4) = 0;
        *((_BYTE *)a4 + 28) = 0;
        return result;
      default:
        goto LABEL_47;
    }
  }
}

