void __fastcall ClpSimplexOther::dualRanging(
        CoinIndexedVector **this,
        int a2,
        const int *a3,
        double *a4,
        int *a5,
        double *a6,
        int *a7,
        double *a8,
        double *a9)
{
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  CoinIndexedVector *v21; // rdi
  double v22; // xmm5_8
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  int v25; // r10d
  __int64 v26; // r11
  int v27; // eax
  double v28; // xmm0_8
  double v29; // xmm2_8
  double v30; // xmm0_8
  double v31; // xmm0_8
  __int64 v32; // rax
  double v33; // xmm1_8
  int v34; // edx
  double v35; // xmm4_8
  double v36; // xmm1_8
  int v37; // eax
  CoinIndexedVector *v38; // rdi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  double v42; // xmm0_8
  int v43; // edx
  double v44; // xmm0_8
  __int64 v45; // rdx
  double *v46; // rax
  double v47; // xmm1_8
  double v48; // xmm1_8
  double v49; // xmm2_8
  double v50; // xmm0_8
  double v51; // xmm2_8
  int v52; // eax
  double v53; // xmm1_8
  double v54; // xmm4_8
  double v55; // xmm5_8
  bool v56; // cc
  int v57; // [rsp+0h] [rbp-C8h]
  __int64 v59; // [rsp+10h] [rbp-B8h]
  void *s; // [rsp+18h] [rbp-B0h]
  int v61; // [rsp+20h] [rbp-A8h]
  int v62; // [rsp+20h] [rbp-A8h]
  __int64 v63; // [rsp+28h] [rbp-A0h]
  __int64 v64; // [rsp+28h] [rbp-A0h]
  __int64 v65; // [rsp+28h] [rbp-A0h]
  int v66; // [rsp+28h] [rbp-A0h]
  int v67; // [rsp+30h] [rbp-98h]
  int v68[2]; // [rsp+30h] [rbp-98h]
  double v69; // [rsp+38h] [rbp-90h]
  double *v70; // [rsp+40h] [rbp-88h]
  int v71; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v72; // [rsp+60h] [rbp-68h] BYREF
  int v73; // [rsp+64h] [rbp-64h] BYREF
  double v74; // [rsp+68h] [rbp-60h] BYREF
  double v75; // [rsp+70h] [rbp-58h] BYREF
  double v76; // [rsp+78h] [rbp-50h] BYREF
  double v77; // [rsp+80h] [rbp-48h] BYREF
  double v78[8]; // [rsp+88h] [rbp-40h] BYREF

  CoinIndexedVector::clear(*(this + 133));
  CoinIndexedVector::clear(*(this + 139));
  v14 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( v14 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v15 = operator new[](4 * v14);
  v16 = *((_DWORD *)this + 26);
  s = (void *)v15;
  v17 = v16 + *((_DWORD *)this + 27);
  if ( v17 > 0 )
  {
    v57 = *((_DWORD *)this + 26);
    memset(s, 255, 4LL * (unsigned int)(v17 - 1) + 4);
    v16 = v57;
  }
  if ( v16 > 0 )
  {
    v18 = (__int64)*(this + 157);
    v19 = (unsigned int)(v16 - 1) + 1LL;
    v20 = 0;
    do
    {
      *((_DWORD *)s + *(int *)(v18 + 4 * v20)) = v20;
      ++v20;
    }
    while ( v19 != v20 );
  }
  v21 = *(this + 132);
  v22 = *((double *)this + 109);
  *(this + 109) = *(this + 3);
  v69 = v22;
  v70 = *((double **)v21 + 1);
  if ( a2 > 0 )
  {
    v23 = (unsigned int)(a2 - 1);
    v24 = 0;
    v59 = 4 * v23 + 4;
    while ( 1 )
    {
      CoinIndexedVector::clear(v21);
      CoinIndexedVector::clear(*(this + 138));
      v25 = a3[v24 / 4];
      if ( v25 >= 0 )
        break;
      a4[v24 / 4] = 0.0;
      a5[v24 / 4] = -1;
      a6[v24 / 4] = 0.0;
      a7[v24 / 4] = -1;
LABEL_29:
      v24 += 4LL;
      v21 = *(this + 132);
      if ( v59 == v24 )
        goto LABEL_30;
    }
    v71 = -1;
    v72 = -1;
    v26 = v25;
    v74 = 1.797693134862316e308;
    v75 = 1.797693134862316e308;
    if ( a8 )
    {
      v27 = *((_DWORD *)this + 27);
      if ( v27 <= v25 )
        v28 = *((double *)*(this + 14) + v25 - v27);
      else
        v28 = *((double *)*(this + 15) + v25);
      a8[v24 / 4] = v28;
      a9[v24 / 4] = v28;
    }
    switch ( *((_BYTE *)*(this + 33) + v25) & 7 )
    {
      case 0:
      case 4:
        v74 = 0.0;
        v75 = 0.0;
        v71 = v25;
        v72 = v25;
        v29 = 0.0;
        v31 = 0.0;
        goto LABEL_20;
      case 1:
        v38 = *(this + 132);
        v67 = v25;
        v64 = v25;
        v39 = *((_DWORD *)s + v25);
        v76 = 1.0;
        v73 = v39;
        CoinIndexedVector::createPacked(v38, 1, &v73, &v76);
        ClpFactorization::updateColumnTranspose(*(this + 158), *(this + 133), *(this + 132));
        (*(void (__fastcall **)(_QWORD, CoinIndexedVector **, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)*(this + 24)
                                                                                             + 392LL))(
          *(this + 24),
          this,
          *(this + 132),
          *(this + 139),
          *(this + 138),
          -1.0);
        ClpSimplexOther::checkDualRatios(
          (ClpSimplexOther *)this,
          *(this + 132),
          *(this + 138),
          &v74,
          &v71,
          &v77,
          &v75,
          &v72,
          v78);
        v26 = v64;
        v25 = v67;
        if ( v69 != 0.0 )
        {
          if ( a8 )
          {
            if ( v71 >= 0 )
            {
              ClpSimplexOther::primalRanging1((ClpSimplexOther *)this, v71, v67);
              v40 = v72;
              a8[v24 / 4] = -1.0;
              v26 = v64;
              v25 = v67;
              if ( v40 < 0 )
                goto LABEL_37;
            }
            else
            {
              v40 = v72;
              if ( v72 < 0 )
                goto LABEL_37;
            }
            v65 = v26;
            v62 = v25;
            ClpSimplexOther::primalRanging1((ClpSimplexOther *)this, v40, v25);
            v29 = v74;
            v25 = v62;
            v26 = v65;
            a9[v24 / 4] = -1.0;
            v31 = v75;
            goto LABEL_20;
          }
LABEL_37:
          v29 = v74;
          v31 = v75;
LABEL_20:
          v32 = (__int64)*(this + 28);
          v33 = *((double *)this + 11);
          if ( v32 )
          {
            v34 = *((_DWORD *)this + 27);
            if ( v34 <= v25 )
              v35 = *(double *)(v32 + 8LL * (v25 - v34)) / v33;
            else
              v35 = 1.0 / (v33 * *((double *)*(this + 29) + v26));
          }
          else
          {
            v35 = 1.0 / v33;
          }
          if ( v29 < 1.0e30 )
          {
            v29 = v29 * v35;
            v74 = v29;
          }
          if ( v31 < 1.0e30 )
          {
            v31 = v31 * v35;
            v75 = v31;
          }
          v36 = *(double *)this;
          if ( *(double *)this == 1.0 )
          {
            a4[v24 / 4] = v29;
            a5[v24 / 4] = v71;
            v37 = v72;
            a6[v24 / 4] = v31;
            a7[v24 / 4] = v37;
          }
          else if ( v36 == -1.0 )
          {
            a4[v24 / 4] = v31;
            a5[v24 / 4] = v72;
            v41 = v71;
            a6[v24 / 4] = v29;
            a7[v24 / 4] = v41;
            if ( a8 )
            {
              v42 = a8[v24 / 4];
              a8[v24 / 4] = a9[v24 / 4];
              a9[v24 / 4] = v42;
            }
          }
          else
          {
            if ( v36 != 0.0 )
              abort();
            a4[v24 / 4] = 1.797693134862316e308;
            a5[v24 / 4] = -1;
            a6[v24 / 4] = 1.797693134862316e308;
            a7[v24 / 4] = -1;
          }
          goto LABEL_29;
        }
        v43 = *((_DWORD *)*(this + 132) + 4);
        if ( v43 <= 0 )
        {
          v48 = 0.0;
        }
        else
        {
          v44 = 0.0;
          v45 = (__int64)&v70[(unsigned int)(v43 - 1) + 1];
          v46 = v70;
          do
          {
            v47 = *v46++;
            v44 = v44 + v47 * v47;
          }
          while ( v46 != (double *)v45 );
          v48 = sqrt(v44);
          if ( v44 < 0.0 )
          {
            *(_QWORD *)v68 = v64;
            v66 = v25;
            sqrt(v44);
            v25 = v66;
            v26 = *(_QWORD *)v68;
          }
        }
        v49 = v74;
        v50 = 1.0 / v48;
        if ( v71 < 0 )
          goto LABEL_60;
        v51 = *((double *)*(this + 147) + v71);
        if ( fabs(v51) <= 10.0 * *((double *)this + 109) )
        {
          v52 = v72;
          v74 = 0.0;
          v49 = 0.0;
          v53 = v75;
          if ( v72 >= 0 )
          {
LABEL_61:
            v54 = *((double *)*(this + 147) + v52);
            v55 = fabs(v54);
            if ( v55 <= 10.0 * *((double *)this + 109) )
            {
              v53 = 0.0;
            }
            else
            {
              v56 = v52 < *((_DWORD *)this + 27);
              v53 = fabs(v54 / v78[0]);
              v75 = v53;
              if ( v56 && *((_BYTE *)*(this + 34) + v52) )
              {
                if ( *(this + 29) )
                  v55 = fabs(v54 * (*((double *)*(this + 31) + v52) * *((double *)this + 12)));
                v53 = fmax(v55, v53);
              }
            }
          }
        }
        else
        {
          v49 = fabs(v51 / v77);
          v74 = v49;
LABEL_60:
          v52 = v72;
          v53 = v75;
          if ( v72 >= 0 )
            goto LABEL_61;
        }
        v29 = v49 * v50;
        v31 = v50 * v53;
        v74 = v29;
        v75 = v31;
        goto LABEL_20;
      case 2:
        v29 = 0.0;
        v30 = *((double *)*(this + 147) + v25);
        if ( v30 <= 0.0 )
          v29 = -v30;
        v74 = v29;
        v71 = v25;
        if ( a8 )
        {
          v63 = v25;
          v61 = v25;
          ClpSimplexOther::primalRanging1((ClpSimplexOther *)this, v25, v25);
          a8[v24 / 4] = v30;
          goto LABEL_19;
        }
        v31 = 1.797693134862316e308;
        goto LABEL_20;
      case 3:
        v31 = fmax(0.0, *((double *)*(this + 147) + v25));
        v72 = v25;
        v75 = v31;
        if ( a8 )
        {
          v63 = v25;
          v61 = v25;
          ClpSimplexOther::primalRanging1((ClpSimplexOther *)this, v25, v25);
          a9[v24 / 4] = v31;
LABEL_19:
          v25 = v61;
          v26 = v63;
          v29 = v74;
          v31 = v75;
        }
        else
        {
          v29 = 1.797693134862316e308;
        }
        goto LABEL_20;
      default:
        v31 = 1.797693134862316e308;
        v29 = 1.797693134862316e308;
        goto LABEL_20;
    }
  }
LABEL_30:
  CoinIndexedVector::clear(v21);
  CoinIndexedVector::clear(*(this + 138));
  operator delete[](s);
  if ( *(double *)this == 0.0 )
    puts("*** ????? Ranging with zero optimization costs");
}

