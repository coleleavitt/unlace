__int64 __fastcall ClpPredictorCorrector::checkGoodMove2(
        ClpPredictorCorrector *this,
        double a2,
        double *a3,
        unsigned int a4,
        double a5)
{
  double v7; // xmm0_8
  int v9; // r14d
  int v10; // eax
  double v11; // xmm2_8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // cl
  const void *v16; // rdi
  _QWORD *v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  double *v20; // r15
  __int64 v21; // rax
  int v22; // edi
  double *v23; // r14
  _BYTE *v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  __int64 v28; // r8
  double *v29; // rsi
  double *v30; // rdx
  double *v31; // rcx
  __int64 v32; // r8
  double v33; // xmm0_8
  __int64 v34; // rdx
  double *v35; // rdx
  double v36; // xmm4_8
  double v37; // xmm2_8
  double v38; // xmm3_8
  double v39; // xmm3_8
  double v40; // xmm0_8
  double v42; // xmm1_8
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // dl
  double v49; // xmm2_8
  double v50; // xmm1_8
  __int64 v51; // r8
  double v52; // xmm3_8
  double v53; // [rsp+8h] [rbp-70h]
  double v54; // [rsp+10h] [rbp-68h]
  double v56; // [rsp+20h] [rbp-58h]
  __int64 v57; // [rsp+28h] [rbp-50h]
  int v58; // [rsp+38h] [rbp-40h] BYREF
  int v59[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v7 = (double)*((int *)this + 324);
  ClpPredictorCorrector::complementarityGap(this, &v58, v59, 2);
  v54 = v7;
  LOBYTE(a4) = (v7 <= *a3) | a4;
  if ( !(_BYTE)a4 )
    return 0;
  v9 = *((_DWORD *)this + 27);
  v10 = v9 + *((_DWORD *)this + 26);
  v11 = 0.00000001 * v7 * (1.0 / v7);
  if ( v10 > 0 )
  {
    v12 = (unsigned int)(v10 - 1);
    v13 = 0;
    v14 = v12 + 1;
    while ( 1 )
    {
      v15 = *(_BYTE *)(*((_QWORD *)this + 33) + v13);
      if ( (v15 & 2) == 0 )
      {
        if ( (v15 & 8) != 0 )
        {
          a5 = *(double *)(*((_QWORD *)this + 147) + 8 * v13) * *((double *)this + 127)
             + *(double *)(*((_QWORD *)this + 159) + 8 * v13);
          if ( v11 > (*(double *)(*((_QWORD *)this + 150) + 8 * v13) * *((double *)this + 126)
                    + *(double *)(*((_QWORD *)this + 141) + 8 * v13))
                   * a5 )
            break;
        }
        if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v13) & 0x10) != 0 )
        {
          a5 = *(double *)(*((_QWORD *)this + 148) + 8 * v13) * *((double *)this + 127)
             + *(double *)(*((_QWORD *)this + 160) + 8 * v13);
          if ( v11 > (*(double *)(*((_QWORD *)this + 149) + 8 * v13) * *((double *)this + 126)
                    + *(double *)(*((_QWORD *)this + 140) + 8 * v13))
                   * a5 )
            break;
        }
      }
      if ( v14 == ++v13 )
        goto LABEL_10;
    }
    a4 = 0;
  }
