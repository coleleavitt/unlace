__int64 __fastcall sub_784E60(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v8 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v8;
    v3 = v8;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -85;
  ++v1[1];
  v4 = *(_QWORD *)(a1 + 296);
  v5 = *(_DWORD *)(a1 + 208) + 1;
  v6 = *(_QWORD *)(a1 + 304);
  *(_DWORD *)(a1 + 208) = v5;
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve(a1 + 296, v4, v6 + 1, 4);
    *(_QWORD *)(a1 + 296) = v9;
    v4 = v9;
    v6 = *(_QWORD *)(a1 + 304);
  }
  *(_DWORD *)(v4 + 4 * v6) = v5;
  ++*(_QWORD *)(a1 + 304);
  sub_7847B0(a1, 0);
  sub_7847B0(a1, 0);
  return 0;
}
