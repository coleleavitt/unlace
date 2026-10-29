__int64 __fastcall sub_4F9E00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v21 = a3;
    v19 = qvector_reserve(a1, v13, v12 + 1, 72);
    v12 = a1[1];
    a3 = v21;
    *a1 = v19;
    v13 = v19;
  }
  v14 = v13 + 72 * v12;
  *(_QWORD *)(v14 + 48) = 0;
  *(_OWORD *)v14 = 0;
  *(_QWORD *)(v14 + 56) = 0xFFFFFFFFLL;
  *(_OWORD *)(v14 + 16) = 0;
  *(_OWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 64) = 0;
  ++a1[1];
  v15 = *(_QWORD *)(v14 + 8);
  *(_DWORD *)(v14 + 48) = *(_DWORD *)(a2 + 36);
  *(_BYTE *)(v14 + 52) = *(_BYTE *)(a2 + 16);
  v16 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(v14 + 32) = a3;
  *(_DWORD *)(v14 + 56) = v16;
  v17 = *(_QWORD *)(v14 + 16);
  *(_QWORD *)v14 = a4;
  if ( *(_QWORD *)(v14 + 24) < (unsigned __int64)(v17 + 1) )
  {
    v20 = qvector_reserve(v14 + 8, v15, v17 + 1, 8);
    *(_QWORD *)(v14 + 8) = v20;
    v15 = v20;
    v17 = *(_QWORD *)(v14 + 16);
  }
  *(_QWORD *)(v15 + 8 * v17) = a5;
  ++*(_QWORD *)(v14 + 16);
  *(_QWORD *)(v14 + 64) = a7;
  *(_QWORD *)(v14 + 40) = a6;
  return v14;
}