LABEL_10:
  v16 = *((const void **)this + 20);
  v53 = *((double *)this + 123);
  if ( v16
    && (v17 = __dynamic_cast(
                v16,
                (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                0)) != nullptr )
  {
    v56 = *((double *)this + 117) * *((double *)this + 117);
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL
      || (v57 = *((_QWORD *)this + 16),
          v18 = operator new[](8LL * v9),
          v19 = *((int *)this + 27),
          v20 = (double *)v18,
          v19 > 0xFFFFFFFFFFFFFFFLL) )
    {
      __cxa_throw_bad_array_new_length();
    }
    v21 = operator new[](8 * v19);
    v22 = *((_DWORD *)this + 27);
    v23 = (double *)v21;
    if ( v22 > 0 )
    {
      v24 = *((_BYTE **)this + 33);
      v25 = *((_QWORD *)this + 143);
      v26 = 0;
      v27 = v24 + 1;
      v28 = (__int64)&v24[v22 - 1 + 1];
      while ( 1 )
      {
        a5 = *(double *)(v25 + v26);
        if ( (*v24 & 2) != 0 )
        {
          *(double *)(v21 + v26) = a5;
          v26 += 8;
          v24 = v27;
          if ( (_BYTE *)v28 == v27 )
            break;
        }
        else
        {
          v24 = v27;
          *(double *)(v21 + v26) = *(double *)(*((_QWORD *)this + 145) + v26) * *((double *)this + 126) + a5;
          v26 += 8;
          if ( (_BYTE *)v28 == v27 )
            break;
        }
        ++v27;
      }
    }
    v29 = *((double **)this + 100);
    if ( v22 && v29 != v20 )
    {
      if ( v22 >> 3 <= 0 )
      {
        v35 = v20;
      }
      else
      {
        v30 = v20;
        v31 = *((double **)this + 100);
        v32 = (unsigned int)((v22 >> 3) - 1);
        do
        {
          v33 = *v31;
          v30 += 8;
          v31 += 8;
          *(v30 - 8) = v33;
          *(v30 - 7) = *(v31 - 7);
          *(v30 - 6) = *(v31 - 6);
          *(v30 - 5) = *(v31 - 5);
          *(v30 - 4) = *(v31 - 4);
          *(v30 - 3) = *(v31 - 3);
          *(v30 - 2) = *(v31 - 2);
          *(v30 - 1) = *(v31 - 1);
        }
        while ( v30 != &v20[8 * v32 + 8] );
        v34 = ((int)v32 + 1LL) << 6;
        v29 = (double *)((char *)v29 + v34);
        v35 = (double *)((char *)v20 + v34);
      }
      switch ( v22 % 8 )
      {
        case 1:
          goto LABEL_47;
        case 2:
          goto LABEL_46;
        case 3:
          goto LABEL_45;
        case 4:
          goto LABEL_44;
        case 5:
          goto LABEL_43;
        case 6:
          goto LABEL_42;
        case 7:
          v35[6] = v29[6];
LABEL_42:
          v35[5] = v29[5];
LABEL_43:
          v35[4] = v29[4];
LABEL_44:
          v35[3] = v29[3];
LABEL_45:
          v35[2] = v29[2];
LABEL_46:
          v35[1] = v29[1];
LABEL_47:
          *v35 = *v29;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64, double *, double, double, double))(**((_QWORD **)this + 24) + 376LL))(
      *((_QWORD *)this + 24),
      v57,
      v20,
      -1.0,
      a5,
      v11);
    (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 24) + 376LL))(
      *((_QWORD *)this + 24),
      *((_QWORD *)this + 146),
      v20,
      -*((double *)this + 127));
    ClpInterior::quadraticDjs(this, v20, v23, 1.0);
    operator delete[](v23);
    v43 = *((_DWORD *)this + 27);
    if ( v43 > 0 )
    {
      v44 = (unsigned int)(v43 - 1);
      v46 = 0;
      v47 = v44 + 1;
      do
      {
        v45 = *((_QWORD *)this + 33);
        v48 = *(_BYTE *)(v45 + v46);
        if ( (v48 & 4) == 0 )
        {
          v49 = 0.0;
          if ( (v48 & 8) != 0 )
            v49 = *(double *)(*((_QWORD *)this + 147) + 8 * v46) * *((double *)this + 127)
                + *(double *)(*((_QWORD *)this + 159) + 8 * v46);
          v50 = 0.0;
          if ( (*(_BYTE *)(v45 + v46) & 0x10) != 0 )
            v50 = *(double *)(*((_QWORD *)this + 148) + 8 * v46) * *((double *)this + 127)
                + *(double *)(*((_QWORD *)this + 160) + 8 * v46);
          if ( *(_DWORD *)(*(_QWORD *)(v17[3] + 56LL) + 4 * v46) )
          {
            v51 = *((_QWORD *)this + 151);
            v52 = v56;
            if ( v51 )
              v52 = v56 + *(double *)(v51 + 8 * v46);
            v53 = fmax(
                    v53,
                    (*(double *)(*((_QWORD *)this + 145) + 8 * v46) * *((double *)this + 126)
                   + *(double *)(*((_QWORD *)this + 143) + 8 * v46))
                  * v52
                  + v50
                  + v20[v46]
                  - v49);
          }
        }
        ++v46;
      }
      while ( v47 != v46 );
    }
    operator delete[](v20);
    v36 = 0.0001;
  }
  else
  {
    v36 = 0.00000001;
  }
  v37 = *((double *)this + 109);
  v38 = *((double *)this + 110);
  if ( v37 > v38 )
  {
    *((double *)this + 110) = v37;
    v38 = v37;
  }
  v39 = fmax(*((double *)this + 122), *((double *)this + 121) / v38);
  v40 = a2 >= 0.95 ? 0.05000000000000004 : 1.0 - a2;
  if ( (v39 * v40 <= *((double *)this + 4) || 0.00000001 * v40 * v39 <= v54)
    && ((v42 = v53 / *((double *)this + 108), v40 * v42 <= *((double *)this + 3)) || v42 * (v40 * v36) <= v54)
    && (_BYTE)a4 )
  {
    *a3 = v54;
  }
  else
  {
    return 0;
  }
  return a4;
}

