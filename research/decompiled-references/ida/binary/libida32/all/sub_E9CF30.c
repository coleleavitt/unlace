unsigned __int64 __fastcall sub_E9CF30(_QWORD *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  int v11; // edx
  unsigned int v12; // edx

  v7 = 4LL * (a2[2] + a2[1]) + 8 * (a2[1] + (unsigned __int64)*a2);
  v8 = 16LL * a2[3] + 8 * ((v7 != 0) + ((v7 - (v7 != 0)) >> 3)) + 80;
  v9 = a1[294];
  a1[304] += v8;
  result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + result && v9 )
    a1[294] = v8 + result;
  else
    result = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  v11 = *a2;
  *(_QWORD *)(result + 8) = 41;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 16) = v11;
  *(_DWORD *)(result + 20) = a2[1];
  *(_DWORD *)(result + 24) = a2[2];
  v12 = a2[3];
  *(_BYTE *)(result + 32) = 0;
  *(_DWORD *)(result + 28) = v12;
  *(_OWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  return result;
}

