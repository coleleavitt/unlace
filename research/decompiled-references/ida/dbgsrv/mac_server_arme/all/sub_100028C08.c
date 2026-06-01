/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028C08
// Address: 0x0000000100028C08

//----- (0000000100028C08) ----------------------------------------------------
__int64 __fastcall sub_100028C08(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 v3; // x20
  const char *v4; // x8
  const char *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  char *v14; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *(_DWORD *)(a1 + 216) == 1
    && (v1 = *(int *)(*(_QWORD *)(a1 + 184) + 24LL), (_DWORD)v1)
    && ((v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v1), (v3 = *(_QWORD *)(v2 + 40)) == 0)
      ? (v4 = &byte_10007AE40)
      : (v4 = *(const char **)(v2 + 32)),
        *(_QWORD *)(a1 + 48) ? (v6 = *(const char **)(a1 + 40)) : (v6 = &byte_10007AE40),
        !strcmp(v4, v6)) )
  {
    if ( v3 )
      v14 = *(char **)(v2 + 32);
    else
      v14 = &byte_10007AE40;
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000286EC(a1, (char)v14, v7, v8, v9, v10, v11, v12);
  }
  else
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
}
// 100028C94: variable '_28' is possibly undefined
// 100028CD8: variable 'v7' is possibly undefined
// 100028CD8: variable 'v8' is possibly undefined
// 100028CD8: variable 'v9' is possibly undefined
// 100028CD8: variable 'v10' is possibly undefined
// 100028CD8: variable 'v11' is possibly undefined
// 100028CD8: variable 'v12' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
