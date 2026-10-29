/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026638
// Address: 0x0000000100026638

//----- (0000000100026638) ----------------------------------------------------
__int64 __fastcall sub_100026638(_QWORD *a1)
{
  __int64 v2; // x20
  int v3; // w0
  __int64 v4; // x8
  int *v5; // x21
  __int64 v6; // x8
  int *v7; // x0
  int *v8; // x0
  int *v10; // x0
  __int64 v11; // x0

  sub_100026820(a1);
  v2 = a1[23];
  while ( *(_DWORD *)(v2 + 24) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8LL * *(int *)(a1[23] + 24LL));
    v3 = sub_100034860(v2, (_QWORD *)(v2 + 32));
    v4 = a1[44];
    v5 = *(int **)(a1[43] + 8 * v4 - 8);
    if ( v3 != 0x7FFFFFFF )
    {
      if ( v4 )
        a1[44] = v4 - 1;
      sub_100027554((__int64)a1, (__int64)v5, 0, 0);
      if ( v5 )
      {
        v10 = sub_100025DE0(v5);
        operator delete(v10);
      }
      return set_qerrno();
    }
    if ( v5[6] >= 1 )
    {
      set_error_string(0);
      return set_qerrno();
    }
  }
  v6 = a1[44];
  v7 = *(int **)(a1[43] + 8 * v6 - 8);
  if ( v6 )
    a1[44] = --v6;
  if ( v7 )
  {
    v8 = sub_100025DE0(v7);
    operator delete(v8);
    v6 = a1[44];
  }
  if ( !v6 )
    return 0;
  if ( under_debugger == 1 )
    __break(1u);
  interr(270);
  return sub_100026770(v11);
}
// 10002676D: variable 'v11' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
