__int64 __fastcall ClpSimplexDual::changeBounds(
        ClpSimplexDual *this,
        unsigned int a2,
        CoinIndexedVector *a3,
        double *a4)
{
  unsigned int v4; // ebp
  _BYTE *v6; // rdx
  __int64 result; // rax
  int v8; // esi
  int v9; // esi
  __int64 v10; // rcx
  double v11; // xmm4_8
  char *v12; // r8
  char v13; // di
  int v14; // edx
  __int64 v15; // rsi
  double *v16; // r10
  double *v17; // r9
  double *v18; // r8
  double v19; // xmm0_8
  double v20; // xmm1_8
  __int64 v21; // rax
  int v22; // ecx
  double v23; // xmm0_8
  double v24; // xmm0_8
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // ecx
  double v30; // xmm0_8
  double v31; // xmm0_8
  double *v32; // r8
  double *v33; // r9
  double v34; // xmm0_8
  double v37; // xmm4_8
  __int64 v38; // rax
  double v39; // xmm1_8
  double v40; // xmm2_8
  double v41; // xmm0_8
  _BYTE *v42; // rsi
  char v43; // cl
  CoinMessageHandler *v44; // rax
  __int64 v45; // rax
  int v46; // r9d
  double v47; // xmm4_8
  int v48; // r8d
  __int64 v49; // r14
  double v50; // xmm5_8
  char *v51; // rsi
  char v52; // al
  int v53; // edx
  __int64 v54; // r15
  double *v55; // r8
  double *v56; // r10
  double v57; // xmm3_8
  double v58; // xmm2_8
  double *v59; // rdi
  double v60; // xmm1_8
  double v61; // xmm0_8
  double v62; // xmm6_8
  double v63; // xmm3_8
  char v64; // al
  __int64 v65; // rdi
  __int64 v66; // r8
  __int64 v67; // r10
  double v68; // xmm1_8
  double v69; // xmm1_8
  int v70; // edx
  int v71; // esi
  double v72; // xmm0_8
  double *v73; // r10
  double v74; // xmm1_8
  double v75; // xmm0_8
  double v76; // xmm1_8
  __int64 v77; // rdi
  bool v78; // dl
  __int64 v79; // rdx
  __int64 v80; // rsi
  double v81; // xmm0_8
  __int64 v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r10
  double *v85; // rax
  bool v86; // dl
  __int64 i; // rcx
  double v88; // xmm1_8
  double v89; // xmm0_8
  double v90; // xmm0_8
  __int64 v91; // rcx
  int v92; // edi
  double v93; // xmm0_8
  double v94; // xmm1_8
  double v95; // xmm1_8
  __int64 v96; // rsi
  __int64 v97; // rax
  int v98; // ecx
  int v99; // eax
  _BYTE *v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // rdi
  int v103; // eax
  __int64 v104; // rdi
  __int64 v105; // r10
  double v106; // xmm0_8
  double *v107; // r11
  __int64 j; // rcx
  __int64 v109; // r9
  __int64 v110; // r8
  int v111; // edi
  __int64 v112; // rcx
  __int64 v113; // xmm0_8
  double v114; // [rsp+0h] [rbp-58h]
  double v115; // [rsp+8h] [rbp-50h]
  double v116; // [rsp+18h] [rbp-40h]

  v4 = a2;
  *((_DWORD *)this + 334) = 0;
  if ( !a2 )
  {
    v37 = 5.0 * *((double *)this + 98);
    *a4 = 0.0;
    v114 = v37;
    ClpSimplex::createRim1(this, 0);
    if ( *((_DWORD *)this + 26) + *((_DWORD *)this + 27) <= 0 )
      return 0xFFFFFFFFLL;
    v38 = 0;
    while ( 1 )
    {
      v39 = *(double *)(*((_QWORD *)this + 123) + 8 * v38);
      v40 = *(double *)(*((_QWORD *)this + 126) + 8 * v38);
      v41 = *(double *)(*((_QWORD *)this + 150) + 8 * v38);
      *(_BYTE *)(v38 + *((_QWORD *)this + 33)) &= 0xE7u;
      v42 = (_BYTE *)(v38 + *((_QWORD *)this + 33));
      v43 = *v42 & 7;
      if ( v43 == 2 )
      {
        if ( fabs(v41 - v40) <= *((double *)this + 110) )
          goto LABEL_55;
        if ( fabs(*(double *)(*((_QWORD *)this + 147) + 8 * v38)) > 0.000000001 )
          goto LABEL_69;
      }
      else
      {
        if ( v43 != 3 || fabs(v41 - v39) <= *((double *)this + 110) )
          goto LABEL_55;
        if ( fabs(*(double *)(*((_QWORD *)this + 147) + 8 * v38)) > 0.000000001 )
        {
LABEL_69:
          ++v4;
          goto LABEL_55;
        }
      }
      *v42 = *v42 & 0xF8 | 4;
      *((_DWORD *)this + 182) &= ~8u;
LABEL_55:
      if ( *((_DWORD *)this + 26) + *((_DWORD *)this + 27) <= (int)++v38 )
      {
        if ( v4 )
        {
          v44 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 43),
                                        14,
                                        (ClpSimplexDual *)((char *)this + 416));
          v45 = CoinMessageHandler::operator<<(v44);
          CoinMessageHandler::operator<<(v45, 0, v114);
          v46 = *((_DWORD *)this + 27);
          v47 = v114;
          v48 = v46 + *((_DWORD *)this + 26);
          if ( v48 <= 0 )
          {
LABEL_84:
            *((double *)this + 98) = v47;
            return v4;
          }
          v49 = 0;
          v50 = 0.0;
          while ( 1 )
          {
            v51 = (char *)(v49 + *((_QWORD *)this + 33));
            v52 = *v51;
            v53 = *v51 & 7;
            if ( (unsigned int)(v53 - 2) > 1 )
              goto LABEL_59;
            v54 = 8 * v49;
            v55 = (double *)(8 * v49 + *((_QWORD *)this + 126));
            v56 = (double *)(8 * v49 + *((_QWORD *)this + 150));
            v57 = v47 * 0.666667;
            v58 = *v56;
            v59 = (double *)(8 * v49 + *((_QWORD *)this + 123));
            v60 = *v55;
            v61 = *v59;
            if ( *v55 - *v56 >= *v56 - *v59 )
              break;
            v63 = v57 + v58;
            if ( v63 <= v60 )
            {
              v62 = v63 - v47;
              if ( v61 > v63 - v47 )
                goto LABEL_115;
LABEL_72:
              if ( v62 <= v61 )
              {
                v61 = v62;
                goto LABEL_115;
              }
              v64 = v52 & 0xE7;
              if ( v60 > v63 )
              {
                *v51 = v64 | 0x18;
                if ( v53 == 3 )
                {
                  v61 = v58;
                  if ( v47 + v58 <= v60 )
                    v60 = v47 + v58;
                }
                else
                {
                  v60 = v58;
                  if ( v61 <= v58 - v47 )
                    v61 = v58 - v47;
                }
                goto LABEL_77;
              }
              v60 = v63;
              v61 = v62;
LABEL_103:
              *v51 = v64 | 8;
LABEL_77:
              v65 = *((_QWORD *)this + 123);
              v66 = *((_QWORD *)this + 126);
              v67 = *((_QWORD *)this + 150);
              ++*((_DWORD *)this + 334);
              v46 = *((_DWORD *)this + 27);
              v59 = (double *)(v54 + v65);
              v55 = (double *)(v54 + v66);
              v56 = (double *)(v54 + v67);
              goto LABEL_78;
            }
            v62 = v60 - v47;
            if ( v61 <= v60 - v47 )
            {
              if ( v62 <= v61 )
              {
                v63 = *v55;
                v61 = v60 - v47;
LABEL_115:
                if ( v60 <= v63 )
                {
                  v60 = v63;
                }
                else
                {
                  v60 = v63;
                  *v51 = v52 & 0xE7 | 0x10;
                  v82 = *((_QWORD *)this + 123);
                  v83 = *((_QWORD *)this + 126);
                  v84 = *((_QWORD *)this + 150);
                  ++*((_DWORD *)this + 334);
                  v46 = *((_DWORD *)this + 27);
                  v59 = (double *)(v54 + v82);
                  v55 = (double *)(v54 + v83);
                  v56 = (double *)(v54 + v84);
                }
                goto LABEL_78;
              }
              goto LABEL_102;
            }
LABEL_78:
            *v59 = v61;
            *v55 = v60;
            if ( v53 == 2 )
            {
              *v56 = v60;
              v61 = v60;
            }
            else
            {
              *v56 = v61;
            }
            v68 = v61 - v58;
            if ( v61 - v58 == v50 || !a3 )
              goto LABEL_112;
            if ( (int)v49 >= v46 )
            {
              v85 = (double *)(v54 + *((_QWORD *)a3 + 1));
              if ( *v85 == v50 )
              {
                if ( v50 <= v68 )
                  v78 = v68 >= 1.0e-50;
                else
                  v78 = v68 <= -1.0e-50;
                if ( !v78 )
                {
LABEL_111:
                  *a4 = *a4 + v68 * *(double *)(*((_QWORD *)this + 129) + 8 * v49);
LABEL_112:
                  v48 = v46 + *((_DWORD *)this + 26);
LABEL_59:
                  if ( v48 <= (int)++v49 )
                    goto LABEL_84;
                  continue;
                }
                v79 = *((int *)a3 + 4);
                v80 = *(_QWORD *)a3;
                v81 = -v68;
                *((_DWORD *)a3 + 4) = v79 + 1;
                *(_DWORD *)(v80 + 4 * v79) = v49;
              }
              else
              {
                v81 = *v85 - v68;
                if ( v81 <= v50 )
                  v86 = v81 <= -1.0e-50;
                else
                  v86 = v81 >= 1.0e-50;
                if ( !v86 )
                {
                  *v85 = 1.0e-100;
                  goto LABEL_111;
                }
              }
              *v85 = v81;
              goto LABEL_111;
            }
            v116 = v50;
            v115 = v47;
            (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, CoinIndexedVector *, double))(**((_QWORD **)this + 24)
                                                                                          + 248LL))(
              *((_QWORD *)this + 24),
              this,
              a3,
              v68);
            v50 = v116;
            v69 = v68 * *(double *)(*((_QWORD *)this + 129) + 8 * v49++);
            v47 = v115;
            *a4 = *a4 + v69;
            v46 = *((_DWORD *)this + 27);
            v48 = v46 + *((_DWORD *)this + 26);
            if ( v48 <= (int)v49 )
              goto LABEL_84;
          }
          v62 = v58 - v57;
          if ( v61 <= v58 - v57 )
          {
            v63 = v62 + v47;
            if ( v62 + v47 <= v60 )
              goto LABEL_72;
          }
          else
          {
            v63 = v47 + v61;
            if ( v47 + v61 <= v60 )
              goto LABEL_115;
            v62 = *v59;
          }
          if ( v62 <= v61 )
          {
            v61 = v62;
            goto LABEL_78;
          }
LABEL_102:
          v61 = v62;
          v64 = v52 & 0xE7;
          goto LABEL_103;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  v6 = (_BYTE *)*((int *)this + 27);
  result = a2 & 0xFFFFFFFD;
  if ( (_DWORD)result == 1 )
  {
    if ( a2 == 3 )
    {
      if ( *((_QWORD *)this + 29) )
      {
        for ( i = 0; (int)i < (int)v6; ++i )
        {
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + i) & 0x18) != 0 )
          {
            v88 = *((double *)this + 12) * *(double *)(*((_QWORD *)this + 31) + 8 * i);
            v89 = *(double *)(*((_QWORD *)this + 22) + 8 * i);
            if ( v89 > -1.0e30 )
              v89 = v89 * v88;
            *(double *)(*((_QWORD *)this + 123) + 8 * i) = v89;
            v90 = *(double *)(*((_QWORD *)this + 23) + 8 * i);
            if ( v90 < 1.0e30 )
              v90 = v90 * v88;
            *(double *)(*((_QWORD *)this + 126) + 8 * i) = v90;
            *(_BYTE *)(i + *((_QWORD *)this + 33)) &= 0xE7u;
            LODWORD(v6) = *((_DWORD *)this + 27);
          }
        }
        v8 = *((_DWORD *)this + 26);
        if ( v8 > 0 )
        {
          v91 = 0;
          v92 = 0;
          do
          {
            v93 = *(double *)(*((_QWORD *)this + 28) + v91) * *((double *)this + 12);
            v94 = *(double *)(*((_QWORD *)this + 18) + v91);
            if ( v94 > -1.0e30 )
              v94 = v94 * v93;
            v6 = (_BYTE *)(v92 + (int)v6);
            *(double *)(*((_QWORD *)this + 123) + 8LL * (_QWORD)v6) = v94;
            v95 = *(double *)(*((_QWORD *)this + 19) + v91);
            v96 = *((_QWORD *)this + 126);
            if ( v95 < 1.0e30 )
              *(double *)(v96 + 8LL * (_QWORD)v6) = v93 * v95;
            else
              *(double *)(v96 + 8LL * (_QWORD)v6) = v95;
            ++v92;
            v91 += 8;
            v6[*((_QWORD *)this + 33)] &= 0xE7u;
            v8 = *((_DWORD *)this + 26);
            LODWORD(v6) = *((_DWORD *)this + 27);
          }
          while ( v8 > v92 );
        }
      }
      else
      {
        for ( j = 0; (int)v6 > (int)j; ++j )
        {
          while ( (*(_BYTE *)(*((_QWORD *)this + 33) + j) & 0x18) != 0 )
          {
            *(_QWORD *)(*((_QWORD *)this + 123) + 8 * j) = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * j);
            *(_QWORD *)(*((_QWORD *)this + 126) + 8 * j) = *(_QWORD *)(*((_QWORD *)this + 23) + 8 * j);
            v6 = (_BYTE *)(j + *((_QWORD *)this + 33));
            ++j;
            *v6 &= 0xE7u;
            LODWORD(v6) = *((_DWORD *)this + 27);
            if ( (int)j >= (int)v6 )
              goto LABEL_170;
          }
        }
