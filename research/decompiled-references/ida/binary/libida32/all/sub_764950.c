__int64 __fastcall sub_764950(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -83;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v8 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v8;
    v3 = v8;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -83;
  ++v1[1];
  v4 = *(_QWORD *)(a1 + 288);
  v5 = *(_DWORD *)(a1 + 200) + 1;
  v6 = *(_QWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 200) = v5;
  if ( *(_QWORD *)(a1 + 304) < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve(a1 + 288, v4, v6 + 1, 4);
    *(_QWORD *)(a1 + 288) = v9;
    v4 = v9;
    v6 = *(_QWORD *)(a1 + 296);
  }
  *(_DWORD *)(v4 + 4 * v6) = v5;
  ++*(_QWORD *)(a1 + 296);
  sub_764370(a1, 0);
  sub_764370(a1, 0);
  return 0;
}

