__int64 __fastcall ClpSimplex::computeDuals(ClpSimplex *this, double *a2)
{
  double *v2; // r15
  _DWORD *v4; // rdi
  CoinIndexedVector *v5; // r14
  const double *v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  double *v12; // rdi
  double v13; // xmm2_8
  double v14; // xmm0_8
  int v15; // eax
  int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rdi
  int v20; // esi
  double v21; // xmm0_8
  CoinIndexedVector *v22; // rax
  double *v23; // r12
  CoinIndexedVector *v24; // r14
  __int64 v25; // rdx
  int v26; // r13d
  char *v27; // rdi
  int v28; // r8d
  size_t v29; // rdx
  int v30; // r9d
  char *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r11
  __int64 v34; // rsi
  int v35; // edx
  __int64 v36; // rax
  int v37; // edi
  __int64 v38; // r8
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  int v42; // edi
  __int64 v43; // rsi
  double v44; // xmm1_8
  int v45; // eax
  double v46; // xmm0_8
  double v47; // xmm0_8
  double v48; // xmm1_8
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  double v52; // xmm0_8
  int v53; // edi
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  double v57; // xmm0_8
  int v58; // r8d
  CoinIndexedVector *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // ecx
  int v63; // edi
  __int64 v64; // rsi
  double v65; // xmm1_8
  int v66; // eax
  double v67; // xmm0_8
  __int64 v68; // rdi
  __int64 v69; // rax
  int v70; // edx
  double v71; // xmm0_8
  const void *v72; // rdi
  ClpPackedMatrix *v73; // r13
  const double *v74; // rbp
  int v75; // r14d
  ClpPackedMatrix *v76; // rax
  const double *v77; // r9
  int v78; // ecx
  const int *v79; // rdx
  __int64 v80; // rax
  int v81; // esi
  int v82; // ecx
  __int64 v83; // rdx
  int v84; // esi
  __int64 v85; // rax
  double v86; // xmm0_8
  __int64 v87; // rsi
  int v88; // esi
  __int64 v89; // rax
  double v90; // xmm0_8
  const double *v91; // rax
  double *v92; // r8
  const double *v93; // rcx
  int v94; // eax
  _BYTE *v95; // rdi
  int v96; // ecx
  bool v97; // zf
  int v98; // ecx
  double *v99; // rdi
  double *v100; // rdx
  double *v101; // rax
  double v102; // xmm0_8
  __int64 v103; // rax
  __int64 result; // rax
  int v105; // ecx
  _QWORD *v106; // rdi
  _QWORD *v107; // r8
  __int64 *v108; // rdx
  _QWORD *v109; // rax
  __int64 v110; // xmm0_8
  __int64 v111; // rax
  int v112; // [rsp+Ch] [rbp-6Ch]
  CoinIndexedVector *v113; // [rsp+10h] [rbp-68h]
  double v114; // [rsp+18h] [rbp-60h]
  CoinIndexedVector *v115; // [rsp+20h] [rbp-58h]
  char *v116; // [rsp+28h] [rbp-50h]
  CoinIndexedVector *v117; // [rsp+30h] [rbp-48h]
  CoinIndexedVector *v118; // [rsp+38h] [rbp-40h]

  v2 = a2;
  v4 = *((_DWORD **)this + 20);
  if ( v4[4] == 1 || !v4[5] )
  {
    v5 = *((CoinIndexedVector **)this + 133);
    v115 = *((CoinIndexedVector **)this + 132);
    v117 = v5;
    CoinIndexedVector::clear(v5);
    v118 = *((CoinIndexedVector **)this + 134);
    CoinIndexedVector::clear(v118);
    v6 = *((const double **)v5 + 1);
    v7 = *(_QWORD *)v5;
    if ( a2 )
    {
      if ( *((int *)this + 26) > 0 )
      {
        v8 = 0;
        v9 = 0;
        v10 = 0;
        do
        {
          while ( 1 )
          {
            v11 = *(int *)(*((_QWORD *)this + 157) + v8 * 4);
            v12 = &v2[v11];
            if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v11) & 0x20) != 0 )
            {
              v13 = *v12;
            }
            else
            {
              *v12 = 0.0;
              v13 = 0.0;
            }
            v14 = *(double *)(*((_QWORD *)this + 129) + 8 * v11) - v13;
            if ( v14 == 0.0 )
              break;
            v6[v8] = v14;
            *(_DWORD *)(v7 + 4 * v9) = v10;
            ++v8;
            ++v10;
            v15 = v9 + 1;
            if ( *((_DWORD *)this + 26) <= v10 )
              goto LABEL_142;
            v9 = v15;
          }
          ++v10;
          ++v8;
        }
        while ( *((_DWORD *)this + 26) > v10 );
LABEL_17:
        v22 = v5;
        *((_DWORD *)v5 + 4) = v9;
        if ( !(_DWORD)v9 )
          goto LABEL_18;
LABEL_19:
        (*(void (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *, double *, _QWORD, __int64))(**((_QWORD **)this + 24) + 312LL))(
          *((_QWORD *)this + 24),
          this,
          v5,
          v2,
          0,
          v7);
        v23 = *((double **)v115 + 1);
        ClpFactorization::updateColumnTranspose(*((ClpFactorization **)this + 158), v115, v5);
        if ( *((int *)this + 309) >= 0 )
        {
          v24 = v118;
          v113 = v117;
          v112 = 0;
          v114 = 1.797693134862316e308;
          while ( 1 )
          {
            v25 = *((int *)this + 27);
            v26 = *((_DWORD *)this + 338);
            *((_QWORD *)this + 96) = 0;
            v27 = *((char **)this + 149);
            v28 = v25;
            v29 = 8 * v25;
            if ( !v26 )
              break;
            memcpy(v27, *((const void **)this + 131), v29);
            ClpModel::transposeTimes(this, -1.0, v6, *((double **)this + 149));
            (*(void (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 24) + 312LL))(
              *((_QWORD *)this + 24),
              this,
              0,
              0,
              1);
            v61 = 0;
            v62 = 0;
            v39 = *((_DWORD *)this + 26);
            if ( !v2 )
            {
              if ( v39 > 0 )
              {
                do
                {
                  while ( 1 )
                  {
                    v88 = *((_DWORD *)this + 27);
                    v89 = *(int *)(*((_QWORD *)this + 157) + v61 * 4);
                    v90 = v88 > (int)v89
                        ? *(double *)(*((_QWORD *)this + 149) + 8 * v89)
                        : *(double *)(*((_QWORD *)this + 130) + 8LL * ((int)v89 - v88)) + v6[(int)v89 - v88];
                    v23[v61] = v90;
                    v47 = fabs(v90);
                    v48 = *((double *)this + 96);
                    if ( v47 > v48 )
                      break;
                    v39 = *((_DWORD *)this + 26);
                    ++v62;
                    ++v61;
                    if ( v39 <= v62 )
                      goto LABEL_36;
                  }
                  v39 = *((_DWORD *)this + 26);
                  ++v62;
                  ++v61;
                  *((double *)this + 96) = v47;
                }
                while ( v39 > v62 );
LABEL_35:
                v48 = v47;
LABEL_36:
                if ( v48 >= v114 )
                  goto LABEL_73;
                goto LABEL_37;
              }
LABEL_99:
              v48 = *((double *)this + 96);
              goto LABEL_36;
            }
            if ( v39 <= 0 )
              goto LABEL_99;
            do
            {
              while ( 1 )
              {
                v63 = *((_DWORD *)this + 27);
                v64 = *(int *)(*((_QWORD *)this + 157) + v61 * 4);
                v65 = v2[v64];
                if ( v63 > (int)v64 )
                {
                  v67 = *(double *)(*((_QWORD *)this + 149) + 8 * v64) - v65;
                }
                else
                {
                  v66 = *(_DWORD *)(*((_QWORD *)this + 157) + v61 * 4) - v63;
                  v67 = *(double *)(*((_QWORD *)this + 130) + 8LL * v66) + v6[v66] - v65;
                }
                v23[v61] = v67;
                v47 = fabs(v67);
                v48 = *((double *)this + 96);
                if ( v47 <= v48 )
                  break;
                v39 = *((_DWORD *)this + 26);
                ++v62;
                ++v61;
                *((double *)this + 96) = v47;
                if ( v39 <= v62 )
                  goto LABEL_35;
              }
              v39 = *((_DWORD *)this + 26);
              ++v62;
              ++v61;
            }
            while ( v39 > v62 );
            if ( v48 >= v114 )
            {
LABEL_73:
              v113 = v24;
              goto LABEL_74;
            }
LABEL_37:
            if ( *((_DWORD *)this + 309) <= v112 || v2 || v48 <= 1.0e-10 )
              goto LABEL_74;
            v49 = *(_QWORD *)v24;
            v6 = *((const double **)v24 + 1);
            CoinIndexedVector::clear(v24);
            if ( *((int *)this + 26) <= 0 )
            {
              *((_DWORD *)v24 + 4) = 0;
            }
            else
            {
              v50 = 0;
              v51 = 0;
              do
              {
                while ( 1 )
                {
                  v52 = v23[v50] * 131072.0;
                  if ( v52 == 0.0 )
                    break;
                  v6[v50] = v52;
                  v53 = v51 + 1;
                  *(_DWORD *)(v49 + 4 * v51) = v50;
                  v23[v50++] = 0.0;
                  if ( (int)v50 >= *((_DWORD *)this + 26) )
                  {
                    *((_DWORD *)v24 + 4) = v53;
                    goto LABEL_50;
                  }
                  v51 = v53;
                }
                v23[v50++] = 0.0;
              }
              while ( *((_DWORD *)this + 26) > (int)v50 );
              *((_DWORD *)v24 + 4) = v51;
              if ( (_DWORD)v51 )
                goto LABEL_50;
            }
            *((_BYTE *)v24 + 28) = 0;
LABEL_50:
            v114 = *((double *)this + 96);
            ClpFactorization::updateColumnTranspose(*((ClpFactorization **)this + 158), v115, v24);
            v54 = *((_QWORD *)v113 + 1);
            if ( *((int *)this + 26) <= 0 )
            {
              *((_DWORD *)v24 + 4) = 0;
            }
            else
            {
              v55 = 0;
              v56 = 0;
              do
              {
                while ( 1 )
                {
                  v57 = v6[v55] * 0.00000762939453125 + *(double *)(v54 + 8 * v55);
                  if ( v57 == 0.0 )
                    break;
                  v6[v55] = v57;
                  v58 = v56 + 1;
                  *(_DWORD *)(v49 + 4 * v56) = v55++;
                  if ( *((_DWORD *)this + 26) <= (int)v55 )
                  {
                    *((_DWORD *)v24 + 4) = v58;
                    goto LABEL_58;
                  }
                  v56 = v58;
                }
                v6[v55++] = 0.0;
              }
              while ( *((_DWORD *)this + 26) > (int)v55 );
              *((_DWORD *)v24 + 4) = v56;
              if ( (_DWORD)v56 )
                goto LABEL_58;
            }
            *((_BYTE *)v24 + 28) = 0;
LABEL_58:
            if ( *((_DWORD *)this + 309) < ++v112 )
            {
              v39 = *((_DWORD *)this + 26);
              v113 = v24;
              goto LABEL_74;
            }
            v59 = v113;
            v113 = v24;
            v24 = v59;
          }
          v30 = *((_DWORD *)this + 26);
          v31 = &v27[v29];
          v32 = *(_QWORD *)v115;
          if ( v30 <= 0 )
          {
            v38 = 0;
          }
          else
          {
            v33 = *((_QWORD *)this + 157);
            v34 = 0;
            v35 = 0;
            v36 = 0;
            while ( 1 )
            {
              v37 = *(_DWORD *)(v33 + v36);
              if ( v37 < v28 )
                break;
LABEL_27:
              ++v35;
              v36 += 4;
              if ( v35 >= v30 )
              {
                v38 = (unsigned int)v34;
                goto LABEL_29;
              }
            }
            while ( 1 )
            {
              *(_DWORD *)(v32 + 4 * v34) = v37;
              v30 = *((_DWORD *)this + 26);
              ++v35;
              v36 += 4;
              v38 = (unsigned int)(v34 + 1);
              if ( v30 <= v35 )
                break;
              v33 = *((_QWORD *)this + 157);
              v34 = (int)v38;
              v28 = *((_DWORD *)this + 27);
              v37 = *(_DWORD *)(v33 + v36);
              if ( v37 >= v28 )
                goto LABEL_27;
            }
          }
LABEL_29:
          v116 = v31;
          (*(void (__fastcall **)(_QWORD, ClpSimplex *, const double *, __int64, __int64, char *))(**((_QWORD **)this + 24)
                                                                                                 + 432LL))(
            *((_QWORD *)this + 24),
            this,
            v6,
            v32,
            v38,
            v31);
          v39 = *((_DWORD *)this + 26);
          if ( v2 )
          {
            v40 = 0;
            v41 = 0;
            if ( v39 > 0 )
            {
              do
              {
                while ( 1 )
                {
                  v42 = *((_DWORD *)this + 27);
                  v43 = *(int *)(*((_QWORD *)this + 157) + v41 * 4);
                  v44 = v2[v43];
                  if ( v42 > (int)v43 )
                  {
                    v60 = v26++;
                    v46 = *(double *)(*((_QWORD *)this + 131) + 8 * v43) - *(double *)&v116[8 * v60] - v44;
                  }
                  else
                  {
                    v45 = *(_DWORD *)(*((_QWORD *)this + 157) + v41 * 4) - v42;
                    v46 = *(double *)(*((_QWORD *)this + 130) + 8LL * v45) + v6[v45] - v44;
                  }
                  v23[v41] = v46;
                  v47 = fabs(v46);
                  v48 = *((double *)this + 96);
                  if ( v47 <= v48 )
                    break;
                  v39 = *((_DWORD *)this + 26);
                  ++v40;
                  ++v41;
                  *((double *)this + 96) = v47;
                  if ( v40 >= v39 )
                    goto LABEL_35;
                }
                v39 = *((_DWORD *)this + 26);
                ++v40;
                ++v41;
              }
              while ( v39 > v40 );
              goto LABEL_36;
            }
          }
          else if ( v39 > 0 )
          {
            v82 = 0;
            v83 = 0;
            do
            {
              while ( 1 )
              {
                v84 = *((_DWORD *)this + 27);
                v85 = *(int *)(*((_QWORD *)this + 157) + v83 * 4);
                if ( v84 > (int)v85 )
                {
                  v87 = v26++;
                  v86 = *(double *)(*((_QWORD *)this + 131) + 8 * v85) - *(double *)&v116[8 * v87];
                }
                else
                {
                  v86 = *(double *)(*((_QWORD *)this + 130) + 8LL * ((int)v85 - v84)) + v6[(int)v85 - v84];
                }
                v23[v83] = v86;
                v47 = fabs(v86);
                v48 = *((double *)this + 96);
                if ( v47 <= v48 )
                  break;
                v39 = *((_DWORD *)this + 26);
                ++v82;
                ++v83;
                *((double *)this + 96) = v47;
                if ( v39 <= v82 )
                  goto LABEL_35;
              }
              v39 = *((_DWORD *)this + 26);
              ++v82;
              ++v83;
            }
            while ( v39 > v82 );
            goto LABEL_36;
          }
          goto LABEL_99;
        }
        v39 = *((_DWORD *)this + 26);
        v113 = v5;
LABEL_74:
        v68 = *((_QWORD *)v113 + 1);
        if ( v39 > 0 )
        {
          v69 = 0;
          v70 = 0;
          do
          {
            v71 = *(double *)(v68 + v69);
            ++v70;
            *(double *)(*((_QWORD *)this + 16) + v69) = v71;
            *(double *)(*((_QWORD *)this + 148) + v69) = v71 + *(double *)(*((_QWORD *)this + 130) + v69);
            v69 += 8;
          }
          while ( *((_DWORD *)this + 26) > v70 );
        }
        v72 = *((const void **)this + 24);
        v73 = *((ClpPackedMatrix **)this + 26);
        v74 = *((const double **)this + 28);
        v75 = *((_DWORD *)this + 27);
        if ( v72 )
        {
          v76 = (ClpPackedMatrix *)__dynamic_cast(
                                     v72,
                                     (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                     (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                     0);
          if ( !v73 )
          {
            if ( !v76 )
              goto LABEL_117;
            v77 = v74;
            v73 = v76;
LABEL_80:
            v78 = *((_DWORD *)v73 + 25) & 2;
            if ( !v78 )
            {
              v79 = **((const int ***)this + 138);
              if ( v75 <= 0 )
              {
                v81 = 0;
              }
              else
              {
                v80 = 0;
                do
                {
                  while ( (*(_BYTE *)(*((_QWORD *)this + 33) + v80) & 7) != 1 )
                  {
                    v81 = v78 + 1;
                    v79[v78] = v80;
                    *(_QWORD *)(*((_QWORD *)this + 149) + 8 * v80) = *(_QWORD *)(*((_QWORD *)this + 131) + 8 * v80);
                    if ( *((_DWORD *)this + 27) <= (int)++v80 )
                      goto LABEL_113;
                    ++v78;
                  }
                  *(_QWORD *)(*((_QWORD *)this + 149) + 8 * v80++) = 0;
                }
                while ( *((_DWORD *)this + 27) > (int)v80 );
                v81 = v78;
LABEL_113:
                v77 = *((const double **)this + 28);
              }
              v91 = *((const double **)this + 29);
              v92 = *((double **)this + 149);
              v93 = *((const double **)this + 16);
              if ( *((int *)this + 26) <= 4000 )
                ClpPackedMatrix::transposeTimesSubset(v73, v81, v79, v93, v92, v77, v91, nullptr);
              else
                ClpPackedMatrix::transposeTimesSubset(v73, v81, v79, v93, v92, v77, v91, v23);
              goto LABEL_119;
            }
LABEL_117:
            memcpy(*((void **)this + 149), *((const void **)this + 131), 8LL * v75);
            if ( *((int *)this + 26) <= 4000 )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24)
                                                                                             + 384LL))(
                *((_QWORD *)this + 24),
                *((_QWORD *)this + 16),
                *((_QWORD *)this + 149),
                *((_QWORD *)this + 28),
                *((_QWORD *)this + 29),
                0,
                -1.0);
            else
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double *, double))(**((_QWORD **)this + 24)
                                                                                               + 384LL))(
                *((_QWORD *)this + 24),
                *((_QWORD *)this + 16),
                *((_QWORD *)this + 149),
                *((_QWORD *)this + 28),
                *((_QWORD *)this + 29),
                v23,
                -1.0);
