/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431DA0
// Address: 0x0000000000431DA0

//----- (0000000000431DA0) ----------------------------------------------------
__int64 __fastcall sub_431DA0(__int64 a1)
{
  void **v2; // rbp
  _BYTE *v3; // rax
  void *v4; // rsi
  void *v5; // rsi
  int v6; // ebp
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rax

  if ( !*(_QWORD *)(a1 + 304) )
    return sub_479EB0(0x33u);
  v2 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v9 = sub_481540((__int64)v2, v4, (unsigned __int64)(v3 + 1), 1u);
    *v2 = v9;
    v4 = v9;
    v3 = v2[1];
  }
  v3[(_QWORD)v4] = -85;
  v2[1] = (char *)v2[1] + 1;
  v5 = *(void **)(a1 + 272);
  v6 = *(_DWORD *)(a1 + 208) + 1;
  v7 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 208) = v6;
  if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v7 + 1) )
  {
    v8 = sub_481540(a1 + 272, v5, v7 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v8;
    v5 = v8;
    v7 = *(_QWORD *)(a1 + 280);
  }
  *((_DWORD *)v5 + v7) = v6;
  ++*(_QWORD *)(a1 + 280);
  sub_4313E0(a1, 0);
  sub_4313E0(a1, 0);
  return 0;
}
