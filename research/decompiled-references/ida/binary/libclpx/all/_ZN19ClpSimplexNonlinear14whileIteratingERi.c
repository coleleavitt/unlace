__int64 __fastcall ClpSimplexNonlinear::whileIterating(ClpSimplexNonlinear *this, int *a2)
{
  unsigned __int64 v3; // rdi
  int v5; // r13d
  double *v6; // r14
  int v7; // edx
  unsigned int v8; // r12d
  CoinIndexedVector *v9; // r8
  CoinIndexedVector *v10; // rcx
  CoinIndexedVector *v11; // rdx
  CoinIndexedVector *v12; // rsi
  int v13; // eax
  CoinIndexedVector *v15; // rdi
  unsigned int v16; // eax
  int v17; // esi
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  ClpPrimalColumnPivot *v22; // rdi
  void (__fastcall *v23)(ClpPrimalColumnPivot *, char); // rax
  double v24; // [rsp+10h] [rbp-48h] BYREF
  double v25; // [rsp+18h] [rbp-40h] BYREF
  char v26[8]; // [rsp+20h] [rbp-38h] BYREF
  double v27[6]; // [rsp+28h] [rbp-30h] BYREF

  v3 = 2 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v5 = 0;
  v6 = (double *)operator new[](8 * v3);
  v7 = *((_DWORD *)this + 80);
  v8 = -1;
  v24 = -1.0;
  while ( v7 == -1 )
  {
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
    if ( v5 > 4 )
    {
      if ( *a2 <= 9 )
        *a2 = 1;
      v5 = 0;
      ClpSimplexPrimal::unflag(this);
    }
    v9 = *((CoinIndexedVector **)this + 133);
    v10 = *((CoinIndexedVector **)this + 138);
    v11 = *((CoinIndexedVector **)this + 132);
    v12 = *((CoinIndexedVector **)this + 135);
    *((_DWORD *)this + 292) = -1;
    v13 = ClpSimplexNonlinear::pivotColumn(this, v12, v11, v10, v9, a2, &v24, v6);
    if ( v13 )
    {
      if ( v13 != 2 )
      {
        if ( v13 == 3 )
          break;
        goto LABEL_28;
      }
      if ( *((int *)this + 288) < 0
        && ((*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, _QWORD, _QWORD, double *, char *, double, double *))(**((_QWORD **)this + 20) + 16LL))(
              *((_QWORD *)this + 20),
              this,
              *((_QWORD *)this + 150),
              *((_QWORD *)this + 150),
              &v25,
              v26,
              0.0,
              v27),
            v13 = 2,
            v25 == v27[0]) )
      {
        v19 = *((_QWORD *)this + 158);
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
          v7 = *(_DWORD *)(v20 + 68);
        else
          v7 = *(_DWORD *)(*(_QWORD *)(v19 + 16) + 52LL);
        if ( v7 )
          break;
        *((_DWORD *)this + 80) = 0;
        if ( *a2 > 9 )
          break;
LABEL_29:
        ++v5;
        *a2 = v13 - 1;
      }
      else
      {
LABEL_28:
        v7 = *((_DWORD *)this + 80);
        if ( *a2 <= 9 )
          goto LABEL_29;
      }
    }
    else
    {
      if ( *a2 <= 9 )
      {
        if ( *((double *)this + 100) <= 0.001 )
        {
          if ( *a2 == 2 )
            *a2 = 1;
        }
        else
        {
          *a2 = 0;
        }
      }
      v15 = *((CoinIndexedVector **)this + 133);
      *((_DWORD *)this + 290) = -1;
      CoinIndexedVector::clear(v15);
      if ( *((int *)this + 288) < 0 )
      {
        if ( *a2 <= 9 )
        {
          v22 = *((ClpPrimalColumnPivot **)this + 156);
          v23 = *(void (__fastcall **)(ClpPrimalColumnPivot *, char))(*(_QWORD *)v22 + 48LL);
          if ( v23 == ClpPrimalColumnPivot::setLooksOptimal )
            *((_BYTE *)v22 + 20) = 1;
          else
            v23(v22, 1);
        }
        else
        {
          v21 = *a2 - 1;
          if ( *a2 == 10 )
            v21 = 0;
          *a2 = v21;
          ClpSimplexPrimal::unflag(this);
        }
        v8 = *(_DWORD *)(*((_QWORD *)this + 165) + 112LL);
        if ( v8 )
        {
          *((_DWORD *)this + 80) = -4;
          v8 = 0;
        }
        break;
      }
      if ( *((int *)this + 292) < 0 && *((double *)this + 100) < 0.00000001 )
      {
        v8 = ClpSimplexPrimal::pivotResult(this, 1);
      }
      else
      {
        v16 = ClpSimplexNonlinear::pivotNonlinearResult(this);
        v17 = *((_DWORD *)this + 290);
        v8 = v16;
        if ( v17 >= 0 && *((double *)this + 100) < 0.00001 )
        {
          v18 = *(_BYTE *)(*((_QWORD *)this + 33) + v17) & 7;
          if ( v18 != 5 )
          {
            if ( v18 == 2 )
            {
              *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * v17) = *(_QWORD *)(*((_QWORD *)this + 126) + 8LL * v17);
            }
            else if ( v18 == 3 )
            {
              *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * v17) = *(_QWORD *)(*((_QWORD *)this + 123) + 8LL * v17);
            }
            ClpSimplex::setFlagged(this, v17);
          }
        }
      }
      if ( v8 + 4 <= 2 )
      {
LABEL_26:
        *((_DWORD *)this + 80) = -2;
        break;
      }
      if ( v8 != -5 )
      {
        if ( v8 == 2 )
        {
          *((_DWORD *)this + 80) = -5;
          break;
        }
        if ( v8 == 4 )
          goto LABEL_26;
        if ( v8 != -1 )
        {
          *((_DWORD *)this + 80) = 3;
          break;
        }
      }
      v7 = *((_DWORD *)this + 80);
      v5 = 0;
    }
  }
  operator delete[](v6);
  return v8;
}

