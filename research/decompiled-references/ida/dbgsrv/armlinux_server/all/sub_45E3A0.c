/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E3A0
// Address: 0x000000000045E3A0

//----- (000000000045E3A0) ----------------------------------------------------
bool __fastcall sub_45E3A0(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned __int64 v5; // x19
  _QWORD *v9; // x23
  double v10; // d0
  _QWORD *v11; // x3
  _QWORD *v12; // x1

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 == -1 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 == -1 )
      v5 = *(_QWORD *)(a2 + 8);
  }
  v9 = sub_45DA88(a1, *(_DWORD *)(a2 + 4), v5, a4);
  if ( !v9 )
    return 0;
  sub_45CDF8(a1, (__int64)"%a: bptcnd yielded false\n", v10);
  *(_BYTE *)(a2 + 16) = 1;
  v11 = *(_QWORD **)(a1 + 432);
  v12 = &v11[*(_QWORD *)(a1 + 440)];
  if ( v11 != v12 )
  {
    while ( v5 != *v11 )
    {
      if ( v12 == ++v11 )
        return sub_45DF40(a1, v9, a2, a3);
    }
    if ( !under_debugger )
      sub_492270(617);
    __break(0x3E8u);
    return 0;
  }
  return sub_45DF40(a1, v9, a2, a3);
}
// 45E400: variable 'v10' is possibly undefined
// 52451C: using guessed type char under_debugger;
