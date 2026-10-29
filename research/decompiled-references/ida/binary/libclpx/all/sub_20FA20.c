__int64 __fastcall sub_20FA20(__int64 a1, int *a2, __int64 a3, double *a4, _DWORD *a5)
{
  int v5; // r9d
  int v6; // r11d
  double v7; // xmm3_8
  int v8; // r10d
  __int64 v9; // rax
  double *v10; // rax
  double v11; // xmm1_8
  _DWORD *v12; // rax
  int v13; // edi
  unsigned int v14; // r9d
  double *v15; // rbx
  double v16; // xmm2_8
  double *v17; // r11
  double v18; // xmm1_8
  int v20; // edi
  unsigned int v21; // r9d
  double *v22; // rbx
  double v23; // xmm2_8
  double *v24; // r11
  double v25; // xmm1_8

  v5 = *(_DWORD *)(a1 + 240);
  v6 = *(_DWORD *)(a1 + 344);
  v7 = *(double *)(a1 + 24);
  v8 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v9 = *a2++;
    v10 = (double *)(a3 + 8 * v9);
    v11 = *v10;
    if ( v6 )
    {
      if ( v11 == 0.0 || (*v10 = 0.0, fabs(v11) < v7) )
      {
        v12 = a5;
        if ( v8 < v5 )
        {
LABEL_9:
          v13 = v8 + 2;
          v14 = v8 + 2 + ((v5 - 1 - v8) & 0xFFFFFFFE);
          while ( 1 )
          {
            v15 = (double *)(a3 + 8LL * *a2);
            v16 = *v15;
            v17 = (double *)(a3 + 8LL * a2[1]);
            v18 = *v17;
            if ( *v15 != 0.0 )
            {
              *v15 = 0.0;
              if ( fabs(v16) >= v7 )
              {
                *a4 = v16;
                *v12++ = v8;
                ++a4;
              }
            }
            if ( v18 != 0.0 )
            {
              *v17 = 0.0;
              if ( fabs(v18) >= v7 )
              {
                *a4 = v18;
                *v12++ = v8 + 1;
                ++a4;
              }
            }
            a2 += 2;
            v8 = v13;
            if ( v13 == v14 )
              break;
            v13 += 2;
          }
        }
        return v12 - a5;
      }
      *a4 = v11;
      v12 = a5 + 1;
      *a5 = 0;
      ++a4;
      v6 = *(_DWORD *)(a1 + 344);
    }
    else
    {
      if ( v11 == 0.0 || (*v10 = 0.0, fabs(v11) < v7) )
      {
        ++a4;
        v12 = a5;
        goto LABEL_21;
      }
      *a4 = v11;
      v12 = a5 + 1;
      *a5 = 0;
      ++a4;
      v6 = *(_DWORD *)(a1 + 344);
    }
  }
  else
  {
    v12 = a5;
  }
  if ( v6 )
  {
    if ( v8 < v5 )
      goto LABEL_9;
    return v12 - a5;
  }
LABEL_21:
  if ( v5 <= v8 )
    return v12 - a5;
  v20 = v8 + 2;
  v21 = v8 + 2 + ((v5 - 1 - v8) & 0xFFFFFFFE);
  while ( 1 )
  {
    v22 = (double *)(a3 + 8LL * *a2);
    v23 = *v22;
    v24 = (double *)(a3 + 8LL * a2[1]);
    v25 = *v24;
    if ( *v22 != 0.0 )
    {
      *v22 = 0.0;
      if ( fabs(v23) >= v7 )
      {
        *a4 = v23;
        *v12++ = v8;
      }
    }
    if ( v25 != 0.0 )
    {
      *v24 = 0.0;
      if ( fabs(v25) >= v7 )
      {
        a4[1] = v25;
        *v12++ = v8 + 1;
      }
    }
    a2 += 2;
    a4 += 2;
    v8 = v20;
    if ( v20 == v21 )
      break;
    v20 += 2;
  }
  return v12 - a5;
}

