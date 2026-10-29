/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002781C
// Address: 0x000000010002781C

//----- (000000010002781C) ----------------------------------------------------
__int64 __fastcall sub_10002781C(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x1
  __int64 v4; // x8

  *(_BYTE *)(a1 + 212) = -79;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD **)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = -79;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
