__int64 __fastcall ClpCholeskyDense::order(ClpCholeskyDense *this, ClpInterior *a2)
{
  bool v2; // zf
  int v3; // edx

  v2 = *((_BYTE *)this + 12) == 0;
  *((_QWORD *)this + 4) = a2;
  v3 = *((_DWORD *)a2 + 26);
  if ( !v2 )
    v3 = *((_DWORD *)a2 + 27) + 2 * v3;
  ClpCholeskyDense::reserveSpace(this, nullptr, v3);
  *((_QWORD *)this + 118) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 24) + 128LL))(*((_QWORD *)a2 + 24));
  return 0;
}

