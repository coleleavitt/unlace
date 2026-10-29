/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63FE0
// Address: 0x0000000000063FE0

//----- (0000000000063FE0) ----------------------------------------------------
__int64 __fastcall sub_63FE0(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  char *v4; // rax
  int v6; // ebp
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // rax

  if ( !*(_QWORD *)(a1 + 304) )
    return set_qerrno(0x33u);
  *(_BYTE *)(a1 + 212) = -85;
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
  v4[v3] = -85;
  ++*(_QWORD *)(v2 + 8);
  v6 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v6;
  v7 = (_QWORD *)(a1 + 272);
  v8 = *(_QWORD *)(a1 + 280);
  if ( *(_QWORD *)(a1 + 288) >= (unsigned __int64)(v8 + 1) )
  {
    v9 = (_DWORD *)*v7;
  }
  else
  {
    v9 = qvector_reserve((__int64)v7, *(char **)(a1 + 272), v8 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v9;
    v8 = *(_QWORD *)(a1 + 280);
  }
  v9[v8] = v6;
  ++*(_QWORD *)(a1 + 280);
  sub_616A0(a1, 0);
  sub_616A0(a1, 0);
  return 0;
}
