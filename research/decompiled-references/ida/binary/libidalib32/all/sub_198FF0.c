__int64 __fastcall sub_198FF0(__int64 a1, __int64 *a2, unsigned __int8 a3, double a4, double a5, __m128 a6)
{
  void (*v9)(void); // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rbp

  v9 = *(void (**)(void))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v9 == (char *)sub_199280 )
  {
    v10 = a2[2];
    *a2 = 0;
    *((_DWORD *)a2 + 2) = -1;
    if ( v10 )
    {
      a2[3] = 0;
      qfree();
      a2[2] = 0;
      a2[4] = 0;
    }
    v11 = a2[6];
    a2[5] = 0;
    if ( v11 )
    {
      a2[7] = 0;
      qfree();
      a2[6] = 0;
      a2[8] = 0;
    }
    a4 = 0.0;
    a2[9] = 0;
    *((_DWORD *)a2 + 22) = -1;
    a2[10] = -4294967268LL;
    *((_DWORD *)a2 + 32) = -1;
    a2[17] = 0;
    *((_DWORD *)a2 + 36) = -1;
    a2[26] = -1;
    *((_DWORD *)a2 + 68) = 0;
    *((_OWORD *)a2 + 6) = 0;
    *((_OWORD *)a2 + 7) = 0;
    *(_OWORD *)(a2 + 19) = 0;
    *(_OWORD *)(a2 + 21) = 0;
    *((_OWORD *)a2 + 12) = 0;
    *((_OWORD *)a2 + 14) = 0;
    *((_OWORD *)a2 + 15) = 0;
    *((_OWORD *)a2 + 16) = 0;
  }
  else
  {
    v9();
  }
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2, a3);
  if ( a2[28] )
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(TProgram::application + 136LL) + 64LL))(
      TProgram::application + 136LL,
      a2 + 2);
  v12 = *((unsigned int *)a2 + 2);
  result = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  if ( (__int64 (*)(void))result != sub_199220 )
  {
    result = ((__int64 (__fastcall *)(__int64, unsigned __int64))result)(a1, v12);
    if ( !(_BYTE)result )
      return result;
    goto LABEL_19;
  }
  if ( (_DWORD)v12 == 35 )
    goto LABEL_19;
  if ( (unsigned int)v12 <= 0x13 && (_DWORD)v12 != 3 )
  {
    result = (unsigned int)v12 & 0xFFFFFFF7;
    if ( (_DWORD)result == 2 || (_DWORD)v12 == 1 || (_DWORD)v12 == 13 )
      return result;
LABEL_19:
    v14 = *a2;
    sub_196770((__int64 *)*a2, a2 + 6, a4, a5, a6);
    result = *(_QWORD *)(v14 + 2520);
    a2[5] = result;
    return result;
  }
  if ( (unsigned int)v12 <= 0x38 )
  {
    result = 0x1F2021000000000LL;
    if ( _bittest64(&result, v12) )
      goto LABEL_19;
  }
  return result;
}

