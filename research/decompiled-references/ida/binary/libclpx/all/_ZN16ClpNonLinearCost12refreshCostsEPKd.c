unsigned __int64 __fastcall ClpNonLinearCost::refreshCosts(ClpNonLinearCost *this, double *a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 result; // rax
  int v6; // esi
  double *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r10
  __int64 v15; // r9
  int v16; // edx
  int v17; // ecx
  double v18; // xmm0_8
  __int64 v19; // r12
  double *v20; // r14
  int v21; // r13d
  int v22; // esi
  _QWORD *v23; // r8
  int v24; // edi
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r11d
  __int64 v28; // rcx
  unsigned __int64 v29; // r9
  _QWORD *v30; // rcx
  int v31; // edi
  int v32; // edi

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 1032LL);
  result = (unsigned __int64)memset((void *)(v4 + 8LL * *((int *)this + 13)), 0, 8LL * *((int *)this + 12));
  v6 = *((_DWORD *)this + 13);
  if ( v6 && a2 != (double *)v4 )
  {
    if ( v6 >> 3 <= 0 )
    {
      result = v4;
    }
    else
    {
      v7 = a2;
      v8 = v4;
      do
      {
        v9 = *(_QWORD *)v7;
        v8 += 64LL;
        v7 += 8;
        *(_QWORD *)(v8 - 64) = v9;
        *(double *)(v8 - 56) = *(v7 - 7);
        *(double *)(v8 - 48) = *(v7 - 6);
        *(double *)(v8 - 40) = *(v7 - 5);
        *(double *)(v8 - 32) = *(v7 - 4);
        *(double *)(v8 - 24) = *(v7 - 3);
        *(double *)(v8 - 16) = *(v7 - 2);
        *(double *)(v8 - 8) = *(v7 - 1);
      }
      while ( v8 != v4 + (((unsigned int)((v6 >> 3) - 1) + 1LL) << 6) );
      v10 = ((v6 >> 3) - 1 + 1LL) << 6;
      a2 = (double *)((char *)a2 + v10);
      result = v4 + v10;
    }
    switch ( v6 % 8 )
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
        *(double *)(result + 48) = a2[6];
LABEL_9:
        *(double *)(result + 40) = a2[5];
LABEL_10:
        *(double *)(result + 32) = a2[4];
LABEL_11:
        *(double *)(result + 24) = a2[3];
LABEL_12:
        *(double *)(result + 16) = a2[2];
LABEL_13:
        *(double *)(result + 8) = a2[1];
LABEL_14:
        *(double *)result = *a2;
        break;
      default:
        break;
    }
  }
  v11 = *((_DWORD *)this + 36);
  if ( (v11 & 1) != 0 )
  {
    result = (unsigned int)(v6 + *((_DWORD *)this + 12));
    if ( (int)result <= 0 )
      return result;
    v12 = *((_QWORD *)this + 7);
    v13 = *((_QWORD *)this + 13);
    v14 = 4LL * (unsigned int)(result - 1) + 4;
    v15 = *((_QWORD *)this + 11);
    result = 0;
    do
    {
      v17 = *(_DWORD *)(v12 + result + 4);
      v18 = *(double *)(v4 + 2 * result);
      v19 = *(int *)(v12 + result);
      v20 = (double *)(v15 + 8 * v19);
      v21 = *(_DWORD *)(v13 + 4LL * (*(int *)(v12 + result) >> 5));
      if ( _bittest(&v21, v19) )
      {
        *v20 = v18 - *((double *)this + 2);
        *(double *)(v15 + 8 * v19 + 8) = v18;
      }
      else
      {
        *v20 = v18;
      }
      v16 = *(_DWORD *)(v13 + 4LL * ((v17 - 2) >> 5));
      if ( _bittest(&v16, v17 - 2) )
        *(double *)(v15 + 8LL * (v17 - 1) - 8) = v18 + *((double *)this + 2);
      result += 4LL;
    }
    while ( result != v14 );
  }
  if ( (v11 & 2) != 0 )
  {
    v22 = *((_DWORD *)this + 12) + v6;
    if ( v22 > 0 )
    {
      v23 = *((_QWORD **)this + 17);
      if ( (v4 >= (unsigned __int64)(v23 + 2) || (unsigned __int64)v23 >= v4 + 16) && (unsigned int)v22 > 0x18 )
      {
        v24 = 0;
        if ( ((v4 >> 3) & 1) != 0 )
        {
          v24 = 1;
          *v23 = *(_QWORD *)v4;
        }
        v25 = 0;
        v26 = 0;
        v27 = v22 - ((v4 >> 3) & 1);
        v28 = (v4 >> 3) & 1;
        v29 = v4 + v28 * 8;
        v30 = &v23[v28];
        do
        {
          ++v26;
          *(_OWORD *)&v30[v25] = *(_OWORD *)(v29 + v25 * 8);
          v25 += 2;
        }
        while ( v26 < v27 >> 1 );
        result = v27 & 0xFFFFFFFE;
        v31 = result + v24;
        if ( v27 != (_DWORD)result )
        {
          result = v31;
          v32 = v31 + 1;
          v23[result] = *(_QWORD *)(v4 + 8 * result);
          if ( v32 < v22 )
            v23[v32] = *(_QWORD *)(v4 + 8LL * v32);
        }
      }
      else
      {
        result = 0;
        do
        {
          *(_QWORD *)((char *)v23 + result) = *(_QWORD *)(v4 + result);
          result += 8LL;
        }
        while ( 8LL * (unsigned int)(v22 - 1) + 8 != result );
      }
    }
  }
  return result;
}

