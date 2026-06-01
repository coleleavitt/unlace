__int64 __fastcall CoinPackedMatrix::countOrthoLength(CoinPackedMatrix *this, int *a2)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r10
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r11
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r9
  int *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int *v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  int *v21; // rax
  int v22; // ecx
  __int64 v23; // rcx

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    v20 = v2 + 7;
    v21 = a2;
    if ( v2 >= 0 )
      v20 = *((_DWORD *)this + 17);
    v22 = v20 >> 3;
    if ( v22 > 0 )
    {
      v23 = (unsigned int)(v22 - 1);
      do
      {
        *(_OWORD *)v21 = 0;
        v21 += 8;
        *((_OWORD *)v21 - 1) = 0;
      }
      while ( &a2[8 * v23 + 8] != v21 );
      v21 = &a2[8 * (int)v23 + 8];
    }
    switch ( v2 % 8 )
    {
      case 1:
        goto LABEL_32;
      case 2:
        goto LABEL_31;
      case 3:
        goto LABEL_30;
      case 4:
        goto LABEL_29;
      case 5:
        goto LABEL_28;
      case 6:
        goto LABEL_27;
      case 7:
        v21[6] = 0;
LABEL_27:
        v21[5] = 0;
LABEL_28:
        v21[4] = 0;
LABEL_29:
        v21[3] = 0;
LABEL_30:
        v21[2] = 0;
LABEL_31:
        v21[1] = 0;
LABEL_32:
        *v21 = 0;
        break;
      default:
        break;
    }
  }
  v3 = *((int *)this + 16);
  v4 = *((_QWORD *)this + 6);
  v5 = *((_DWORD *)this + 18);
  result = v3;
  if ( v5 == *(_DWORD *)(v4 + 4 * v3) )
  {
    if ( v5 > 0 )
    {
      v18 = *((int **)this + 5);
      result = (__int64)(v18 + 1);
      v19 = (__int64)&v18[v5 - 1 + 1];
      while ( 1 )
      {
        ++a2[*v18];
        v18 = (int *)result;
        if ( v19 == result )
          break;
        result += 4;
      }
    }
  }
  else if ( (int)v3 > 0 )
  {
    v7 = *((_QWORD *)this + 7);
    v8 = 1;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v4 + 4 * v8 - 4);
      v10 = v9 + *(_DWORD *)(v7 + 4 * v8 - 4);
      if ( v9 < v10 )
        break;
      v17 = v8++;
      if ( v17 >= (int)result )
        return result;
    }
    while ( 1 )
    {
      v11 = *((_QWORD *)this + 5);
      v12 = (int *)(v11 + 4LL * v9);
      v13 = v11 + 4 * (v9 + (unsigned __int64)(unsigned int)(v10 - v9 - 1)) + 4;
      do
      {
        v14 = *v12++;
        ++a2[v14];
      }
      while ( v12 != (int *)v13 );
      result = *((unsigned int *)this + 16);
      v15 = v8++;
      if ( v15 >= (int)result )
        break;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v4 + 4 * v8 - 4);
        v10 = v9 + *(_DWORD *)(v7 + 4 * v8 - 4);
        if ( v9 < v10 )
          break;
        v16 = v8++;
        if ( v16 >= (int)result )
          return result;
      }
    }
  }
  return result;
}

