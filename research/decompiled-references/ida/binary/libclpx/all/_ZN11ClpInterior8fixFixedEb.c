void __fastcall ClpInterior::fixFixed(ClpInterior *this, char a2)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // edi
  double v13; // xmm1_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  double *v16; // rsi
  double *v17; // rax
  double v18; // xmm0_8
  double v19; // xmm2_8
  double *v20; // r8
  double v21; // xmm4_8
  double v22; // xmm7_8
  double v23; // xmm0_8
  int v24; // eax
  int v25; // r8d
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  double v29; // xmm4_8
  __int64 v30; // rax
  double v31; // xmm0_8
  double v32; // xmm2_8
  __int64 v33; // rax
  int v34; // edx
  double *v35; // rcx
  double v36; // xmm0_8
  _QWORD *v37; // rdx
  _QWORD *v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // r8d
  __int64 v46; // rax
  int i; // edx
  double *v48; // rsi
  double *v49; // rcx
  double v50; // xmm0_8
  double v51; // xmm2_8
  double v52; // xmm4_8
  double v53; // xmm6_8

  v3 = *((int *)this + 27);
  if ( v3 > 0xFFFFFFFFFFFFFFFLL
    || (v6 = operator new[](8 * v3), v7 = *((int *)this + 26), v8 = (_QWORD *)v6, v7 > 0xFFFFFFFFFFFFFFFLL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v9 = (_QWORD *)operator new[](8 * v7);
  v10 = *((_DWORD *)this + 27);
  if ( v10 )
  {
    if ( v10 / 8 <= 0 )
    {
      v38 = v8;
    }
    else
    {
      v37 = v8;
      do
      {
        *v37 = 0;
        v37[1] = 0;
        v37 += 8;
        *(v37 - 6) = 0;
        *(v37 - 5) = 0;
        *(v37 - 4) = 0;
        *(v37 - 3) = 0;
        *(v37 - 2) = 0;
        *(v37 - 1) = 0;
      }
      while ( v37 != &v8[8 * (unsigned int)(v10 / 8 - 1) + 8] );
      v38 = &v8[8 * (v10 / 8 - 1) + 8];
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_48;
      case 2:
        goto LABEL_47;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_45;
      case 5:
        goto LABEL_44;
      case 6:
        goto LABEL_43;
      case 7:
        v38[6] = 0;
LABEL_43:
        v38[5] = 0;
LABEL_44:
        v38[4] = 0;
LABEL_45:
        v38[3] = 0;
LABEL_46:
        v38[2] = 0;
LABEL_47:
        v38[1] = 0;
LABEL_48:
        v11 = *((_DWORD *)this + 26);
        *v38 = 0;
        if ( v11 )
          goto LABEL_49;
        goto LABEL_5;
      default:
        break;
    }
  }
  v11 = *((_DWORD *)this + 26);
  if ( v11 )
  {
LABEL_49:
    if ( v11 / 8 <= 0 )
    {
      v40 = v9;
    }
    else
    {
      v39 = v9;
      do
      {
        *v39 = 0;
        v39[1] = 0;
        v39 += 8;
        *(v39 - 6) = 0;
        *(v39 - 5) = 0;
        *(v39 - 4) = 0;
        *(v39 - 3) = 0;
        *(v39 - 2) = 0;
        *(v39 - 1) = 0;
      }
      while ( v39 != &v9[8 * (unsigned int)(v11 / 8 - 1) + 8] );
      v40 = &v9[8 * (v11 / 8 - 1) + 8];
    }
    switch ( v11 % 8 )
    {
      case 1:
        goto LABEL_72;
      case 2:
        goto LABEL_71;
      case 3:
        goto LABEL_70;
      case 4:
        goto LABEL_69;
      case 5:
        goto LABEL_68;
      case 6:
        goto LABEL_67;
      case 7:
        v40[6] = 0;
LABEL_67:
        v40[5] = 0;
LABEL_68:
        v40[4] = 0;
LABEL_69:
        v40[3] = 0;
LABEL_70:
        v40[2] = 0;
LABEL_71:
        v40[1] = 0;
LABEL_72:
        *v40 = 0;
        break;
      default:
        break;
    }
  }
LABEL_5:
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD *, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    v8,
    v9,
    1.0);
  v12 = *((_DWORD *)this + 27);
  v13 = *((double *)this + 4);
  if ( v12 > 0 )
  {
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = 8 * v14;
        v16 = (double *)(8 * v14 + *((_QWORD *)this + 23));
        v17 = (double *)(8 * v14 + *((_QWORD *)this + 22));
        v18 = *v16;
        v19 = *v17;
        if ( *v16 >= 1.0e20 && v19 <= -1.0e20 || v18 <= v19 || (*(_BYTE *)(*((_QWORD *)this + 33) + v14) & 4) == 0 )
          goto LABEL_17;
        v20 = (double *)(v15 + *((_QWORD *)this + 15));
        v21 = *v20;
        v22 = v18 - *v20;
        if ( v18 - v21 <= v21 - v19 )
          break;
        v23 = v19 - v21;
        if ( v19 - v21 < 0.0 )
        {
          if ( v13 > -v23 )
          {
LABEL_14:
            if ( a2 )
            {
              *v16 = v19;
              v17 = (double *)(v15 + *((_QWORD *)this + 22));
              v20 = (double *)(*((_QWORD *)this + 15) + v15);
            }
            *(double *)&v8[v14] = v23;
            *v20 = *v17;
            v12 = *((_DWORD *)this + 27);
          }
        }
        else if ( v13 > v23 )
        {
          goto LABEL_14;
        }
LABEL_17:
        if ( (int)++v14 >= v12 )
          goto LABEL_18;
      }
      if ( v22 < 0.0 )
      {
        if ( v13 <= -v22 )
          goto LABEL_17;
      }
      else if ( v13 <= v22 )
      {
        goto LABEL_17;
      }
      if ( a2 )
      {
        *v17 = v18;
        v16 = (double *)(v15 + *((_QWORD *)this + 23));
        v20 = (double *)(*((_QWORD *)this + 15) + v15);
      }
      *(double *)&v8[v14++] = v22;
      *v20 = *v16;
      v12 = *((_DWORD *)this + 27);
    }
    while ( (int)v14 < v12 );
  }
