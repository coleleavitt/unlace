__int64 __fastcall sub_2B7C10(__int64 a1, __int64 a2, double *a3, _DWORD *a4, unsigned int *a5)
{
  __int64 v8; // rsi
  double v10; // xmm0_8
  double v11; // xmm3_8
  double v12; // xmm2_8
  int v13; // edi
  int v14; // ecx
  int v15; // r8d
  int v16; // esi
  int v17; // r9d
  int v18; // r8d
  unsigned __int64 v20; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v21[5]; // [rsp+10h] [rbp-28h] BYREF

  v8 = *(_QWORD *)a5;
  v21[1] = __readfsqword(0x28u);
  v20 = 0;
  v21[0] = 0;
  sub_298C80(a2, v8, &v20, v21);
  v10 = *a3;
  v11 = a3[2];
  v12 = a3[1];
  if ( *a3 == 1.0 )
  {
    v13 = HIDWORD(v20) - (int)v11;
    v14 = HIDWORD(v21[0]) - (int)v11;
    v15 = v20 - (int)v12;
    v16 = LODWORD(v21[0]) - (int)v12;
  }
  else
  {
    v13 = (int)(((double)SHIDWORD(v20) - v11) * v10);
    v15 = (int)(((double)(int)v20 - v12) * v10);
    v14 = (int)(((double)SHIDWORD(v21[0]) - v11) * v10);
    v16 = (int)(((double)SLODWORD(v21[0]) - v12) * v10);
  }
  v17 = *a4 - v15;
  v18 = a4[1];
  if ( sqrt((double)(*a4 - v16) * (double)(*a4 - v16) + (double)(v18 - v14) * (double)(v18 - v14)) <= sqrt((double)v17 * (double)v17 + (double)(v18 - v13) * (double)(v18 - v13)) )
    return *a5;
  else
    return a5[1];
}