LABEL_170:
        v8 = *((_DWORD *)this + 26);
        if ( v8 > 0 )
        {
          v109 = *((_QWORD *)this + 33);
          v110 = 0;
          v111 = 0;
          while ( 1 )
          {
            v112 = v111 + (int)v6;
            if ( (*(_BYTE *)(v109 + v112) & 0x18) != 0 )
              break;
LABEL_175:
            ++v111;
            v110 += 8;
            if ( v111 >= v8 )
              goto LABEL_5;
          }
          while ( 1 )
          {
            ++v111;
            *(_QWORD *)(*((_QWORD *)this + 123) + 8 * v112) = *(_QWORD *)(*((_QWORD *)this + 18) + v110);
            v113 = *(_QWORD *)(*((_QWORD *)this + 19) + v110);
            v110 += 8;
            *(_QWORD *)(*((_QWORD *)this + 126) + 8 * v112) = v113;
            *(_BYTE *)(*((_QWORD *)this + 33) + v112) &= 0xE7u;
            v8 = *((_DWORD *)this + 26);
            LODWORD(v6) = *((_DWORD *)this + 27);
            if ( v111 >= v8 )
              break;
            v109 = *((_QWORD *)this + 33);
            v112 = v111 + (int)v6;
            if ( (*(_BYTE *)(v109 + v112) & 0x18) == 0 )
              goto LABEL_175;
          }
        }
      }
    }
    else
    {
      v8 = *((_DWORD *)this + 26);
    }
