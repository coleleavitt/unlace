_QWORD *__fastcall ClpPackedMatrix::unpackPacked(ClpPackedMatrix *this, ClpSimplex *a2, CoinIndexedVector *a3, int a4)
{
  __int64 v4; // r8
  _QWORD *result; // rax
  __int64 v6; // r11
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r10
  __int64 v10; // r13
  int *v11; // rbx
  _DWORD *v12; // r8
  __int64 v13; // r9
  int v14; // edi
  double v15; // xmm2_8
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // r13
  __int64 v20; // r10
  __int64 v21; // rcx
  double v22; // xmm0_8
  __int64 v23; // rsi
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // r13
  __int64 v27; // r10
  int v28; // ecx
  double v29; // xmm0_8
  int v30; // edi
  __int64 v31; // rsi
  int v32; // esi

  v4 = 4LL * a4;
  result = *((_QWORD **)this + 11);
  v6 = *((_QWORD *)a2 + 28);
  v7 = *(_QWORD *)a3;
  v8 = *((_QWORD *)a3 + 1);
  v9 = result[5];
  v10 = result[4];
  v11 = (int *)(v4 + result[6]);
  v12 = (_DWORD *)(result[7] + v4);
  v13 = *v11;
  v14 = v13 + *v12;
  if ( v6 )
  {
    result = *((_QWORD **)a2 + 29);
    v15 = *(double *)&result[a4];
    if ( (int)v13 >= v14 )
    {
      v18 = 0;
    }
    else
    {
      result = (_QWORD *)((int)v13 + 1);
      v16 = -8LL * (_QWORD)result + 8 * v13;
      v17 = -4LL * (_QWORD)result + 4 * v13;
      v18 = 0;
      v19 = v16 + v10;
      v20 = v17 + v9;
      do
      {
        while ( 1 )
        {
          v21 = *(int *)(v20 + 4LL * (_QWORD)result);
          v22 = *(double *)(v19 + 8LL * (_QWORD)result) * v15 * *(double *)(v6 + 8 * v21);
          if ( v22 == 0.0 )
            break;
          v23 = v18++;
          *(double *)(v8 + 8 * v23) = v22;
          *(_DWORD *)(v7 + 4 * v23) = v21;
          v14 = *v11 + *v12;
          v24 = (int)result;
          result = (_QWORD *)((char *)result + 1);
          if ( v14 <= v24 )
            goto LABEL_6;
        }
        v25 = (int)result;
        result = (_QWORD *)((char *)result + 1);
      }
      while ( v14 > v25 );
    }
LABEL_6:
    *((_DWORD *)a3 + 4) = v18;
    *((_BYTE *)a3 + 28) = 1;
  }
  else if ( (int)v13 >= v14 )
  {
    v28 = 0;
LABEL_13:
    *((_DWORD *)a3 + 4) = v28;
    *((_BYTE *)a3 + 28) = 1;
  }
  else
  {
    result = (_QWORD *)((int)v13 + 1);
    v26 = -8LL * (_QWORD)result + 8 * v13 + v10;
    v27 = 4 * v13 - 4LL * (_QWORD)result + v9;
    v28 = 0;
    do
    {
      while ( 1 )
      {
        v29 = *(double *)(v26 + 8LL * (_QWORD)result);
        if ( v29 == 0.0 )
          break;
        v30 = *(_DWORD *)(v27 + 4LL * (_QWORD)result);
        v31 = v28++;
        *(double *)(v8 + 8 * v31) = v29;
        *(_DWORD *)(v7 + 4 * v31) = v30;
        LODWORD(v31) = (_DWORD)result;
        result = (_QWORD *)((char *)result + 1);
        v14 = *v11 + *v12;
        if ( v14 <= (int)v31 )
          goto LABEL_13;
      }
      v32 = (int)result;
      result = (_QWORD *)((char *)result + 1);
    }
    while ( v14 > v32 );
    *((_DWORD *)a3 + 4) = v28;
    *((_BYTE *)a3 + 28) = 1;
  }
  return result;
}

