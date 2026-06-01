// Alternative name is '_ZN8ClpSolveC2ENS_9SolveTypeENS_12PresolveTypeEiPiS2_S2_'
__int64 __fastcall ClpSolve::ClpSolve(_DWORD *a1, int a2, int a3, int a4, int *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 result; // rax

  a1[2] = a4;
  a1[1] = a3;
  v7 = *a5;
  *a1 = a2;
  a1[3] = v7;
  a1[4] = a5[1];
  a1[5] = a5[2];
  a1[6] = a5[3];
  a1[7] = a5[4];
  v8 = a5[5];
  a1[9] = 0;
  a1[8] = v8;
  a1[10] = *a6;
  a1[11] = a6[1];
  a1[12] = a6[2];
  a1[13] = a6[3];
  a1[14] = a6[4];
  v9 = a6[5];
  a1[16] = 0;
  a1[15] = v9;
  a1[17] = *a7;
  a1[18] = a7[1];
  result = (unsigned int)a7[2];
  a1[19] = result;
  return result;
}

