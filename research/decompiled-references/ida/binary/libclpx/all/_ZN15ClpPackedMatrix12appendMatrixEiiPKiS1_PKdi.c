__int64 __fastcall ClpPackedMatrix::appendMatrix(
        ClpPackedMatrix *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        int a7)
{
  __int64 v11; // rdi
  int v12; // r9d
  char v13; // al
  unsigned int appended; // ebp
  __int64 v15; // rdx
  int v16; // ecx
  int v18; // edx
  const double *v19; // [rsp+8h] [rbp-30h]
  const int *v20; // [rsp+10h] [rbp-28h]
  const int *v21; // [rsp+18h] [rbp-20h]
  const double *v22; // [rsp+18h] [rbp-20h]

  v11 = *((_QWORD *)this + 11);
  v12 = a7;
  v13 = *(_BYTE *)(v11 + 8);
  if ( a3 )
  {
    if ( v13 )
    {
      if ( a6 )
        goto LABEL_19;
    }
    else
    {
      if ( a7 <= *(_DWORD *)(v11 + 64) )
      {
        if ( !a6 )
        {
LABEL_10:
          v18 = *(_DWORD *)(v11 + 68);
LABEL_11:
          appended = 0;
          CoinPackedMatrix::setDimensions((CoinPackedMatrix *)v11, -1, a2 + v18);
          goto LABEL_4;
        }
LABEL_19:
        appended = CoinPackedMatrix::appendCols((CoinPackedMatrix *)v11, a2, a4, a5, a6, v12);
        goto LABEL_4;
      }
      v19 = a6;
      v21 = a5;
      CoinPackedMatrix::setDimensions((CoinPackedMatrix *)v11, a7, -1);
      a6 = v19;
      v11 = *((_QWORD *)this + 11);
      if ( v19 )
      {
        a5 = v21;
        v12 = a7;
        goto LABEL_19;
      }
      if ( !*(_BYTE *)(v11 + 8) )
        goto LABEL_10;
    }
    v18 = *(_DWORD *)(v11 + 64);
    goto LABEL_11;
  }
  if ( !v13 )
    goto LABEL_3;
  if ( a7 > *(_DWORD *)(v11 + 64) )
  {
    v22 = a6;
    v20 = a5;
    CoinPackedMatrix::setDimensions((CoinPackedMatrix *)v11, -1, a7);
    v11 = *((_QWORD *)this + 11);
    a6 = v22;
    a5 = v20;
    v12 = a7;
    v13 = *(_BYTE *)(v11 + 8);
  }
  if ( v12 < 0 && v13 == 1 && *(double *)(v11 + 16) == 0.0 )
  {
    appended = 0;
    CoinPackedMatrix::appendMinorFast((CoinPackedMatrix *)v11, a2, a4, a5, a6);
  }
  else
  {
LABEL_3:
    appended = CoinPackedMatrix::appendRows((CoinPackedMatrix *)v11, a2, a4, a5, a6, v12);
  }
LABEL_4:
  ClpPackedMatrix::clearCopies(this);
  v15 = *((_QWORD *)this + 11);
  v16 = *(_DWORD *)(v15 + 64);
  if ( !*(_BYTE *)(v15 + 8) )
    v16 = *(_DWORD *)(v15 + 68);
  *((_DWORD *)this + 24) = v16;
  return appended;
}

