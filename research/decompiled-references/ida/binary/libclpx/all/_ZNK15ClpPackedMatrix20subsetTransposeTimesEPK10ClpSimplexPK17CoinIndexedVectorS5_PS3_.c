__int64 __fastcall ClpPackedMatrix::subsetTransposeTimes(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  int v8; // r15d
  __int64 v9; // rbx
  int *v10; // r13
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r9
  __int64 result; // rax
  ClpPackedMatrix *v18; // rdx
  __int64 v19; // r11
  __int64 v20; // r15
  __int64 v21; // rdx
  double v22; // xmm1_8
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  double v27; // xmm0_8
  __int64 v28; // rax
  __int64 (__fastcall *v29)(ClpPackedMatrix *); // rcx
  __int64 (__fastcall *v30)(ClpPackedMatrix *); // rcx
  __int64 (__fastcall *v31)(ClpPackedMatrix *); // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // ecx
  double v38; // xmm2_8
  double v39; // xmm1_8
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rsi
  double v45; // xmm0_8
  unsigned __int64 v46; // r9
  __int64 v47; // r15
  __int64 v48; // rsi
  __int64 v49; // r11
  int v50; // r10d
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rdx
  double v55; // xmm0_8
  __int64 v56; // r8
  __int64 v57; // rsi
  double v58; // xmm0_8
  __int64 v59; // rdx
  __int64 v60; // r11
  double v61; // xmm3_8
  double v62; // xmm1_8
  __int64 v63; // rdx
  __int64 v64; // rcx
  double v65; // xmm0_8
  unsigned __int64 v66; // r10
  __int64 v67; // r15
  __int64 v68; // rcx
  double v69; // xmm1_8
  __int64 v70; // rdx
  int v71; // ecx
  __int64 v72; // rsi
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rcx
  double v78; // xmm0_8
  __int64 v79; // r8
  __int64 v80; // r10
  __int64 v81; // rcx
  __int64 v82; // rdx
  bool v83; // sf
  int v84; // ecx
  double v85; // xmm1_8
  __int64 v86; // rsi
  __int64 v87; // r11
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // rsi
  double v91; // xmm0_8
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v95; // [rsp+8h] [rbp-50h]
  int v96; // [rsp+8h] [rbp-50h]
  int v97; // [rsp+8h] [rbp-50h]
  __int64 v98; // [rsp+8h] [rbp-50h]
  ClpPackedMatrix *v99; // [rsp+8h] [rbp-50h]
  ClpPackedMatrix *v100; // [rsp+8h] [rbp-50h]
  __int64 v101; // [rsp+10h] [rbp-48h]
  __int64 v102; // [rsp+10h] [rbp-48h]
  __int64 v103; // [rsp+10h] [rbp-48h]

  CoinIndexedVector::clear(a5);
  v8 = *((_DWORD *)a4 + 4);
  v9 = *((_QWORD *)a3 + 1);
  v10 = *(int **)a4;
  v11 = *((_QWORD *)a2 + 28);
  v12 = *((_QWORD **)this + 11);
  v13 = *((_QWORD *)a5 + 1);
  v14 = v12[5];
  v15 = v12[6];
  v16 = v12[7];
  result = v12[4];
  *((_BYTE *)a5 + 28) = 1;
  v18 = *((ClpPackedMatrix **)a2 + 26);
  if ( v11 && v18 && (*((_BYTE *)v18 + 100) & 2) == 0 )
  {
    v28 = *(_QWORD *)v18;
    v29 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v18 + 48LL);
    if ( v29 == ClpPackedMatrix::getIndices )
    {
      v14 = *(_QWORD *)(*((_QWORD *)v18 + 11) + 40LL);
    }
    else
    {
      v102 = v16;
      v99 = *((ClpPackedMatrix **)a2 + 26);
      v92 = v29(v18);
      v18 = v99;
      v14 = v92;
      v16 = v102;
      v28 = *(_QWORD *)v99;
    }
    v30 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v28 + 56);
    if ( v30 == ClpPackedMatrix::getVectorStarts )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v18 + 11) + 48LL);
    }
    else
    {
      v103 = v16;
      v100 = v18;
      v93 = v30(v18);
      v18 = v100;
      v15 = v93;
      v16 = v103;
      v28 = *(_QWORD *)v100;
    }
    v31 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v28 + 40);
    if ( v31 == ClpPackedMatrix::getElements )
    {
      result = *(_QWORD *)(*((_QWORD *)v18 + 11) + 32LL);
      if ( v8 > 2 )
      {
LABEL_20:
        v32 = *v10;
        v33 = *(int *)(v15 + 4 * v32);
        v34 = *(_DWORD *)(v15 + 4 * v32 + 4);
LABEL_21:
        v35 = v10[1];
        v36 = *(int *)(v15 + 4 * v35);
        v37 = *(_DWORD *)(v15 + 4 * v35 + 4);
        if ( (int)v33 >= v34 )
        {
          v38 = 0.0;
          v39 = 0.0;
        }
        else
        {
          v38 = 0.0;
          v39 = 0.0;
          v40 = (unsigned int)(v34 - 1 - v33);
          v41 = v14 + 4 * v33;
          v42 = result + 8 * v33;
          v43 = v40 + 1;
          v44 = 0;
          do
          {
            v45 = *(double *)(v9 + 8LL * *(int *)(v41 + 4 * v44)) * *(double *)(v42 + 8 * v44);
            ++v44;
            v39 = v39 + v45;
          }
          while ( v43 != v44 );
        }
        v96 = v8;
        v46 = 0;
        v47 = 4LL * (unsigned int)(v8 - 3) + 4;
        do
        {
          v48 = v10[v46 / 4 + 2];
          v49 = *(int *)(v15 + 4 * v48);
          v50 = *(_DWORD *)(v15 + 4 * v48 + 4);
          *(double *)(v13 + 2 * v46) = v39;
          if ( (int)v36 >= v37 )
          {
            v39 = 0.0;
          }
          else
          {
            v39 = 0.0;
            v51 = v14 + 4 * v36;
            v52 = result + 8 * v36;
            v53 = (unsigned int)(v37 - 1 - v36) + 1LL;
            v54 = 0;
            do
            {
              v55 = *(double *)(v9 + 8LL * *(int *)(v51 + 4 * v54)) * *(double *)(v52 + 8 * v54);
              ++v54;
              v39 = v39 + v55;
            }
            while ( v53 != v54 );
          }
          v46 += 4LL;
          v36 = (int)v49;
          v37 = v50;
        }
        while ( v47 != v46 );
        v56 = 8LL * (v96 - 2);
        *(double *)(v13 + v56) = v39;
        if ( (int)v49 < v50 )
        {
          v57 = result + 8 * v49;
          result = 0;
          do
          {
            v58 = *(double *)(v9 + 8LL * *(int *)(v14 + 4 * v49 + 4 * result)) * *(double *)(v57 + 8 * result);
            ++result;
            v38 = v38 + v58;
          }
          while ( (unsigned int)(v50 - 1 - v49) + 1LL != result );
        }
        *(double *)(v13 + v56 + 8) = v38;
        return result;
      }
    }
    else
    {
      v98 = v16;
      result = v31(v18);
      v16 = v98;
      if ( v8 > 2 )
        goto LABEL_20;
    }
    if ( !v8 )
      return result;
    goto LABEL_48;
  }
  if ( (*((_BYTE *)this + 100) & 2) == 0 && v8 > 2 )
  {
    v59 = *v10;
    v33 = *(int *)(v15 + 4 * v59);
    v34 = *(_DWORD *)(v15 + 4 * v59 + 4);
    if ( v11 )
    {
      v60 = *((_QWORD *)a2 + 29);
      v61 = *(double *)(v60 + 8 * v59);
      if ( (int)v33 >= v34 )
      {
        v62 = 0.0;
      }
      else
      {
        v62 = 0.0;
        v63 = 0;
        do
        {
          v64 = *(int *)(v14 + 4 * v33 + 4 * v63);
          v65 = *(double *)(v9 + 8 * v64) * *(double *)(result + 8 * v33 + 8 * v63++);
          v62 = v62 + v65 * *(double *)(v11 + 8 * v64);
        }
        while ( (unsigned int)(v34 - v33 - 1) + 1LL != v63 );
      }
      v97 = v8;
      v66 = 0;
      v67 = 4LL * (unsigned int)(v8 - 2) + 4;
      do
      {
        v68 = v10[v66 / 4 + 1];
        v69 = v62 * v61;
        v70 = *(int *)(v15 + 4 * v68);
        v61 = *(double *)(v60 + 8 * v68);
        v71 = *(_DWORD *)(v15 + 4 * v68 + 4);
        *(double *)(v13 + 2 * v66) = v69;
        if ( (int)v70 >= v71 )
        {
          v62 = 0.0;
        }
        else
        {
          v62 = 0.0;
          v72 = (unsigned int)(v71 - v70 - 1);
          v73 = v14 + 4 * v70;
          v74 = result + 8 * v70;
          v75 = 0;
          v76 = v72 + 1;
          do
          {
            v77 = *(int *)(v73 + 4 * v75);
            v78 = *(double *)(v9 + 8 * v77) * *(double *)(v74 + 8 * v75++);
            v62 = v62 + v78 * *(double *)(v11 + 8 * v77);
          }
          while ( v76 != v75 );
        }
        v66 += 4LL;
      }
      while ( v67 != v66 );
      result = (unsigned int)(v97 - 1);
      *(double *)(v13 + 8 * result) = v62 * v61;
      return result;
    }
    goto LABEL_21;
  }
  if ( !v8 )
    return result;
  if ( v11 )
  {
    v95 = *((_QWORD *)a2 + 29);
    if ( v8 > 0 )
    {
      v19 = 0;
      v101 = (unsigned int)(v8 - 1) + 1LL;
      do
      {
        v20 = v10[v19];
        v21 = *(int *)(v15 + 4 * v20);
        if ( (int)v21 + *(_DWORD *)(v16 + 4 * v20) <= (int)v21 )
        {
          v22 = 0.0;
        }
        else
        {
          v22 = 0.0;
          v23 = v14 + 4 * v21;
          v24 = result + 8 * v21;
          v25 = 0;
          do
          {
            v26 = *(int *)(v23 + 4 * v25);
            v27 = *(double *)(v9 + 8 * v26) * *(double *)(v24 + 8 * v25++);
            v22 = v22 + v27 * *(double *)(v11 + 8 * v26);
          }
          while ( (unsigned int)(*(_DWORD *)(v16 + 4 * v20) - 1) + 1LL != v25 );
        }
        *(double *)(v13 + 8 * v19++) = v22 * *(double *)(v95 + 8 * v20);
      }
      while ( v101 != v19 );
    }
    return result;
  }
LABEL_48:
  if ( v8 > 0 )
  {
    v79 = 0;
    v80 = (unsigned int)(v8 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v81 = v10[v79];
        v82 = *(int *)(v15 + 4 * v81);
        v83 = -*(_DWORD *)(v16 + 4 * v81) < 0;
        v84 = v82 + *(_DWORD *)(v16 + 4 * v81);
        if ( v83 != __OFSUB__((_DWORD)v82, v84) )
          break;
        *(_QWORD *)(v13 + 8 * v79++) = 0;
        if ( v80 == v79 )
          return result;
      }
      v85 = 0.0;
      v86 = (unsigned int)(v84 - v82 - 1);
      v87 = v14 + 4 * v82;
      v88 = result + 8 * v82;
      v89 = 0;
      v90 = v86 + 1;
      do
      {
        v91 = *(double *)(v9 + 8LL * *(int *)(v87 + 4 * v89)) * *(double *)(v88 + 8 * v89);
        ++v89;
        v85 = v85 + v91;
      }
      while ( v90 != v89 );
      *(double *)(v13 + 8 * v79++) = v85;
    }
    while ( v80 != v79 );
  }
  return result;
}

