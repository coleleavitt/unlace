__int64 __fastcall sub_464B0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v17; // rax
  __int64 v18; // rax

  v5 = *(_QWORD **)(a1 + 16);
  v6 = v5[4];
  v7 = v5[3];
  if ( v5[5] < (unsigned __int64)(v6 + 1) )
  {
    v18 = qvector_reserve(v5 + 3, v7, v6 + 1, 40);
    v6 = v5[4];
    v5[3] = v18;
    v7 = v18;
  }
  v8 = v7 + 40 * v6;
  *(_QWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 24) = 0;
  ++v5[4];
  *(_QWORD *)v8 = a3;
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  v9 = *(_QWORD **)(a1 + 16);
  v10 = v9[11];
  v11 = v9[10];
  if ( v9[12] < (unsigned __int64)(v10 + 1) )
  {
    v17 = qvector_reserve(v9 + 10, v11, v10 + 1, 24);
    v10 = v9[11];
    v9[10] = v17;
    v11 = v17;
  }
  v12 = v11 + 24 * v10;
  *(_QWORD *)v12 = 0;
  *(_OWORD *)(v12 + 8) = 0;
  ++v9[11];
  v13 = *(_DWORD *)(a1 + 24);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(_DWORD *)(a2 + 4);
  if ( v13 == 1 )
    return sub_461E0(v14, (__int64 *)v12, (__int64 *)(v14 + 320), v15);
  if ( v13 == 2 )
    return sub_461E0(v14, (__int64 *)v12, (__int64 *)(v14 + 352), v15);
  if ( under_debugger )
    BUG();
  interr(20086);
  return sub_46600();
}
