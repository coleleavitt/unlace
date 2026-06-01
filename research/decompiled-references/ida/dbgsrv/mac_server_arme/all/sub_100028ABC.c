/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028ABC
// Address: 0x0000000100028ABC

//----- (0000000100028ABC) ----------------------------------------------------
__int64 __fastcall sub_100028ABC(_QWORD *a1)
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
  __int64 _28; // [xsp+28h] [xbp+8h]

  sub_100028CDC(a1);
  v2 = a1[23];
  while ( *(_DWORD *)(v2 + 24) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8LL * *(int *)(a1[23] + 24LL));
    v3 = sub_1000360A8(v2, (_QWORD *)(v2 + 32));
    v4 = a1[44];
    v5 = *(int **)(a1[43] + 8 * v4 - 8);
    if ( v3 != 0x7FFFFFFF )
    {
      if ( v4 )
        a1[44] = v4 - 1;
      sub_100029A64((__int64)a1, (__int64)v5, 0, 0);
      if ( v5 )
      {
        v10 = sub_100028214(v5);
        operator delete(v10);
      }
      goto LABEL_16;
    }
    if ( v5[6] >= 1 )
    {
      set_error_string(0);
LABEL_16:
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return set_qerrno();
    }
  }
  v6 = a1[44];
  v7 = *(int **)(a1[43] + 8 * v6 - 8);
  if ( v6 )
    a1[44] = --v6;
  if ( v7 )
  {
    v8 = sub_100028214(v7);
    operator delete(v8);
    v6 = a1[44];
  }
  if ( !v6 )
    return 0;
  if ( under_debugger == 1 )
    __break(1u);
  interr(270);
  return sub_100028C08(v11);
}
// 100028BD8: variable '_28' is possibly undefined
// 100028C05: variable 'v11' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
