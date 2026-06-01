CoinIndexedVector *__fastcall ClpPrimalColumnSteepest::djsAndDevex(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  double v11; // xmm3_8
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // r13
  double v19; // xmm4_8
  int v20; // r11d
  __int64 v21; // r10
  __int64 v22; // r15
  __int64 v23; // rcx
  double v24; // xmm0_8
  __int64 v25; // rax
  signed int v26; // edx
  double v27; // xmm1_8
  double v28; // xmm1_8
  double *v29; // rax
  int v30; // ebp
  double v31; // xmm0_8
  __int64 v32; // rsi
  double *v33; // rax
  double v34; // xmm1_8
  __int64 v35; // r11
  int v36; // eax
  __int64 v37; // r10
  __int64 v38; // rsi
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // r12
  double v43; // xmm0_8
  __int64 v44; // rdx
  signed int v45; // ecx
  double *v46; // r13
  double v47; // xmm1_8
  double v48; // xmm1_8
  double *v49; // rax
  double *v50; // rax
  int v51; // ebp
  double v52; // xmm0_8
  double *v53; // rsi
  double v54; // xmm0_8
  bool v55; // al
  __int64 v56; // rax
  double *v57; // rax
  int v58; // ebp
  double v59; // xmm0_8
  int v60; // r12d
  double v61; // xmm0_8
  double *v62; // rdx
  double *v63; // rax
  int v65; // r12d
  double v66; // xmm0_8
  double v67; // xmm1_8
  double *v68; // r12
  int v69; // r12d
  double v70; // xmm0_8
  double *v71; // rdx
  double v72; // xmm0_8
  bool v73; // r12
  __int64 v74; // r12
  double *v75; // rsi
  bool v76; // al
  bool v77; // cl
  __int64 v78; // [rsp+8h] [rbp-90h]
  __int64 v79; // [rsp+10h] [rbp-88h]
  __int64 v81; // [rsp+20h] [rbp-78h]
  int v82; // [rsp+28h] [rbp-70h]
  int v83; // [rsp+2Ch] [rbp-6Ch]
  double v85; // [rsp+38h] [rbp-60h]
  CoinIndexedVector *v86; // [rsp+38h] [rbp-60h]
  __int64 v87; // [rsp+38h] [rbp-60h]
  __int64 *v88; // [rsp+40h] [rbp-58h]
  __int64 v89; // [rsp+48h] [rbp-50h]
  __int64 v90; // [rsp+58h] [rbp-40h]

  v9 = *((_QWORD *)this + 1);
  v10 = *((_QWORD *)this + 5);
  v11 = fmin(0.01, *(double *)(v9 + 768)) + *(double *)(v9 + 872);
  *((_DWORD *)this + 23) = -1;
  v79 = *(_QWORD *)(v10 + 8);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v9 + 1264), a3, a2);
  v12 = *((_QWORD *)this + 1);
  v82 = *(_DWORD *)(v12 + 1152);
  v13 = *(int *)(v12 + 1160);
  v83 = *(_DWORD *)(v12 + 1160);
  if ( (int)v13 < 0 )
    v90 = 0;
  else
    v90 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v13);
  v85 = 1.0 / **((double **)a2 + 1);
  (*(void (__fastcall **)(_QWORD, __int64, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(v12 + 192) + 392LL))(
    *(_QWORD *)(v12 + 192),
    v12,
    a2,
    a5,
    a4,
    -1.0);
  v14 = *((_QWORD *)this + 1);
  v15 = *((_DWORD *)a2 + 4);
  v16 = *(_QWORD *)a2;
  v17 = *((_QWORD *)a2 + 1);
  v18 = *(_QWORD *)(v14 + 1184);
  v81 = *((_QWORD *)this + 4);
  v19 = v85;
  v20 = *(_DWORD *)(v14 + 108);
  v78 = v81 + 8LL * v20;
  if ( v15 > 0 )
  {
    v21 = (unsigned int)(v15 - 1) + 1LL;
    v88 = *((__int64 **)this + 5);
    v22 = v88[1];
    v23 = 0;
    v86 = a2;
    while ( 1 )
    {
      v24 = *(double *)(v17 + 8 * v23);
      v25 = 8LL * *(int *)(v16 + 4 * v23);
      v26 = v20 + *(_DWORD *)(v16 + 4 * v23);
      v27 = *(double *)(v18 + v25);
      *(_QWORD *)(v17 + 8 * v23) = 0;
      v28 = v27 - v24;
      *(double *)(v18 + v25) = v28;
      switch ( *(_BYTE *)(*(_QWORD *)(v14 + 264) + v26) & 7 )
      {
        case 0:
        case 4:
          v57 = (double *)(v78 + v25);
          v58 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v26 >> 5));
          v59 = v24 * v19 * (v24 * v19) * *((double *)this + 3);
          if ( _bittest(&v58, v26) )
            v59 = v59 + 1.0;
          v32 = 8LL * v26;
          *v57 = fmax(*v57 * 0.99, v59);
          if ( fabs(v28) <= 100.0 * v11 )
            goto LABEL_63;
          v33 = (double *)(v32 + v79);
          v34 = v28 * 10.0 * (v28 * 10.0);
          if ( *(double *)(v32 + v79) != 0.0 )
            goto LABEL_10;
          goto LABEL_33;
        case 1:
          v49 = (double *)(v22 + 8LL * v26);
          if ( *v49 != 0.0 )
            *v49 = 2.225073858507201e-308;
          goto LABEL_17;
        case 2:
          v29 = (double *)(v78 + v25);
          v30 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v26 >> 5));
          v31 = v24 * v19 * (v24 * v19) * *((double *)this + 3);
          if ( _bittest(&v30, v26) )
            v31 = v31 + 1.0;
          v32 = 8LL * v26;
          *v29 = fmax(*v29 * 0.99, v31);
          if ( v28 <= v11 )
            goto LABEL_63;
          v33 = (double *)(v32 + v79);
          v34 = v28 * (1.01 * v28);
          if ( *(double *)(v32 + v79) != 0.0 )
            goto LABEL_10;
