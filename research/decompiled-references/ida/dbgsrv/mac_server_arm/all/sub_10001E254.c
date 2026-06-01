/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E254
// Address: 0x000000010001E254

//----- (000000010001E254) ----------------------------------------------------
__int64 __fastcall sub_10001E254(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v6; // x8
  __int64 v7; // x0
  unsigned __int64 v8; // x21
  __int64 v9; // x1
  __int64 v11; // x0
  int v12; // w1
  int v13; // w2
  int v14; // w3
  _DWORD *v15; // x4

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 84) = a2;
  v7 = *(_QWORD *)(a1 + 536);
  v8 = a3;
  if ( *(_QWORD *)(v7 + 24) > (unsigned __int64)a3 )
  {
    *(_DWORD *)(v7 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v7 + 8) + 32LL * a3 + 12);
    v7 = *(_QWORD *)(a1 + 536);
  }
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
    return 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a1 + 536);
  if ( *(_QWORD *)(v9 + 24) > v8 )
  {
    if ( (unsigned int)sub_10001EBF8((int *)(*(_QWORD *)(v9 + 16) + 40LL * (int)v8), v9, a4) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536)) )
        return 1;
      else
        return 0xFFFFFFFFLL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(3258);
  return sub_10001E338(v11, v12, v13, v14, v15);
}
// 10001E335: variable 'v11' is possibly undefined
// 10001E335: variable 'v12' is possibly undefined
// 10001E335: variable 'v13' is possibly undefined
// 10001E335: variable 'v14' is possibly undefined
// 10001E335: variable 'v15' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
