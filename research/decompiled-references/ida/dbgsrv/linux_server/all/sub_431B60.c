/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431B60
// Address: 0x0000000000431B60

//----- (0000000000431B60) ----------------------------------------------------
__int64 __fastcall sub_431B60(__int64 a1)
{
  void **v1; // rbp
  _BYTE *v2; // rax
  void *v3; // rsi
  __int64 v4; // rax
  void *v5; // rsi
  __int64 v6; // rdx
  int v7; // ebp
  void *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax

  v1 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v12 = sub_481540((__int64)v1, v3, (unsigned __int64)(v2 + 1), 1u);
    *v1 = v12;
    v3 = v12;
    v2 = v1[1];
  }
  v2[(_QWORD)v3] = -85;
  v1[1] = (char *)v1[1] + 1;
  v4 = *(_QWORD *)(a1 + 304);
  ++*(_DWORD *)(a1 + 208);
  v5 = *(void **)(a1 + 296);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v4 + 1) )
  {
    v14 = sub_481540(a1 + 296, v5, v4 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v14;
    v5 = v14;
    v4 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v5 + v4) = 0;
  v6 = *(_QWORD *)(a1 + 304);
  v7 = *(_DWORD *)(a1 + 208);
  v8 = *(void **)(a1 + 296);
  v9 = v6 + 1;
  v10 = v6 + 2;
  *(_QWORD *)(a1 + 304) = v9;
  if ( *(_QWORD *)(a1 + 312) < v10 )
  {
    v13 = sub_481540(a1 + 296, v8, v10, 4u);
    *(_QWORD *)(a1 + 296) = v13;
    v8 = v13;
    v9 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v8 + v9) = v7;
  ++*(_QWORD *)(a1 + 304);
  sub_4313E0(a1, 0);
  sub_4313E0(a1, 0);
  return 0;
}
