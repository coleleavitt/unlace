/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028148
// Address: 0x0000000100028148

//----- (0000000100028148) ----------------------------------------------------
__int64 __fastcall sub_100028148(__int64 a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  unsigned __int64 v4; // x2

  v2 = *(_QWORD **)(a1 + 368);
  v3 = *(_QWORD *)(a1 + 376);
  v4 = v3 + 1;
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v3 + 1) )
  {
    v2 = qvector_reserve((_QWORD *)(a1 + 368), v2, v4, 0x10u);
    *(_QWORD *)(a1 + 368) = v2;
    v3 = *(_QWORD *)(a1 + 376);
    v4 = v3 + 1;
  }
  *(_QWORD *)(a1 + 376) = v4;
  LODWORD(v2[2 * v3]) = *(_DWORD *)(a1 + 208);
  return 0;
}
