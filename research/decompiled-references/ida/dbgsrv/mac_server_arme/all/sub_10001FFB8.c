/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FFB8
// Address: 0x000000010001FFB8

//----- (000000010001FFB8) ----------------------------------------------------
__int64 __fastcall sub_10001FFB8(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v7; // x8
  __int64 v8; // x0
  unsigned __int64 v9; // x22
  __int64 v10; // x1
  __int64 v12; // x0
  int v13; // w1
  int v14; // w2
  int v15; // w3
  _DWORD *v16; // x4

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 84) = a2;
  v8 = *(_QWORD *)(a1 + 536);
  v9 = a3;
  if ( *(_QWORD *)(v8 + 24) > (unsigned __int64)a3 )
  {
    *(_DWORD *)(v8 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v8 + 8) + 32LL * a3 + 12);
    v8 = *(_QWORD *)(a1 + 536);
  }
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 536);
  if ( *(_QWORD *)(v10 + 24) > v9 )
  {
    if ( (unsigned int)sub_100020A3C((int *)(*(_QWORD *)(v10 + 16) + 40LL * (int)v9), v10, a4) )
    {
      if ( *(_DWORD *)(a1 + 1512) == a3 )
        *(_DWORD *)(*(_QWORD *)(a1 + 536) + 364LL) &= ~2u;
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
  return sub_1000200F0(v12, v13, v14, v15, v16);
}
// 1000200ED: variable 'v12' is possibly undefined
// 1000200ED: variable 'v13' is possibly undefined
// 1000200ED: variable 'v14' is possibly undefined
// 1000200ED: variable 'v15' is possibly undefined
// 1000200ED: variable 'v16' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