LABEL_5:
    v9 = (_DWORD)v6 + v8;
    v10 = 0;
    v11 = 0.999999 * *((double *)this + 98);
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        v12 = (char *)(v10 + *((_QWORD *)this + 33));
        v13 = *v12;
        v14 = *v12 & 7;
        if ( (unsigned int)(v14 - 2) <= 1 )
          break;
        if ( v14 == 1 )
        {
          *v12 = v13 & 0xE7;
          v32 = (double *)(8 * v10 + *((_QWORD *)this + 126));
          v33 = (double *)(8 * v10 + *((_QWORD *)this + 123));
          v34 = *v32 - *v33;
          if ( v34 > *((double *)this + 98) * 0.5 )
          {
            v70 = *((_DWORD *)this + 27);
            v71 = *((_DWORD *)this + 26);
            if ( *((double *)this + 98) + *((double *)this + 98) > v34 )
            {
              if ( (int)v10 >= v70 )
              {
                v104 = *((_QWORD *)this + 28);
                v105 = (int)v10 - v70;
                v106 = *(double *)(*((_QWORD *)this + 18) + 8 * v105);
                v107 = (double *)(*((_QWORD *)this + 19) + 8 * v105);
                if ( v104 )
                {
                  v74 = *(double *)(v104 + 8 * v105) * *((double *)this + 12);
                  if ( v106 > -1.0e30 )
                    v106 = v106 * v74;
                  *v33 = v106;
                  v75 = *v107;
                  if ( *v107 < 1.0e30 )
                    goto LABEL_96;
                }
                else
                {
                  *v33 = v106;
                  v75 = *v107;
                }
              }
              else
              {
                v72 = *(double *)(*((_QWORD *)this + 22) + 8 * v10);
                v73 = (double *)(8 * v10 + *((_QWORD *)this + 23));
                if ( !*((_QWORD *)this + 29) )
                {
                  *v33 = v72;
                  v9 = v70 + v71;
                  *v32 = *v73;
                  goto LABEL_8;
                }
                v74 = *(double *)(*((_QWORD *)this + 31) + 8 * v10) * *((double *)this + 12);
                if ( v72 > -1.0e30 )
                  v72 = v72 * v74;
                *v33 = v72;
                v75 = *v73;
                if ( *v73 < 1.0e30 )
LABEL_96:
                  v75 = v75 * v74;
              }
              *v32 = v75;
            }
            v9 = v70 + v71;
            goto LABEL_8;
          }
          v9 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
        }
