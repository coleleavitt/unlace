/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E9FC
// Address: 0x000000010003E9FC

//----- (000000010003E9FC) ----------------------------------------------------
__int64 __fastcall sub_10003E9FC(__int64 a1)
{
  __int64 v1; // x19
  __int64 v3; // x0

  if ( *(_BYTE *)(a1 + 608) == 1 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(302);
    return sub_10003EA58(v3);
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 560) = 0;
    sub_10003D96C(a1, 0, 0);
    return v1;
  }
}
// 10003EA55: variable 'v3' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
