__int64 __fastcall sub_413640(_QWORD *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  _QWORD *v5; // r13
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rbp
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  void *v23; // [rsp+0h] [rbp-48h]
  int v24; // [rsp+0h] [rbp-48h]
  int v25[2]; // [rsp+8h] [rbp-40h] BYREF
  int v26[14]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a1 + 33;
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 864);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = a1[33];
  if ( v10 )
  {
    v11 = a1[34];
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
    {
      sub_15D7BC0(v11, v10);
      v8 = a1[1];
    }
  }
  a1[33] = v9;
  v13 = *(_QWORD *)(v8 + 856);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_3FCDF0(a1[31], a1[32]);
  a1[31] = v13;
  sub_4125D0((__int64)a1, a2, a3, a4, a5);
  v14 = a1[1];
  *(_QWORD *)v25 = 0;
  sub_14B7810((int)v26, v14, (int)v25, v15, v16, v17, v23);
  sub_18572D0(v25);
  sub_14B9B80(v26, a1 + 31);
  sub_14B9B80(v26, v5);
  sub_428900(a1[15], a1[31], v18, v19, v20, v21, v24);
  sub_429BB0(a1[15], a1[33], 0);
  return sub_14B63F0(v26);
}

