/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EEF0
// Address: 0x000000000042EEF0

//----- (000000000042EEF0) ----------------------------------------------------
__int64 __fastcall sub_42EEF0(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rsi
  __int64 v3; // rax
  void *v4; // rsi
  __int64 v5; // rax
  int v6; // ebp
  void *v7; // rsi
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax

  v1 = *(_QWORD *)(a1 + 256);
  v2 = *(void **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v1 + 1) )
  {
    v9 = sub_481540(a1 + 248, v2, v1 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v9;
    v2 = v9;
    v1 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v2 + v1) = -1;
  v3 = *(_QWORD *)(a1 + 280);
  ++*(_QWORD *)(a1 + 256);
  v4 = *(void **)(a1 + 272);
  if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v3 + 1) )
  {
    v11 = sub_481540(a1 + 272, v4, v3 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v11;
    v4 = v11;
    v3 = *(_QWORD *)(a1 + 280);
  }
  *((_DWORD *)v4 + v3) = -1;
  v5 = *(_QWORD *)(a1 + 304);
  ++*(_QWORD *)(a1 + 280);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = *(void **)(a1 + 296);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v5 + 1) )
  {
    v10 = sub_481540(a1 + 296, v7, v5 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v10;
    v7 = v10;
    v5 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v7 + v5) = v6;
  ++*(_QWORD *)(a1 + 304);
  return 0;
}
