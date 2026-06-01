double *__fastcall ClpModel::chgObjCoefficients(ClpModel *this, double *a2)
{
  double *result; // rax
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  int v6; // r8d
  int v7; // edi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // r11d
  __int64 v12; // rsi
  const double *v13; // r9
  double *v14; // rsi
  signed int v15; // edi
  __int64 v16; // rdx
  int v17; // edi
  unsigned __int64 v18; // rdx
  _BYTE v19[32]; // [rsp+8h] [rbp-20h] BYREF

  result = nullptr;
  *((_DWORD *)this + 79) = 0;
  v5 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v5 )
    result = (double *)(**v5)(v5, 0, 0, v19, 0, 2);
  v6 = *((_DWORD *)this + 27);
  if ( a2 )
  {
    if ( v6 > 0 )
    {
      if ( (result >= a2 + 2 || a2 >= result + 2) && (unsigned int)v6 > 0x18 )
      {
        v7 = 0;
        v8 = ((unsigned __int64)a2 >> 3) & 1;
        if ( (((unsigned __int64)a2 >> 3) & 1) != 0 )
        {
          v7 = 1;
          *result = *a2;
        }
        v9 = 0;
        v10 = 0;
        v11 = v6 - v8;
        v12 = (unsigned int)v8;
        v13 = &a2[v12];
        v14 = &result[v12];
        do
        {
          ++v10;
          *(_OWORD *)&v14[v9] = *(_OWORD *)&v13[v9];
          v9 += 2;
        }
        while ( v11 >> 1 > v10 );
        v15 = (v11 & 0xFFFFFFFE) + v7;
        if ( v11 != (v11 & 0xFFFFFFFE) )
        {
          v16 = v15;
          v17 = v15 + 1;
          result[v16] = a2[v16];
          if ( v6 > v17 )
            result[v17] = a2[v17];
        }
      }
      else
      {
        v18 = 0;
        do
        {
          result[v18 / 8] = a2[v18 / 8];
          v18 += 8LL;
        }
        while ( v18 != 8LL * (unsigned int)(v6 - 1) + 8 );
      }
    }
  }
  else if ( v6 > 0 )
  {
    return (double *)memset(result, 0, 8LL * (unsigned int)(v6 - 1) + 8);
  }
  return result;
}

