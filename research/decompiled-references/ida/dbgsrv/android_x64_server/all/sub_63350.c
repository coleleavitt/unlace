/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63350
// Address: 0x0000000000063350

//----- (0000000000063350) ----------------------------------------------------
__int64 __fastcall sub_63350(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  char *v4; // rax
  int v5; // ebp
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rax

  *(_BYTE *)(a1 + 212) = -83;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = *(char **)v2;
  }
  else
  {
    v4 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  v4[v3] = -83;
  ++*(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v5;
  v6 = (_QWORD *)(a1 + 224);
  v7 = *(_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 240) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = (_DWORD *)*v6;
  }
  else
  {
    v8 = qvector_reserve((__int64)v6, *(char **)(a1 + 224), v7 + 1, 4u);
    *(_QWORD *)(a1 + 224) = v8;
    v7 = *(_QWORD *)(a1 + 232);
  }
  v8[v7] = v5;
  ++*(_QWORD *)(a1 + 232);
  sub_616A0(a1, 0);
  sub_616A0(a1, 0);
  return 0;
}