LABEL_33:
          v53 = (double *)(v22 + v32);
          v54 = *v53;
          if ( *v53 != 0.0 )
            goto LABEL_65;
          if ( v34 > 0.0 )
            goto LABEL_25;
          v55 = v34 <= -1.0e-50;
          goto LABEL_26;
        case 3:
          v50 = (double *)(v78 + v25);
          v51 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v26 >> 5));
          v52 = v24 * v19 * (v24 * v19) * *((double *)this + 3);
          if ( _bittest(&v51, v26) )
            v52 = v52 + 1.0;
          v32 = 8LL * v26;
          *v50 = fmax(*v50 * 0.99, v52);
          if ( -v11 <= v28 )
          {
LABEL_63:
            v75 = (double *)(v22 + v32);
            if ( *v75 != 0.0 )
              *v75 = 2.225073858507201e-308;
            goto LABEL_17;
          }
          v33 = (double *)(v32 + v79);
          v34 = v28 * (v28 * 1.01);
          if ( *(double *)(v32 + v79) == 0.0 )
          {
            v53 = (double *)(v22 + v32);
            v54 = *v53;
            if ( *v53 == 0.0 )
            {
              if ( v34 <= 0.0 )
                v55 = v34 <= -1.0e-50;
              else
LABEL_25:
                v55 = v34 >= 1.0e-50;
LABEL_26:
              if ( !v55 )
                goto LABEL_17;
              v89 = *v88;
              v56 = *((int *)v88 + 4);
              *((_DWORD *)v88 + 4) = v56 + 1;
              *(_DWORD *)(v89 + 4 * v56) = v26;
            }
            else
            {
LABEL_65:
              v34 = v34 + v54;
              if ( v34 <= 0.0 )
                v76 = v34 <= -1.0e-50;
              else
                v76 = v34 >= 1.0e-50;
              if ( !v76 )
              {
                *v53 = 1.0e-100;
                goto LABEL_17;
              }
            }
            *v53 = v34;
LABEL_17:
            if ( v21 == ++v23 )
            {
LABEL_11:
              a2 = v86;
              goto LABEL_12;
            }
          }
          else
          {
LABEL_10:
            ++v23;
            *v33 = v34;
            if ( v21 == v23 )
              goto LABEL_11;
          }
          break;
        default:
          goto LABEL_17;
      }
    }
  }
  v88 = *((__int64 **)this + 5);
  v22 = v88[1];
