__int64 __fastcall ClpInterior::numberFixed(ClpInterior *this)
{
  int v1; // r8d
  __int64 v2; // rdx
  __int64 result; // rax
  double v4; // xmm0_8
  double v5; // xmm2_8
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  double v10; // xmm0_8
  double v11; // xmm2_8

  v1 = *((_DWORD *)this + 27);
  if ( v1 <= 0 )
  {
    v6 = *((_DWORD *)this + 26);
    result = 0;
    if ( v6 <= 0 )
      return result;
    goto LABEL_9;
  }
  v2 = 0;
  result = 0;
  do
  {
    v4 = *(double *)(*((_QWORD *)this + 23) + 8 * v2);
    v5 = *(double *)(*((_QWORD *)this + 22) + 8 * v2);
    if ( (v4 < 1.0e20 || v5 > -1.0e20) && v4 > v5 )
      result = (unsigned int)result - (((*(_BYTE *)(*((_QWORD *)this + 33) + v2) & 4) == 0) - 1);
    ++v2;
  }
  while ( v2 != (unsigned int)(v1 - 1) + 1LL );
  v6 = *((_DWORD *)this + 26);
  if ( v6 > 0 )
  {
LABEL_9:
    v7 = (unsigned int)(v6 - 1);
    v8 = 0;
    v9 = v7 + 1;
    do
    {
      v10 = *(double *)(*((_QWORD *)this + 19) + 8 * v8);
      v11 = *(double *)(*((_QWORD *)this + 18) + 8 * v8);
      if ( (v10 < 1.0e20 || v11 > -1.0e20) && v10 > v11 )
        result = (unsigned int)result - (((*(_BYTE *)(*((_QWORD *)this + 33) + v1 + (int)v8) & 4) == 0) - 1);
      ++v8;
    }
    while ( v8 != v9 );
  }
  return result;
}

