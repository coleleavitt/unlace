/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CEF0
// Address: 0x000000010002CEF0

//----- (000000010002CEF0) ----------------------------------------------------
__int64 __fastcall sub_10002CEF0(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  const char *v5; // rsi
  size_t v6; // rdx
  bool v7; // cf
  size_t v8; // rax
  __int64 v9; // r14
  void *v10; // rax
  __int64 v11; // rcx

  *(_BYTE *)(a1 + 212) = -86;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(void **)v1;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
  {
    v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
    *(_QWORD *)v1 = v2;
    v3 = *(_QWORD *)(v1 + 8);
  }
  *((_BYTE *)v2 + v3) = -86;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
    v5 = *(const char **)(a1 + 40);
  else
    v5 = _s1;
  v6 = 0;
  v7 = v4 == 0;
  v8 = v4 - 1;
  if ( !v7 )
    v6 = v8;
  sub_100026AC0(a1, v5, v6);
  *(_BYTE *)(a1 + 212) = 1;
  v9 = *(_QWORD *)(a1 + 200);
  v10 = *(void **)v9;
  v11 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
  {
    v10 = qvector_reserve(*(_QWORD *)(a1 + 200), v10, v11 + 1, 1u);
    *(_QWORD *)v9 = v10;
    v11 = *(_QWORD *)(v9 + 8);
  }
  *((_BYTE *)v10 + v11) = 1;
  ++*(_QWORD *)(v9 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