LABEL_18:
  v24 = *((_DWORD *)this + 26);
  if ( v24 )
  {
    if ( v24 / 8 <= 0 )
    {
      v42 = v9;
    }
    else
    {
      v41 = v9;
      do
      {
        *v41 = 0;
        v41[1] = 0;
        v41 += 8;
        *(v41 - 6) = 0;
        *(v41 - 5) = 0;
        *(v41 - 4) = 0;
        *(v41 - 3) = 0;
        *(v41 - 2) = 0;
        *(v41 - 1) = 0;
      }
      while ( v41 != &v9[8 * (unsigned int)(v24 / 8 - 1) + 8] );
      v42 = &v9[8 * (v24 / 8 - 1) + 8];
    }
    switch ( v24 % 8 )
    {
      case 1:
        goto LABEL_65;
      case 2:
        goto LABEL_64;
      case 3:
        goto LABEL_63;
      case 4:
        goto LABEL_62;
      case 5:
        goto LABEL_61;
      case 6:
        goto LABEL_60;
      case 7:
        v42[6] = 0;
LABEL_60:
        v42[5] = 0;
LABEL_61:
        v42[4] = 0;
LABEL_62:
        v42[3] = 0;
LABEL_63:
        v42[2] = 0;
LABEL_64:
        v42[1] = 0;
LABEL_65:
        *v42 = 0;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD *, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    v8,
    v9,
    1.0);
  v25 = *((_DWORD *)this + 26);
  if ( v25 <= 0 )
  {
    if ( 1.5 * *((double *)this + 90) + 0.00001 < 0.0 )
      goto LABEL_27;
    v26 = *((_QWORD **)this + 14);
    if ( v25 )
      goto LABEL_79;
    goto LABEL_92;
  }
  v26 = *((_QWORD **)this + 14);
  v27 = *((_QWORD *)this + 19);
  v28 = 0;
  v29 = 0.0;
  v30 = 8LL * (unsigned int)(v25 - 1) + 8;
  do
  {
    while ( 1 )
    {
      v31 = *(double *)&v26[v28 / 8] + *(double *)&v9[v28 / 8];
      if ( v31 <= *(double *)(v27 + v28) + v13 )
        break;
      v29 = v29 + v31 - *(double *)(v27 + v28) - v13;
LABEL_22:
      v28 += 8LL;
      if ( v30 == v28 )
        goto LABEL_26;
    }
    v32 = *(double *)(*((_QWORD *)this + 18) + v28);
    if ( v32 - v13 <= v31 )
      goto LABEL_22;
    v28 += 8LL;
    v29 = v29 - (v31 - v32 + v13);
  }
  while ( v30 != v28 );
LABEL_26:
  if ( v29 > 1.5 * *((double *)this + 90) + 0.00001 )
  {
LABEL_27:
    if ( *((int *)this + 27) > 0 )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        ++v34;
        v35 = (double *)(v33 * 8 + *((_QWORD *)this + 15));
        v36 = *v35 - *(double *)&v8[v33++];
        *v35 = v36;
      }
      while ( *((_DWORD *)this + 27) > v34 );
    }
    goto LABEL_30;
  }
