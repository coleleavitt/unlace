__int64 __fastcall ClpNetworkBasis::updateColumnTranspose(ClpNetworkBasis *this, CoinIndexedVector *a2, double *a3)
{
  __int64 v3; // r10
  double *v4; // r8
  __int64 v5; // r11
  __int64 v6; // rcx
  double *v7; // rax
  double v8; // xmm0_8
  __int64 v9; // rax
  double *v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  double i; // xmm0_8
  __int64 v15; // r9
  int v16; // esi
  int v17; // eax
  int v18; // esi
  __int64 v19; // rbx
  int v20; // ebp
  __int64 v21; // rcx
  __int64 v22; // rax
  int *v23; // rax
  int v24; // r9d
  int v25; // eax
  _BYTE *v26; // r8
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // r10
  int *v33; // rsi
  __int64 v34; // rcx
  double *v35; // rsi
  double v36; // xmm0_8
  int v37; // eax

  v3 = *(int *)this;
  v4 = *((double **)a2 + 1);
  v5 = *(_QWORD *)a2;
  if ( !(_DWORD)v3 || a3 == v4 )
  {
    if ( (int)v3 > 0 )
    {
LABEL_15:
      v12 = 1;
      result = 0;
      do
      {
        for ( i = v4[v12 - 1]; i != 0.0; result = v16 )
        {
          v15 = *(int *)(*((_QWORD *)this + 9) + 4 * v12 - 4);
          v4[v12 - 1] = 0.0;
          v16 = result + 1;
          a3[v15] = i;
          *(_DWORD *)(v5 + 4 * result) = v15;
          *(_BYTE *)(*((_QWORD *)this + 13) + v15) = 1;
          v3 = *(int *)this;
          v17 = v12++;
          if ( v17 >= (int)v3 )
            goto LABEL_22;
          i = v4[v12 - 1];
        }
        v18 = v12++;
      }
      while ( v18 < (int)v3 );
      if ( !(_DWORD)result )
      {
        a3[v3] = 0.0;
        return result;
      }
      v16 = result;
LABEL_22:
      v19 = 1;
      v20 = -1;
      do
      {
        while ( 1 )
        {
          v21 = *(int *)(v5 + 4 * v19 - 4);
          v22 = *(int *)(*((_QWORD *)this + 12) + 4 * v21);
          if ( (int)v3 > (int)v22 )
            LODWORD(v3) = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v21);
          if ( v20 < (int)v22 )
            v20 = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v21);
          v23 = (int *)(*((_QWORD *)this + 11) + 4 * v22);
          v24 = *v23;
          *v23 = v21;
          *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v21) = v24;
          v25 = *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v21);
          if ( v25 >= 0 )
            break;
LABEL_30:
          v27 = v19++;
          if ( v27 >= v16 )
            goto LABEL_31;
        }
        do
        {
          while ( 1 )
          {
            v26 = (_BYTE *)(*((_QWORD *)this + 13) + v25);
            if ( *v26 )
              break;
            *(_DWORD *)(v5 + 4LL * v16) = v25;
            *v26 = 1;
            ++v16;
            v25 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v25);
            if ( v25 < 0 )
              goto LABEL_30;
          }
          v25 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v25);
        }
        while ( v25 >= 0 );
        v37 = v19++;
      }
      while ( v37 < v16 );
LABEL_31:
      v28 = *(int *)this;
    }
    else
    {
      v28 = (int)v3;
      v20 = -1;
    }
    a3[v28] = 0.0;
    if ( (int)v3 > v20 )
      return 0;
    v29 = (int)v3;
  }
  else
  {
    if ( (int)v3 >> 3 <= 0 )
    {
      v11 = *((_QWORD **)a2 + 1);
      v10 = a3;
    }
    else
    {
      v6 = *((_QWORD *)a2 + 1);
      v7 = a3;
      do
      {
        v8 = *v7;
        v7 += 8;
        v6 += 64;
        *(double *)(v6 - 64) = v8;
        *(double *)(v6 - 56) = *(v7 - 7);
        *(double *)(v6 - 48) = *(v7 - 6);
        *(double *)(v6 - 40) = *(v7 - 5);
        *(double *)(v6 - 32) = *(v7 - 4);
        *(double *)(v6 - 24) = *(v7 - 3);
        *(double *)(v6 - 16) = *(v7 - 2);
        *(double *)(v6 - 8) = *(v7 - 1);
      }
      while ( &a3[8 * (unsigned int)(((int)v3 >> 3) - 1) + 8] != v7 );
      v9 = (((int)v3 >> 3) - 1 + 1LL) << 6;
      v10 = (double *)((char *)a3 + v9);
      v11 = (_QWORD *)((char *)v4 + v9);
    }
    switch ( (int)v3 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v11[6] = *((_QWORD *)v10 + 6);
LABEL_9:
        v11[5] = *((_QWORD *)v10 + 5);
LABEL_10:
        v11[4] = *((_QWORD *)v10 + 4);
LABEL_11:
        v11[3] = *((_QWORD *)v10 + 3);
LABEL_12:
        v11[2] = *((_QWORD *)v10 + 2);
LABEL_13:
        v11[1] = *((_QWORD *)v10 + 1);
LABEL_14:
        *v11 = *(_QWORD *)v10;
        if ( (int)v3 > 0 )
          goto LABEL_15;
        goto LABEL_48;
      default:
        if ( (int)v3 > 0 )
          goto LABEL_15;
LABEL_48:
        v29 = (int)v3;
        v20 = -1;
        a3[(int)v3] = 0.0;
        break;
    }
  }
  v30 = (unsigned int)(v20 - v3) + v29 + 1;
  v31 = 4 * v29;
  result = 0;
  v32 = 4 * v30;
  do
  {
    v33 = (int *)(v31 + *((_QWORD *)this + 11));
    v34 = *v33;
    for ( *v33 = -1; (int)v34 >= 0; v34 = *(int *)(*((_QWORD *)this + 8) + 4 * v34) )
    {
      *(_BYTE *)(*((_QWORD *)this + 13) + v34) = 0;
      v35 = &a3[v34];
      v36 = *(double *)(*((_QWORD *)this + 7) + 8 * v34) * *v35 + a3[*(int *)(*((_QWORD *)this + 2) + 4 * v34)];
      *v35 = v36;
      if ( v36 != 0.0 )
        result = (unsigned int)(result + 1);
    }
    v31 += 4;
  }
  while ( v32 != v31 );
  return result;
}

