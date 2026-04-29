unsigned __int64 __fastcall sub_3F4970(__int64 *a1, int a2, double a3, double a4)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+10h] [rbp-20h]

  v5 = a1[6];
  v24 = __readfsqword(0x28u);
  v6 = a1[7];
  if ( a1[8] < (unsigned __int64)(v6 + 1) )
  {
    v19 = qvector_reserve(a1 + 6, v5, v6 + 1, 4);
    a1[6] = v19;
    v5 = v19;
    v6 = a1[7];
  }
  *(_DWORD *)(v5 + 4 * v6) = a2;
  v7 = a1[10];
  v8 = a1[11];
  ++a1[7];
  v9 = a1[9];
  if ( v8 < v7 + 1 )
  {
    v23 = qvector_reserve(a1 + 9, v9, v7 + 1, 8);
    a1[9] = v23;
    v9 = v23;
    v7 = a1[10];
  }
  *(_QWORD *)(v9 + 8 * v7) = 0x3FF0000000000000LL;
  v10 = a1[1];
  v11 = *a1;
  ++a1[10];
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    v22 = qvector_reserve(a1, v11, v10 + 1, 8);
    *a1 = v22;
    v11 = v22;
    v10 = a1[1];
  }
  *(double *)(v11 + 8 * v10) = a3;
  v12 = a1[4];
  v13 = a1[3];
  ++a1[1];
  if ( a1[5] < (unsigned __int64)(v12 + 1) )
  {
    v21 = qvector_reserve(a1 + 3, v13, v12 + 1, 8);
    a1[3] = v21;
    v13 = v21;
    v12 = a1[4];
  }
  *(double *)(v13 + 8 * v12) = a4;
  v14 = a1[13];
  v15 = a1[7];
  v16 = a1[14];
  ++a1[4];
  v17 = a1[12];
  if ( v16 < v14 + 1 )
  {
    v20 = qvector_reserve(a1 + 12, v17, v14 + 1, 4);
    a1[12] = v20;
    v17 = v20;
    v14 = a1[13];
  }
  *(_DWORD *)(v17 + 4 * v14) = v15;
  ++a1[13];
  return v24 - __readfsqword(0x28u);
}
