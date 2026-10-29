char __fastcall ClpPrimalColumnSteepest::looksOptimal(ClpPrimalColumnSteepest *this)
{
  char result; // al
  __int64 v2; // rdx
  double v3; // xmm1_8
  double v4; // xmm0_8
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  double v8; // xmm2_8
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // ecx
  double v16; // xmm1_8
  unsigned __int8 v17; // dl
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // ecx
  double v22; // xmm1_8
  unsigned __int8 v23; // dl
  int v24; // edx
  double v25; // xmm2_8
  int v26; // r10d
  int v27; // r11d
  int v28; // edx
  double v29; // xmm2_8
  int v30; // r10d
  signed int v31; // r11d
  int v32; // ebx

  result = *((_BYTE *)this + 20);
  if ( result )
    return result;
  v2 = *((_QWORD *)this + 1);
  v3 = *(double *)(v2 + 768);
  v4 = fmin(0.01, v3) + *(double *)(v2 + 872);
  if ( *(_DWORD *)(v2 + 1328) + 199 >= *(_DWORD *)(v2 + 308) )
  {
    v5 = *(_QWORD *)(v2 + 1264);
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 68);
    else
      v7 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 52LL);
    v8 = 0.000001;
    if ( v7 )
      v8 = 0.00000001;
    if ( v3 > v8 )
      v4 = v4 * (v3 / v8);
    v4 = fmin(1000.0, v4);
  }
  v9 = *(_QWORD *)(v2 + 1320);
  v10 = *(_DWORD *)(v2 + 104) + *(_DWORD *)(v2 + 108);
  v11 = *(_QWORD *)(v2 + 1176);
  result = *(_BYTE *)(v9 + 149);
  if ( result )
  {
    if ( v10 <= 0 )
      return result;
    v18 = *(_QWORD *)(v2 + 264);
    v19 = (unsigned int)(v10 - 1) + 1LL;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = *(double *)(v11 + 8 * v20);
      v23 = *(_BYTE *)(v18 + v20) & 7;
      if ( v23 == 2 )
      {
        if ( v22 > v4 )
          goto LABEL_45;
        v28 = *(_DWORD *)(v9 + 144);
        v29 = 0.0;
        if ( (v28 & 1) != 0 )
        {
          v29 = -1.0e100;
          v30 = *(_DWORD *)(*(_QWORD *)(v9 + 64) + 4 * v20) + *(_DWORD *)(*(_QWORD *)(v9 + 72) + 4 * v20);
          v31 = v30 + 1;
          if ( v30 + 1 != *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4 * v20 + 4) )
          {
            v29 = -1.0e100;
            v32 = *(_DWORD *)(*(_QWORD *)(v9 + 104) + 4LL * (v31 >> 5));
            if ( !_bittest(&v32, v31) )
              v29 = *(double *)(*(_QWORD *)(v9 + 88) + 8LL * v30) - *(double *)(*(_QWORD *)(v9 + 88) + 8LL * v30 + 8);
          }
        }
        if ( (v28 & 2) != 0 )
          v29 = -*(double *)(v9 + 16);
        ++v20;
        v21 += -v4 > v22 - v29;
        if ( v19 == v20 )
          return v21 == 0;
      }
      else
      {
        if ( v23 <= 2u )
        {
          if ( v23 )
            goto LABEL_27;
LABEL_26:
          v21 += fabs(v22) > v4 * 100.0;
          goto LABEL_27;
        }
        if ( v23 == 3 )
        {
          if ( -v4 > v22 )
          {
LABEL_45:
            ++v20;
            ++v21;
            if ( v19 == v20 )
              return v21 == 0;
          }
          else
          {
            v24 = *(_DWORD *)(v9 + 144);
            v25 = 0.0;
            if ( (v24 & 1) != 0 )
            {
              v26 = *(_DWORD *)(*(_QWORD *)(v9 + 64) + 4 * v20) + *(_DWORD *)(*(_QWORD *)(v9 + 72) + 4 * v20);
              if ( v26 == *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4 * v20) )
              {
                v25 = 1.0e100;
              }
              else
              {
                v25 = 1.0e100;
                v27 = *(_DWORD *)(*(_QWORD *)(v9 + 104) + 4LL * ((v26 - 1) >> 5));
                if ( !_bittest(&v27, v26 - 1) )
                  v25 = *(double *)(*(_QWORD *)(v9 + 88) + 8LL * v26)
                      - *(double *)(*(_QWORD *)(v9 + 88) + 8LL * v26 - 8);
              }
            }
            if ( (v24 & 2) != 0 )
              v25 = *(double *)(v9 + 16);
            ++v20;
            v21 += v22 - v25 > v4;
            if ( v19 == v20 )
              return v21 == 0;
          }
        }
        else
        {
          if ( v23 == 4 )
            goto LABEL_26;
LABEL_27:
          if ( v19 == ++v20 )
            return v21 == 0;
        }
      }
    }
  }
  if ( v10 > 0 )
  {
    v12 = *(_QWORD *)(v2 + 264);
    v13 = 0;
    v14 = (unsigned int)(v10 - 1) + 1LL;
    v15 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = *(double *)(v11 + 8 * v13);
        v17 = *(_BYTE *)(v12 + v13) & 7;
        if ( v17 != 2 )
          break;
        ++v13;
        v15 += v16 > v4;
        if ( v14 == v13 )
          return v15 == 0;
      }
      if ( v17 <= 2u )
        break;
      if ( v17 == 3 )
      {
        ++v13;
        v15 += -v4 > v16;
        if ( v14 == v13 )
          return v15 == 0;
      }
      else
      {
        if ( v17 == 4 )
          goto LABEL_17;
LABEL_18:
        if ( v14 == ++v13 )
          return v15 == 0;
      }
    }
    if ( v17 )
      goto LABEL_18;
LABEL_17:
    v15 += fabs(v16) > v4 * 100.0;
    goto LABEL_18;
  }
  return 1;
}

