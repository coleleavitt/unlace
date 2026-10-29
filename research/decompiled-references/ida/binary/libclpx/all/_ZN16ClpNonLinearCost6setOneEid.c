__int64 __fastcall ClpNonLinearCost::setOne(ClpNonLinearCost *this, int a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  double v6; // xmm2_8
  double v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // r9
  signed int *v10; // rbp
  int v11; // r11d
  signed int v12; // ebx
  signed int v13; // r10d
  signed int v14; // r13d
  __int64 v15; // r12
  double v16; // xmm0_8
  signed int v17; // eax
  __int64 v18; // r10
  int v19; // edx
  __int64 v20; // rdx
  double v21; // xmm0_8
  double *v22; // r12
  int v23; // eax
  double *v24; // r10
  _QWORD *v25; // r11
  __int64 v26; // rax
  double v27; // xmm0_8
  double *v28; // r9
  char *v29; // r8
  double v30; // xmm3_8
  char v31; // al
  unsigned __int8 v32; // cl
  double v33; // xmm3_8
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _BYTE *v36; // r9
  double v37; // xmm5_8
  __int64 v38; // r8
  double *v39; // r11
  double *v40; // r10
  char v41; // dl
  double v42; // xmm3_8
  double v43; // xmm4_8
  double v44; // xmm6_8
  double *v45; // rcx
  double v46; // xmm0_8
  _BYTE *v47; // rsi
  unsigned __int8 v48; // cl
  double v49; // xmm2_8
  int v50; // eax
  int v51; // edx
  unsigned int v52; // edx
  double v53; // xmm6_8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r11
  __int64 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // r11
  __int64 v60; // r12
  char v61; // al
  int v62; // edx
  char v63; // cl
  char v64; // al
  double v65; // xmm5_8
  double v66; // xmm6_8

  result = *((unsigned int *)this + 36);
  v4 = *((_QWORD *)this + 12);
  v6 = *(double *)(v4 + 880);
  v7 = 0.0;
  if ( (result & 1) == 0 )
    goto LABEL_16;
  v8 = *((_QWORD *)this + 7);
  v9 = *((_QWORD *)this + 10);
  v10 = (signed int *)(4LL * a2 + *((_QWORD *)this + 8));
  v11 = *(_DWORD *)(v8 + 4LL * a2 + 4);
  v12 = *v10;
  v13 = *(_DWORD *)(v8 + 4LL * a2);
  v14 = v11 - 1;
  if ( !*((_BYTE *)this + 149) )
  {
    v15 = 8 * (v13 + 1LL);
    v16 = *(double *)(v9 + v15);
    if ( v16 == *(double *)(v9 + v15 + 8) )
    {
      v17 = v13 + 1;
      if ( 1.001 * v6 > fabs(a3 - v16) )
      {
LABEL_5:
        *v10 = v17;
        if ( v17 == v12 )
        {
          v20 = 8LL * v17;
          v21 = *(double *)(v9 + v20);
          v22 = (double *)(v9 + v20 + 8);
        }
        else
        {
          v18 = *((_QWORD *)this + 13);
          v19 = *(_DWORD *)(v18 + 4LL * (v17 >> 5));
          if ( _bittest(&v19, v17) )
            ++*((_DWORD *)this + 28);
          v20 = 8LL * v17;
          v21 = *(double *)(v9 + v20);
          v22 = (double *)(v9 + v20 + 8);
          v23 = *(_DWORD *)(v18 + 4LL * (v12 >> 5));
          if ( _bittest(&v23, v12) )
            --*((_DWORD *)this + 28);
        }
        goto LABEL_12;
      }
    }
    if ( v13 < v14 )
    {
      if ( v16 + v6 < a3 )
      {
        v58 = v13 + 1;
        v59 = v58 + (unsigned int)(v11 - v13 - 2);
        v60 = v9 + v15 - 8 * v58 - 8;
        while ( 1 )
        {
          v17 = v58;
          if ( v58 == v59 )
            goto LABEL_5;
          v16 = *(double *)(v60 + 8 * v58++ + 16);
          if ( v16 + v6 >= a3 )
            goto LABEL_55;
        }
      }
LABEL_54:
      v17 = v13;
LABEL_55:
      if ( a3 >= v16 - v6 )
      {
        v62 = *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v17 >> 5));
        if ( _bittest(&v62, v17) )
          v17 -= (v13 != v17) - 1;
      }
      goto LABEL_5;
    }
    goto LABEL_65;
  }
  v21 = *(double *)(v9 + 8LL * v12);
  v20 = 8LL * v12;
  if ( v21 - v6 > a3 || (v22 = (double *)(v9 + v20 + 8), a3 > *v22 + v6) )
  {
    if ( v13 < v14 )
    {
      v54 = v13 + 1LL;
      v16 = *(double *)(v9 + 8 * v54);
      if ( v6 + v16 <= a3 )
      {
        v55 = v13 + 1;
        v56 = v55 + (unsigned int)(v11 - v13 - 2);
        v57 = v9 + 8 * v54 - 8 * v55 - 8;
        while ( 1 )
        {
          v17 = v55;
          if ( v56 == v55 )
            goto LABEL_5;
          v16 = *(double *)(v57 + 8 * v55++ + 16);
          if ( v16 + v6 > a3 )
            goto LABEL_55;
        }
      }
      goto LABEL_54;
    }
LABEL_65:
    v17 = v13;
    goto LABEL_5;
  }
