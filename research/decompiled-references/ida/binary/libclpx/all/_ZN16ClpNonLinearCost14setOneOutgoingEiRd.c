__int64 __fastcall ClpNonLinearCost::setOneOutgoing(ClpNonLinearCost *this, int a2, double *a3)
{
  int v3; // ecx
  __int64 v4; // r11
  __int64 result; // rax
  double v6; // xmm0_8
  double v7; // xmm3_8
  double v8; // xmm1_8
  __int64 v9; // r8
  __int64 v10; // r13
  signed int v11; // r14d
  int v12; // r8d
  signed int v13; // r15d
  double v14; // xmm4_8
  __int64 v15; // rcx
  double v16; // xmm1_8
  signed int v17; // r9d
  double *v18; // r8
  __int64 i; // rcx
  __int64 v20; // rbp
  int v21; // ebx
  int v22; // r9d
  __int64 v23; // r10
  double *v24; // r9
  _QWORD *v25; // rbp
  double *v26; // r10
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm2_8
  double v30; // xmm6_8
  double v31; // xmm1_8
  double v32; // xmm2_8
  __int64 v33; // rcx
  double v34; // xmm8_8
  __int64 v35; // rbp
  double *v36; // rbx
  double v37; // xmm2_8
  char *v38; // r10
  double *v39; // r9
  double v40; // xmm6_8
  char v41; // r8
  double v42; // xmm4_8
  int v43; // r8d
  double v44; // xmm5_8
  double v45; // xmm5_8
  double *v46; // rcx
  double v47; // xmm1_8
  double v48; // xmm6_8
  double v49; // xmm5_8
  __int64 v50; // rbx
  __int64 v51; // r12
  double *v52; // rbx
  bool v53; // r12
  int v54; // ebx
  int v55; // ebx
  int v56; // [rsp+0h] [rbp-54h]
  double *v57; // [rsp+Ch] [rbp-48h]
  double *v58; // [rsp+1Ch] [rbp-38h]

  v3 = *((_DWORD *)this + 36);
  v4 = *((_QWORD *)this + 12);
  result = v3 & 1;
  v6 = *a3;
  v7 = *(double *)(v4 + 880);
  v8 = 0.0;
  if ( (v3 & 1) != 0 )
  {
    v9 = *((_QWORD *)this + 7);
    v10 = *((_QWORD *)this + 10);
    v11 = *(_DWORD *)(v9 + 4LL * a2);
    v12 = *(_DWORD *)(v9 + 4LL * a2 + 4);
    v13 = *(_DWORD *)(4LL * a2 + *((_QWORD *)this + 8));
    v14 = 1.001 * v7;
    v56 = v12 - 1;
    if ( *(double *)(v10 + 8LL * v13) + 1.001 * v7 < v6 )
      result = (unsigned int)-(v6 >= *(double *)(v10 + 8LL * v13 + 8) - v14);
    v15 = 8LL * v11 + 8;
    v16 = *(double *)(v10 + v15);
    v58 = (double *)(v10 + v15);
    v57 = (double *)(v10 + v15 + 8);
    if ( v16 == *v57 && v14 > fabs(v6 - v16) )
    {
      v17 = v11 + 1;
      v18 = (double *)(v10 + v15 + 8);
      i = v11 + 1;
      goto LABEL_7;
    }
    if ( v11 >= v56 )
    {
      v18 = (double *)(v10 + v15);
      i = v11;
      v17 = v11;
      goto LABEL_7;
    }
    if ( v16 == v6 )
    {
      v18 = (double *)(v10 + v15);
      i = v11;
      v17 = v11;
      v53 = 1;
LABEL_60:
      v54 = *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v17 >> 5));
      if ( !_bittest(&v54, v17) || !v53 )
      {
LABEL_7:
        *(_DWORD *)(4LL * a2 + *((_QWORD *)this + 8)) = v17;
        if ( v17 != v13 )
        {
          v20 = *((_QWORD *)this + 13);
          v21 = *(_DWORD *)(v20 + 4LL * (v17 >> 5));
          if ( _bittest(&v21, v17) )
            ++*((_DWORD *)this + 28);
          v22 = *(_DWORD *)(v20 + 4LL * (v13 >> 5));
          if ( _bittest(&v22, v13) )
            --*((_DWORD *)this + 28);
        }
        v23 = 8LL * a2;
        v24 = (double *)(v23 + *(_QWORD *)(v4 + 984));
        v25 = (_QWORD *)(v23 + *(_QWORD *)(v4 + 1008));
        v26 = (double *)(*(_QWORD *)(v4 + 1032) + v23);
        *v24 = *(double *)(v10 + 8 * i);
        v27 = *v18;
        *v25 = *(_QWORD *)v18;
        v28 = *v24;
        if ( v27 != *v24 )
        {
          v29 = *a3;
          v30 = *a3 - v28;
          if ( v14 >= fabs(v30) )
          {
            *a3 = fmin(v29, v28 + v7);
LABEL_15:
            v31 = *v26;
            v32 = *(double *)(*((_QWORD *)this + 11) + 8 * i);
            v3 = *((_DWORD *)this + 36);
            *v26 = v32;
            v8 = v31 - v32;
            v6 = *a3;
            goto LABEL_16;
          }
          if ( v14 >= fabs(v29 - v27) )
          {
            *a3 = fmax(v29, v27 - v7);
            goto LABEL_15;
          }
          if ( v27 - v29 >= v30 )
          {
            *a3 = v28 + v7;
            goto LABEL_15;
          }
          v27 = v27 - v7;
        }
        *a3 = v27;
        goto LABEL_15;
      }
      ++v17;
    }
    else
    {
      v50 = v10 + v15 + 8;
      i = v11 + 1;
      v51 = i + (unsigned int)(v12 - v11 - 2);
      while ( 1 )
      {
        v17 = i;
        if ( v51 == i )
          break;
        v18 = (double *)v50;
        v50 += 8;
        if ( v6 == *v18 )
        {
          v53 = v11 == (_DWORD)i;
          goto LABEL_60;
        }
        ++i;
      }
    }
    if ( v17 == v56 )
    {
      if ( v16 + v7 >= v6 )
      {
        v18 = v58;
        i = v11;
        v17 = v11;
LABEL_68:
        if ( v6 >= v16 - v7 )
        {
          v55 = *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v17 >> 5));
          if ( _bittest(&v55, v17) )
          {
            if ( v11 == v17 )
            {
              i = ++v17;
              v18 = (double *)(v10 + 8LL * v17 + 8);
            }
          }
        }
      }
      else
      {
        v52 = v57;
        for ( i = v11 + 1; ; ++i )
        {
          v17 = i;
          v18 = v52;
          if ( v56 <= (int)i )
            break;
          v16 = *v52++;
          if ( v16 + v7 >= v6 )
            goto LABEL_68;
        }
      }
    }
    else
    {
      i = v17;
      v18 = (double *)(v10 + 8LL * v17 + 8);
    }
    goto LABEL_7;
  }
