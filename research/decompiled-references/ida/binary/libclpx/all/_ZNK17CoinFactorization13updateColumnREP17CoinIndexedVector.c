__int64 __fastcall CoinFactorization::updateColumnR(CoinFactorization *this, CoinIndexedVector *a2)
{
  __int64 result; // rax
  int *v3; // r10
  int v5; // r9d
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  double v10; // xmm3_8
  double v11; // xmm2_8
  double v12; // xmm5_8
  __int64 v13; // r13
  __int64 v14; // r12
  int v15; // eax
  int v16; // r11d
  double v17; // xmm6_8
  double v18; // xmm0_8
  double v19; // xmm3_8
  double v20; // xmm4_8
  double v21; // xmm1_8
  __int64 v22; // rdx
  int *v23; // rbx
  __int64 v24; // r9
  int *v25; // rcx
  int v26; // ebp
  double *v27; // rcx
  double v28; // xmm1_8
  __int64 v29; // r11
  __int64 v30; // r10
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  double v35; // xmm0_8
  __int64 v36; // r10
  __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // r11
  int v40; // r9d
  __int64 v41; // r11
  int *v42; // r9
  __int64 v43; // r13
  __int64 v44; // r8
  __int64 v45; // r11
  int v46; // esi
  double v47; // xmm3_8
  __int64 v48; // r8
  int v49; // esi
  __int64 v50; // r11
  __int64 v51; // r12
  __int64 v52; // rbp
  __int64 v53; // rsi
  __int64 v54; // r8
  double v55; // xmm1_8
  __int64 v56; // r8
  __int64 v57; // r11
  double *v58; // rsi
  double v59; // xmm1_8
  __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // rbp
  __int64 v63; // r13
  __int64 v64; // r12
  __int64 v65; // rsi
  __int64 v66; // r9
  double v67; // xmm3_8
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r11
  __int64 v72; // r13
  int *v73; // r9
  __int64 v74; // r12
  __int64 v75; // r8
  int v76; // eax
  double v77; // xmm3_8
  __int64 v78; // r8
  int v79; // eax
  __int64 v80; // r10
  __int64 v81; // rbp
  __int64 v82; // r11
  __int64 v83; // rax
  __int64 v84; // r8
  double v85; // xmm1_8
  __int64 v86; // r9
  double *v87; // rax
  double v88; // xmm1_8
  __int64 v89; // rax
  int v90; // ebp
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // r11
  __int64 v94; // rax
  __int64 v95; // rsi
  double v96; // xmm3_8
  int v97; // [rsp+0h] [rbp-50h]
  int *i; // [rsp+0h] [rbp-50h]
  __int64 v99; // [rsp+0h] [rbp-50h]
  int v100; // [rsp+8h] [rbp-48h]
  __int64 v101; // [rsp+8h] [rbp-48h]
  __int64 v102; // [rsp+10h] [rbp-40h]
  __int64 v103; // [rsp+10h] [rbp-40h]
  __int64 v104; // [rsp+18h] [rbp-38h]

  result = *((int *)this + 197);
  if ( (_DWORD)result )
  {
    v3 = nullptr;
    v5 = *((_DWORD *)this + 206);
    v6 = *((_QWORD *)this + 102);
    v7 = *((int *)a2 + 4);
    v8 = *((_QWORD *)this + 13);
    v9 = *((_QWORD *)this + 32);
    if ( v5 >= -1 )
      v3 = *((int **)this + 102);
    v10 = (double)v3[result];
    v11 = *((double *)this + 1);
    v12 = (double)(int)v7;
    v13 = *((_QWORD *)this + 101);
    v97 = *((_DWORD *)this + 8);
    v14 = *((_QWORD *)this + 100);
    v100 = *((_DWORD *)this + 9);
    v15 = *((_DWORD *)this + 17);
    if ( *((int *)this + 28) <= -2 )
      v8 = 0;
    v16 = *((_DWORD *)this + 66);
    v17 = (double)v15;
    v18 = v17 + v17 + v10 + v12 * v12;
    if ( v9 && v16 >= -1 )
    {
      v19 = (v10 / (double)v100 + 1.0) * v12 + (v12 / (double)*((int *)this + 8) * (v10 / (double)v100) + 2.0) * v17;
      v20 = v12 * v12 + v19;
      if ( *((int *)this + 284) >= -1 && *((_QWORD *)this + 141) )
      {
        v21 = (double)((int)v7 + v15) * 0.1 + v19;
        if ( v21 >= 1.0e100 )
        {
          v21 = 1.0e100;
          result = 0xFFFFFFFFLL;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        v21 = 1.0e100;
        result = 0xFFFFFFFFLL;
      }
      v22 = *((_QWORD *)a2 + 1);
      v23 = *(int **)a2;
      if ( v21 > v20 )
      {
        if ( v20 > v18 )
        {
LABEL_14:
          result = *v3;
          if ( v97 >= v100 )
            goto LABEL_60;
          v24 = v97;
          v25 = &v3[-v97];
          for ( i = v25; ; v25 = i )
          {
            v26 = v25[v24 + 1];
            v27 = (double *)(v22 + 8LL * *(int *)(v8 + 4 * v24));
            v28 = *v27;
            *v27 = 0.0;
            if ( v26 > (int)result )
            {
              v29 = v14 + 8 * result;
              v30 = v13 + 4 * result;
              v31 = v26 - result;
              v32 = 0;
              v33 = (unsigned int)(v31 - 1) + 1LL;
              do
              {
                v34 = *(int *)(v30 + 4 * v32);
                v35 = *(double *)(v29 + 8 * v32++);
                v28 = v28 - v35 * *(double *)(v22 + 8 * v34);
              }
              while ( v33 != v32 );
            }
            if ( fabs(v28) <= v11 )
            {
              *(_QWORD *)(v22 + 8 * v24++) = 0;
              result = (unsigned int)v24;
              if ( *((_DWORD *)this + 9) <= (int)v24 )
                goto LABEL_60;
            }
            else
            {
              *(double *)(v22 + 8 * v24) = v28;
              v23[v7] = v24++;
              result = (unsigned int)v24;
              if ( *((_DWORD *)this + 9) <= (int)v24 )
              {
                LODWORD(v7) = v7 + 1;
                goto LABEL_60;
              }
              v7 = (int)v7 + 1;
            }
            result = v26;
          }
        }
        v70 = *((int *)this + 199);
        v71 = v14 + 8 * v70;
        v104 = v13 + 4 * v70;
        result = *((int *)this + 16);
        v103 = v71;
        v72 = (__int64)&v3[result + 1];
        if ( (int)v7 <= 0 )
        {
          if ( v97 >= v100 )
            goto LABEL_68;
        }
        else
        {
          v73 = *(int **)a2;
          v74 = (__int64)&v23[(unsigned int)(v7 - 1) + 1];
          do
          {
            while ( 1 )
            {
              v75 = *v73;
              v76 = *(_DWORD *)(v9 + 4 * v75);
              if ( v76 )
              {
                v77 = *(double *)(v22 + 8 * v75);
                v78 = *(int *)(v72 + 4 * v75);
                v79 = v78 + v76;
                if ( (int)v78 < v79 )
                  break;
              }
              if ( (int *)v74 == ++v73 )
                goto LABEL_78;
            }
            v80 = (unsigned int)(v79 - v78 - 1) + 1LL;
            v81 = v103 + 8 * v78;
            v82 = v104 + 4 * v78;
            v83 = 0;
            do
            {
              v84 = *(int *)(v82 + 4 * v83);
              v85 = *(double *)(v81 + 8 * v83++);
              *(double *)(v22 + 8 * v84) = *(double *)(v22 + 8 * v84) - v85 * v77;
            }
            while ( v80 != v83 );
            ++v73;
          }
          while ( (int *)v74 != v73 );
LABEL_78:
          if ( v97 >= v100 )
            goto LABEL_61;
        }
        v86 = v97;
        do
        {
          v87 = (double *)(v22 + 8LL * *(int *)(v8 + 4 * v86));
          v88 = *v87 + *(double *)(v22 + 8 * v86);
          *v87 = 0.0;
          if ( fabs(v88) <= v11 )
          {
            *(_QWORD *)(v22 + 8 * v86) = 0;
          }
          else
          {
            *(double *)(v22 + 8 * v86) = v88;
            v23[v7] = v86;
            v89 = *(int *)(v72 + 4 * v86);
            v90 = v7 + 1;
            if ( (int)v89 < (int)v89 + *(_DWORD *)(v9 + 4 * v86) )
            {
              v91 = v104 + 4 * v89;
              v92 = (unsigned int)(*(_DWORD *)(v9 + 4 * v86) - 1) + 1LL;
              v93 = v103 + 8 * v89;
              v94 = 0;
              do
              {
                v95 = *(int *)(v91 + 4 * v94);
                v96 = *(double *)(v93 + 8 * v94++);
                *(double *)(v22 + 8 * v95) = *(double *)(v22 + 8 * v95) - v96 * v88;
              }
              while ( v92 != v94 );
            }
            v7 = v90;
          }
          result = (unsigned int)++v86;
        }
        while ( *((_DWORD *)this + 9) > (int)v86 );
        goto LABEL_60;
      }
    }
    else
    {
      v22 = *((_QWORD *)a2 + 1);
      v23 = *(int **)a2;
      result = 0xFFFFFFFFLL;
      v21 = 1.0e100;
    }
    if ( v21 > v18 )
      goto LABEL_14;
    if ( v16 <= -2 )
      v9 = 0;
    if ( (_DWORD)result )
    {
LABEL_60:
      if ( (int)v7 > 0 )
      {
LABEL_61:
        v68 = 0;
        result = 0;
        do
        {
          if ( *(double *)(v22 + 8LL * v23[v68]) != 0.0 )
          {
            v69 = (int)result;
            result = (unsigned int)(result + 1);
            v23[v69] = v23[v68];
          }
          ++v68;
        }
        while ( (int)v7 > (int)v68 );
        goto LABEL_65;
      }
LABEL_68:
      *((_DWORD *)a2 + 4) = 0;
      goto LABEL_69;
    }
    v36 = *((_QWORD *)this + 141);
    if ( *((int *)this + 284) <= -2 )
      v36 = 0;
    v37 = 12LL * *((int *)this + 10) + v36;
    if ( v97 < v100 )
    {
      v38 = v97 + 1;
      v39 = v8 + 4 * (v97 - v38);
      do
      {
        *(_BYTE *)(v37 + *(int *)(v39 + 4 * v38)) = 1;
        v40 = v38++;
      }
      while ( *((_DWORD *)this + 9) > v40 );
      v14 = *((_QWORD *)this + 100);
      v13 = *((_QWORD *)this + 101);
      v6 = *((_QWORD *)this + 102);
      v5 = *((_DWORD *)this + 206);
    }
    v41 = *((int *)this + 199);
    if ( v5 <= -2 )
      v6 = 0;
    v102 = v13 + 4 * v41;
    v101 = v14 + 8 * v41;
    v99 = v6 + 4LL * *((int *)this + 16) + 4;
    if ( (int)v7 <= 0 )
    {
      v56 = *((int *)this + 8);
      if ( (int)v56 >= *((_DWORD *)this + 9) )
        goto LABEL_68;
    }
    else
    {
      v42 = v23;
      v43 = (__int64)&v23[(unsigned int)(v7 - 1) + 1];
      do
      {
        while ( 1 )
        {
          v44 = *v42;
          if ( !*(_BYTE *)(v37 + v44) )
          {
            v45 = (int)result;
            result = (unsigned int)(result + 1);
            v23[v45] = v44;
          }
          v46 = *(_DWORD *)(v9 + 4 * v44);
          if ( v46 )
          {
            v47 = *(double *)(v22 + 8 * v44);
            v48 = *(int *)(v99 + 4 * v44);
            v49 = v48 + v46;
            if ( (int)v48 < v49 )
              break;
          }
          if ( (int *)v43 == ++v42 )
            goto LABEL_47;
        }
        v50 = (unsigned int)(v49 - v48 - 1) + 1LL;
        v51 = v101 + 8 * v48;
        v52 = v102 + 4 * v48;
        v53 = 0;
        do
        {
          v54 = *(int *)(v52 + 4 * v53);
          v55 = *(double *)(v51 + 8 * v53++);
          *(double *)(v22 + 8 * v54) = *(double *)(v22 + 8 * v54) - v55 * v47;
        }
        while ( v50 != v53 );
        ++v42;
      }
      while ( (int *)v43 != v42 );
LABEL_47:
      v56 = *((int *)this + 8);
      if ( (int)v56 >= *((_DWORD *)this + 9) )
      {
LABEL_65:
        *((_DWORD *)a2 + 4) = result;
        if ( (_DWORD)result )
          return result;
LABEL_69:
        *((_BYTE *)a2 + 28) = 0;
        return result;
      }
    }
    do
    {
      v57 = *(int *)(v8 + 4 * v56);
      v58 = (double *)(v22 + 8 * v57);
      v59 = *v58 + *(double *)(v22 + 8 * v56);
      *v58 = 0.0;
      if ( fabs(v59) <= v11 )
      {
        *(_QWORD *)(v22 + 8 * v56) = 0;
      }
      else
      {
        *(double *)(v22 + 8 * v56) = v59;
        if ( !*(_BYTE *)(v37 + v56) )
        {
          v60 = (int)result;
          result = (unsigned int)(result + 1);
          v23[v60] = v56;
        }
        v61 = *(int *)(v99 + 4 * v56);
        if ( (int)v61 < (int)v61 + *(_DWORD *)(v9 + 4 * v56) )
        {
          v62 = (unsigned int)(*(_DWORD *)(v9 + 4 * v56) - 1) + 1LL;
          v63 = v101 + 8 * v61;
          v64 = v102 + 4 * v61;
          v65 = 0;
          do
          {
            v66 = *(int *)(v64 + 4 * v65);
            v67 = *(double *)(v63 + 8 * v65++);
            *(double *)(v22 + 8 * v66) = *(double *)(v22 + 8 * v66) - v67 * v59;
          }
          while ( v62 != v65 );
        }
      }
      *(_BYTE *)(v37 + v57) = 0;
      ++v56;
    }
    while ( *((_DWORD *)this + 9) > (int)v56 );
    goto LABEL_65;
  }
  return result;
}

