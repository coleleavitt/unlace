__int64 __fastcall sub_3E83C0(__int64 a1)
{
  __int64 v1; // rbp
  bool v2; // zf
  int v3; // r12d
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // r12d
  __int64 v17; // rsi
  __int64 result; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v1 = a1 + 752;
  v2 = *(_QWORD *)(a1 + 768) == 0;
  v3 = *(_DWORD *)(a1 + 688);
  v4 = *(_DWORD **)(a1 + 752);
  *(_QWORD *)(a1 + 760) = 0;
  if ( v2 )
  {
    v20 = qvector_reserve(a1 + 752, v4, 1, 4);
    v21 = *(_QWORD *)(a1 + 760);
    *(_QWORD *)(a1 + 752) = v20;
    v4 = (_DWORD *)(v20 + 4 * v21);
  }
  *v4 = v3;
  v5 = *(_QWORD *)(a1 + 760);
  v6 = *(_DWORD *)(a1 + 684);
  v7 = *(_QWORD *)(a1 + 752);
  v8 = v5 + 1;
  v9 = v5 + 2;
  *(_QWORD *)(a1 + 760) = v8;
  if ( *(_QWORD *)(a1 + 768) < v9 )
  {
    v24 = qvector_reserve(v1, v7, v9, 4);
    *(_QWORD *)(a1 + 752) = v24;
    v7 = v24;
    v8 = *(_QWORD *)(a1 + 760);
  }
  *(_DWORD *)(v7 + 4 * v8) = v6;
  v10 = *(_QWORD *)(a1 + 760);
  v11 = *(_DWORD *)(a1 + 680);
  v12 = *(_QWORD *)(a1 + 752);
  v13 = v10 + 1;
  v14 = v10 + 2;
  *(_QWORD *)(a1 + 760) = v13;
  if ( *(_QWORD *)(a1 + 768) < v14 )
  {
    v23 = qvector_reserve(v1, v12, v14, 4);
    *(_QWORD *)(a1 + 752) = v23;
    v12 = v23;
    v13 = *(_QWORD *)(a1 + 760);
  }
  *(_DWORD *)(v12 + 4 * v13) = v11;
  v15 = *(_QWORD *)(a1 + 760);
  v16 = *(_DWORD *)(a1 + 676);
  v17 = *(_QWORD *)(a1 + 752);
  result = v15 + 1;
  v19 = v15 + 2;
  *(_QWORD *)(a1 + 760) = result;
  if ( *(_QWORD *)(a1 + 768) < v19 )
  {
    v22 = qvector_reserve(v1, v17, v19, 4);
    *(_QWORD *)(a1 + 752) = v22;
    v17 = v22;
    result = *(_QWORD *)(a1 + 760);
  }
  *(_DWORD *)(v17 + 4 * result) = v16;
  ++*(_QWORD *)(a1 + 760);
  return result;
}
