__int64 __fastcall sub_3E60C0(__int64 a1)
{
  __int64 v1; // rbx
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
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v1 = *(_QWORD *)(a1 + 832);
  v2 = *(_QWORD *)(v1 + 768) == 0;
  v3 = *(_DWORD *)(v1 + 688);
  *(_QWORD *)(v1 + 760) = 0;
  v4 = *(_DWORD **)(v1 + 752);
  if ( v2 )
  {
    v21 = qvector_reserve(v1 + 752, v4, 1, 4);
    v22 = *(_QWORD *)(v1 + 760);
    *(_QWORD *)(v1 + 752) = v21;
    v4 = (_DWORD *)(v21 + 4 * v22);
  }
  *v4 = v3;
  v5 = *(_QWORD *)(v1 + 760);
  v6 = *(_DWORD *)(v1 + 684);
  v7 = *(_QWORD *)(v1 + 752);
  v8 = v5 + 1;
  v9 = v5 + 2;
  *(_QWORD *)(v1 + 760) = v8;
  if ( *(_QWORD *)(v1 + 768) < v9 )
  {
    v25 = qvector_reserve(v1 + 752, v7, v9, 4);
    *(_QWORD *)(v1 + 752) = v25;
    v7 = v25;
    v8 = *(_QWORD *)(v1 + 760);
  }
  *(_DWORD *)(v7 + 4 * v8) = v6;
  v10 = *(_QWORD *)(v1 + 760);
  v11 = *(_DWORD *)(v1 + 680);
  v12 = *(_QWORD *)(v1 + 752);
  v13 = v10 + 1;
  v14 = v10 + 2;
  *(_QWORD *)(v1 + 760) = v13;
  if ( *(_QWORD *)(v1 + 768) < v14 )
  {
    v24 = qvector_reserve(v1 + 752, v12, v14, 4);
    *(_QWORD *)(v1 + 752) = v24;
    v12 = v24;
    v13 = *(_QWORD *)(v1 + 760);
  }
  *(_DWORD *)(v12 + 4 * v13) = v11;
  v15 = *(_QWORD *)(v1 + 760);
  v16 = *(_DWORD *)(v1 + 676);
  v17 = *(_QWORD *)(v1 + 752);
  v18 = v15 + 1;
  v19 = v15 + 2;
  *(_QWORD *)(v1 + 760) = v18;
  if ( *(_QWORD *)(v1 + 768) < v19 )
  {
    v23 = qvector_reserve(v1 + 752, v17, v19, 4);
    *(_QWORD *)(v1 + 752) = v23;
    v17 = v23;
    v18 = *(_QWORD *)(v1 + 760);
  }
  *(_DWORD *)(v17 + 4 * v18) = v16;
  ++*(_QWORD *)(v1 + 760);
  return 0;
}
