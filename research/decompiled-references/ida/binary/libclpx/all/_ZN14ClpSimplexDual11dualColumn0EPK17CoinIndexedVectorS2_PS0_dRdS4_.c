__int64 __fastcall ClpSimplexDual::dualColumn0(
        ClpSimplexDual *this,
        const CoinIndexedVector *a2,
        const CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        double a5,
        double *a6,
        double *a7)
{
  __int64 v7; // rax
  double v8; // xmm9_8
  __int64 v9; // r15
  int v10; // r12d
  __int64 result; // rax
  double v12; // xmm7_8
  double v13; // xmm1_8
  int v14; // r10d
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r9
  int v22; // r8d
  unsigned __int8 v23; // cl
  double v24; // xmm3_8
  double v25; // xmm2_8
  double v26; // xmm4_8
  __int64 v27; // rcx
  double v28; // xmm5_8
  int i; // r9d
  int v30; // ebp
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // r14
  int v34; // r13d
  __int64 v35; // rsi
  __int64 v36; // r8
  int v37; // r10d
  _BYTE *v38; // rbx
  unsigned __int8 v39; // cl
  double v40; // xmm3_8
  double v41; // xmm2_8
  double v42; // xmm12_8
  double v43; // xmm13_8
  double v44; // xmm2_8
  double v45; // xmm2_8
  double v46; // xmm2_8
  double v47; // xmm3_8
  double v48; // xmm12_8
  __int64 v49; // rcx
  double v50; // xmm12_8
  double v51; // xmm2_8
  double v52; // xmm13_8
  __int64 v53; // rcx
  __int64 v54; // [rsp+0h] [rbp-70h]
  __int64 v55; // [rsp+8h] [rbp-68h]
  _OWORD v59[4]; // [rsp+28h] [rbp-48h]

  v55 = *((_QWORD *)a4 + 1);
  v7 = *(_QWORD *)a4;
  *a7 = 0.0;
  v54 = v7;
  if ( (*((_BYTE *)this + 728) & 8) != 0 )
  {
    v8 = *((double *)this + 109);
    v9 = *((_QWORD *)this + 33);
    v10 = 1;
    result = 0;
    v12 = -v8;
    v59[0] = xmmword_28D780;
    v13 = 1.0e31;
    while ( 1 )
    {
      if ( v10 == 1 )
      {
        v17 = *((_QWORD *)this + 148);
        v14 = *((_DWORD *)a2 + 4);
        v15 = *((_QWORD *)a2 + 1);
        v16 = *(_QWORD *)a2;
        v19 = *((int *)this + 27);
        v18 = v9 + v19;
        if ( v14 <= 0 )
          goto LABEL_52;
      }
      else
      {
        v14 = *((_DWORD *)a3 + 4);
        v15 = *((_QWORD *)a3 + 1);
        v16 = *(_QWORD *)a3;
        v17 = *((_QWORD *)this + 149);
        if ( v14 <= 0 )
          goto LABEL_15;
        v18 = v9;
        LODWORD(v19) = 0;
      }
      v20 = 0;
      do
      {
        v21 = *(int *)(v16 + 4 * v20);
        v22 = *(_DWORD *)(v16 + 4 * v20);
        v23 = *(_BYTE *)(v18 + v21) & 3;
        if ( v23 != 1 )
        {
          v24 = *((double *)&v59[-1] + v23);
          v25 = *(double *)(v15 + 8 * v20) * v24;
          if ( v25 > 0.0 )
          {
            v26 = *(double *)(v17 + 8 * v21) * v24;
            if ( v12 > v26 - v25 * 1.0e25 )
            {
              if ( v12 > v26 - v13 * v25 && v25 >= a5 )
                v13 = (v26 + v8) / v25;
              v27 = (int)result;
              result = (unsigned int)(result + 1);
              *(double *)(v55 + 8 * v27) = v25 * v24;
              *(_DWORD *)(v54 + 4 * v27) = v19 + v22;
            }
          }
        }
        ++v20;
      }
      while ( v14 > (int)v20 );
LABEL_15:
      if ( v10 == 2 )
        goto LABEL_16;
LABEL_52:
      ++v10;
    }
  }
  v28 = a5;
  v13 = 1.0e31;
  result = 0;
  for ( i = 1; ; ++i )
  {
    if ( i == 1 )
    {
      v33 = *((_QWORD *)this + 148);
      v34 = *((_DWORD *)this + 27);
      v30 = *((_DWORD *)a2 + 4);
      v31 = *((_QWORD *)a2 + 1);
      v32 = *(_QWORD *)a2;
      if ( v30 > 0 )
        goto LABEL_21;
      continue;
    }
    v30 = *((_DWORD *)a3 + 4);
    v31 = *((_QWORD *)a3 + 1);
    v32 = *(_QWORD *)a3;
    v33 = *((_QWORD *)this + 149);
    if ( v30 > 0 )
    {
      v34 = 0;
LABEL_21:
      v35 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v36 = *(int *)(v32 + 4 * v35);
          v37 = v36 + v34;
          v38 = (_BYTE *)((int)v36 + v34 + *((_QWORD *)this + 33));
          v39 = *v38 & 7;
          if ( v39 != 2 )
            break;
          v46 = *(double *)(v31 + 8 * v35);
          v47 = *(double *)(v33 + 8 * v36);
          v48 = *((double *)this + 109);
          if ( v47 - v46 * 1.0e25 <= v48 )
            goto LABEL_33;
          if ( v47 - v13 * v46 > v48 && -v46 >= a5 )
            v13 = (v47 - v48) / v46;
          v49 = (int)result;
          ++v35;
          result = (unsigned int)(result + 1);
          *(double *)(v55 + 8 * v49) = v46;
          *(_DWORD *)(v54 + 4 * v49) = v37;
          if ( v30 <= (int)v35 )
            goto LABEL_34;
        }
        if ( v39 <= 2u )
        {
          if ( v39 )
          {
            if ( v30 <= (int)++v35 )
              break;
          }
          else
          {
LABEL_26:
            v40 = *(double *)(v33 + 8 * v36);
            v41 = *((double *)this + 109);
            v42 = *(double *)(v31 + 8 * v35);
            v43 = fabs(v42);
            if ( v40 > v41 || -v41 > v40 || v43 > fmax(10.0 * a5, 0.00001) )
            {
              if ( v43 > v28 )
              {
                *((double *)this + 99) = v42;
                *((_DWORD *)this + 288) = v37;
                v28 = v43;
                *((double *)this + 100) = v40 / v42;
              }
              v44 = fabs(*(double *)(*((_QWORD *)this + 150) + 8LL * v37));
              if ( *((double *)this + 98) <= v44 + v44 )
                goto LABEL_33;
              *v38 |= 0x18u;
              ++*((_DWORD *)this + 334);
              v45 = *(double *)(*((_QWORD *)this + 150) + 8LL * v37);
              if ( v40 - v42 * 1.0e25 > *((double *)this + 109) )
              {
                *(double *)(*((_QWORD *)this + 126) + 8LL * v37) = v45;
                *(double *)(*((_QWORD *)this + 123) + 8LL * v37) = v45 - *((double *)this + 98);
                *(_BYTE *)(*((_QWORD *)this + 33) + v37) = *(_BYTE *)(*((_QWORD *)this + 33) + v37) & 0xF8 | 2;
                goto LABEL_33;
              }
              ++v35;
              *(double *)(*((_QWORD *)this + 123) + 8LL * v37) = v45;
              *(double *)(*((_QWORD *)this + 126) + 8LL * v37) = v45 + *((double *)this + 98);
              *(_BYTE *)(*((_QWORD *)this + 33) + v37) = *(_BYTE *)(*((_QWORD *)this + 33) + v37) & 0xF8 | 3;
              if ( v30 <= (int)v35 )
                break;
            }
            else
            {
              ++v35;
              *a7 = fmax(*a7, v43);
              if ( v30 <= (int)v35 )
                break;
            }
          }
        }
        else if ( v39 == 3 )
        {
          v50 = *(double *)(v31 + 8 * v35);
          v51 = *(double *)(v33 + 8 * v36);
          v52 = -*((double *)this + 109);
          if ( v52 <= v51 - v50 * 1.0e25 )
            goto LABEL_33;
          if ( v52 > v51 - v13 * v50 && v50 >= a5 )
            v13 = (*((double *)this + 109) + v51) / v50;
          v53 = (int)result;
          ++v35;
          result = (unsigned int)(result + 1);
          *(double *)(v55 + 8 * v53) = v50;
          *(_DWORD *)(v54 + 4 * v53) = v37;
          if ( v30 <= (int)v35 )
            break;
        }
        else
        {
          if ( v39 == 4 )
            goto LABEL_26;
LABEL_33:
          if ( v30 <= (int)++v35 )
            break;
        }
      }
    }
LABEL_34:
    if ( i == 2 )
      break;
  }
LABEL_16:
  *a6 = v13;
  return result;
}

