CoinPresolveMatrix *__fastcall do_tighten_action::presolve(
        do_tighten_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  int v6; // eax
  int *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r12
  double *v10; // r13
  __m128d v11; // xmm0
  __m128d v12; // xmm1
  double *v13; // r12
  __m128d v14; // xmm1
  __int64 v15; // r13
  int *v16; // r11
  __int64 v17; // rdx
  int v18; // edi
  int v19; // esi
  int *v20; // r12
  bool v21; // cf
  bool v22; // zf
  bool v23; // al
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  double v27; // xmm2_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  void *v30; // rbp
  __int64 v31; // rax
  const CoinPresolveAction *v32; // r8
  const CoinPresolveAction *v33; // r9
  CoinMessageHandler *v35; // rdi
  CoinMessageHandler *v36; // rax
  CoinMessageHandler *v37; // rax
  CoinMessageHandler *v38; // rax
  double v39; // xmm0_8
  __int64 v40; // rax
  char *v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // r8d
  int v50; // edi
  __int64 v51; // r11
  int v52; // ecx
  double *v53; // rsi
  _QWORD *v54; // rax
  double v55; // xmm0_8
  _BYTE *v56; // r11
  __int64 v57; // r11
  __int64 v58; // r11
  __int64 v59; // r11
  int v60; // [rsp+4h] [rbp-104h]
  char *v61; // [rsp+8h] [rbp-100h]
  __int64 v62; // [rsp+10h] [rbp-F8h]
  __int64 v63; // [rsp+18h] [rbp-F0h]
  __int64 v64; // [rsp+20h] [rbp-E8h]
  __int64 v66; // [rsp+30h] [rbp-D8h]
  __int64 v67; // [rsp+38h] [rbp-D0h]
  __int64 v68; // [rsp+40h] [rbp-C8h]
  __int64 v69; // [rsp+48h] [rbp-C0h]
  __int64 v70; // [rsp+50h] [rbp-B8h]
  __int64 v71; // [rsp+58h] [rbp-B0h]
  CoinMessages *v72; // [rsp+60h] [rbp-A8h]
  int v73; // [rsp+70h] [rbp-98h]
  unsigned int v74; // [rsp+74h] [rbp-94h]
  int v76; // [rsp+80h] [rbp-88h]
  int v77; // [rsp+84h] [rbp-84h]
  char *src; // [rsp+88h] [rbp-80h]
  int v79; // [rsp+90h] [rbp-78h]
  unsigned int v80; // [rsp+94h] [rbp-74h]
  CoinPresolveMatrix *v81; // [rsp+98h] [rbp-70h]
  CoinPresolveMatrix *v82; // [rsp+A0h] [rbp-68h]
  __int64 v83; // [rsp+A8h] [rbp-60h]
  _BYTE v84[88]; // [rsp+B0h] [rbp-58h] BYREF

  v3 = *((_QWORD *)this + 13);
  v4 = *((_QWORD *)this + 14);
  v71 = *((_QWORD *)this + 8);
  v68 = *((_QWORD *)this + 7);
  v69 = *((_QWORD *)this + 5);
  v70 = *((_QWORD *)this + 6);
  v5 = *(int *)this;
  v66 = *((_QWORD *)this + 11);
  v79 = *(_DWORD *)this;
  v67 = *((_QWORD *)this + 12);
  v62 = *((_QWORD *)this + 9);
  v63 = *((_QWORD *)this + 39);
  v81 = *((CoinPresolveMatrix **)this + 58);
  v82 = *((CoinPresolveMatrix **)this + 56);
  if ( v5 > 0x333333333333333LL )
    goto LABEL_58;
  src = (char *)operator new[](40 * v5);
  v6 = *((_DWORD *)this + 94);
  v7 = *((int **)this + 46);
  v73 = *((_DWORD *)this + 109) & 0x4000;
  if ( v6 <= 0 )
  {
    operator delete[](src);
    return a2;
  }
  v77 = 0;
  v74 = 0;
  v80 = 0;
  v64 = (__int64)&v7[v6 - 1 + 1];
  v76 = v79;
  do
  {
LABEL_6:
    v8 = *v7;
    v60 = *v7;
    v9 = 8 * v8;
    if ( *(_BYTE *)(v8 + v63) )
    {
      v10 = (double *)(v66 + v9);
      v11 = (__m128d)*(unsigned __int64 *)(v66 + 8 * v8);
      v11.m128d_f64[0] = v11.m128d_f64[0] - 1.0e-12;
      if ( fabs(v11.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v12.m128d_f64[0] = (double)(int)v11.m128d_f64[0];
        *(_QWORD *)&v11.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v11, v12).m128d_f64[0] & 0x3FF0000000000000LL)
                                       + v12.m128d_f64[0])
                                     | *(_QWORD *)&v11.m128d_f64[0] & 0x8000000000000000LL;
      }
      v13 = (double *)(v67 + v9);
      *v10 = v11.m128d_f64[0];
      v11.m128d_f64[0] = *v13 + 1.0e-12;
      if ( fabs(v11.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v14 = 0;
        v14.m128d_f64[0] = (double)(int)v11.m128d_f64[0];
        *(_QWORD *)&v11.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         v14.m128d_f64[0]
                                       - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v14, v11).m128d_f64[0] & 0x3FF0000000000000LL))
                                     | *(_QWORD *)&v11.m128d_f64[0] & 0x8000000000000000LL;
      }
      *v13 = v11.m128d_f64[0];
      if ( *v10 > v11.m128d_f64[0] && !v73 )
      {
        v35 = *((CoinMessageHandler **)this + 26);
        *((_DWORD *)this + 86) |= 1u;
        CoinMessages::CoinMessages((CoinMessages *)v84, (do_tighten_action *)((char *)this + 224));
        v36 = (CoinMessageHandler *)CoinMessageHandler::message(v35, 15, (const CoinMessages *)v84);
        v37 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v36);
        v38 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v37);
        v39 = *v13;
        v40 = CoinMessageHandler::operator<<(v38);
        CoinMessageHandler::operator<<(v40, 0, v39);
        CoinMessages::~CoinMessages((CoinMessages *)v84);
      }
    }
    if ( *(double *)(v62 + 8 * v8) != 0.0
      || *((_BYTE *)this + 440) && (*(_BYTE *)(*((_QWORD *)this + 45) + v8) & 2) != 0 )
    {
      goto LABEL_5;
    }
    v15 = *(int *)(v69 + 4 * v8);
    v16 = (int *)(v70 + 4 * v8);
    if ( (int)v15 >= (int)v15 + *v16 )
      goto LABEL_5;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = (int *)(v68 + 4 * v15);
    do
    {
      v26 = v20[v17];
      v27 = *(double *)(v71 + 8 * v15 + 8 * v17);
      v28 = *(double *)(v3 + 8 * v26);
      v29 = *(double *)(v4 + 8 * v26);
      if ( v28 > -1.0e28 )
      {
        if ( v29 < 1.0e28 )
          goto LABEL_5;
LABEL_19:
        ++v18;
        if ( v27 <= 0.0 )
          goto LABEL_27;
        goto LABEL_20;
      }
      if ( v29 < 1.0e28 )
        goto LABEL_19;
      if ( v27 <= 0.0 )
      {
LABEL_27:
        v21 = v28 > -1.0e28;
        v22 = v28 == -1.0e28;
        goto LABEL_21;
      }
LABEL_20:
      v21 = v29 < 1.0e28;
      v22 = v29 == 1.0e28;
LABEL_21:
      v23 = !v21 && !v22;
      v24 = 4 * v23 - 2;
      v25 = 2 * v23 - 1;
      if ( v19 && v25 != v19 )
        goto LABEL_5;
      ++v17;
      v19 = v25;
    }
    while ( (unsigned int)(*v16 - 1) + 1LL != v17 );
    if ( !v18 )
    {
LABEL_5:
      if ( (int *)v64 == ++v7 )
        break;
      goto LABEL_6;
    }
    if ( v25 == 1 )
    {
      if ( *(double *)(v67 + 8 * v8) < 1.0e10 )
      {
        *((_DWORD *)v81 + (int)v80++) = v60;
        goto LABEL_5;
      }
LABEL_41:
      v83 = (unsigned int)(*v16 - 1);
      v72 = (CoinMessages *)(v70 + 4 * v8);
      v41 = &src[40 * v77++];
      v61 = v41;
      *((_DWORD *)v41 + 6) = v60;
      if ( !*(_BYTE *)(v8 + v63) )
        v24 = v25;
      *((_DWORD *)v41 + 8) = v24;
      v42 = *v16;
      if ( v42 <= 0x1FFFFFFFFFFFFFFELL )
      {
        *(_QWORD *)v41 = operator new[](4 * v42);
        v43 = *(int *)v72;
        if ( v43 <= 0xFFFFFFFFFFFFFFFLL )
        {
          *((_QWORD *)v61 + 1) = operator new[](8 * v43);
          v44 = *(int *)v72;
          if ( v44 <= 0xFFFFFFFFFFFFFFFLL )
          {
            v45 = operator new[](8 * v44);
            v46 = (_BYTE *)(*((_QWORD *)this + 45) + v8);
            *((_QWORD *)v61 + 2) = v45;
            if ( (*v46 & 1) == 0 )
            {
              *v46 |= 1u;
              v47 = *((int *)this + 98);
              v48 = *((_QWORD *)this + 48);
              *((_DWORD *)this + 98) = v47 + 1;
              *(_DWORD *)(v48 + 4 * v47) = v60;
            }
            v49 = v74;
            v50 = 0;
            do
            {
              v51 = *v20;
              v52 = *v20;
              v53 = (double *)(v3 + 8 * v51);
              v54 = (_QWORD *)(v4 + 8 * v51);
              v55 = *v53;
              if ( *v53 != -1.797693134862316e308 || *(double *)v54 != 1.797693134862316e308 )
              {
                v56 = (_BYTE *)(*((_QWORD *)this + 50) + v51);
                if ( (*v56 & 1) == 0 )
                {
                  *v56 |= 1u;
                  v57 = *((int *)this + 108);
                  v55 = *v53;
                  *((_DWORD *)this + 108) = v57 + 1;
                  *(_DWORD *)(*((_QWORD *)this + 53) + 4 * v57) = v52;
                }
                v58 = v50++;
                *(_DWORD *)(*(_QWORD *)v61 + 4 * v58) = v52;
                *(double *)(*((_QWORD *)v61 + 1) + 8 * v58) = v55;
                *(_QWORD *)(*((_QWORD *)v61 + 2) + 8 * v58) = *v54;
                v59 = (int)v49++;
                *((_DWORD *)v82 + v59) = v52;
                *v53 = -1.797693134862316e308;
                *v54 = 0x7FEFFFFFFFFFFFFFLL;
              }
              ++v20;
            }
            while ( (int *)(v68 + 4 * (v15 + v83) + 4) != v20 );
            v74 = v49;
            *((_DWORD *)v61 + 7) = v50;
            goto LABEL_5;
          }
        }
      }
LABEL_58:
      __cxa_throw_bad_array_new_length();
    }
    if ( v25 != -1 || *(double *)(v66 + 8 * v8) <= -1.0e10 )
      goto LABEL_41;
    --v76;
    ++v7;
    *((_DWORD *)v81 + v76) = v60;
  }
  while ( (int *)v64 != v7 );
  if ( v74 )
  {
    v30 = (void *)operator new[](40LL * v77);
    memcpy(v30, src, 40LL * v77);
    v31 = operator new(0x20u);
    *(_DWORD *)(v31 + 16) = v77;
    *(_QWORD *)(v31 + 24) = v30;
    *(_QWORD *)(v31 + 8) = a2;
    *(_QWORD *)v31 = &off_4D2040;
    a2 = (CoinPresolveMatrix *)useless_constraint_action::presolve(this, v82, (const int *)v74, v31, v32);
  }
  operator delete[](src);
  if ( v76 < v79 )
    a2 = (CoinPresolveMatrix *)make_fixed_action::presolve(
                                 this,
                                 (CoinPresolveMatrix *)((char *)v81 + 4 * v76),
                                 (int *)(unsigned int)(v79 - v76),
                                 1,
                                 (bool)a2,
                                 v33);
  if ( v80 )
    return (CoinPresolveMatrix *)make_fixed_action::presolve(this, v81, (int *)v80, 0, (bool)a2, v33);
  return a2;
}