LABEL_12:
  v35 = *(_QWORD *)(v14 + 1192);
  v36 = *((_DWORD *)a4 + 4);
  v37 = *(_QWORD *)a4;
  v38 = *((_QWORD *)a4 + 1);
  if ( v36 > 0 )
  {
    v39 = (unsigned int)(v36 - 1);
    v40 = 0;
    v41 = v39 + 1;
    while ( 1 )
    {
      v42 = *(int *)(v37 + 4 * v40);
      v43 = *(double *)(v38 + 8 * v40);
      v44 = 8 * v42;
      v45 = *(_DWORD *)(v37 + 4 * v40);
      v46 = (double *)(v35 + 8 * v42);
      v47 = *v46;
      *(_QWORD *)(v38 + 8 * v40) = 0;
      v48 = v47 - v43;
      *v46 = v48;
      switch ( *(_BYTE *)(*(_QWORD *)(v14 + 264) + v42) & 7 )
      {
        case 0:
        case 4:
          v65 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v45 >> 5));
          v66 = v43 * v19 * (v43 * v19) * *((double *)this + 3);
          if ( _bittest(&v65, v45) )
            v66 = v66 + 1.0;
          *(double *)(v81 + v44) = fmax(*(double *)(v81 + v44) * 0.99, v66);
          if ( fabs(v48) <= 100.0 * v11 )
            goto LABEL_39;
          v48 = v48 * 10.0;
          goto LABEL_51;
        case 1:
          goto LABEL_39;
        case 2:
          v60 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v45 >> 5));
          v61 = v43 * v19 * (v43 * v19) * *((double *)this + 3);
          if ( _bittest(&v60, v45) )
            v61 = v61 + 1.0;
          *(double *)(v81 + v44) = fmax(*(double *)(v81 + v44) * 0.99, v61);
          if ( v48 <= v11 )
            goto LABEL_39;
LABEL_51:
          v67 = v48 * v48;
          v68 = (double *)(v79 + v44);
          if ( *(double *)(v79 + v44) != 0.0 )
            goto LABEL_52;
          v71 = (double *)(v22 + v44);
          v72 = *v71;
          if ( *v71 != 0.0 )
            goto LABEL_72;
          if ( v67 > 0.0 )
            goto LABEL_59;
          v73 = v67 <= -1.0e-50;
          goto LABEL_60;
        case 3:
          v69 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v45 >> 5));
          v70 = v43 * v19 * (v43 * v19) * *((double *)this + 3);
          if ( _bittest(&v69, v45) )
            v70 = v70 + 1.0;
          *(double *)(v81 + v44) = fmax(*(double *)(v81 + v44) * 0.99, v70);
          if ( -v11 <= v48 )
          {
LABEL_39:
            v62 = (double *)(v22 + v44);
            if ( *v62 != 0.0 )
              *v62 = 2.225073858507201e-308;
          }
          else
          {
            v67 = v48 * v48;
            v68 = (double *)(v79 + v44);
            if ( *(double *)(v79 + v44) != 0.0 )
            {
LABEL_52:
              *v68 = v67;
              goto LABEL_41;
            }
            v71 = (double *)(v22 + v44);
            v72 = *v71;
            if ( *v71 == 0.0 )
            {
              if ( v67 <= 0.0 )
                v73 = v67 <= -1.0e-50;
              else
LABEL_59:
                v73 = v67 >= 1.0e-50;
LABEL_60:
              if ( v73 )
              {
                v74 = *((int *)v88 + 4);
                v87 = *v88;
                *((_DWORD *)v88 + 4) = v74 + 1;
                *(_DWORD *)(v87 + 4 * v74) = v45;
LABEL_62:
                *v71 = v67;
              }
            }
            else
            {
LABEL_72:
              v67 = v67 + v72;
              if ( v67 <= 0.0 )
                v77 = v67 <= -1.0e-50;
              else
                v77 = v67 >= 1.0e-50;
              if ( v77 )
                goto LABEL_62;
              *v71 = 1.0e-100;
            }
          }
LABEL_41:
          if ( v41 == ++v40 )
            goto LABEL_42;
          break;
        default:
          goto LABEL_41;
      }
    }
  }
LABEL_42:
  if ( v83 >= 0 )
    *(_QWORD *)(v81 + 8LL * v83) = v90;
  v63 = (double *)(v22 + 8LL * v82);
  if ( *v63 != 0.0 )
    *v63 = 2.225073858507201e-308;
  *((_DWORD *)a3 + 4) = 0;
  *((_BYTE *)a3 + 28) = 0;
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  return a4;
}

