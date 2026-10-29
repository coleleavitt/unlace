__int64 __fastcall sub_BBA80(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  int v8; // r11d
  int v10; // esi
  int *v11; // rcx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  __int64 result; // rax
  double v16; // xmm0_8
  __int64 v17; // rcx
  int v18; // esi
  __int128 v19; // xmm0
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  int v23; // edx
  __int128 v24; // xmm2
  int v25; // r10d
  int v26; // edx
  __int64 v27; // rdx
  double *v28; // rax
  unsigned __int16 *v29; // rax
  double *v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // r11
  __int64 v33; // r10
  double v34; // xmm3_8
  double v35; // xmm4_8
  __int64 v36; // rbx
  double *v37; // rdx
  __int64 v38; // rdx
  double v39; // xmm4_8
  double v40; // xmm3_8
  double *v41; // r13
  double *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rbx
  __int64 v46; // rdx
  double v47; // xmm5_8
  double v48; // xmm4_8
  double *v49; // r15
  double v50; // xmm3_8
  unsigned __int16 *v51; // rax
  double *v52; // rdx
  unsigned __int64 v53; // r13
  __int64 v54; // r15
  __int64 v55; // rbx
  double v56; // xmm6_8
  __int64 v57; // r11
  __int64 v58; // r10
  double v59; // xmm4_8
  double v60; // xmm3_8
  double v61; // xmm5_8
  double *v62; // r15
  double *v63; // rbx
  double *v64; // r11
  double *v65; // r10
  double v66; // xmm5_8
  double v67; // xmm4_8
  double v68; // xmm3_8
  int v69; // eax
  int v70; // [rsp+0h] [rbp-54h]
  unsigned __int64 *v71; // [rsp+4h] [rbp-50h]

  v71 = a3;
  if ( a7 > 0 )
  {
    v8 = *a4;
    v10 = a4[a7];
    v11 = a4 + 1;
    v12 = v10 - v8;
    if ( v12 )
    {
      v69 = v12;
      v12 = 0;
LABEL_13:
      v18 = v12 + 1;
      v19 = *a3;
      if ( a7 <= v18 )
        goto LABEL_27;
LABEL_14:
      v20 = *v11;
      v21 = v11[a7];
      ++v11;
      v22 = v21 - v20;
      v70 = v22;
      if ( v22 )
      {
LABEL_38:
        v70 = v22;
        v24 = v71[v18];
      }
      else
      {
        while ( a7 != ++v18 )
        {
          v20 = *v11;
          v23 = v11[a7];
          ++v11;
          v22 = v23 - v20;
          if ( v22 )
            goto LABEL_38;
        }
        v24 = v19;
        v18 = a7;
      }
      v25 = v8 + v69;
      v26 = v69 & 1;
      if ( v69 <= 99 )
      {
LABEL_20:
        if ( v26 )
        {
          v27 = v8++;
          v28 = (double *)(a1 + 8LL * *(unsigned __int16 *)(a6 + 2 * v27));
          *v28 = *v28 - *(double *)(a5 + 8 * v27) * *(double *)&v19;
        }
        if ( v25 > v8 )
        {
          v29 = (unsigned __int16 *)(a6 + 2LL * v8);
          v30 = (double *)(a5 + 8LL * v8);
          v31 = a6 + 4 + 2 * (v8 + (unsigned __int64)((v25 - 1 - v8) & 0xFFFFFFFE));
          do
          {
            v32 = *v29;
            v33 = v29[1];
            v34 = v30[1];
            v35 = *v30 * *(double *)&v19;
            v29 += 2;
            v30 += 2;
            *(double *)(a1 + 8 * v32) = *(double *)(a1 + 8 * v32) - v35;
            *(double *)(a1 + 8 * v33) = *(double *)(a1 + 8 * v33) - v34 * *(double *)&v19;
          }
          while ( (unsigned __int16 *)v31 != v29 );
        }
        goto LABEL_25;
      }
      while ( 1 )
      {
        if ( v26 )
        {
          v36 = v8++;
          v37 = (double *)(a1 + 8LL * *(unsigned __int16 *)(a6 + 2 * v36));
          *v37 = *v37 - *(double *)(a5 + 8 * v36) * *(double *)&v19;
        }
        if ( (v69 & 2) != 0 )
        {
          v38 = v8;
          v8 += 2;
          v39 = *(double *)(a5 + 8 * v38) * *(double *)&v19;
          v40 = *(double *)(a5 + 8 * v38 + 8) * *(double *)&v19;
          v41 = (double *)(a1 + 8LL * *(unsigned __int16 *)(a6 + 2 * v38));
          v42 = (double *)(a1 + 8LL * *(unsigned __int16 *)(a6 + 2 * v38 + 2));
          *v41 = *v41 - v39;
          *v42 = *v42 - v40;
        }
        if ( (v69 & 4) != 0 )
        {
          v43 = v8;
          v8 += 4;
          v44 = *(unsigned __int16 *)(a6 + 2 * v43 + 2);
          v45 = *(unsigned __int16 *)(a6 + 2 * v43 + 4);
          v46 = *(unsigned __int16 *)(a6 + 2 * v43 + 6);
          v47 = *(double *)(a5 + 8 * v43 + 8) * *(double *)&v19;
          v48 = *(double *)(a5 + 8 * v43 + 16) * *(double *)&v19;
          v49 = (double *)(a1 + 8LL * *(unsigned __int16 *)(a6 + 2 * v43));
          v50 = *(double *)(a5 + 8 * v43 + 24) * *(double *)&v19;
          *v49 = *v49 - *(double *)(a5 + 8 * v43) * *(double *)&v19;
          *(double *)(a1 + 8 * v44) = *(double *)(a1 + 8 * v44) - v47;
          *(double *)(a1 + 8 * v45) = *(double *)(a1 + 8 * v45) - v48;
          *(double *)(a1 + 8 * v46) = *(double *)(a1 + 8 * v46) - v50;
        }
        if ( v25 > v8 )
        {
          v51 = (unsigned __int16 *)(a6 + 2LL * v8);
          v52 = (double *)(a5 + 8LL * v8);
          v53 = a6 + 16 + 2 * (v8 + (unsigned __int64)((v25 - 1 - v8) & 0xFFFFFFF8));
          do
          {
            v54 = *v51;
            v55 = v51[1];
            v56 = *v52 * *(double *)&v19;
            v57 = v51[2];
            v58 = v51[3];
            v59 = v52[2];
            v51 += 8;
            v60 = v52[3];
            v61 = v52[1] * *(double *)&v19;
            v52 += 8;
            *(double *)(a1 + 8 * v54) = *(double *)(a1 + 8 * v54) - v56;
            v62 = (double *)(a1 + 8LL * *(v51 - 4));
            *(double *)(a1 + 8 * v55) = *(double *)(a1 + 8 * v55) - v61;
            v63 = (double *)(a1 + 8LL * *(v51 - 3));
            *(double *)(a1 + 8 * v57) = *(double *)(a1 + 8 * v57) - v59 * *(double *)&v19;
            v64 = (double *)(a1 + 8LL * *(v51 - 2));
            *(double *)(a1 + 8 * v58) = *(double *)(a1 + 8 * v58) - v60 * *(double *)&v19;
            v65 = (double *)(a1 + 8LL * *(v51 - 1));
            v66 = *(v52 - 3) * *(double *)&v19;
            v67 = *(v52 - 2) * *(double *)&v19;
            v68 = *(v52 - 1) * *(double *)&v19;
            *v62 = *v62 - *(v52 - 4) * *(double *)&v19;
            *v63 = *v63 - v66;
            *v64 = *v64 - v67;
            *v65 = *v65 - v68;
          }
          while ( (unsigned __int16 *)v53 != v51 );
        }
LABEL_25:
        if ( v18 >= a7 )
          break;
        ++v18;
        v19 = v24;
        v8 = v20;
        v69 = v70;
        if ( a7 > v18 )
          goto LABEL_14;
LABEL_27:
        v24 = v19;
        v26 = v69 & 1;
        v20 = v8;
        v70 = v69;
        v25 = v8 + v69;
        if ( v69 <= 99 )
          goto LABEL_20;
      }
    }
    else
    {
      while ( a7 != ++v12 )
      {
        v8 = *v11;
        v13 = v11[a7];
        ++v11;
        v69 = v13 - v8;
        if ( v69 )
        {
          a3 += v12;
          goto LABEL_13;
        }
      }
    }
  }
  if ( a8 <= 0 )
    return 0;
  v14 = 0;
  result = 0;
  do
  {
    v16 = *(double *)(a1 + 8 * v14);
    *(_QWORD *)(a1 + 8 * v14) = 0;
    if ( fabs(v16) > 1.0e-12 )
    {
      v17 = (int)result;
      result = (unsigned int)(result + 1);
      *(double *)(a1 + 8 * v17) = v16;
      *(_DWORD *)(a2 + 4 * v17) = v14;
    }
    ++v14;
  }
  while ( (unsigned int)(a8 - 1) + 1LL != v14 );
  return result;
}