LABEL_12:
  v24 = (double *)(8LL * a2 + *(_QWORD *)(v4 + 984));
  v25 = (_QWORD *)(8LL * a2 + *(_QWORD *)(v4 + 1008));
  v26 = *(_QWORD *)(v4 + 1032) + 8LL * a2;
  *v24 = v21;
  v27 = *v22;
  v28 = (double *)v26;
  *v25 = *(_QWORD *)v22;
  v29 = (char *)(*(_QWORD *)(v4 + 264) + a2);
  v30 = *v24;
  v31 = *v29;
  v32 = *v29 & 7;
  if ( v32 == 1 || v27 != v30 )
  {
    if ( v32 <= 5u && ((1LL << v32) & 0x2C) != 0 )
    {
      v61 = v31 & 0xF8;
      if ( 1.001 * v6 < fabs(a3 - v30) )
      {
        v63 = v61 | 2;
        v64 = v61 | 4;
        if ( 1.001 * v6 >= fabs(a3 - v27) )
          v64 = v63;
        *v29 = v64;
      }
      else
      {
        *v29 = v61 | 3;
      }
    }
  }
  else
  {
    *v29 = v31 & 0xF8 | 5;
  }
  v33 = *(double *)(*((_QWORD *)this + 11) + v20);
  result = *((unsigned int *)this + 36);
  v7 = *v28 - v33;
  *v28 = v33;
LABEL_16:
  if ( (result & 2) == 0 )
    goto LABEL_32;
  v34 = *((_QWORD **)this + 12);
  v35 = 8LL * a2;
  v36 = (_BYTE *)(a2 + *((_QWORD *)this + 15));
  v37 = *(double *)(*((_QWORD *)this + 17) + v35);
  v38 = v34[129];
  v39 = (double *)(v35 + v34[123]);
  v40 = (double *)(v35 + v34[126]);
  v41 = *v36 & 0xF;
  v42 = *v40;
  if ( v41 )
  {
    v43 = *v39;
    if ( v41 == 2 )
    {
      v42 = *(double *)(*((_QWORD *)this + 16) + 8LL * a2);
      --*((_DWORD *)this + 28);
      if ( v6 < a3 - v43 )
      {
        ++*((_DWORD *)this + 28);
        goto LABEL_24;
      }
      v66 = v43;
      v43 = v42;
      v42 = v66;
      goto LABEL_20;
    }
  }
  else
  {
    v43 = *v40;
    v44 = *(double *)(*((_QWORD *)this + 16) + 8LL * a2);
    --*((_DWORD *)this + 28);
    v42 = v44;
  }
  if ( v6 < a3 - v42 )
  {
    ++*((_DWORD *)this + 28);
    v45 = (double *)(v38 + v35);
    v37 = v37 + *((double *)this + 2);
    v7 = *v45 - v37;
    *v36 = *v36 & 0xF0 | 2;
    *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v43;
    v43 = 1.797693134862316e308;
    goto LABEL_23;
  }
LABEL_20:
  if ( a3 - v43 >= -v6 )
  {
    if ( v41 != 1 )
    {
      v45 = (double *)(v38 + v35);
      v53 = v42;
      v42 = v43;
      v7 = *v45 - v37;
      v43 = v53;
      *v36 = *v36 & 0xF0 | 1;
      goto LABEL_23;
    }
LABEL_66:
    v65 = v42;
    v42 = v43;
    v43 = v65;
    goto LABEL_24;
  }
  ++*((_DWORD *)this + 28);
  v37 = v37 - *((double *)this + 2);
  if ( !v41 )
    goto LABEL_66;
  v45 = (double *)(v38 + v35);
  v46 = *v45;
  *v36 &= 0xF0u;
  v7 = v46 - v37;
  *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v42;
  v42 = -1.797693134862316e308;
LABEL_23:
  v34 = *((_QWORD **)this + 12);
  *v39 = v42;
  *v40 = v43;
  *v45 = v37;
LABEL_24:
  v47 = (_BYTE *)(v34[33] + a2);
  result = (unsigned __int8)*v47;
  v48 = *v47 & 7;
  if ( v42 == v43 && v48 != 1 )
  {
    result = result & 0xFFFFFFF8 | 5;
    *v47 = result;
  }
  else if ( v48 <= 5u && ((1LL << v48) & 0x2C) != 0 )
  {
    v49 = v6 * 1.001;
    v50 = result & 0xFFFFFFF8;
    if ( v49 >= fabs(a3 - v42) )
    {
      result = v50 | 3u;
      *v47 = result;
    }
    else
    {
      v51 = v50;
      result = v50 | 4u;
      v52 = v51 | 2;
      if ( v49 >= fabs(a3 - v43) )
        result = v52;
      *v47 = result;
    }
  }
LABEL_32:
  *(double *)this = a3 * v7 + *(double *)this;
  return result;
}

