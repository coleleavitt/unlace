/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434428
// Address: 0x0000000000434428

//----- (0000000000434428) ----------------------------------------------------
__int64 __fastcall sub_434428(__int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x1
  _BYTE *v4; // x0

  *(_BYTE *)(a1 + 212) = -86;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(v2 + 16) )
  {
    v4 = sub_491288(v2, *(void **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v4 = *(_BYTE **)v2;
  }
  v4[v3] = -86;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
