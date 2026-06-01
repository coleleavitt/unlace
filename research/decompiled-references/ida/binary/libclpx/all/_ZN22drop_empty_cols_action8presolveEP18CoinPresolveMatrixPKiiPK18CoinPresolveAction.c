__int64 __fastcall drop_empty_cols_action::presolve(
        drop_empty_cols_action *this,
        CoinPresolveMatrix *a2,
        const int *a3,
        __int64 a4,
        const CoinPresolveAction *a5)
{
  int v5; // r14d
  __int64 v6; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  _DWORD *v10; // r14
  int v11; // r9d
  unsigned int v12; // edx
  int *v13; // rsi
  __int64 v14; // r10
  __int64 v15; // rax
  char v16; // r8
  unsigned __int64 v17; // rdi
  double v18; // xmm0_8
  __int64 v19; // rcx
  int v20; // r13d
  unsigned __int64 *v21; // rbx
  double *v22; // r12
  __m128d v23; // xmm0
  unsigned __int64 v24; // xmm2_8
  __m128d v25; // xmm3
  __m128d v26; // xmm2
  __m128d v27; // xmm3
  double *v28; // rdx
  double v29; // xmm0_8
  CoinMessageHandler *v30; // rbx
  CoinMessageHandler *v31; // rax
  __int64 v32; // rax
  CoinMessageHandler *v33; // rax
  CoinMessageHandler *v34; // rax
  CoinMessageHandler *v35; // rax
  CoinMessageHandler *v36; // rax
  double v37; // xmm0_8
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rcx
  _DWORD *v42; // rsi
  __int64 v43; // xmm0_8
  __int64 v44; // r12
  __int64 v45; // rdx
  char *v46; // rcx
  int v47; // edi
  _DWORD *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rdx
  void *v51; // rax
  __int64 result; // rax
  _DWORD *v53; // rax
  __int64 v54; // rdx
  CoinMessageHandler *v55; // rbx
  CoinMessageHandler *v56; // rax
  __int64 v57; // rax
  __int64 v58; // [rsp+8h] [rbp-D0h]
  double v59; // [rsp+10h] [rbp-C8h]
  char *v60; // [rsp+18h] [rbp-C0h]
  __int64 v61; // [rsp+20h] [rbp-B8h]
  int v62; // [rsp+28h] [rbp-B0h]
  int v63; // [rsp+2Ch] [rbp-ACh]
  __int64 v64; // [rsp+30h] [rbp-A8h]
  __int64 v65; // [rsp+38h] [rbp-A0h]
  __int64 v66; // [rsp+40h] [rbp-98h]
  __int64 v67; // [rsp+48h] [rbp-90h]
  double v68; // [rsp+50h] [rbp-88h]
  CoinMessageHandler *v69; // [rsp+50h] [rbp-88h]
  _DWORD *v71; // [rsp+60h] [rbp-78h]
  __int64 v72; // [rsp+68h] [rbp-70h]
  __int64 v73; // [rsp+70h] [rbp-68h]
  __int64 v74; // [rsp+78h] [rbp-60h]
  _BYTE v75[88]; // [rsp+80h] [rbp-58h] BYREF

  v5 = *(_DWORD *)this;
  v63 = (int)a3;
  v71 = *((_DWORD **)this + 5);
  v68 = *((double *)this + 18);
  v62 = *(_DWORD *)this;
  v6 = *((_QWORD *)this + 39);
  v59 = *((double *)this + 19);
  v61 = *((_QWORD *)this + 6);
  v60 = *((char **)this + 32);
  v65 = *((_QWORD *)this + 11);
  v66 = *((_QWORD *)this + 12);
  v58 = *((_QWORD *)this + 9);
  v73 = *((_QWORD *)this + 15);
  v74 = *((_QWORD *)this + 20);
  v67 = *((_QWORD *)this + 24);
  if ( (unsigned __int64)(int)a3 > 0x333333333333333LL
    || (v8 = 40LL * (int)a3, v64 = operator new[](v8), v9 = v5 + 1, v9 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v72 = v9;
  v10 = (_DWORD *)operator new[](4 * v9);
  if ( v62 )
  {
    v53 = v10;
    if ( v62 / 8 > 0 )
    {
      v54 = (unsigned int)(v62 / 8 - 1);
      do
      {
        *(_OWORD *)v53 = 0;
        v53 += 8;
        *((_OWORD *)v53 - 1) = 0;
      }
      while ( &v10[8 * v54 + 8] != v53 );
      v53 = &v10[8 * (int)v54 + 8];
    }
    switch ( v62 % 8 )
    {
      case 1:
        goto LABEL_62;
      case 2:
        goto LABEL_61;
      case 3:
        goto LABEL_60;
      case 4:
        goto LABEL_59;
      case 5:
        goto LABEL_58;
      case 6:
        goto LABEL_57;
      case 7:
        v53[6] = 0;
LABEL_57:
        v53[5] = 0;
LABEL_58:
        v53[4] = 0;
LABEL_59:
        v53[3] = 0;
LABEL_60:
        v53[2] = 0;
LABEL_61:
        v53[1] = 0;
LABEL_62:
        *v53 = 0;
        break;
      default:
        break;
    }
  }
  v12 = v63 - 1;
  if ( v63 - 1 >= 0 )
  {
    v13 = (int *)((char *)a2 + 4 * (int)v12);
    v11 = *((_DWORD *)this + 109) & 0x4000;
    v14 = *((_QWORD *)this + 45);
    v15 = v64 + v8 - 40;
    v16 = *((_BYTE *)this + 440);
    v17 = v8 - 80 - 40LL * v12 + v64;
    do
    {
      v19 = *v13;
      v20 = *v13;
      if ( v16 && (*(_BYTE *)(v14 + v19) & 2) != 0 )
        goto LABEL_11;
      v10[v19] = -1;
      v21 = (unsigned __int64 *)(v65 + 8 * v19);
      v22 = (double *)(v66 + 8 * v19);
      v23 = (__m128d)*v21;
      if ( *(_BYTE *)(v6 + v19) )
      {
        v23.m128d_f64[0] = v23.m128d_f64[0] - 0.000000001;
        v24 = *(_QWORD *)&v23.m128d_f64[0];
        if ( fabs(v23.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v25.m128d_f64[0] = (double)(int)v23.m128d_f64[0];
          v24 = COERCE_UNSIGNED_INT64(
                  COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v23, v25).m128d_f64[0] & 0x3FF0000000000000LL)
                + v25.m128d_f64[0])
              | *(_QWORD *)&v23.m128d_f64[0] & 0x8000000000000000LL;
        }
        *v21 = v24;
        v26.m128d_f64[0] = *v22 + 0.000000001;
        if ( fabs(v26.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v27 = 0;
          v27.m128d_f64[0] = (double)(int)v26.m128d_f64[0];
          *(_QWORD *)&v26.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v27.m128d_f64[0]
                                         - COERCE_DOUBLE(
                                             COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v27, v26).m128d_f64[0]))
                                           & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v26.m128d_f64[0] & 0x8000000000000000LL;
        }
        *v22 = v26.m128d_f64[0];
        *(_QWORD *)&v23.m128d_f64[0] = *v21;
        if ( !v11 && v23.m128d_f64[0] > v26.m128d_f64[0] )
        {
          v33 = *((CoinMessageHandler **)this + 26);
          *((_DWORD *)this + 86) |= 1u;
          v69 = v33;
          CoinMessages::CoinMessages((CoinMessages *)v75, (drop_empty_cols_action *)((char *)this + 224));
          v34 = (CoinMessageHandler *)CoinMessageHandler::message(v69, 15, (const CoinMessages *)v75);
          v35 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v34);
          v36 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v35);
          v37 = *v22;
          v38 = CoinMessageHandler::operator<<(v36);
          CoinMessageHandler::operator<<(v38, 0, v37);
          CoinMessages::~CoinMessages((CoinMessages *)v75);
          break;
        }
      }
      *(double *)v15 = v23.m128d_f64[0];
      v28 = (double *)(v58 + 8 * v19);
      *(_DWORD *)(v15 + 32) = v20;
      *(double *)(v15 + 8) = *v22;
      *(double *)(v15 + 16) = *v28;
      v29 = *v28;
      if ( v68 > fabs(*v28) )
      {
        *v28 = 0.0;
      }
      else if ( v29 != 0.0 )
      {
        if ( v29 * v59 <= 0.0 )
        {
          v18 = *v22;
          if ( *v22 >= 1.797693134862316e308 )
          {
            v30 = *((CoinMessageHandler **)this + 26);
            CoinMessages::CoinMessages((CoinMessages *)v75, (drop_empty_cols_action *)((char *)this + 224));
            v31 = (CoinMessageHandler *)CoinMessageHandler::message(v30, 17, (const CoinMessages *)v75);
            v32 = CoinMessageHandler::operator<<(v31);
            CoinMessageHandler::operator<<(v32, 0, v18);
LABEL_28:
            CoinMessages::~CoinMessages((CoinMessages *)v75);
            *((_DWORD *)this + 86) |= 2u;
            goto LABEL_47;
          }
        }
        else
        {
          v18 = *(double *)v21;
          if ( *(double *)v21 <= -1.797693134862316e308 )
          {
            v55 = *((CoinMessageHandler **)this + 26);
            CoinMessages::CoinMessages((CoinMessages *)v75, (drop_empty_cols_action *)((char *)this + 224));
            v56 = (CoinMessageHandler *)CoinMessageHandler::message(v55, 18, (const CoinMessages *)v75);
            v57 = CoinMessageHandler::operator<<(v56);
            CoinMessageHandler::operator<<(v57, 0, v18);
            goto LABEL_28;
          }
        }
LABEL_25:
        *(double *)(v15 + 24) = v18;
        goto LABEL_10;
      }
      v18 = *(double *)v21;
      if ( *(double *)v21 > -1.797693134862316e308 )
        goto LABEL_25;
      v18 = *v22;
      if ( *v22 < 1.797693134862316e308 )
        goto LABEL_25;
      v18 = 0.0;
      *(_QWORD *)(v15 + 24) = 0;
LABEL_10:
      *((double *)this + 34) = v18 * *v28 + *((double *)this + 34);
LABEL_11:
      v15 -= 40;
      --v13;
    }
    while ( v17 != v15 );
  }
  v39 = *((_DWORD *)this + 86);
  if ( !v39 )
  {
    if ( v62 <= 0 )
    {
      *v71 = v71[v72 - 1];
      v10[v72 - 1] = 0;
      v44 = operator new[](8u);
      if ( v62 < 0 )
      {
        v51 = v60;
        if ( v60 )
LABEL_45:
          operator delete[](v51);
        goto LABEL_46;
      }
    }
    else
    {
      v40 = 0;
      do
      {
        v41 = v39;
        v42 = &v71[v41];
        if ( !v10[v40] )
        {
          v43 = *(_QWORD *)(v65 + 8 * v40);
          *v42 = v71[v40];
          *(_DWORD *)(v61 + 4LL * v39) = *(_DWORD *)(v61 + 4 * v40);
          *(_QWORD *)(v65 + 8LL * v39) = v43;
          *(_QWORD *)(v66 + 8LL * v39) = *(_QWORD *)(v66 + 8 * v40);
          *(_QWORD *)(v58 + 8LL * v39) = *(_QWORD *)(v58 + 8 * v40);
          if ( v74 )
          {
            *(_QWORD *)(v74 + 8LL * v39) = *(_QWORD *)(v74 + 8 * v40);
            *(_BYTE *)(v67 + v39) = *(_BYTE *)(v67 + v40);
          }
          *(_BYTE *)(v6 + v39) = *(_BYTE *)(v6 + v40);
          *(_DWORD *)(v73 + 4LL * v39) = *(_DWORD *)(v73 + 4 * v40);
          v42 = &v71[v41 + 1];
          v10[v40] = v39++;
        }
        ++v40;
      }
      while ( (unsigned int)(v62 - 1) + 1LL != v40 );
      *v42 = v71[v72 - 1];
      v10[v72 - 1] = v39;
      v44 = operator new[](8LL * (v39 + 1));
    }
    v45 = v62;
    do
    {
      while ( 1 )
      {
        v46 = &v60[8 * v45];
        v47 = -66666666;
        v48 = (_DWORD *)(v44 + 8LL * (int)v10[v45]);
        v49 = *((int *)v46 + 1);
        if ( (int)v49 >= 0 )
          v47 = v10[v49];
        v50 = *(int *)v46;
        v48[1] = v47;
        if ( (int)v50 < 0 )
          break;
        *v48 = v10[v50];
        v45 = *(int *)v46;
        if ( (int)v45 < 0 )
        {
          v51 = v60;
          if ( !v60 )
            goto LABEL_46;
          goto LABEL_45;
        }
      }
      *v48 = -66666666;
      v45 = *(int *)v46;
    }
    while ( (int)v45 >= 0 );
    v51 = v60;
    if ( v60 )
      goto LABEL_45;
LABEL_46:
    *((_QWORD *)this + 32) = v44;
    *(_DWORD *)this = v39;
  }
LABEL_47:
  operator delete[](v10);
  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = a4;
  *(_QWORD *)result = &off_4D1D88;
  *(_DWORD *)(result + 16) = v63;
  *(_QWORD *)(result + 24) = v64;
  return result;
}

