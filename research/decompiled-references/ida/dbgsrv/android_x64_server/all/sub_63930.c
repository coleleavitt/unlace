/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63930
// Address: 0x0000000000063930

//----- (0000000000063930) ----------------------------------------------------
__int64 __fastcall sub_63930(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  _DWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  _DWORD *v11; // rax

  v2 = (_QWORD *)(a1 + 248);
  v3 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 264) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = (_DWORD *)*v2;
  }
  else
  {
    v4 = qvector_reserve((__int64)v2, *(char **)(a1 + 248), v3 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v4;
    v3 = *(_QWORD *)(a1 + 256);
  }
  v4[v3] = -1;
  ++*(_QWORD *)(a1 + 256);
  v5 = (_QWORD *)(a1 + 272);
  v6 = *(_QWORD *)(a1 + 280);
  if ( *(_QWORD *)(a1 + 288) >= (unsigned __int64)(v6 + 1) )
  {
    v7 = (_DWORD *)*v5;
  }
  else
  {
    v7 = qvector_reserve((__int64)v5, *(char **)(a1 + 272), v6 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v7;
    v6 = *(_QWORD *)(a1 + 280);
  }
  v7[v6] = -1;
  ++*(_QWORD *)(a1 + 280);
  v8 = (_QWORD *)(a1 + 296);
  v9 = *(_DWORD *)(a1 + 208);
  v10 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 312) >= (unsigned __int64)(v10 + 1) )
  {
    v11 = (_DWORD *)*v8;
  }
  else
  {
    v11 = qvector_reserve((__int64)v8, *(char **)(a1 + 296), v10 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v11;
    v10 = *(_QWORD *)(a1 + 304);
  }
  v11[v10] = v9;
  ++*(_QWORD *)(a1 + 304);
  return 0;
}
