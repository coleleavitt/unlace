// Alternative name is '_ZN21ClpQuadraticObjectiveC2EPKdiPKiS3_S1_i'
void __fastcall ClpQuadraticObjective::ClpQuadraticObjective(
        ClpQuadraticObjective *this,
        const double *a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        int a7)
{
  const double *v8; // r12
  int v12; // eax
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  const double *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm2
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm3
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  CoinPackedMatrix *v24; // r12
  void *v25; // rax
  __int64 v26; // rdx

  v8 = a2;
  ClpObjective::ClpObjective(this);
  *((_DWORD *)this + 4) = 2;
  *(_QWORD *)this = &off_4D12A0;
  v12 = a3;
  *((_DWORD *)this + 12) = a3;
  if ( a7 < 0 )
  {
    *((_DWORD *)this + 13) = a3;
    v13 = a3;
    if ( a2 )
    {
LABEL_5:
      if ( v13 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v14 = operator new[](8 * v13);
      v15 = *((int *)this + 12);
      *((_QWORD *)this + 4) = v14;
      if ( (_DWORD)v15 && v8 != (const double *)v14 )
      {
        if ( (int)v15 >> 3 <= 0 )
        {
          v23 = (_QWORD *)v14;
        }
        else
        {
          v16 = v8;
          v17 = v14;
          do
          {
            v18 = *((_OWORD *)v16 + 1);
            v17 += 64;
            v16 += 8;
            v19 = *((_OWORD *)v16 - 2);
            v20 = *((_OWORD *)v16 - 1);
            v21 = *((_OWORD *)v16 - 4);
            *(_OWORD *)(v17 - 48) = v18;
            *(_OWORD *)(v17 - 64) = v21;
            *(_OWORD *)(v17 - 32) = v19;
            *(_OWORD *)(v17 - 16) = v20;
          }
          while ( v17 != v14 + (((unsigned int)(((int)v15 >> 3) - 1) + 1LL) << 6) );
          v22 = (((int)v15 >> 3) - 1 + 1LL) << 6;
          v8 = (const double *)((char *)v8 + v22);
          v23 = (_QWORD *)(v14 + v22);
        }
        switch ( (int)v15 % 8 )
        {
          case 1:
            goto LABEL_19;
          case 2:
            goto LABEL_18;
          case 3:
            goto LABEL_17;
          case 4:
            goto LABEL_16;
          case 5:
            goto LABEL_15;
          case 6:
            goto LABEL_14;
          case 7:
            v23[6] = *((_QWORD *)v8 + 6);
LABEL_14:
            v23[5] = *((_QWORD *)v8 + 5);
LABEL_15:
            v23[4] = *((_QWORD *)v8 + 4);
LABEL_16:
            v23[3] = *((_QWORD *)v8 + 3);
LABEL_17:
            v23[2] = *((_QWORD *)v8 + 2);
LABEL_18:
            v23[1] = *((_QWORD *)v8 + 1);
LABEL_19:
            *v23 = *(_QWORD *)v8;
            break;
          default:
            break;
        }
      }
      memset((void *)(v14 + 8 * v15), 0, 8LL * (*((_DWORD *)this + 13) - (int)v15));
      goto LABEL_21;
    }
  }
  else
  {
    if ( a3 < a7 )
      v12 = a7;
    v13 = v12;
    *((_DWORD *)this + 13) = v12;
    if ( a2 )
      goto LABEL_5;
  }
  if ( v13 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v25 = (void *)operator new[](8 * v13);
  v26 = *((int *)this + 13);
  *((_QWORD *)this + 4) = v25;
  memset(v25, 0, 8 * v26);
LABEL_21:
  if ( a4 )
  {
    v24 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v24, 1, a3, a3, a4[a3], a6, a5, a4, nullptr);
    *((_QWORD *)this + 3) = v24;
  }
  else
  {
    *((_QWORD *)this + 3) = 0;
  }
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 5) = 1;
  *((_BYTE *)this + 56) = 0;
}

