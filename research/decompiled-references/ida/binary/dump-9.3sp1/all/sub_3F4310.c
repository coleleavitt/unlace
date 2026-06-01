unsigned __int64 __fastcall sub_3F4310(__int64 *a1, int a2, int a3, double a4, double a5)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v7 = a1[10];
  v8 = a1[9];
  v32 = __readfsqword(0x28u);
  if ( a1[11] < (unsigned __int64)(v7 + 1) )
  {
    v25 = qvector_reserve((__int64)(a1 + 9), v8, v7 + 1, 8);
    a1[9] = v25;
    v8 = v25;
    v7 = a1[10];
  }
  *(_QWORD *)(v8 + 8 * v7) = 0x3FF0000000000000LL;
  v9 = a1[7];
  v10 = a1[6];
  ++a1[10];
  if ( a1[8] < (unsigned __int64)(v9 + 1) )
  {
    v31 = qvector_reserve((__int64)(a1 + 6), v10, v9 + 1, 4);
    a1[6] = v31;
    v10 = v31;
    v9 = a1[7];
  }
  *(_DWORD *)(v10 + 4 * v9) = a2;
  v11 = a1[10];
  v12 = a1[11];
  ++a1[7];
  v13 = a1[9];
  if ( v12 < v11 + 1 )
  {
    v30 = qvector_reserve((__int64)(a1 + 9), v13, v11 + 1, 8);
    a1[9] = v30;
    v13 = v30;
    v11 = a1[10];
  }
  *(_QWORD *)(v13 + 8 * v11) = 0xBFF0000000000000LL;
  v14 = a1[7];
  v15 = a1[6];
  ++a1[10];
  if ( a1[8] < (unsigned __int64)(v14 + 1) )
  {
    v29 = qvector_reserve((__int64)(a1 + 6), v15, v14 + 1, 4);
    a1[6] = v29;
    v15 = v29;
    v14 = a1[7];
  }
  *(_DWORD *)(v15 + 4 * v14) = a3;
  v16 = a1[1];
  ++a1[7];
  v17 = *a1;
  if ( a1[2] < (unsigned __int64)(v16 + 1) )
  {
    v28 = qvector_reserve((__int64)a1, v17, v16 + 1, 8);
    *a1 = v28;
    v17 = v28;
    v16 = a1[1];
  }
  *(double *)(v17 + 8 * v16) = a4;
  v18 = a1[4];
  v19 = a1[3];
  ++a1[1];
  if ( a1[5] < (unsigned __int64)(v18 + 1) )
  {
    v27 = qvector_reserve((__int64)(a1 + 3), v19, v18 + 1, 8);
    a1[3] = v27;
    v19 = v27;
    v18 = a1[4];
  }
  *(double *)(v19 + 8 * v18) = a5;
  v20 = a1[13];
  v21 = a1[7];
  v22 = a1[14];
  ++a1[4];
  v23 = a1[12];
  if ( v22 < v20 + 1 )
  {
    v26 = qvector_reserve((__int64)(a1 + 12), v23, v20 + 1, 4);
    a1[12] = v26;
    v23 = v26;
    v20 = a1[13];
  }
  *(_DWORD *)(v23 + 4 * v20) = v21;
  ++a1[13];
  return v32 - __readfsqword(0x28u);
}
