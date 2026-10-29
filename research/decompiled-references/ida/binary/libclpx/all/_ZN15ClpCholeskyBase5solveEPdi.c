void __fastcall ClpCholeskyBase::solve(ClpCholeskyBase *this, double *a2, int a3)
{
  int v3; // r13d
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r10
  int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r9
  int v12; // eax
  int v13; // r8d
  double v14; // xmm2_8
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // rcx
  double v23; // xmm1_8
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // r14
  __int64 v32; // r13
  int v33; // eax
  int v34; // ecx
  int v35; // esi
  double v36; // xmm1_8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  double v41; // xmm0_8
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 v47; // r14
  __int64 v48; // r13
  int v49; // eax
  int v50; // ecx
  int v51; // r8d
  double v52; // xmm1_8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  double v57; // xmm0_8
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // r10
  int v62; // eax
  int v63; // r9d
  double v64; // xmm2_8
  int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rbp
  __int64 v70; // r9
  __int64 v71; // r11
  __int64 v72; // r8
  double v73; // xmm1_8
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdx
  double v77; // xmm0_8
  int v78; // edi
  int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // [rsp+8h] [rbp-420h]
  _BYTE v85[1048]; // [rsp+10h] [rbp-418h] BYREF

  v3 = *((_DWORD *)this + 11);
  v4 = *((_QWORD *)this + 16);
  if ( v3 <= 0 )
  {
    v7 = (unsigned int)(v3 - 1);
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
        return;
LABEL_10:
      v8 = *((_DWORD *)this + 42);
      if ( v8 > 0 )
      {
        v9 = *((_QWORD *)this + 14);
        v10 = *((_QWORD *)this + 12);
        v11 = 0;
        do
        {
          v12 = *(_DWORD *)(v10 + v11);
          v13 = *(_DWORD *)(v10 + v11 + 4);
          v14 = *(double *)(v4 + 2 * v11);
          v15 = *(_DWORD *)(v9 + v11) - v12;
          if ( v12 < v13 )
          {
            v16 = v12;
            v17 = (unsigned int)(v13 - 1 - v12);
            v18 = v12 + 1LL;
            v19 = *((_QWORD *)this + 11);
            v20 = v18 + v17;
            v21 = *((_QWORD *)this + 13) + 4LL * v15;
            while ( 1 )
            {
              v22 = *(int *)(v21 + 4 * v16);
              v23 = *(double *)(v19 + 8 * v16);
              v16 = v18;
              *(double *)(v4 + 8 * v22) = *(double *)(v4 + 8 * v22) - v23 * v14;
              if ( v20 == v18 )
                break;
              ++v18;
            }
          }
          v11 += 4;
        }
        while ( 4LL * (unsigned int)(v8 - 1) + 4 != v11 );
      }
      if ( v8 < v3 )
      {
        ClpCholeskyDense::ClpCholeskyDense((ClpCholeskyDense *)v85);
        ClpCholeskyDense::reserveSpace((ClpCholeskyDense *)v85, this, *((_DWORD *)this + 11) - *((_DWORD *)this + 42));
        ClpCholeskyDense::solve((ClpCholeskyDense *)v85, (double *)(v4 + 8LL * *((int *)this + 42)));
        v78 = *((_DWORD *)this + 42);
        v79 = *((_DWORD *)this + 11) - 1;
        if ( v79 >= v78 )
        {
          v80 = v79;
          v81 = *((_QWORD *)this + 9);
          v82 = v79 - 1LL;
          v83 = v82 - (unsigned int)(v79 - v78);
          while ( 1 )
          {
            a2[*(int *)(v81 + 4 * v80)] = *(double *)(v4 + 8 * v80);
            v80 = v82;
            if ( v83 == v82 )
              break;
            --v82;
          }
        }
        ClpCholeskyDense::~ClpCholeskyDense((ClpCholeskyDense *)v85);
        v8 = *((_DWORD *)this + 42);
      }
      v26 = v8 - 1;
      if ( v8 - 1 >= 0 )
      {
        v27 = v26;
        v28 = *((_QWORD *)this + 14);
        v29 = v26 - 1LL;
        v30 = *((_QWORD *)this + 12);
        v31 = *((_QWORD *)this + 15);
        v32 = *((_QWORD *)this + 9);
        v84 = v29 - (unsigned int)v26;
        while ( 1 )
        {
          v33 = *(_DWORD *)(v30 + 4 * v27);
          v34 = *(_DWORD *)(v30 + 4 * v27 + 4);
          v35 = *(_DWORD *)(v28 + 4 * v27) - v33;
          v36 = *(double *)(v4 + 8 * v27) * *(double *)(v31 + 8 * v27);
          if ( v33 < v34 )
          {
            v37 = v33;
            v38 = (unsigned int)(v34 - 1 - v33);
            v39 = v33 + 1LL;
            v40 = v39 + v38;
            while ( 1 )
            {
              v41 = *(double *)(v4 + 8LL * *(int *)(*((_QWORD *)this + 13) + 4LL * v35 + 4 * v37))
                  * *(double *)(*((_QWORD *)this + 11) + 8 * v37);
              v37 = v39;
              v36 = v36 - v41;
              if ( v40 == v39 )
                break;
              ++v39;
            }
          }
          v42 = *(int *)(v32 + 4 * v27);
          *(double *)(v4 + 8 * v27) = v36;
          v27 = v29;
          a2[v42] = v36;
          if ( v84 == v29 )
            break;
          --v29;
        }
      }
      return;
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 9);
    v6 = 0;
    v7 = (unsigned int)(v3 - 1);
    do
    {
      *(double *)(v4 + 8 * v6) = a2[*(int *)(v5 + 4 * v6)];
      ++v6;
    }
    while ( v7 + 1 != v6 );
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
      {
        if ( a3 == 1 )
        {
          v59 = *((_QWORD *)this + 14);
          v60 = *((_QWORD *)this + 12);
          v61 = 0;
          do
          {
            v62 = *(_DWORD *)(v60 + v61);
            v63 = *(_DWORD *)(v60 + v61 + 4);
            v64 = *(double *)(v4 + 2 * v61);
            v65 = *(_DWORD *)(v59 + v61) - v62;
            if ( v62 < v63 )
            {
              v66 = v62;
              v67 = (unsigned int)(v63 - 1 - v62);
              v68 = v62 + 1LL;
              v69 = *((_QWORD *)this + 11);
              v70 = v68 + v67;
              v71 = *((_QWORD *)this + 13) + 4LL * v65;
              while ( 1 )
              {
                v72 = *(int *)(v71 + 4 * v66);
                v73 = *(double *)(v69 + 8 * v66);
                v66 = v68;
                *(double *)(v4 + 8 * v72) = *(double *)(v4 + 8 * v72) - v73 * v64;
                if ( v70 == v68 )
                  break;
                ++v68;
              }
            }
            v61 += 4;
          }
          while ( 4 * v6 != v61 );
          v74 = *((_QWORD *)this + 15);
          v75 = 0;
          do
          {
            v76 = *(int *)(v5 + 4 * v75);
            v77 = *(double *)(v4 + 8 * v75) * *(double *)(v74 + 8 * v75);
            ++v75;
            a2[v76] = v77;
          }
          while ( v6 != v75 );
        }
        return;
      }
      goto LABEL_10;
    }
  }
  if ( (int)v7 >= 0 )
  {
    v43 = (int)v7;
    v44 = *((_QWORD *)this + 14);
    v45 = *((_QWORD *)this + 12);
    v46 = (int)v7 - 1LL;
    v47 = *((_QWORD *)this + 15);
    v48 = *((_QWORD *)this + 9);
    while ( 1 )
    {
      v49 = *(_DWORD *)(v45 + 4 * v43);
      v50 = *(_DWORD *)(v45 + 4 * v43 + 4);
      v51 = *(_DWORD *)(v44 + 4 * v43) - v49;
      v52 = *(double *)(v4 + 8 * v43) * *(double *)(v47 + 8 * v43);
      if ( v49 < v50 )
      {
        v53 = v49;
        v54 = (unsigned int)(v50 - 1 - v49);
        v55 = v49 + 1LL;
        v56 = v55 + v54;
        while ( 1 )
        {
          v57 = *(double *)(v4 + 8LL * *(int *)(*((_QWORD *)this + 13) + 4LL * v51 + 4 * v53))
              * *(double *)(*((_QWORD *)this + 11) + 8 * v53);
          v53 = v55;
          v52 = v52 - v57;
          if ( v55 == v56 )
            break;
          ++v55;
        }
      }
      v58 = *(int *)(v48 + 4 * v43);
      *(double *)(v4 + 8 * v43) = v52;
      v43 = v46;
      a2[v58] = v52;
      if ( (int)v7 - 1LL - v7 == v46 )
        break;
      --v46;
    }
  }
}

