__int64 __fastcall sub_81CE60(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
  __int64 result; // rax
  __int64 v9; // rcx
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rcx

  result = a1;
  v9 = (unsigned int)(3 * a2);
  v11 = 3 * a2;
  v12 = (unsigned int)(3 * a2 + 1);
  *(_QWORD *)(result + 8 * v9 + 8LL * *(unsigned int *)(result + 28) + 32) = a3;
  *(_QWORD *)(result + 8 * (v12 + *(unsigned int *)(result + 28)) + 32) = a5;
  v13 = (unsigned int)(v11 + 2);
  *(_QWORD *)(result + 8 * (v13 + *(unsigned int *)(result + 28)) + 32) = a7;
  *(_DWORD *)(result
            + 4 * v12
            + 8 * ((unsigned int)(3 * *(_DWORD *)(result + 28)) + (unsigned __int64)*(unsigned int *)(result + 28))
            + 32) = a4;
  *(_DWORD *)(result
            + 4 * v13
            + 8 * ((unsigned int)(3 * *(_DWORD *)(result + 28)) + (unsigned __int64)*(unsigned int *)(result + 28))
            + 32) = a6;
  return result;
}

