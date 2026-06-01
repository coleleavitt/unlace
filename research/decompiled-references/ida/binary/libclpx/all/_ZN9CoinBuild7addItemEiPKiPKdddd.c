__int64 __fastcall CoinBuild::addItem(
        CoinBuild *this,
        int a2,
        int *a3,
        const double *a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v7; // ebx
  _QWORD *v9; // r14
  int v10; // edi
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // r9
  int v18; // esi
  int v19; // edi

  v7 = a2 - 1;
  v9 = *((_QWORD **)this + 4);
  v10 = 12 * (a2 - 1) + 70;
  if ( 12 * (a2 - 1) + 63 >= 0 )
    v10 = 12 * v7 + 63;
  v11 = v10 >> 3;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  result = operator new[](8 * v11);
  if ( *((_QWORD *)this + 3) )
    *v9 = result;
  else
    *((_QWORD *)this + 3) = result;
  *((_DWORD *)this + 2) += a2;
  *((_QWORD *)this + 4) = result;
  v16 = *(_DWORD *)this;
  *((_QWORD *)this + 2) = result;
  v17 = result + 40;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 12) = a2;
  *(double *)(result + 16) = a7;
  *(_DWORD *)(result + 8) = v16;
  *(_DWORD *)this = v16 + 1;
  *(double *)(result + 24) = a5;
  *(double *)(result + 32) = a6;
  if ( a2 > 0 )
  {
    v18 = *a3;
    if ( *a3 < 0 )
    {
LABEL_15:
      printf("bad col %d\n", v18);
      abort();
    }
    v19 = *((_DWORD *)this + 1);
    result = 0;
    while ( 1 )
    {
      if ( v18 >= v19 )
      {
        v19 = v18 + 1;
        *((_DWORD *)this + 1) = v18 + 1;
      }
      *(double *)(v17 + 2 * result) = *(const double *)((char *)a4 + 2 * result);
      *(_DWORD *)(v17 + 8LL * a2 + result) = v18;
      if ( result == 4LL * v7 )
        break;
      result += 4;
      v18 = *(int *)((char *)a3 + result);
      if ( v18 < 0 )
        goto LABEL_15;
    }
  }
  return result;
}

