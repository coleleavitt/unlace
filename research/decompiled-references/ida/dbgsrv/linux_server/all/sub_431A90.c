/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431A90
// Address: 0x0000000000431A90

//----- (0000000000431A90) ----------------------------------------------------
__int64 __fastcall sub_431A90(__int64 a1)
{
  void **v1; // rbp
  _BYTE *v2; // rax
  void *v3; // rsi
  void *v4; // rsi
  int v5; // ebp
  __int64 v6; // rax
  void *v8; // rax
  void *v9; // rax

  v1 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v8 = sub_481540((__int64)v1, v3, (unsigned __int64)(v2 + 1), 1u);
    *v1 = v8;
    v3 = v8;
    v2 = v1[1];
  }
  v2[(_QWORD)v3] = -85;
  v1[1] = (char *)v1[1] + 1;
  v4 = *(void **)(a1 + 296);
  v5 = *(_DWORD *)(a1 + 208) + 1;
  v6 = *(_QWORD *)(a1 + 304);
  *(_DWORD *)(a1 + 208) = v5;
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v6 + 1) )
  {
    v9 = sub_481540(a1 + 296, v4, v6 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v9;
    v4 = v9;
    v6 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v4 + v6) = v5;
  ++*(_QWORD *)(a1 + 304);
  sub_4313E0(a1, 0);
  sub_4313E0(a1, 0);
  return 0;
}
