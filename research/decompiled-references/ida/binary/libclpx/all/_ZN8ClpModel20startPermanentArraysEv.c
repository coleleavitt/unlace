__int64 __fastcall ClpModel::startPermanentArrays(ClpModel *this)
{
  __int64 result; // rax
  int v2; // esi
  int v3; // ecx
  int v4; // r9d
  int v5; // r8d
  void (__fastcall ***v7)(_QWORD, _QWORD); // rdi
  CoinPackedMatrix *v8; // rbp
  CoinPackedMatrix *v9; // rbx

  result = *((unsigned int *)this + 84);
  v2 = *((_DWORD *)this + 26);
  v3 = *((_DWORD *)this + 27);
  if ( (result & 0x10000) != 0 )
  {
    v4 = *((_DWORD *)this + 121);
    v5 = *((_DWORD *)this + 120);
    if ( v4 >= v2 )
    {
      if ( v5 >= v3 )
        return result;
    }
    else
    {
      if ( v4 > 0 )
        v2 += v2 / 100 + 10;
      *((_DWORD *)this + 121) = v2;
      if ( v5 >= v3 )
        return ClpModel::resize(this, v2, v5);
      v4 = *((_DWORD *)this + 121);
    }
    if ( v5 <= 0 )
    {
      *((_DWORD *)this + 120) = v3;
      v2 = v4;
      v5 = v3;
      return ClpModel::resize(this, v2, v5);
    }
    *((_DWORD *)this + 120) = v3 + v3 / 100 + 10;
    return ClpModel::resize(this, v4, v3 + v3 / 100 + 10);
  }
  else
  {
    *((_DWORD *)this + 121) = v2;
    *((_DWORD *)this + 84) = result | 0x10000;
    *((_DWORD *)this + 120) = v3;
    v7 = *((void (__fastcall ****)(_QWORD, _QWORD))this + 24);
    if ( v7 )
      (**v7)(v7, 0);
    v8 = (ClpModel *)((char *)this + 496);
    v9 = (ClpModel *)((char *)this + 584);
    CoinPackedMatrix::operator=(v8);
    CoinPackedMatrix::cleanMatrix(v8, 9.999999999999999e-21);
    CoinPackedMatrix::setExtraGap(v9, 0.0);
    CoinPackedMatrix::setExtraMajor(v9, 0.0);
    return CoinPackedMatrix::reverseOrderedCopyOf(v9, v8);
  }
}