LABEL_119:
            v94 = *((_DWORD *)this + 26);
            *((_QWORD *)this + 28) = v74;
            if ( v94 > 0 )
              memset(v23, 0, 8LL * (unsigned int)(v94 - 1) + 8);
            v95 = *((_BYTE **)this + 24);
            if ( !v95[80] || *((int *)this + 325) < 0 || *((_DWORD *)this + 80) != -2 )
              (*(void (__fastcall **)(_BYTE *, ClpSimplex *, _QWORD, _QWORD, __int64))(*(_QWORD *)v95 + 312LL))(
                v95,
                this,
                0,
                0,
                2);
            if ( v2 )
            {
              v96 = *((_DWORD *)this + 27);
              v97 = *((_DWORD *)this + 26) + v96 == 0;
              v98 = *((_DWORD *)this + 26) + v96;
              v99 = *((double **)this + 147);
              if ( !v97 && v99 != v2 )
              {
                if ( v98 >> 3 > 0 )
                {
                  v100 = *((double **)this + 147);
                  v101 = v2;
                  do
                  {
                    v102 = *v100;
                    v101 += 8;
                    v100 += 8;
                    *(v101 - 8) = v102;
                    *(v101 - 7) = *(v100 - 7);
                    *(v101 - 6) = *(v100 - 6);
                    *(v101 - 5) = *(v100 - 5);
                    *(v101 - 4) = *(v100 - 4);
                    *(v101 - 3) = *(v100 - 3);
                    *(v101 - 2) = *(v100 - 2);
                    *(v101 - 1) = *(v100 - 1);
                  }
                  while ( &v2[8 * (unsigned int)((v98 >> 3) - 1) + 8] != v101 );
                  v103 = ((v98 >> 3) - 1 + 1LL) << 6;
                  v99 = (double *)((char *)v99 + v103);
                  v2 = (double *)((char *)v2 + v103);
                }
                switch ( v98 % 8 )
                {
                  case 1:
                    goto LABEL_139;
                  case 2:
                    goto LABEL_138;
                  case 3:
                    goto LABEL_137;
                  case 4:
                    goto LABEL_136;
                  case 5:
                    goto LABEL_135;
                  case 6:
                    goto LABEL_134;
                  case 7:
                    v2[6] = v99[6];
LABEL_134:
                    v2[5] = v99[5];
LABEL_135:
                    v2[4] = v99[4];
LABEL_136:
                    v2[3] = v99[3];
LABEL_137:
                    v2[2] = v99[2];
LABEL_138:
                    v2[1] = v99[1];
LABEL_139:
                    *v2 = *v99;
                    break;
                  default:
                    break;
                }
              }
            }
            CoinIndexedVector::clear(v117);
            return CoinIndexedVector::clear(v118);
          }
        }
        else if ( !v73 )
        {
          goto LABEL_117;
        }
        *((_QWORD *)this + 28) = 0;
        v77 = nullptr;
        goto LABEL_80;
      }
    }
    else
    {
      v16 = *((_DWORD *)this + 26);
      if ( v16 > 0 )
      {
        v17 = *((_QWORD *)this + 157);
        v18 = *((_QWORD *)this + 129);
        v19 = 0;
        v9 = 0;
        v20 = 0;
        while ( 1 )
        {
          v21 = *(double *)(v18 + 8LL * *(int *)(v17 + v19 * 4));
          if ( v21 != 0.0 )
            break;
LABEL_16:
          ++v20;
          ++v19;
          if ( v20 >= v16 )
            goto LABEL_17;
        }
        while ( 1 )
        {
          v6[v19] = v21;
          *(_DWORD *)(v7 + 4 * v9) = v20;
          v16 = *((_DWORD *)this + 26);
          ++v20;
          ++v19;
          v15 = v9 + 1;
          if ( v20 >= v16 )
            break;
          v17 = *((_QWORD *)this + 157);
          v9 = v15;
          v18 = *((_QWORD *)this + 129);
          v21 = *(double *)(v18 + 8LL * *(int *)(v17 + v19 * 4));
          if ( v21 == 0.0 )
            goto LABEL_16;
        }
LABEL_142:
        *((_DWORD *)v5 + 4) = v15;
        goto LABEL_19;
      }
    }
    v22 = v5;
    *((_DWORD *)v5 + 4) = 0;
