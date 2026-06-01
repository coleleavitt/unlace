int *__fastcall c_ekkftrn2(__int64 a1, __int64 a2, __int64 a3, int *a4, int *a5, __int64 *a6, int *a7, int *a8)
{
  double *v11; // r15
  int v12; // r14d
  __int64 v13; // rax
  int v14; // r13d
  int v15; // edx
  int v16; // eax
  __int64 v17; // r10
  int v18; // eax
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // r10
  __int64 v22; // r15
  double v23; // xmm7_8
  int v24; // r11d
  int v25; // ecx
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  double v31; // xmm0_8
  char v32; // r9
  _DWORD *v33; // rdi
  int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  double v38; // xmm2_8
  int v40; // ecx
  double v41; // xmm3_8
  _DWORD *v42; // rdx
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rsi
  double v47; // xmm0_8
  double v48; // xmm2_8
  int v49; // r14d
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // edx
  __int64 v53; // rsi
  int v54; // edx
  __int64 v55; // rdx
  int v56; // edi
  __int64 v57; // rsi
  double v58; // xmm4_8
  double v59; // xmm0_8
  __int64 v60; // rax
  __int64 v61; // r8
  double v62; // xmm1_8
  __int64 v63; // r8
  int v64; // eax
  __int64 *v65; // rdx
  int *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // xmm0_8
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  double v73; // xmm0_8
  __int64 v76; // [rsp+18h] [rbp-90h]
  int v77; // [rsp+20h] [rbp-88h]
  __int64 v78; // [rsp+20h] [rbp-88h]
  int v79; // [rsp+28h] [rbp-80h]
  int v80; // [rsp+2Ch] [rbp-7Ch]
  int v81; // [rsp+2Ch] [rbp-7Ch]
  __int64 v83; // [rsp+38h] [rbp-70h]
  __int64 v84; // [rsp+38h] [rbp-70h]
  __int64 v85; // [rsp+40h] [rbp-68h]
  __int64 v86; // [rsp+40h] [rbp-68h]
  __int64 v87; // [rsp+48h] [rbp-60h]
  int v88; // [rsp+48h] [rbp-60h]
  int v89; // [rsp+5Ch] [rbp-4Ch] BYREF
  int v90; // [rsp+60h] [rbp-48h] BYREF
  int v91; // [rsp+64h] [rbp-44h] BYREF
  __int64 v92[8]; // [rsp+68h] [rbp-40h] BYREF

  v11 = (double *)(a2 + 8);
  v12 = *(_DWORD *)(a1 + 240);
  v13 = *(int *)(a1 + 288) + 1LL;
  v85 = *(_QWORD *)(a1 + 176) + 8 * v13;
  v83 = *(_QWORD *)(a1 + 168) + 4 * v13;
  v79 = *(_DWORD *)(a1 + 324);
  v14 = *a8;
  v87 = *(_QWORD *)(a1 + 192);
  v77 = *(_DWORD *)(a1 + 288) + 2 * v12;
  LODWORD(v13) = *(_DWORD *)(a1 + 260) - *(_DWORD *)(a1 + 284);
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 4LL * *(int *)(a1 + 360) + 4);
  *(_DWORD *)(a1 + 364) = 1;
  v80 = v13 + v15 - 2;
  v76 = *(_QWORD *)(a1 + 88) + 4LL;
  v16 = sub_20FD90(v76, a2 + 8, a3, a4, *a5, &v89);
  v17 = v76;
  if ( *(_DWORD *)(a1 + 284) && *(_DWORD *)(a1 + 252) <= v89 )
  {
    sub_210480(a1, a3, v16);
    v17 = v76;
  }
  if ( *(int *)(a1 + 340) > 0 && 10 * v14 + 100 < v12 )
  {
    v65 = a6;
    if ( (v14 & 1) != 0 )
    {
      v65 = a6 + 1;
      v71 = *a6;
      v72 = *(int *)(v17 + 4LL * *a7);
      *a7 = v72;
      *(_QWORD *)(a2 + 8 * v72) = v71;
      *a6 = 0;
    }
    if ( v14 >> 1 )
    {
      v66 = &a7[v14 & 1];
      do
      {
        v67 = *v66;
        v68 = *v65;
        v66 += 2;
        v65 += 2;
        v69 = *(int *)(v17 + 4 * v67);
        v70 = *(int *)(v17 + 4LL * *(v66 - 1));
        *(v66 - 2) = v69;
        *(v66 - 1) = v70;
        *(_QWORD *)(a2 + 8 * v69) = v68;
        *(_QWORD *)(a2 + 8 * v70) = *(v65 - 1);
        *(v65 - 2) = 0;
        *(v65 - 1) = 0;
      }
      while ( &a7[2 * ((v14 >> 1) - 1) + 2 + (v14 & 1)] != v66 );
    }
    if ( *(_DWORD *)(a1 + 284) )
      v14 = sub_210580(a1, a2, a7, v14, v87);
    if ( v77 >= v80 )
    {
      *(_DWORD *)(a1 + 352) = -3;
      v14 = sub_210B10(a1, a2, a7, v14);
    }
    else
    {
      ++*(_DWORD *)(a1 + 288);
      v14 = sub_210910(a1, a2, a7, v83, v85, v14);
      *(_DWORD *)(a1 + 352) = v14;
      *(_DWORD *)(a1 + 364) = 0;
    }
    goto LABEL_11;
  }
  v18 = sub_20FCB0(v17, a6, a2, a7, v14, (int *)v92);
  if ( *(_DWORD *)(a1 + 284) && *(_DWORD *)(a1 + 252) <= SLODWORD(v92[0]) )
    sub_210480(a1, a2, v18);
  sub_210CF0(a1, a2);
  if ( v77 >= v80 )
  {
    *(_DWORD *)(a1 + 352) = -3;
    goto LABEL_11;
  }
  v40 = *(_DWORD *)(a1 + 240);
  ++*(_DWORD *)(a1 + 288);
  v41 = *(double *)(a1 + 24);
  if ( (v40 & 1) != 0 )
  {
    v73 = *(double *)(a2 + 8);
    if ( v73 == 0.0 )
    {
      v42 = (_DWORD *)v83;
    }
    else if ( fabs(v73) < v41 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v42 = (_DWORD *)v83;
    }
    else
    {
      *(double *)(v85 + 8) = v73;
      v42 = (_DWORD *)(v83 + 4);
      *(_DWORD *)(v83 + 4) = 1;
      v85 += 8;
    }
    v11 = (double *)(a2 + 16);
    v43 = 2;
  }
  else
  {
    v42 = (_DWORD *)v83;
    v43 = 1;
  }
  v44 = v40 >> 1;
  if ( v44 )
  {
    v45 = v43 + 2 * v44;
    v46 = v85;
    while ( 1 )
    {
      v47 = *v11;
      v48 = v11[1];
      if ( *v11 != 0.0 )
      {
        if ( fabs(v47) >= v41 )
        {
          *(double *)(v46 + 8) = v47;
          *++v42 = v43;
          v46 += 8;
        }
        else
        {
          *v11 = 0.0;
        }
      }
      if ( v48 == 0.0 )
        goto LABEL_34;
      if ( fabs(v11[1]) < v41 )
      {
        v43 += 2;
        v11[1] = 0.0;
        v11 += 2;
        if ( v43 == v45 )
          break;
      }
      else
      {
        *(double *)(v46 + 8) = v11[1];
        ++v42;
        v46 += 8;
        *v42 = v43 + 1;
LABEL_34:
        v43 += 2;
        v11 += 2;
        if ( v43 == v45 )
          break;
      }
    }
  }
  v14 = ((__int64)v42 - v83) >> 2;
  *(_DWORD *)(a1 + 352) = v14;
