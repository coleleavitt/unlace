__int64 __fastcall twoxtwo_action::postsolve(twoxtwo_action *this, CoinPostsolveMatrix *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  double v12; // xmm4_8
  __int64 v13; // rsi
  double v14; // xmm8_8
  double v15; // xmm0_8
  __int64 v16; // rsi
  int v17; // r10d
  int v18; // r8d
  double v19; // xmm2_8
  double v20; // xmm0_8
  int v21; // r9d
  double v22; // xmm13_8
  double *v23; // r9
  double *v24; // r10
  double *v25; // r11
  double *v26; // rbx
  double *v27; // rsi
  double v28; // xmm6_8
  double v29; // xmm3_8
  double v30; // xmm1_8
  double v31; // xmm1_8
  double v32; // xmm9_8
  double v33; // xmm5_8
  double v34; // xmm6_8
  double v35; // xmm10_8
  double v36; // xmm11_8
  double *v37; // r15
  _BYTE *v38; // r12
  double v39; // xmm0_8
  double v40; // xmm2_8
  double v41; // xmm3_8
  double v42; // xmm1_8
  double v43; // xmm3_8
  _BYTE *v44; // rdi
  char v45; // al
  double v46; // xmm0_8
  double v47; // xmm12_8
  double v48; // xmm15_8
  bool v49; // r13
  double v50; // xmm0_8
  __int64 v51; // [rsp+0h] [rbp-C0h]
  __int64 v53; // [rsp+10h] [rbp-B0h]
  __int64 v54; // [rsp+18h] [rbp-A8h]
  __int64 v55; // [rsp+20h] [rbp-A0h]
  __int64 v56; // [rsp+28h] [rbp-98h]
  double v58; // [rsp+38h] [rbp-88h]
  __int64 v59; // [rsp+40h] [rbp-80h]
  __int64 v60; // [rsp+48h] [rbp-78h]
  __int64 v61; // [rsp+50h] [rbp-70h]
  __int64 v62; // [rsp+58h] [rbp-68h]
  __int64 v63; // [rsp+60h] [rbp-60h]
  double v64; // [rsp+68h] [rbp-58h]
  __int64 v65; // [rsp+70h] [rbp-50h]
  double v66; // [rsp+78h] [rbp-48h]
  __int64 v67; // [rsp+80h] [rbp-40h]
  char v68; // [rsp+8Eh] [rbp-32h]
  bool v69; // [rsp+8Fh] [rbp-31h]

  v2 = *((_QWORD *)a2 + 7);
  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 33);
  v53 = *((_QWORD *)a2 + 5);
  v59 = *((_QWORD *)a2 + 6);
  v54 = *((_QWORD *)a2 + 9);
  v60 = *((_QWORD *)a2 + 11);
  v61 = *((_QWORD *)a2 + 12);
  v55 = *((_QWORD *)a2 + 13);
  v56 = *((_QWORD *)a2 + 14);
  v62 = *((_QWORD *)a2 + 20);
  v65 = *((_QWORD *)a2 + 23);
  v67 = *((_QWORD *)a2 + 22);
  v63 = *((_QWORD *)a2 + 21);
  result = *((unsigned int *)this + 4);
  v66 = *((double *)a2 + 17);
  v64 = *((double *)a2 + 19);
  if ( (int)result > 0 )
  {
    v51 = 0;
    do
    {
      v6 = *((_QWORD *)this + 3) + (v51 << 6);
      v7 = *(int *)(v6 + 52);
      v8 = *(int *)(v6 + 48);
      v9 = *(int *)(v6 + 56);
      v10 = *(int *)(v53 + 4 * v7);
      v11 = *(int *)(v2 + 4 * v10);
      v12 = *(double *)(v3 + 8 * v10);
      v13 = *(int *)(v4 + 4 * v10);
      v14 = *(double *)(v3 + 8 * v13);
      if ( (_DWORD)v11 == (_DWORD)v8 )
      {
        v15 = v12;
        v11 = *(int *)(v2 + 4 * v13);
        v12 = *(double *)(v3 + 8 * v13);
        v14 = v15;
      }
      v16 = *(int *)(v53 + 4 * v9);
      v17 = *(_DWORD *)(v59 + 4 * v9);
      if ( v17 <= 0 )
      {
        v19 = 0.0;
        v20 = 0.0;
      }
      else
      {
        v18 = 0;
        v19 = 0.0;
        v20 = 0.0;
        do
        {
          while ( 1 )
          {
            v21 = *(_DWORD *)(v2 + 4 * v16);
            if ( v21 != (_DWORD)v11 )
              break;
            ++v18;
            v20 = *(double *)(v3 + 8 * v16);
            v16 = *(int *)(v4 + 4 * v16);
            if ( v17 == v18 )
              goto LABEL_12;
          }
          if ( v21 == (_DWORD)v8 )
            v19 = *(double *)(v3 + 8 * v16);
          ++v18;
          v16 = *(int *)(v4 + 4 * v16);
        }
        while ( v17 != v18 );
      }
LABEL_12:
      v22 = v12;
      v23 = (double *)(8 * v7 + v60);
      *(_BYTE *)(v8 + *((_QWORD *)a2 + 25)) = *(_BYTE *)(v8 + *((_QWORD *)a2 + 25)) & 0xF8 | 1;
      v24 = (double *)(v55 + 8 * v8);
      v25 = (double *)(v56 + 8 * v8);
      *v24 = *(double *)v6;
      v26 = (double *)(8 * v7 + v61);
      v27 = (double *)(8 * v7 + v54);
      *v25 = *(double *)(v6 + 8);
      *v23 = *(double *)(v6 + 16);
      *v26 = *(double *)(v6 + 24);
      v28 = *v27;
      *v27 = *(double *)(v6 + 32);
      v58 = v28;
      *(_QWORD *)(v54 + 8 * v9) = *(_QWORD *)(v6 + 40);
      v29 = *(double *)(v56 + 8 * v11);
      v30 = *(double *)(v55 + 8 * v11);
      if ( v30 > -1.0e30 )
      {
        v20 = -v20;
        v29 = -v30;
        v22 = -v12;
      }
      v31 = *v25;
      if ( *v24 <= -1.0e30 )
      {
        v32 = v14;
        v68 = 0;
      }
      else
      {
        v68 = 1;
        v19 = -v19;
        v32 = -v14;
        v31 = -*v24;
      }
      v33 = *v23;
      v34 = *v26;
      v35 = *v27;
      v36 = *(double *)(v62 + 8 * v9);
      v37 = (double *)(v62 + 8 * v7);
      v38 = (_BYTE *)(v7 + *((_QWORD *)a2 + 24));
      if ( *v23 > -1.0e30 )
      {
        v40 = v19 * v36;
        v39 = v20 * v36;
        v47 = v66 + v31;
        v48 = v66 + v29;
        if ( v32 * v33 + v40 > v66 + v31 )
        {
          if ( v34 >= 1.0e30 || v32 * v34 + v40 > v47 )
            goto LABEL_19;
          v69 = v34 * v22 + v39 <= v48;
          goto LABEL_38;
        }
        v49 = v33 * v22 + v39 <= v48;
        if ( v34 >= 1.0e30 )
          goto LABEL_29;
      }
      else
      {
        if ( v34 >= 1.0e30 )
        {
          v39 = v20 * v36;
          v40 = v19 * v36;
LABEL_19:
          v41 = (v29 - v39) / v22;
          v42 = (v31 - v40) / v32;
          if ( v35 <= 0.0 )
            v43 = fmin(v41, v42);
          else
            v43 = fmax(v41, v42);
          *v37 = v43;
          if ( (*v38 & 7) == 1 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a2 + 25) + v11) & 7) != 1 )
              *(double *)(v63 + 8 * v11) = (*v27 - v58) / v12 * v64;
          }
          else
          {
            *v38 = *v38 & 0xF8 | 1;
            *(_QWORD *)(v65 + 8 * v7) = 0;
            v44 = (_BYTE *)(v8 + *((_QWORD *)a2 + 25));
            v45 = *v44 & 0xF8;
            if ( v68 )
            {
              *v44 = v45 | 3;
              v46 = *v24;
            }
            else
            {
              *v44 = v45 | 2;
              v46 = *v25;
            }
            *(double *)(v67 + 8 * v8) = v46;
            *(double *)(v63 + 8 * v8) = (*v27 - v58) / v14 * v64;
          }
          goto LABEL_25;
        }
        v49 = 0;
        v39 = v20 * v36;
        v40 = v19 * v36;
        v48 = v66 + v29;
        v47 = v66 + v31;
      }
      if ( v32 * v34 + v40 > v47 )
      {
LABEL_29:
        if ( !v49 || v35 < 0.0 )
          goto LABEL_19;
LABEL_31:
        *v38 = *v38 & 0xF8 | 3;
        v50 = *v23;
        goto LABEL_32;
      }
      v69 = v34 * v22 + v39 <= v48;
      if ( v49 && v35 >= 0.0 )
        goto LABEL_31;
LABEL_38:
      if ( !v69 || v35 > 0.0 )
        goto LABEL_19;
      *v38 = *v38 & 0xF8 | 2;
      v50 = *v26;
LABEL_32:
      *v37 = v50;
      *(double *)(v65 + 8 * v7) = v64 * *v27 - v12 * *(double *)(v63 + 8 * v11);
LABEL_25:
      result = (unsigned int)++v51;
    }
    while ( *((_DWORD *)this + 4) > (int)v51 );
  }
  return result;
}

