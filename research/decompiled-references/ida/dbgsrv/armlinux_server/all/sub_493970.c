/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493970
// Address: 0x0000000000493970

//----- (0000000000493970) ----------------------------------------------------
__int64 __fastcall sub_493970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  size_t v4; // x23
  const void *v5; // x24
  __int64 v6; // x20
  __int64 v7; // x20
  size_t v8; // x22
  _BYTE *v9; // x0

  v3 = *(_QWORD *)(a1 + 8 * (a2 + 4));
  v5 = *(const void **)a3;
  v4 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(v3 + 8);
  if ( v6 )
  {
    v7 = v6 - 1;
    v8 = v4 + v7;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 8);
    v7 = 0;
  }
  v9 = *(_BYTE **)v3;
  if ( v8 + 1 > *(_QWORD *)(v3 + 16) )
  {
    v9 = sub_491288(v3, *(void **)v3, v8 + 1, 1u);
    *(_QWORD *)v3 = v9;
  }
  *(_QWORD *)(v3 + 8) = v8 + 1;
  v9[v8] = 0;
  memmove((void *)(*(_QWORD *)v3 + v7), v5, v4);
  return 1;
}
