unsigned __int64 __fastcall sub_BDFFA0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  v7 = (unsigned int)(3 * a2);
  v8 = v7;
  *(_QWORD *)(a1 + 8 * v7 + 8LL * *(unsigned int *)(a1 + 28) + 32) = a3;
  v9 = (unsigned int)(v7 + 1);
  *(_QWORD *)(a1 + 8 * (v9 + *(unsigned int *)(a1 + 28)) + 32) = a5;
  v10 = (unsigned int)(v8 + 2);
  *(_QWORD *)(a1 + 8 * (v10 + *(unsigned int *)(a1 + 28)) + 32) = a7;
  *(_DWORD *)(a1
            + 4 * v9
            + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28))
            + 32) = a4;
  result = 4 * v10 + 8 * ((unsigned int)(3 * *(_DWORD *)(a1 + 28)) + (unsigned __int64)*(unsigned int *)(a1 + 28));
  *(_DWORD *)(a1 + result + 32) = a6;
  return result;
}

