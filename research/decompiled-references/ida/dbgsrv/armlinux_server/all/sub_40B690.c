/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B690
// Address: 0x000000000040B690

//----- (000000000040B690) ----------------------------------------------------
__int64 __fastcall sub_40B690(__int64 a1, _QWORD *a2)
{
  int v2; // w19
  __int64 v3; // x20
  __int64 v4; // x2
  __int64 v5; // x0
  int *v6; // x21
  void *v7; // x0
  unsigned __int64 v8; // x3
  unsigned __int64 v9; // x2
  _DWORD *v10; // x0
  __int64 result; // x0
  _DWORD *v12; // x0
  unsigned __int64 v13; // x1

  v4 = *(_QWORD *)(a1 + 1928);
  if ( !v4 )
    goto LABEL_7;
  v2 = (int)a2;
  a2 = (_QWORD *)(a1 + 1920);
  v3 = a1;
  v5 = a1 + 1920;
  do
  {
    while ( *(_DWORD *)(v4 + 32) >= v2 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_5;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_5:
  if ( a2 == (_QWORD *)v5 || *(_DWORD *)(v5 + 32) > v2 )
  {
LABEL_7:
    v5 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(30064);
    __break(0x3E8u);
  }
  if ( *(_BYTE *)(v5 + 65) )
    --*(_DWORD *)(v3 + 2112);
  v6 = sub_49FAC0((int *)v5, a2);
  v7 = *((void **)v6 + 9);
  if ( v7 )
  {
    *((_QWORD *)v6 + 10) = 0;
    j__free(v7);
  }
  j__free_0(v6);
  v8 = *(_QWORD *)(v3 + 1968);
  --*(_QWORD *)(v3 + 1952);
  if ( v8 > 9 )
  {
    memmove(*(void **)(v3 + 1960), (const void *)(*(_QWORD *)(v3 + 1960) + 4LL), 4 * v8 - 4);
    v13 = *(_QWORD *)(v3 + 1976);
    v8 = *(_QWORD *)(v3 + 1968) - 1LL;
    *(_QWORD *)(v3 + 1968) = v8;
    v9 = v8 + 1;
    v10 = *(_DWORD **)(v3 + 1960);
    if ( v8 + 1 <= v13 )
      goto LABEL_15;
  }
  else
  {
    v9 = v8 + 1;
    v10 = *(_DWORD **)(v3 + 1960);
    if ( v8 + 1 <= *(_QWORD *)(v3 + 1976) )
    {
LABEL_15:
      v10[v8] = v2;
      result = *(_QWORD *)(v3 + 1968) + 1LL;
      *(_QWORD *)(v3 + 1968) = result;
      return result;
    }
  }
  v12 = sub_491288(v3 + 1960, v10, v9, 4u);
  *(_QWORD *)(v3 + 1960) = v12;
  v12[*(_QWORD *)(v3 + 1968)] = v2;
  result = *(_QWORD *)(v3 + 1968) + 1LL;
  *(_QWORD *)(v3 + 1968) = result;
  return result;
}
// 40B6F8: variable 'v3' is possibly undefined
// 40B754: variable 'v2' is possibly undefined
// 52451C: using guessed type char under_debugger;
