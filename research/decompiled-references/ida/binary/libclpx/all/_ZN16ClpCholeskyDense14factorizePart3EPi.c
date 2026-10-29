__int64 *__fastcall ClpCholeskyDense::factorizePart3(ClpCholeskyDense *this, int *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // r15
  int v8; // r8d
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // xmm0_8
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 *v16; // rsi
  double v17; // xmm6_8
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r8
  double v23; // xmm5_8
  double v24; // xmm4_8
  __int64 v25; // r12
  double *v26; // rdx
  double v27; // xmm1_8
  __int64 v28; // rax
  __int64 v29; // rcx
  double v30; // xmm0_8
  double v31; // xmm3_8
  int v32; // r8d
  int v33; // eax
  int v34; // edx
  __int64 v35; // rsi
  unsigned __int64 v36; // r10
  double v37; // xmm2_8
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  double v41; // xmm1_8
  double v42; // xmm0_8
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  unsigned int v47; // [rsp+10h] [rbp-88h]
  int v48; // [rsp+14h] [rbp-84h]
  __int64 v49; // [rsp+18h] [rbp-80h]
  double v50; // [rsp+28h] [rbp-70h]
  double v51; // [rsp+30h] [rbp-68h]
  int v52; // [rsp+38h] [rbp-60h]
  int v53; // [rsp+3Ch] [rbp-5Ch]
  __int64 *v55; // [rsp+58h] [rbp-40h]

  v3 = *((__int64 **)this + 15);
  v4 = *((__int64 **)this + 11);
  v55 = v3;
  v5 = *((int *)this + 11);
  v6 = v4 + 40000;
  *((_QWORD *)this + 15) = v4 + 40000;
  v7 = (__int64)&v4[v5 + 40000];
  v8 = v5;
  *((_QWORD *)this + 11) = v7;
  if ( (__int64 *)v7 != v4 )
  {
    v9 = (__int64)&v4[v5 + 40000];
    v10 = v4;
    do
    {
      v11 = *v10;
      v10 += 8;
      v9 += 64;
      *(_QWORD *)(v9 - 64) = v11;
      *(_QWORD *)(v9 - 56) = *(v10 - 7);
      *(_QWORD *)(v9 - 48) = *(v10 - 6);
      *(_QWORD *)(v9 - 40) = *(v10 - 5);
      *(_QWORD *)(v9 - 32) = *(v10 - 4);
      *(_QWORD *)(v9 - 24) = *(v10 - 3);
      *(_QWORD *)(v9 - 16) = *(v10 - 2);
      *(_QWORD *)(v9 - 8) = *(v10 - 1);
    }
    while ( v6 != v10 );
  }
  if ( v8 )
  {
    v12 = v55;
    if ( v6 != v55 )
    {
      if ( v8 >> 3 <= 0 )
      {
        v16 = v55;
      }
      else
      {
        v13 = v4 + 40000;
        do
        {
          v14 = *v12;
          v13 += 8;
          v12 += 8;
          *(v13 - 8) = v14;
          *(v13 - 7) = *(v12 - 7);
          *(v13 - 6) = *(v12 - 6);
          *(v13 - 5) = *(v12 - 5);
          *(v13 - 4) = *(v12 - 4);
          *(v13 - 3) = *(v12 - 3);
          *(v13 - 2) = *(v12 - 2);
          *(v13 - 1) = *(v12 - 1);
        }
        while ( &v4[8 * (unsigned int)((v8 >> 3) - 1) + 40008] != v13 );
        v15 = ((v8 >> 3) - 1 + 1LL) << 6;
        v16 = (__int64 *)((char *)v55 + v15);
        v6 = (__int64 *)((char *)v6 + v15);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_17;
        case 2:
          goto LABEL_16;
        case 3:
          goto LABEL_15;
        case 4:
          goto LABEL_14;
        case 5:
          goto LABEL_13;
        case 6:
          goto LABEL_12;
        case 7:
          v6[6] = v16[6];
LABEL_12:
          v6[5] = v16[5];
LABEL_13:
          v6[4] = v16[4];
LABEL_14:
          v6[3] = v16[3];
LABEL_15:
          v6[2] = v16[2];
LABEL_16:
          v6[1] = v16[1];
LABEL_17:
          *v6 = *v16;
          break;
        default:
          break;
      }
    }
  }
  v17 = *((double *)this + 64);
  v18 = v7 - 8;
  v48 = *((_DWORD *)this + 77);
  if ( v8 > 0 )
  {
    v19 = *((_QWORD *)this + 16);
    v20 = v18;
    v21 = 0;
    v22 = (unsigned int)(v8 - 1);
    v47 = -1;
    v23 = 0.0;
    v49 = 8 * v22;
    v24 = 1.797693134862316e308;
    v25 = 0;
    v53 = 0;
    while ( 1 )
    {
      v26 = (double *)(v18 + v21);
      v27 = *(double *)((char *)v4 + v21 + 320000);
      if ( (_DWORD)v25 )
      {
        v28 = v19;
        v29 = 8LL * (int)v22 - 8;
        do
        {
          v30 = *v26;
          v28 += 8;
          v26 = (double *)((char *)v26 + v29);
          v29 -= 8;
          v27 = v27 - v30 * v30 * *(double *)(v28 - 8);
        }
        while ( v19 + 8LL * v47 + 8 != v28 );
      }
      if ( v48 <= (int)v25 )
      {
        if ( v27 >= v17 )
        {
          v24 = fmin(v24, v27);
          v23 = fmax(v23, v27);
          *(double *)(v19 + v21) = v27;
          v31 = 1.0 / v27;
          goto LABEL_26;
        }
        *(_QWORD *)(v19 + v21) = 0x54B249AD2594C37DLL;
        ++*((_DWORD *)this + 63);
      }
      else
      {
        if ( -v17 >= v27 )
        {
          *(double *)(v19 + v21) = v27;
          v31 = 1.0 / v27;
          v24 = fmin(v24, -v27);
          v23 = fmax(v23, -v27);
LABEL_26:
          v32 = *((_DWORD *)this + 11);
          *(double *)((char *)v4 + v21 + 320000) = v31;
          v33 = v25 + 1;
          if ( v32 <= (int)v25 + 1 )
            goto LABEL_41;
          v34 = v32 - 2;
          LODWORD(v22) = v32 - 1;
          v35 = 8LL * v33;
          v36 = 8 * (v33 + (unsigned __int64)(unsigned int)(v34 - v25) + 1);
          do
          {
            v37 = *(double *)(v20 + v35);
            if ( (_DWORD)v25 )
            {
              v38 = 8LL * (int)v22 - 8;
              v39 = v19;
              v40 = v18;
              do
              {
                v41 = *(double *)(v40 + v21);
                v39 += 8;
                v42 = *(double *)(v40 + v35);
                v40 += v38;
                v38 -= 8;
                v37 = v37 - v42 * v41 * *(double *)(v39 - 8);
              }
              while ( v19 + 8LL * v47 + 8 != v39 );
            }
            *(double *)(v20 + v35) = v37 * v31;
            v35 += 8;
          }
          while ( v35 != v36 );
          v43 = v21 + 8;
          goto LABEL_33;
        }
        *(_QWORD *)(v19 + v21) = 0xD4B249AD2594C37DLL;
        ++*((_DWORD *)this + 63);
      }
      ++v53;
      a2[v25] = 2;
      v45 = *((_DWORD *)this + 11);
      *(_QWORD *)(*((_QWORD *)this + 15) + v21) = 0;
      if ( v45 <= (int)v25 + 1 )
        goto LABEL_41;
      v51 = v24;
      v52 = v45;
      v50 = v23;
      memset((void *)(v20 + v21 + 8), 0, 8LL * (unsigned int)(v45 - 2 - v25) + 8);
      v43 = v21 + 8;
      v23 = v50;
      v24 = v51;
      LODWORD(v22) = v52 - 1;
LABEL_33:
      ++v25;
      ++v47;
      v44 = v49 - 8 - v21;
      v21 = v43;
      v20 += v44;
    }
  }
  v23 = 0.0;
  v53 = 0;
  v24 = 1.797693134862316e308;
LABEL_41:
  *((double *)this + 57) = v23;
  *((double *)this + 58) = v24;
  *((_DWORD *)this + 63) = v53;
  *((_QWORD *)this + 11) = v4;
  *((_QWORD *)this + 15) = v55;
  return v55;
}