LABEL_8:
        if ( v9 <= (int)++v10 )
          return result;
      }
      v15 = 8 * v10;
      v16 = (double *)(8 * v10 + *((_QWORD *)this + 123));
      v17 = (double *)(8 * v10 + *((_QWORD *)this + 126));
      v18 = (double *)(8 * v10 + *((_QWORD *)this + 150));
      v19 = *v16;
      v20 = *v17;
      if ( *v16 <= -*((double *)this + 94) && *((double *)this + 94) <= v20 )
      {
        v76 = *((double *)this + 98);
        *v16 = v76 * -0.5;
        *v17 = v76 * 0.5;
        *(_BYTE *)(v10 + *((_QWORD *)this + 33)) |= 0x18u;
        v77 = *((_QWORD *)this + 33);
        ++*((_DWORD *)this + 334);
        *(_BYTE *)(v10 + v77) = *(_BYTE *)(v10 + v77) & 0xF8 | 2;
        *(double *)(*((_QWORD *)this + 150) + 8 * v10) = *((double *)this + 98) * 0.5;
        v9 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
        goto LABEL_8;
      }
      if ( fabs(v20 - *v18) < fabs(v19 - *v18) )
      {
        if ( v20 - v11 > v19 )
        {
          if ( (v13 & 0x18) == 0 )
            ++*((_DWORD *)this + 334);
          *v16 = v20 - *((double *)this + 98);
          *(_BYTE *)(v10 + *((_QWORD *)this + 33)) = *(_BYTE *)(v10 + *((_QWORD *)this + 33)) & 0xE7 | 8;
          v18 = (double *)(v15 + *((_QWORD *)this + 150));
          if ( v14 == 2 )
          {
LABEL_89:
            *v18 = *(double *)(*((_QWORD *)this + 126) + 8 * v10);
            v9 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
            goto LABEL_8;
          }
          goto LABEL_18;
        }
      }
      else if ( v20 > v11 + v19 )
      {
        if ( (v13 & 0x18) == 0 )
          ++*((_DWORD *)this + 334);
        *v17 = v19 + *((double *)this + 98);
        *(_BYTE *)(v10 + *((_QWORD *)this + 33)) = *(_BYTE *)(v10 + *((_QWORD *)this + 33)) & 0xE7 | 0x10;
        v18 = (double *)(v15 + *((_QWORD *)this + 150));
      }
      if ( v14 == 2 )
        goto LABEL_89;