LABEL_11:
  sub_210CF0(a1, a3);
  if ( *(int *)(a1 + 340) > 0 && 10 * v14 + 99 < v12 - *(_DWORD *)(a1 + 320) )
  {
    v64 = sub_2116B0(a1, a7, v14, v87);
    v19 = sub_2117E0(a1, a2, (double *)a6, (__int64)a7, v64, v87);
  }
  else
  {
    v19 = sub_211D80(a1, a2, v79, (__int64)a6, (__int64)a7);
  }
  v20 = *(_QWORD *)(a1 + 104);
  v21 = *(_QWORD *)(a1 + 168);
  v22 = *(_QWORD *)(a1 + 72);
  v23 = *(double *)(a1 + 24);
  *a8 = v19;
  v24 = *(_DWORD *)(a1 + 308);
  v25 = *(_DWORD *)(a1 + 312);
  v26 = *(int *)(a1 + 240);
  v27 = *(int *)(v20 + 4 * v26 + 4);
  v81 = *(_DWORD *)(a1 + 292);
  v78 = *(_QWORD *)(a1 + 176);
  v28 = *(_QWORD *)(a1 + 48);
  v92[0] = (__int64)a4;
  v91 = v27;
  if ( v24 < v25 && *(_DWORD *)(v28 + 4 * v27) >= *(_DWORD *)(v28 + 4LL * v25) )
  {
    v88 = v24;
    v86 = v28;
    v84 = v21;
    sub_210E20(a1, a3, a2, v25, &v91, v92);
    v49 = v26 - v81 + 1;
    v50 = *(int *)(v86 + 4LL * v88);
    v51 = *(_DWORD *)(v84 + 4 * v50);
    v52 = v50 + v51;
    if ( *(_DWORD *)(v86 + 4LL * v88) >= v52 || v49 > *(_DWORD *)(v84 + 4LL * v52) )
    {
      v51 = 0;
    }
    else
    {
      v53 = v84 + 4LL * v52 - 4;
      v54 = 0;
      while ( v51 != ++v54 )
      {
        v53 -= 4;
        if ( v49 > *(_DWORD *)(v53 + 4) )
        {
          v51 = v54;
          break;
        }
      }
    }
    v90 = v91;
    sub_210FB0(v78 + 8, v84 + 4, v86, v20, a3, &v90, v88, v51 - v88, a3 + 8LL * v49);
    v55 = v91;
    v56 = v90;
    if ( v90 != v91 )
    {
      v57 = v92[0];
      v58 = *(double *)(a1 + 24);
      v59 = *(double *)(a3 + 8LL * v91);
      do
      {
        v60 = v55;
        v61 = 4 * v55;
        v55 = *(int *)(v20 + 4 * v55);
        v62 = *(double *)(a3 + 8 * v55);
        *(_QWORD *)(a3 + 8 * v60) = 0;
        if ( fabs(v59) >= v58 )
        {
          v63 = *(int *)(v22 + v61);
          v57 += 4;
          *(double *)(a2 + 8 * v63) = v59;
          *(_DWORD *)(v57 - 4) = v63 - 1;
        }
        v59 = v62;
      }
      while ( v56 != (_DWORD)v55 );
      v92[0] = v57;
      v91 = v56;
    }
  }
  sub_210E20(a1, a3, a2, v79, &v91, v92);
  v29 = v91;
  if ( !v91 )
  {
    v35 = v92[0];
    goto LABEL_25;
  }
  v30 = v92[0];
  v31 = *(double *)(a3 + 8LL * v91);
  v32 = 0;
  v33 = (_DWORD *)v92[0];
  while ( 1 )
  {
    v36 = v29;
    v37 = 4 * v29;
    v29 = *(int *)(v20 + 4 * v29);
    v38 = *(double *)(a3 + 8 * v29);
    *(_QWORD *)(a3 + 8 * v36) = 0;
    if ( fabs(v31) < v23 )
      break;
    v34 = *(_DWORD *)(v22 + v37);
    *(double *)(a2 + 8LL * v34) = -v31;
    v35 = (__int64)(v33 + 1);
    *v33 = v34 - 1;
    v91 = v29;
    if ( !(_DWORD)v29 )
      goto LABEL_25;
    ++v33;
    v32 = 1;
LABEL_19:
    v31 = v38;
  }
  v91 = v29;
  if ( (_DWORD)v29 )
    goto LABEL_19;
  if ( !v32 )
    v33 = (_DWORD *)v30;
  v35 = (__int64)v33;
LABEL_25:
  *a5 = (v35 - (__int64)a4) >> 2;
  return a5;
}

