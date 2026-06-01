__int64 __fastcall slack_singleton_action::postsolve(slack_singleton_action *this, CoinPostsolveMatrix *a2)
{
  double v2; // xmm2_8
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm3_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  _BYTE *v12; // rdx
  int v13; // r10d
  double v14; // xmm1_8
  __int64 v15; // rax
  __int64 v16; // rbp
  _DWORD *v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // xmm3_8
  __int64 v22; // xmm0_8
  int v23; // r12d
  int v24; // r15d
  double *v25; // rcx
  double *v26; // r8
  double *v27; // rdi
  double *v28; // rsi
  double *v29; // r11
  double *v30; // r10
  double *v31; // rax
  double *v32; // r9
  double v33; // xmm3_8
  double v34; // xmm6_8
  _BYTE *v35; // rdx
  unsigned __int64 v36; // [rsp+8h] [rbp-D0h]
  __int64 v37; // [rsp+10h] [rbp-C8h]
  __int64 v38; // [rsp+18h] [rbp-C0h]
  __int64 v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+28h] [rbp-B0h]
  __int64 v41; // [rsp+30h] [rbp-A8h]
  __int64 v42; // [rsp+38h] [rbp-A0h]
  __int64 v43; // [rsp+40h] [rbp-98h]
  __int64 v44; // [rsp+48h] [rbp-90h]
  __int64 v45; // [rsp+50h] [rbp-88h]
  __int64 v46; // [rsp+58h] [rbp-80h]
  __int64 v47; // [rsp+60h] [rbp-78h]
  __int64 v48; // [rsp+68h] [rbp-70h]
  __int64 v49; // [rsp+70h] [rbp-68h]
  __int64 v50; // [rsp+78h] [rbp-60h]
  __int64 v51; // [rsp+80h] [rbp-58h]
  _BYTE *v52; // [rsp+88h] [rbp-50h]
  double v53; // [rsp+88h] [rbp-50h]
  double v54; // [rsp+90h] [rbp-48h]

  v37 = *((_QWORD *)a2 + 8);
  v36 = *((_QWORD *)this + 3);
  v38 = *((_QWORD *)a2 + 7);
  v39 = *((_QWORD *)a2 + 5);
  v40 = *((_QWORD *)a2 + 33);
  v41 = *((_QWORD *)a2 + 11);
  v42 = *((_QWORD *)a2 + 12);
  v43 = *((_QWORD *)a2 + 13);
  v44 = *((_QWORD *)a2 + 14);
  v45 = *((_QWORD *)a2 + 20);
  v46 = *((_QWORD *)a2 + 23);
  v47 = *((_QWORD *)a2 + 22);
  v2 = *((double *)a2 + 17);
  v48 = *((_QWORD *)a2 + 21);
  v49 = *((_QWORD *)a2 + 9);
  v50 = *((_QWORD *)a2 + 24);
  result = 48LL * *((int *)this + 4);
  v4 = v36 + result - 48;
  if ( v36 <= v4 )
  {
    v51 = *((_QWORD *)a2 + 6);
    while ( 1 )
    {
      v19 = *(int *)(v4 + 44);
      v20 = *(int *)(v4 + 40);
      v14 = *(double *)(v4 + 32);
      v21 = *(_QWORD *)v4;
      v22 = *(_QWORD *)(v4 + 8);
      v23 = *(_DWORD *)(v4 + 44);
      v24 = *(_DWORD *)(v4 + 40);
      v25 = (double *)(v43 + 8 * v19);
      *v25 = *(double *)(v4 + 16);
      v26 = (double *)(v44 + 8 * v19);
      v27 = (double *)(v41 + 8 * v20);
      *v26 = *(double *)(v4 + 24);
      *(_QWORD *)v27 = v21;
      v28 = (double *)(v42 + 8 * v20);
      *(_QWORD *)v28 = v22;
      v29 = (double *)(v47 + 8 * v19);
      v30 = (double *)(v48 + 8 * v19);
      v31 = (double *)(8 * v20 + v45);
      v32 = (double *)(v46 + 8 * v20);
      *v29 = *v31 * v14 + *v29;
      *v32 = *v32 - *v30 * v14;
      v6 = *v25;
      v33 = *v29;
      if ( *v25 - v2 > *v29 || (v6 = *v26, v33 > *v26 + v2) )
        v7 = v6 - v33;
      else
        v7 = 0.0;
      *v31 = v7 / v14 + *v31;
      *v29 = v7 + *v29;
      if ( *(double *)(v49 + 8 * v20) != 0.0 )
      {
        v34 = *v32 - *v30 * v14;
        if ( ((v2 <= fabs(*v31 - *v28) || v34 >= -0.000001) && (v2 <= fabs(*v31 - *v27) || v34 <= 0.000001)
           || fabs(*v30) > 0.000001)
          && (v35 = (_BYTE *)(*((_QWORD *)a2 + 25) + v19), (*v35 & 7) == 1) )
        {
          *v30 = *v32 / v14;
          *v32 = 0.0;
          if ( v50 )
          {
            if ( (*v35 & 7) == 1 )
              *(_BYTE *)(v20 + *((_QWORD *)a2 + 24)) = *(_BYTE *)(v20 + *((_QWORD *)a2 + 24)) & 0xF8 | 1;
            CoinPrePostsolveMatrix::setRowStatusUsingValue(a2, v23);
          }
        }
        else
        {
          *v32 = v34;
          if ( v50 )
            CoinPrePostsolveMatrix::setColumnStatusUsingValue(a2, v24);
        }
        goto LABEL_17;
      }
      v8 = *v28;
      v9 = *v31;
      if ( *v31 > *v28 + v2 || (v8 = *v27, *v27 - v2 > v9) )
        v10 = v8 - v9;
      else
        v10 = 0.0;
      *v31 = v9 + v10;
      v11 = v10 * v14 + *v29;
      *v29 = v11;
      if ( v50 )
        break;
LABEL_17:
      v15 = *((int *)a2 + 64);
      v16 = 4 * v20;
      v4 -= 48LL;
      v17 = (_DWORD *)(v40 + 4 * v15);
      v18 = *((_DWORD *)a2 + 64);
      *((_DWORD *)a2 + 64) = *v17;
      *(_DWORD *)(v38 + 4 * v15) = v23;
      *(double *)(v37 + 8 * v15) = v14;
      *v17 = *(_DWORD *)(v16 + v39);
      *(_DWORD *)(v16 + v39) = v18;
      result = v51;
      ++*(_DWORD *)(v51 + v16);
      if ( v36 > v4 )
        return result;
    }
    v52 = (_BYTE *)(v20 + *((_QWORD *)a2 + 24));
    v12 = (_BYTE *)(*((_QWORD *)a2 + 25) + v19);
    v13 = ((*v12 & 7) == 1) + ((*v52 & 7) == 1);
    if ( *v31 > *v27 + v2 && *v28 - v2 > *v31 )
    {
      *v52 = *v52 & 0xF8 | 1;
      CoinPrePostsolveMatrix::setRowStatusUsingValue(a2, v23);
      goto LABEL_17;
    }
    if ( v11 > *v25 + v2 && *v26 - v2 > v11 )
    {
      v54 = v14;
      v53 = v2;
    }
    else
    {
      v54 = v14;
      v53 = v2;
      if ( !v13 )
      {
        CoinPrePostsolveMatrix::setRowStatusUsingValue(a2, v23);
LABEL_16:
        CoinPrePostsolveMatrix::setColumnStatusUsingValue(a2, v24);
        v2 = v53;
        v14 = v54;
        goto LABEL_17;
      }
    }
    *v12 = *v12 & 0xF8 | 1;
    goto LABEL_16;
  }
  return result;
}