LABEL_79:
  if ( v25 / 8 > 0 )
  {
    v43 = v26;
    v44 = (unsigned int)(v25 / 8 - 1);
    do
    {
      *v43 = 0;
      v43[1] = 0;
      v43 += 8;
      *(v43 - 6) = 0;
      *(v43 - 5) = 0;
      *(v43 - 4) = 0;
      *(v43 - 3) = 0;
      *(v43 - 2) = 0;
      *(v43 - 1) = 0;
    }
    while ( v43 != &v26[8 * v44 + 8] );
    v26 += 8 * (int)v44 + 8;
  }
  switch ( v25 % 8 )
  {
    case 1:
      goto LABEL_90;
    case 2:
      goto LABEL_89;
    case 3:
      goto LABEL_88;
    case 4:
      goto LABEL_87;
    case 5:
      goto LABEL_86;
    case 6:
      goto LABEL_85;
    case 7:
      v26[6] = 0;
LABEL_85:
      v26[5] = 0;
LABEL_86:
      v26[4] = 0;
LABEL_87:
      v26[3] = 0;
LABEL_88:
      v26[2] = 0;
LABEL_89:
      v26[1] = 0;
LABEL_90:
      *v26 = 0;
      break;
    default:
      break;
  }
  v26 = *((_QWORD **)this + 14);
LABEL_92:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 15),
    v26,
    1.0);
  if ( a2 )
  {
    v45 = *((_DWORD *)this + 26);
    if ( v45 > 0 )
    {
      v46 = 0;
      for ( i = 0; i < v45; ++i )
      {
        v48 = (double *)(v46 + *((_QWORD *)this + 19));
        v49 = (double *)(v46 + *((_QWORD *)this + 18));
        v50 = *v48;
        v51 = *v49;
        if ( (*v48 < 1.0e20 || v51 > -1.0e20)
          && v50 > v51
          && (*(_BYTE *)(*((_QWORD *)this + 33) + i + *((_DWORD *)this + 27)) & 4) != 0 )
        {
          v52 = *(double *)(*((_QWORD *)this + 14) + v46);
          v53 = v51 - v52;
          if ( v50 - v52 <= v52 - v51 )
          {
            if ( v53 < 0.0 )
              v53 = -v53;
            if ( v13 > v53 )
            {
              *v49 = v50;
              *(_QWORD *)(*((_QWORD *)this + 14) + v46) = *(_QWORD *)(*((_QWORD *)this + 19) + v46);
              v45 = *((_DWORD *)this + 26);
            }
          }
          else
          {
            if ( v53 < 0.0 )
              v53 = -v53;
            if ( v13 > v53 )
            {
              *v48 = v51;
              *(_QWORD *)(*((_QWORD *)this + 14) + v46) = *(_QWORD *)(*((_QWORD *)this + 18) + v46);
              v45 = *((_DWORD *)this + 26);
            }
          }
        }
        v46 += 8;
      }
    }
  }
LABEL_30:
  operator delete[](v9);
  operator delete[](v8);
}

