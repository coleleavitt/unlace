/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BBC0
// Address: 0x000000010001BBC0

//----- (000000010001BBC0) ----------------------------------------------------
__int64 __fastcall sub_10001BBC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // x8
  __int64 *v6; // x10
  __int64 v7; // t1
  _QWORD *v8; // x9
  __int64 v9; // x8
  unsigned __int64 v10; // x20
  __int64 *v11; // x9
  __int64 v12; // t1
  __int64 v14; // x8
  unsigned __int64 v15; // x9
  __int64 v16; // x11
  unsigned int v17; // w12
  _QWORD *v18; // x8
  __int64 v19; // x0

  v5 = *(unsigned int *)(a1 + 736);
  if ( (int)v5 >= 1 )
  {
    v6 = (__int64 *)(a1 + 752);
    while ( 1 )
    {
      v7 = *v6;
      v6 += 3;
      if ( *(_QWORD *)(a2 + 8) == v7 )
        break;
      if ( !--v5 )
        goto LABEL_5;
    }
    set_debug_event_code(a2, 5);
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
    {
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 32) = -1;
      return 0;
    }
LABEL_29:
    if ( under_debugger == 1 )
      __break(1u);
    interr(3298);
    return sub_10001BD50(v19);
  }
LABEL_5:
  if ( !a3
    || *(_DWORD *)(a3 + 8) != 6
    || *(_QWORD *)(a3 + 24) < 2u
    || (v8 = *(_QWORD **)(a3 + 16), *v8 != 258)
    || (v9 = *(unsigned int *)(a1 + 740), (int)v9 < 1) )
  {
LABEL_13:
    if ( a4 )
    {
      set_debug_event_code(a2, 6);
      return 0;
    }
    v14 = *(_QWORD *)(a1 + 440);
    if ( !v14 )
      return 5;
    v15 = *(_QWORD *)(a2 + 8);
    v16 = a1 + 440;
    do
    {
      if ( *(_QWORD *)(v14 + 32) < v15 )
      {
        v17 = 1;
      }
      else
      {
        v16 = v14;
        v17 = 0;
      }
      v14 = *(_QWORD *)(v14 + 8LL * v17);
    }
    while ( v14 );
    if ( v16 == a1 + 440 || v15 < *(_QWORD *)(v16 + 32) )
      return 5;
    set_debug_event_code(a2, 5);
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
    {
      *(_QWORD *)(a2 + 24) = -1;
      *(_QWORD *)(a2 + 32) = -1;
      return 0;
    }
    goto LABEL_29;
  }
  v10 = v8[1] & 0xFFFFFFFFFFFFFFF8LL;
  v11 = (__int64 *)(a1 + 1136);
  while ( 1 )
  {
    v12 = *v11;
    v11 += 3;
    if ( v12 == v10 )
      break;
    if ( !--v9 )
      goto LABEL_13;
  }
  v18 = (_QWORD *)sub_10001BD50(a2);
  *v18 = v10;
  v18[1] = -1;
  return 0;
}
// 10001BD4D: variable 'v19' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
