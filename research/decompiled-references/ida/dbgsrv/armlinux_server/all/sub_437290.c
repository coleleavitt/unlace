/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437290
// Address: 0x0000000000437290

//----- (0000000000437290) ----------------------------------------------------
__int64 __fastcall sub_437290(__int64 a1, char *s)
{
  __int64 v4; // x19
  __int64 v5; // x1
  _BYTE *v6; // x0

  *(_BYTE *)(a1 + 212) = -86;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(_QWORD *)(v4 + 8);
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(v4 + 16) )
  {
    v6 = sub_491288(v4, *(void **)v4, v5 + 1, 1u);
    *(_QWORD *)v4 = v6;
    v5 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v6 = *(_BYTE **)v4;
  }
  v6[v5] = -86;
  ++*(_QWORD *)(v4 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_436CF8(a1, s, 0);
  sub_4370A8(a1, 0, dword_520190);
  return 0;
}
// 520190: using guessed type int dword_520190;
