/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444078
// Address: 0x0000000000444078

//----- (0000000000444078) ----------------------------------------------------
__int64 __fastcall sub_444078(unsigned __int64 a1, _QWORD *a2)
{
  bool v2; // zf
  __int64 v3; // x5
  __int64 v4; // x6
  __int64 v5; // x7
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x9
  __int64 v10; // [xsp+38h] [xbp-8h]

  if ( a1 )
    v2 = a2 == nullptr;
  else
    v2 = 1;
  if ( v2 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(2657);
    __break(0x3E8u);
  }
  v3 = a2[1];
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = v3;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = a2[3];
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_QWORD *)(a1 + 24) = v8;
  *a2 = v4;
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  return v10 ^ _stack_chk_guard;
}
// 4440E0: variable 'v10' is possibly undefined
// 52451C: using guessed type char under_debugger;
