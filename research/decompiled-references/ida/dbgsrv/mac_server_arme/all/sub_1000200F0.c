/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000200F0
// Address: 0x00000001000200F0

//----- (00000001000200F0) ----------------------------------------------------
__int64 __fastcall sub_1000200F0(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // x19
  int v7; // w21
  __int64 v9; // x8
  __int64 v10; // x23
  int v11; // w9
  __int64 v12; // x8
  __int64 v13; // x10
  __int64 v14; // x1
  __int64 (*v15)(void); // x1
  __int64 v17; // x0
  __int64 _38; // [xsp+38h] [xbp+8h]

  if ( !a5 )
    return 0;
  v5 = a5;
  v7 = a3;
  v9 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 84) = a2;
  v10 = a4;
  if ( a4 )
  {
    v11 = a3;
    v12 = a4;
    do
    {
      v13 = *(_QWORD *)(a1 + 536);
      if ( *(_QWORD *)(v13 + 24) > (unsigned __int64)v11 )
        *(_DWORD *)(v13 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v13 + 8) + 32LL * v11 + 12);
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536)) )
    return 0;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 536);
      if ( *(_QWORD *)(v14 + 24) <= (unsigned __int64)v7 )
        break;
      if ( !(unsigned int)sub_100020A3C((int *)(*(_QWORD *)(v14 + 16) + 40LL * v7), v14, v5) )
        return 0;
      v5 += 8;
      ++v7;
      if ( !--v10 )
        goto LABEL_12;
    }
    if ( under_debugger == 1 )
      __break(1u);
    interr(3258);
    return sub_100020264(v17);
  }
  else
  {
LABEL_12:
    v15 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 536) + 32LL);
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v15();
  }
}
// 100020214: variable '_38' is possibly undefined
// 100020261: variable 'v17' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
