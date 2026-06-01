__int64 __fastcall ClpCholeskyBase::updateDense(ClpCholeskyBase *this, double *a2, int *a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  int v5; // r14d
  int v6; // r11d
  __int64 v7; // r15
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // r10d
  double v13; // xmm2_8
  __int64 v14; // rdx
  int v15; // eax
  double v16; // xmm3_8
  double v17; // xmm4_8
  int v18; // r11d
  int v19; // r9d
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rbx
  unsigned int v23; // r8d
  double v24; // xmm9_8
  __int64 v25; // r11
  __int64 v26; // rsi
  double v27; // xmm5_8
  double v28; // xmm6_8
  double v29; // xmm0_8
  double v30; // xmm7_8
  int v31; // r9d
  double v32; // xmm8_8
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // r10
  double *v36; // rcx
  double v37; // xmm0_8
  double v38; // xmm1_8
  __int64 v39; // r11
  unsigned int v40; // r8d
  __int64 v41; // rbx
  __int64 v42; // rcx
  double v43; // xmm4_8
  double v44; // xmm5_8
  int v45; // r9d
  __int64 v46; // rsi
  __int64 v47; // rbp
  __int64 v48; // r10
  double v49; // xmm1_8
  int v50; // ecx
  double v51; // xmm0_8
  __int64 v52; // rbx
  unsigned int i; // r8d
  __int64 v54; // rcx
  double v55; // xmm3_8
  int v56; // r9d
  __int64 v57; // rsi
  __int64 v58; // rbp
  __int64 v59; // r10
  int v60; // ecx
  double v61; // xmm1_8
  __int64 v62; // rbp
  unsigned int v63; // esi
  __int64 v64; // rbx
  __int64 v65; // r11
  __int64 v66; // r8
  double v67; // xmm5_8
  double v68; // xmm6_8
  int v69; // r9d
  double v70; // xmm7_8
  __int64 v71; // r8
  __int64 v72; // r12
  __int64 v73; // r10
  double *v74; // rcx
  double v75; // xmm0_8
  double v76; // xmm1_8
  __int64 v79; // [rsp+10h] [rbp-40h]
  int v80; // [rsp+18h] [rbp-38h]
  int v81; // [rsp+1Ch] [rbp-34h]

  result = *((unsigned int *)this + 42);
  v80 = *((_DWORD *)this + 42);
  if ( (int)result > 0 )
  {
    v4 = *((_QWORD *)this + 12);
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        result = (__int64)a3;
        v6 = v5 + 1;
        v7 = v5;
        v8 = a3[v7];
        v9 = *(_DWORD *)(v4 + v7 * 4 + 4);
        if ( v8 < v9 )
          break;
LABEL_14:
        v5 = v6;
        if ( v80 <= v6 )
          return result;
      }
      v10 = v5;
      v11 = *((_QWORD *)this + 13);
      v12 = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * v5) - *(_DWORD *)(v4 + 4LL * v5);
      v79 = *((_QWORD *)this + 15);
      v13 = a2[v10];
      v14 = *((_QWORD *)this + 11);
      v15 = *(_DWORD *)(*((_QWORD *)this + 19) + 4LL * v5);
      if ( v15 <= 1 )
      {
        v52 = v11 + 4LL * v12;
        result = v8 + 1LL;
        for ( i = v9 - v8 - 2; ; --i )
        {
          v54 = *(int *)(v52 + 4 * result - 4);
          v55 = *(double *)(v14 + 8 * result - 8) * v13;
          v56 = *(_DWORD *)(v4 + 4 * v54) + ~*(_DWORD *)(v52 + 4 * result - 4);
          *(double *)(v79 + 8 * v54) = *(double *)(v79 + 8 * v54) - *(double *)(v14 + 8 * result - 8) * v55;
          if ( i == -1 )
            break;
          v57 = result + 1;
          v58 = result + 1;
          v59 = result + 1 + i;
          while ( 1 )
          {
            v60 = *(_DWORD *)(v52 + 4 * result);
            v61 = *(double *)(v14 + 8 * result);
            result = v57;
            *(double *)(v14 + 8LL * (v56 + v60)) = *(double *)(v14 + 8LL * (v56 + v60)) - v61 * v55;
            if ( v57 == v59 )
              break;
            ++v57;
          }
          result = v58;
        }
        goto LABEL_14;
      }
      v16 = a2[v10 + 1];
      if ( v15 == 2 )
      {
        v39 = v11 + 4LL * v12;
        result = v8 + 1LL;
        v40 = v9 - v8 - 2;
        v41 = v14 + 8LL * (a3[v7 + 1] - v8);
        while ( 1 )
        {
          v42 = *(int *)(v39 + 4 * result - 4);
          v43 = *(double *)(v14 + 8 * result - 8) * v13;
          v44 = *(double *)(v41 + 8 * result - 8) * v16;
          v45 = *(_DWORD *)(v4 + 4 * v42) + ~*(_DWORD *)(v39 + 4 * result - 4);
          *(double *)(v79 + 8 * v42) = *(double *)(v79 + 8 * v42)
                                     - (*(double *)(v41 + 8 * result - 8) * v44
                                      + *(double *)(v14 + 8 * result - 8) * v43);
          if ( v40 == -1 )
            break;
          v46 = result + 1;
          v47 = result + 1;
          v48 = result + 1 + v40;
          while ( 1 )
          {
            v49 = *(double *)(v14 + 8 * result);
            v50 = *(_DWORD *)(v39 + 4 * result);
            v51 = *(double *)(v41 + 8 * result);
            result = v46;
            *(double *)(v14 + 8LL * (v45 + v50)) = *(double *)(v14 + 8LL * (v45 + v50)) - (v51 * v44 + v49 * v43);
            if ( v48 == v46 )
              break;
            ++v46;
          }
          --v40;
          result = v47;
        }
        v6 = v5 + 2;
        goto LABEL_14;
      }
      v17 = a2[v10 + 2];
      v18 = a3[v7 + 1] - v8;
      v19 = a3[v7 + 2] - v8;
      if ( v15 == 3 )
      {
        v62 = v11 + 4LL * v12;
        v63 = v9 - v8 - 2;
        v64 = v14 + 8LL * v18;
        v65 = v14 + 8LL * v19;
        for ( result = v8 + 1LL; ; result = v72 )
        {
          v66 = *(int *)(v62 + 4 * result - 4);
          v67 = *(double *)(v14 + 8 * result - 8) * v13;
          v68 = *(double *)(v64 + 8 * result - 8) * v16;
          v69 = *(_DWORD *)(v4 + 4 * v66) + ~*(_DWORD *)(v62 + 4 * result - 4);
          v70 = *(double *)(v65 + 8 * result - 8) * v17;
          *(double *)(v79 + 8 * v66) = *(double *)(v79 + 8 * v66)
                                     - *(double *)(v14 + 8 * result - 8) * v67
                                     - *(double *)(v64 + 8 * result - 8) * v68
                                     - *(double *)(v65 + 8 * result - 8) * v70;
          if ( v63 == -1 )
            break;
          v71 = result + 1;
          v72 = result + 1;
          v73 = result + 1 + v63;
          while ( 1 )
          {
            v74 = (double *)(v14 + 8LL * (v69 + *(_DWORD *)(v62 + 4 * result)));
            v75 = *(double *)(v64 + 8 * result) * v68 + *(double *)(v14 + 8 * result) * v67;
            v76 = *(double *)(v65 + 8 * result);
            result = v71;
            *v74 = *v74 - (v75 + v76 * v70);
            if ( v73 == v71 )
              break;
            ++v71;
          }
          --v63;
        }
        v5 += 3;
        if ( v80 <= v5 )
          return result;
      }
      else
      {
        v20 = v14 + 8LL * v18;
        v21 = v11 + 4LL * v12;
        v22 = v14 + 8LL * v19;
        v23 = v9 - v8 - 2;
        v24 = a2[v10 + 3];
        v81 = v5;
        result = v8 + 1LL;
        v25 = v14 + 8LL * (a3[v7 + 3] - v8);
        while ( 1 )
        {
          v26 = *(int *)(v21 + 4 * result - 4);
          v27 = *(double *)(v14 + 8 * result - 8) * v13;
          v28 = *(double *)(v20 + 8 * result - 8) * v16;
          v29 = *(double *)(v25 + 8 * result - 8);
          v30 = *(double *)(v22 + 8 * result - 8) * v17;
          v31 = *(_DWORD *)(v4 + 4 * v26) + ~*(_DWORD *)(v21 + 4 * result - 4);
          v32 = v24 * v29;
          *(double *)(v79 + 8 * v26) = *(double *)(v79 + 8 * v26)
                                     - (v29 * (v24 * v29)
                                      + *(double *)(v22 + 8 * result - 8) * v30
                                      + *(double *)(v20 + 8 * result - 8) * v28
                                      + *(double *)(v14 + 8 * result - 8) * v27);
          if ( v23 == -1 )
            break;
          v33 = result + 1;
          v34 = result + 1;
          v35 = result + 1 + v23;
          while ( 1 )
          {
            v36 = (double *)(v14 + 8LL * (v31 + *(_DWORD *)(v21 + 4 * result)));
            v37 = *(double *)(v20 + 8 * result) * v28
                + *(double *)(v14 + 8 * result) * v27
                + *(double *)(v22 + 8 * result) * v30;
            v38 = *(double *)(v25 + 8 * result);
            result = v33;
            *v36 = *v36 - (v37 + v38 * v32);
            if ( v35 == v33 )
              break;
            ++v33;
          }
          --v23;
          result = v34;
        }
        v5 = v81 + 4;
        if ( v80 <= v81 + 4 )
          return result;
      }
    }
  }
  return result;
}

