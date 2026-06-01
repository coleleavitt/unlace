__int64 __fastcall ClpPackedMatrix::rangeOfElements(
        ClpPackedMatrix *this,
        double *a2,
        double *a3,
        double *a4,
        double *a5)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rbp
  int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rdi
  double v15; // xmm0_8

  *a2 = -1.797693134862316e308;
  *a3 = 0.0;
  *a4 = 1.797693134862316e308;
  result = *((_QWORD *)this + 11);
  *a5 = 0.0;
  v6 = *(_QWORD *)(result + 32);
  v7 = *(_QWORD *)(result + 48);
  v8 = *(_QWORD *)(result + 56);
  v9 = *(_DWORD *)(result + 64);
  if ( !*(_BYTE *)(result + 8) )
    v9 = *(_DWORD *)(result + 68);
  if ( v9 > 0 )
  {
    v10 = 0;
    v11 = 4LL * (unsigned int)(v9 - 1) + 4;
    while ( 1 )
    {
      result = *(unsigned int *)(v7 + v10);
      v12 = *(_DWORD *)(v8 + v10);
      if ( (int)result < (int)result + v12 )
        break;
LABEL_12:
      v10 += 4;
      if ( v10 == v11 )
        return result;
    }
    v13 = (int)result;
    result = v6 + 8LL * (int)result;
    v14 = v6 + 8 + 8 * ((unsigned int)(v12 - 1) + v13);
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(double *)result;
        if ( *(double *)result <= 0.0 )
          break;
        *a4 = fmin(*a4, v15);
        *a5 = fmax(*a5, v15);
LABEL_8:
        result += 8;
        if ( result == v14 )
          goto LABEL_12;
      }
      if ( v15 >= 0.0 )
        goto LABEL_8;
      result += 8;
      *a2 = fmax(*a2, v15);
      *a3 = fmin(*a3, v15);
      if ( result == v14 )
        goto LABEL_12;
    }
  }
  return result;
}

