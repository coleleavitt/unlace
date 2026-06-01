__int64 __fastcall Idiot::crash(Idiot *this, int a2, CoinMessageHandler *a3, const CoinMessages *a4, char a5)
{
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  int v12; // r14d
  __int64 result; // rax
  double v14; // xmm1_8
  int v15; // ecx
  __int64 v16; // rsi
  int v17; // edx
  int v18; // edi
  double v19; // xmm1_8
  double v20; // xmm0_8
  int v21; // edx
  bool v22; // zf
  _BYTE v23[64]; // [rsp+18h] [rbp-40h] BYREF

  v10 = *(_QWORD *)this;
  v11 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))(*(_QWORD *)this + 160LL);
  v12 = *(_DWORD *)(v10 + 108);
  result = 0;
  if ( v11 )
    result = (**v11)(v11, 0, 0, v23, 0, 2);
  if ( v12 <= 0 )
  {
    v19 = 0.0;
  }
  else
  {
    v14 = 0.0;
    v15 = 0;
    v16 = result + 8LL * (unsigned int)(v12 - 1) + 8;
    do
    {
      v17 = v15 + 1;
      if ( *(double *)result != 0.0 )
      {
        v18 = v15 + 2;
        ++v15;
        v17 = v18;
        v14 = v14 + fabs(*(double *)result);
      }
      result += 8;
    }
    while ( v16 != result );
    v19 = v14 / (double)v17;
  }
  if ( *((_DWORD *)this + 29) == 5 )
    *((_DWORD *)this + 29) = 2;
  if ( a2 <= 0 )
  {
    result = (unsigned int)(int)(log10((double)(v12 + 1)) + 2.0);
    *((_DWORD *)this + 30) = result;
  }
  else
  {
    *((_DWORD *)this + 30) = a2;
  }
  v20 = *((double *)this + 2);
  if ( v20 == 0.0001 )
  {
    v22 = *((_DWORD *)this + 35) == 100;
    v20 = fmax(0.001, v19 * 0.00001);
    *((double *)this + 2) = v20;
    if ( !v22 )
      goto LABEL_15;
  }
  else if ( *((_DWORD *)this + 35) != 100 )
  {
    goto LABEL_15;
  }
  result = *((unsigned int *)this + 37);
  if ( !(_DWORD)result )
  {
    *((_DWORD *)this + 35) = 105;
    goto LABEL_15;
  }
  if ( (_DWORD)result == 1 )
  {
    *((_DWORD *)this + 35) = 23;
    *((double *)this + 2) = v20 * 1000.0;
LABEL_15:
    if ( !v12 )
      goto LABEL_16;
    goto LABEL_27;
  }
  v22 = (_DWORD)result == 2;
  result = 23;
  if ( v22 )
    result = 11;
  *((_DWORD *)this + 35) = result;
  if ( v12 )
LABEL_27:
    result = Idiot::solve2(this, a3, a4);
LABEL_16:
  if ( a5 )
  {
    v21 = *((_DWORD *)this + 36);
    if ( *(double *)(*(_QWORD *)this + 896LL) / (double)*(int *)(*(_QWORD *)this + 104LL) < 0.01 && (v21 & 0x200) != 0
      || (v21 & 0x2000) != 0 )
    {
      return Idiot::crossOver(this, 17);
    }
    else
    {
      return Idiot::crossOver(this, (unsigned int)(*((_DWORD *)this + 30) < 1000000) + 2);
    }
  }
  return result;
}

