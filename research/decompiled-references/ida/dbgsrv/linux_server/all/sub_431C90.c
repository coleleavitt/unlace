/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431C90
// Address: 0x0000000000431C90

//----- (0000000000431C90) ----------------------------------------------------
__int64 __fastcall sub_431C90(__int64 a1)
{
  void **v1; // rbp
  _BYTE *v2; // rax
  void *v3; // rsi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  void *v8; // rsi
  void *v10; // rax
  void *v11; // rax

  v1 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v10 = sub_481540((__int64)v1, v3, (unsigned __int64)(v2 + 1), 1u);
    *v1 = v10;
    v3 = v10;
    v2 = v1[1];
  }
  v2[(_QWORD)v3] = -85;
  v1[1] = (char *)v1[1] + 1;
  v4 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v4;
  sub_4313E0(a1, 0);
  sub_4313E0(a1, 0);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v5 - 4);
  if ( v5 )
    *(_QWORD *)(a1 + 232) = v5 - 1;
  sub_438BA0(*(__int64 **)(a1 + 200), v6, *(_DWORD *)(a1 + 208) - 4 - v6);
  v7 = *(_QWORD *)(a1 + 232);
  v8 = *(void **)(a1 + 224);
  if ( *(_QWORD *)(a1 + 240) < (unsigned __int64)(v7 + 1) )
  {
    v11 = sub_481540(a1 + 224, v8, v7 + 1, 4u);
    *(_QWORD *)(a1 + 224) = v11;
    v8 = v11;
    v7 = *(_QWORD *)(a1 + 232);
  }
  *((_DWORD *)v8 + v7) = v4;
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
