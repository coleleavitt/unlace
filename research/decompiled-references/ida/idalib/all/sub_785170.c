__int64 __fastcall sub_785170(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !*(_QWORD *)(a1 + 304) )
    return set_qerrno(51);
  v2 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < (unsigned __int64)(v3 + 1) )
  {
    v9 = qvector_reserve(v2, v4, v3 + 1, 1);
    *v2 = v9;
    v4 = v9;
    v3 = v2[1];
  }
  *(_BYTE *)(v4 + v3) = -85;
  ++v2[1];
  v5 = *(_QWORD *)(a1 + 272);
  v6 = *(_DWORD *)(a1 + 208) + 1;
  v7 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 208) = v6;
  if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v7 + 1) )
  {
    v8 = qvector_reserve(a1 + 272, v5, v7 + 1, 4);
    *(_QWORD *)(a1 + 272) = v8;
    v5 = v8;
    v7 = *(_QWORD *)(a1 + 280);
  }
  *(_DWORD *)(v5 + 4 * v7) = v6;
  ++*(_QWORD *)(a1 + 280);
  sub_7847B0(a1, 0);
  sub_7847B0(a1, 0);
  return 0;
}