LABEL_18:
    *((_BYTE *)v22 + 28) = 0;
    goto LABEL_19;
  }
  (*(void (__fastcall **)(_DWORD *, ClpSimplex *, _QWORD, _QWORD))(*(_QWORD *)v4 + 8LL))(
    v4,
    this,
    *((_QWORD *)this + 147),
    0);
  v105 = *((_DWORD *)this + 26);
  result = *((_QWORD *)this + 147);
  v106 = *((_QWORD **)this + 16);
  v107 = (_QWORD *)(result + 8LL * *((int *)this + 27));
  if ( v105 && v106 != v107 )
  {
    if ( v105 >> 3 > 0 )
    {
      v108 = (__int64 *)(result + 8LL * *((int *)this + 27));
      v109 = *((_QWORD **)this + 16);
      do
      {
        v110 = *v108;
        v109 += 8;
        v108 += 8;
        *(v109 - 8) = v110;
        *(v109 - 7) = *(v108 - 7);
        *(v109 - 6) = *(v108 - 6);
        *(v109 - 5) = *(v108 - 5);
        *(v109 - 4) = *(v108 - 4);
        *(v109 - 3) = *(v108 - 3);
        *(v109 - 2) = *(v108 - 2);
        *(v109 - 1) = *(v108 - 1);
      }
      while ( v109 != &v106[8 * (unsigned int)((v105 >> 3) - 1) + 8] );
      v111 = ((v105 >> 3) - 1 + 1LL) << 6;
      v107 = (_QWORD *)((char *)v107 + v111);
      v106 = (_QWORD *)((char *)v106 + v111);
    }
    result = (unsigned int)(v105 % 8);
    switch ( v105 % 8 )
    {
      case 1:
        goto LABEL_156;
      case 2:
        goto LABEL_155;
      case 3:
        goto LABEL_154;
      case 4:
        goto LABEL_153;
      case 5:
        goto LABEL_152;
      case 6:
        goto LABEL_151;
      case 7:
        v106[6] = v107[6];
LABEL_151:
        v106[5] = v107[5];
LABEL_152:
        v106[4] = v107[4];
LABEL_153:
        v106[3] = v107[3];
LABEL_154:
        v106[2] = v107[2];
LABEL_155:
        v106[1] = v107[1];
LABEL_156:
        *v106 = *v107;
        break;
      default:
        return result;
    }
  }
  return result;
}