LABEL_18:
      *v18 = *(double *)(*((_QWORD *)this + 123) + 8 * v10);
      v9 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
      goto LABEL_8;
    }
  }
  else
  {
    if ( *((_QWORD *)this + 29) )
    {
      if ( (int)v6 > 0 )
      {
        v21 = 0;
        do
        {
          v22 = (int)*(unsigned __int8 *)(*((_QWORD *)this + 33) + v21) >> 3;
          if ( (v22 & 3) != 0 )
          {
            if ( (v22 & 1) != 0 )
            {
              v23 = *(double *)(*((_QWORD *)this + 22) + 8 * v21);
              if ( v23 > -1.0e30 )
                v23 = v23 * (*(double *)(*((_QWORD *)this + 31) + 8 * v21) * *((double *)this + 12));
              *(double *)(*((_QWORD *)this + 125) + 8 * v21) = v23;
            }
            if ( (v22 & 2) != 0 )
            {
              v24 = *(double *)(*((_QWORD *)this + 23) + 8 * v21);
              if ( v24 < 1.0e30 )
                v24 = v24 * (*(double *)(*((_QWORD *)this + 31) + 8 * v21) * *((double *)this + 12));
              *(double *)(*((_QWORD *)this + 128) + 8 * v21) = v24;
            }
          }
          ++v21;
        }
        while ( (unsigned int)((_DWORD)v6 - 1) + 1LL != v21 );
      }
      v25 = *((_DWORD *)this + 26);
      if ( v25 > 0 )
      {
        v26 = (unsigned int)(v25 - 1);
        v27 = 0;
        v28 = v26 + 1;
        do
        {
          v29 = (int)(unsigned __int8)v6[v27 + *((_QWORD *)this + 33)] >> 3;
          if ( (v29 & 3) != 0 )
          {
            if ( (v29 & 1) != 0 )
            {
              v30 = *(double *)(*((_QWORD *)this + 18) + 8 * v27);
              if ( v30 > -1.0e30 )
                v30 = v30 * (*(double *)(*((_QWORD *)this + 28) + 8 * v27) * *((double *)this + 12));
              *(double *)(*((_QWORD *)this + 124) + 8 * v27) = v30;
            }
            if ( (v29 & 2) != 0 )
            {
              v31 = *(double *)(*((_QWORD *)this + 19) + 8 * v27);
              if ( v31 < 1.0e30 )
                v31 = v31 * (*(double *)(*((_QWORD *)this + 28) + 8 * v27) * *((double *)this + 12));
              *(double *)(*((_QWORD *)this + 127) + 8 * v27) = v31;
            }
          }
          ++v27;
        }
        while ( v28 != v27 );
      }
    }
    else
    {
      if ( (int)v6 > 0 )
      {
        v97 = 0;
        do
        {
          v98 = (int)*(unsigned __int8 *)(*((_QWORD *)this + 33) + v97) >> 3;
          if ( (v98 & 1) != 0 )
            *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v97) = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v97);
          if ( (v98 & 2) != 0 )
            *(_QWORD *)(*((_QWORD *)this + 128) + 8 * v97) = *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v97);
          ++v97;
        }
        while ( (unsigned int)((_DWORD)v6 - 1) + 1LL != v97 );
      }
      v99 = *((_DWORD *)this + 26);
      if ( v99 > 0 )
      {
        v100 = v6 + 1;
        v101 = 0;
        v102 = (__int64)&v6[v99 - 1 + 1];
        while ( 1 )
        {
          v103 = (int)(unsigned __int8)v6[*((_QWORD *)this + 33)] >> 3;
          if ( (v103 & 1) != 0 )
            *(_QWORD *)(*((_QWORD *)this + 124) + v101) = *(_QWORD *)(*((_QWORD *)this + 18) + v101);
          if ( (v103 & 2) != 0 )
            *(_QWORD *)(*((_QWORD *)this + 127) + v101) = *(_QWORD *)(*((_QWORD *)this + 19) + v101);
          v101 += 8;
          v6 = v100;
          if ( (_BYTE *)v102 == v100 )
            break;
          ++v100;
        }
      }
    }
    return 0;
  }
  return result;
}

