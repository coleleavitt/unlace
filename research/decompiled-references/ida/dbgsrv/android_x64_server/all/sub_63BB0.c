/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63BB0
// Address: 0x0000000000063BB0

//----- (0000000000063BB0) ----------------------------------------------------
__int64 __fastcall sub_63BB0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  char *v3; // rax
  _QWORD *v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  unsigned __int64 v10; // rdx
  _DWORD *v11; // rax

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
  ++*(_DWORD *)(a1 + 208);
  v4 = (_QWORD *)(a1 + 296);
  v5 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 312) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = (_DWORD *)*v4;
  }
  else
  {
    v6 = qvector_reserve(a1 + 296, *(char **)(a1 + 296), v5 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v6;
    v5 = *(_QWORD *)(a1 + 304);
  }
  v6[v5] = 0;
  v7 = *(_QWORD *)(a1 + 304);
  v8 = v7 + 1;
  *(_QWORD *)(a1 + 304) = v7 + 1;
  v9 = *(_DWORD *)(a1 + 208);
  v10 = v7 + 2;
  if ( *(_QWORD *)(a1 + 312) >= v10 )
  {
    v11 = (_DWORD *)*v4;
  }
  else
  {
    v11 = qvector_reserve(a1 + 296, *(char **)(a1 + 296), v10, 4u);
    *(_QWORD *)(a1 + 296) = v11;
    v8 = *(_QWORD *)(a1 + 304);
  }
  v11[v8] = v9;
  ++*(_QWORD *)(a1 + 304);
  sub_616A0(a1, 0);
  sub_616A0(a1, 0);
  return 0;
}
