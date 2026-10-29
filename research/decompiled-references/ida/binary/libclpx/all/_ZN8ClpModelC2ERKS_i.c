// Alternative name is '_ZN8ClpModelC1ERKS_i'
void __fastcall ClpModel::ClpModel(ClpModel *this, const ClpModel *a2, int a3)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __m128i v9; // xmm2
  double v10[11]; // [rsp+10h] [rbp-58h] BYREF

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  v5 = *((_DWORD *)a2 + 84);
  *((_DWORD *)this + 89) = 12345678;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 47) = 0;
  *((_QWORD *)this + 48) = 0;
  *((_DWORD *)this + 84) = v5;
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 50) = 0;
  *((_QWORD *)this + 51) = 0;
  CoinMessages::CoinMessages((ClpModel *)((char *)this + 416), 0);
  CoinMessages::CoinMessages((ClpModel *)((char *)this + 448), 0);
  *((_OWORD *)this + 30) = -1;
  CoinPackedMatrix::CoinPackedMatrix((ClpModel *)((char *)this + 496));
  CoinPackedMatrix::CoinPackedMatrix((ClpModel *)((char *)this + 584));
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
  *((_QWORD *)this + 86) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  ClpModel::gutsOfCopy(this, a2, 1);
  if ( a3 >= 0 )
  {
    v6 = *((_QWORD *)this + 24);
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, ClpModel *, __int64, double, double))(*(_QWORD *)v6 + 184LL))(
             v6,
             this,
             15,
             *((double *)this + 10),
             1.0e20) )
      {
        *((_DWORD *)this + 64) = a3;
        ClpModel::setRowScale(this, nullptr);
        ClpModel::setColumnScale(this, nullptr);
        v7 = *((_QWORD *)this + 25);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 480LL))(v7);
        v8 = *((_QWORD *)this + 26);
        *((_QWORD *)this + 25) = 0;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 480LL))(v8);
        *((_QWORD *)this + 26) = 0;
        if ( !a3
          || (*(unsigned int (__fastcall **)(_QWORD, ClpModel *, _QWORD))(**((_QWORD **)this + 24) + 152LL))(
               *((_QWORD *)this + 24),
               this,
               0) )
        {
          *((_DWORD *)this + 64) = 0;
        }
        else
        {
          v9 = _mm_loadu_si128((const __m128i *)this + 14);
          *(_QWORD *)&v10[0] = 8LL * *((int *)this + 26);
          *(_QWORD *)&v10[0] = 8LL * *((int *)this + 27);
          *((__m128i *)this + 15) = _mm_add_epi64((__m128i)_mm_loadh_ps(v10), v9);
          ClpModel::gutsOfScaling(this);
          *((_DWORD *)this + 64) = -*((_DWORD *)this + 64);
        }
      }
    }
  }
}

