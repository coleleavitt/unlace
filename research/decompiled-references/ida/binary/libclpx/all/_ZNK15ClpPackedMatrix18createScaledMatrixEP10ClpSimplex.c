void __fastcall ClpPackedMatrix::createScaledMatrix(ClpPackedMatrix *this, ClpSimplex *a2)
{
  __int64 v3; // rax
  int v4; // r13d
  int v5; // r12d
  void *v6; // rbx
  ClpPackedMatrix *v7; // rdi
  void (__fastcall *v8)(ClpPackedMatrix *); // rax
  __int64 v9; // rbx
  double *v10; // r13
  CoinPackedMatrix *v11; // r14
  ClpPackedMatrix *v12; // r15
  __int64 v13; // rax
  ClpPackedMatrix *v14; // rdi
  void (__fastcall *v15)(ClpPackedMatrix *); // rdx
  __int64 v16; // r11
  __int64 v17; // rbp
  double *v18; // r8
  _DWORD *v19; // r9
  __int64 v20; // rax
  double v21; // xmm1_8
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  void *v27; // [rsp+8h] [rbp-40h]

  v3 = *((_QWORD *)this + 11);
  v4 = *((_DWORD *)a2 + 26);
  v5 = *(_DWORD *)(v3 + 64);
  if ( !*(_BYTE *)(v3 + 8) )
    v5 = *(_DWORD *)(v3 + 68);
  v6 = *((void **)a2 + 26);
  if ( v6 )
  {
    v7 = *((ClpPackedMatrix **)a2 + 26);
    v8 = *(void (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v6 + 480LL);
    if ( v8 == ClpPackedMatrix::~ClpPackedMatrix )
    {
      ClpPackedMatrix::~ClpPackedMatrix(v7);
      operator delete(v6);
    }
    else
    {
      v8(v7);
    }
  }
  *((_QWORD *)a2 + 26) = 0;
  if ( v4 && v5 )
  {
    v9 = *((_QWORD *)a2 + 28);
    if ( v9 )
    {
      v10 = *((double **)a2 + 29);
      v11 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v11, *((const CoinPackedMatrix **)this + 11), 0, 0, 0);
      v12 = (ClpPackedMatrix *)operator new(0x78u);
      ClpPackedMatrix::ClpPackedMatrix(v12, v11);
      v13 = *((_QWORD *)a2 + 26);
      if ( v13 )
      {
        v14 = *((ClpPackedMatrix **)a2 + 26);
        v15 = *(void (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v13 + 480LL);
        if ( v15 == ClpPackedMatrix::~ClpPackedMatrix )
        {
          v27 = *((void **)a2 + 26);
          ClpPackedMatrix::~ClpPackedMatrix(v14);
          operator delete(v27);
        }
        else
        {
          v15(v14);
        }
      }
      *((_QWORD *)a2 + 26) = v12;
      v16 = *((_QWORD *)v11 + 5);
      v17 = *((_QWORD *)v11 + 4);
      if ( v5 > 0 )
      {
        v18 = v10;
        v19 = (_DWORD *)(*((_QWORD *)v11 + 6) + 4LL);
        do
        {
          v20 = (int)*(v19 - 1);
          v21 = *v18;
          if ( (int)v20 < *v19 )
          {
            v22 = v16 + 4 * v20;
            v23 = v17 + 8 * v20;
            v24 = (unsigned int)(*v19 - 1 - v20);
            v25 = 0;
            v26 = v24 + 1;
            do
            {
              *(double *)(v23 + 8 * v25) = *(double *)(v9 + 8LL * *(int *)(v22 + 4 * v25))
                                         * v21
                                         * *(double *)(v23 + 8 * v25);
              ++v25;
            }
            while ( v25 != v26 );
          }
          ++v18;
          ++v19;
        }
        while ( &v10[(unsigned int)(v5 - 1) + 1] != v18 );
      }
    }
  }
  else
  {
    ClpModel::setRowScale(a2, nullptr);
    ClpModel::setColumnScale(a2, nullptr);
  }
}