LABEL_16:
  if ( (v3 & 2) == 0 )
    goto LABEL_32;
  v33 = 8LL * a2;
  v34 = 1.001 * v7;
  v35 = *(_QWORD *)(v4 + 1032);
  v36 = (double *)(v33 + *(_QWORD *)(v4 + 984));
  v37 = *v36;
  v38 = (char *)(a2 + *((_QWORD *)this + 15));
  v39 = (double *)(v33 + *(_QWORD *)(v4 + 1008));
  v40 = *(double *)(*((_QWORD *)this + 17) + v33);
  v41 = *v38;
  result = 1;
  v42 = *v39;
  if ( 1.001 * v7 + *v36 < v6 )
  {
    result = (unsigned int)-(v6 >= v42 - v34);
    v43 = v41 & 0xF;
    if ( !v43 )
      goto LABEL_19;
  }
  else
  {
    v43 = v41 & 0xF;
    if ( !v43 )
    {
LABEL_19:
      v37 = *v39;
      v44 = *(double *)(*((_QWORD *)this + 16) + 8LL * a2);
      --*((_DWORD *)this + 28);
      v42 = v44;
      goto LABEL_20;
    }
  }
  if ( (_BYTE)v43 == 2 )
  {
    v42 = *v36;
    v49 = *(double *)(*((_QWORD *)this + 16) + 8LL * a2);
    --*((_DWORD *)this + 28);
    v37 = v49;
  }
LABEL_20:
  if ( v37 == v42 )
  {
    *a3 = v37;
    v6 = v37;
  }
  if ( v7 < v6 - v42 )
  {
    ++*((_DWORD *)this + 28);
    if ( (_BYTE)v43 != 2 )
    {
      v46 = (double *)(v35 + v33);
      v40 = v40 + *((double *)this + 2);
      v8 = *v46 - v40;
      *v38 = *v38 & 0xF0 | 2;
      *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v37;
      *v36 = v42;
      *v39 = 1.797693134862316e308;
      goto LABEL_26;
    }
    v45 = v6 - v37;
  }
  else
  {
    v45 = v6 - v37;
    if ( v6 - v37 >= -v7 )
    {
      if ( (_BYTE)v43 != 1 )
      {
        v46 = (double *)(v35 + v33);
        v8 = *v46 - v40;
        *v38 = *v38 & 0xF0 | 1;
        *v36 = v37;
        *v39 = v42;
        goto LABEL_26;
      }
    }
    else
    {
      ++*((_DWORD *)this + 28);
      v40 = v40 - *((double *)this + 2);
      if ( (_BYTE)v43 )
      {
        v46 = (double *)(v35 + v33);
        v47 = *v46;
        *v38 &= 0xF0u;
        v8 = v47 - v40;
        *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v42;
        *v39 = v37;
        *v36 = -1.797693134862316e308;
LABEL_26:
        *v46 = v40;
        v48 = *a3;
        v45 = *a3 - v37;
        goto LABEL_30;
      }
    }
  }
  v48 = v6;
LABEL_30:
  if ( v34 < fabs(v45) )
  {
    if ( v34 >= fabs(v48 - v42) )
    {
      v6 = fmax(v48, v42 - v7);
      *a3 = v6;
    }
    else if ( v42 - v48 >= v45 )
    {
      v6 = v37 + v7;
      *a3 = v37 + v7;
    }
    else
    {
      v6 = v42 - v7;
      *a3 = v42 - v7;
    }
  }
  else
  {
    v6 = fmin(v48, v37 + v7);
    *a3 = v6;
  }
LABEL_32:
  *(double *)this = v6 * v8 + *(double *)this;
  return result;
}

