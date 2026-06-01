__int64 __fastcall sub_764AF0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v1 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v12 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v12;
    v3 = v12;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -85;
  ++v1[1];
  v4 = *(_QWORD *)(a1 + 296);
  ++*(_DWORD *)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 288);
  if ( *(_QWORD *)(a1 + 304) < (unsigned __int64)(v4 + 1) )
  {
    v14 = qvector_reserve(a1 + 288, v5, v4 + 1, 4);
    *(_QWORD *)(a1 + 288) = v14;
    v5 = v14;
    v4 = *(_QWORD *)(a1 + 296);
  }
  *(_DWORD *)(v5 + 4 * v4) = 0;
  v6 = *(_QWORD *)(a1 + 296);
  v7 = *(_DWORD *)(a1 + 200);
  v8 = *(_QWORD *)(a1 + 288);
  v9 = v6 + 1;
  v10 = v6 + 2;
  *(_QWORD *)(a1 + 296) = v9;
  if ( *(_QWORD *)(a1 + 304) < v10 )
  {
    v13 = qvector_reserve(a1 + 288, v8, v10, 4);
    *(_QWORD *)(a1 + 288) = v13;
    v8 = v13;
    v9 = *(_QWORD *)(a1 + 296);
  }
  *(_DWORD *)(v8 + 4 * v9) = v7;
  ++*(_QWORD *)(a1 + 296);
  sub_764370(a1, 0);
  sub_764370(a1, 0);
  return 0;
}

