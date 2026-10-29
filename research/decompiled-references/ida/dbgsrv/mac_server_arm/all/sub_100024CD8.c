/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024CD8
// Address: 0x0000000100024CD8

//----- (0000000100024CD8) ----------------------------------------------------
__int64 __fastcall sub_100024CD8(__int64 a1)
{
  __int64 v2; // x19
  _QWORD *v3; // x1
  __int64 v4; // x8
  __int64 v5; // x21

  if ( *(_DWORD *)(a1 + 216) )
    return set_qerrno();
  *(_BYTE *)(a1 + 212) = -81;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v5 = a1;
    v3 = qvector_reserve(*(_QWORD **)(a1 + 200), v3, v4 + 1, 1u);
    a1 = v5;
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = -81;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
