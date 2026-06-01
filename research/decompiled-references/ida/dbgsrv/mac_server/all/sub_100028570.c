/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028570
// Address: 0x0000000100028570

//----- (0000000100028570) ----------------------------------------------------
__int64 __fastcall sub_100028570(__int64 a1)
{
  char v1; // r15
  __int64 v2; // r14
  void *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  void *v6; // rax
  __int64 v7; // rcx

  v1 = -32;
  if ( *(_DWORD *)(a1 + 216) == 1 )
    v1 = 112;
  *(_BYTE *)(a1 + 212) = v1;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(void **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD *)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = v1;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 212) = -81;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD *)(a1 + 200), v6, v7 + 1, 1u);
    *(_QWORD *)v5 = v6;
    v7 = *(_QWORD *)(v5 + 8);
  }
  *((_BYTE *)v6 + v7) = -81;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
