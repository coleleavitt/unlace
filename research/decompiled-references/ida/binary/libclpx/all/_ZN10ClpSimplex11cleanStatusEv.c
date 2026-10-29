__int64 __fastcall ClpSimplex::cleanStatus(ClpSimplex *this)
{
  __int64 result; // rax
  int v3; // r9d
  int v4; // r8d
  __int64 v5; // rdi
  int v6; // esi
  int i; // ecx
  double v8; // xmm2_8
  double v9; // xmm3_8
  double v10; // xmm2_8
  double *v11; // rdx
  double v12; // xmm3_8
  double v13; // xmm1_8
  char *v14; // rcx
  char v15; // dl
  double v16; // xmm1_8
  double v17; // xmm2_8

  memset(*((void **)this + 151), 0, 8LL * *((int *)this + 26));
  result = ClpModel::times(this, 1.0, *((const double **)this + 152), *((double **)this + 151));
  if ( *((_QWORD *)this + 33) )
  {
    v3 = *((_DWORD *)this + 26);
    v4 = *((_DWORD *)this + 27);
    if ( v3 > 0 )
      goto LABEL_3;
LABEL_28:
    v6 = 0;
    goto LABEL_9;
  }
  result = ClpSimplex::createStatus(this);
  v3 = *((_DWORD *)this + 26);
  v4 = *((_DWORD *)this + 27);
  if ( v3 <= 0 )
    goto LABEL_28;
LABEL_3:
  v5 = 0;
  v6 = 0;
  for ( i = 0; i < v3; ++i )
  {
    while ( 1 )
    {
      result = *((_QWORD *)this + 33) + i + v4;
      if ( (*(_BYTE *)result & 7) != 1 )
        break;
      ++i;
      ++v6;
      v5 += 8;
      if ( i >= v3 )
        goto LABEL_9;
    }
    *(_BYTE *)result = *(_BYTE *)result & 0xF8 | 4;
    v8 = *((double *)this + 110);
    result = v5 + *((_QWORD *)this + 151);
    v9 = *(double *)(*((_QWORD *)this + 124) + v5);
    if ( v8 < fabs(*(double *)result - v9) )
    {
      v16 = *(double *)(*((_QWORD *)this + 127) + v5);
      if ( v8 >= fabs(*(double *)result - v16) )
      {
        *(double *)result = v16;
        result = *((_QWORD *)this + 33) + i + *((_DWORD *)this + 27);
        *(_BYTE *)result = *(_BYTE *)result & 0xF8 | 2;
      }
      v4 = *((_DWORD *)this + 27);
      v3 = *((_DWORD *)this + 26);
    }
    else
    {
      *(double *)result = v9;
      result = *((_QWORD *)this + 33) + i + *((_DWORD *)this + 27);
      *(_BYTE *)result = *(_BYTE *)result & 0xF8 | 3;
      v4 = *((_DWORD *)this + 27);
      v3 = *((_DWORD *)this + 26);
    }
    v5 += 8;
  }
LABEL_9:
  if ( v4 > 0 )
  {
    result = 0;
    while ( 1 )
    {
      v14 = (char *)(result + *((_QWORD *)this + 33));
      v15 = *v14;
      if ( (*v14 & 7) != 1 )
        break;
      if ( *((_DWORD *)this + 26) == v6 )
      {
        *v14 = v15 & 0xF8 | 4;
        v17 = *((double *)this + 110);
        v11 = (double *)(*((_QWORD *)this + 152) + 8 * result);
        v12 = *(double *)(*((_QWORD *)this + 125) + 8 * result);
        if ( v17 >= fabs(*v11 - v12) )
        {
LABEL_24:
          *v11 = v12;
          *(_BYTE *)(result + *((_QWORD *)this + 33)) = *(_BYTE *)(result + *((_QWORD *)this + 33)) & 0xF8 | 3;
          v4 = *((_DWORD *)this + 27);
          goto LABEL_15;
        }
        v13 = *(double *)(*((_QWORD *)this + 128) + 8 * result);
        if ( v17 >= fabs(*v11 - v13) )
        {
LABEL_13:
          *v11 = v13;
          *(_BYTE *)(result + *((_QWORD *)this + 33)) = *(_BYTE *)(result + *((_QWORD *)this + 33)) & 0xF8 | 2;
        }
LABEL_14:
        v4 = *((_DWORD *)this + 27);
LABEL_15:
        if ( (int)++result >= v4 )
          return result;
      }
      else
      {
        ++v6;
        if ( (int)++result >= v4 )
          return result;
      }
    }
    *v14 = v15 & 0xF8 | 4;
    v10 = *((double *)this + 110);
    v11 = (double *)(*((_QWORD *)this + 152) + 8 * result);
    v12 = *(double *)(*((_QWORD *)this + 125) + 8 * result);
    if ( v10 >= fabs(*v11 - v12) )
      goto LABEL_24;
    v13 = *(double *)(*((_QWORD *)this + 128) + 8 * result);
    if ( v10 >= fabs(*v11 - v13) )
      goto LABEL_13;
    goto LABEL_14;
  }
  return result;
}

