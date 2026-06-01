__int64 __fastcall sub_764D30(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( !*(_QWORD *)(a1 + 296) )
    return set_qerrno(51, a2);
  v3 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -85;
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v10 = qvector_reserve(v3, v5, v4 + 1, 1);
    *v3 = v10;
    v5 = v10;
    v4 = v3[1];
  }
  *(_BYTE *)(v5 + v4) = -85;
  ++v3[1];
  v6 = *(_QWORD *)(a1 + 264);
  v7 = *(_DWORD *)(a1 + 200) + 1;
  v8 = *(_QWORD *)(a1 + 272);
  *(_DWORD *)(a1 + 200) = v7;
  if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)(v8 + 1) )
  {
    v9 = qvector_reserve(a1 + 264, v6, v8 + 1, 4);
    *(_QWORD *)(a1 + 264) = v9;
    v6 = v9;
    v8 = *(_QWORD *)(a1 + 272);
  }
  *(_DWORD *)(v6 + 4 * v8) = v7;
  ++*(_QWORD *)(a1 + 272);
  sub_764370(a1, 0);
  sub_764370(a1, 0);
  return 0;
}

