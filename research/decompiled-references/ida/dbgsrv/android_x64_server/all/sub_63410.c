/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63410
// Address: 0x0000000000063410

//----- (0000000000063410) ----------------------------------------------------
__int64 __fastcall sub_63410(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  char *v3; // rax
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  _DWORD *v8; // rax

  *(_BYTE *)(a1 + 212) = -85;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v2 + 1) )
  {
    v3 = *(char **)v1;
  }
  else
  {
    v3 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v1, v2 + 1, 1u);
    *(_QWORD *)v1 = v3;
    v2 = *(_QWORD *)(v1 + 8);
  }
  v3[v2] = -85;
  ++*(_QWORD *)(v1 + 8);
  v4 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v4;
  sub_616A0(a1, 0);
  sub_616A0(a1, 0);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v5 - 4);
  if ( v5 )
    *(_QWORD *)(a1 + 232) = v5 - 1;
  sub_6BEF0(*(_QWORD **)(a1 + 200), v6, *(_DWORD *)(a1 + 208) + -4 - v6);
  v7 = *(_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 240) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = *(_DWORD **)(a1 + 224);
  }
  else
  {
    v8 = qvector_reserve(a1 + 224, *(char **)(a1 + 224), v7 + 1, 4u);
    *(_QWORD *)(a1 + 224) = v8;
    v7 = *(_QWORD *)(a1 + 232);
  }
  v8[v7] = v4;
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
