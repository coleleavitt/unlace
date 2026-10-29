/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028A30
// Address: 0x0000000100028A30

//----- (0000000100028A30) ----------------------------------------------------
__int64 __fastcall sub_100028A30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x8
  __int64 v9; // x8
  char *v10; // x1
  __int64 result; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return 0;
  v8 = *(int *)(*(_QWORD *)(a1 + 184) + 24LL);
  if ( !(_DWORD)v8 )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v8);
  if ( *(_QWORD *)(v9 + 40) )
    v10 = *(char **)(v9 + 32);
  else
    v10 = &byte_10007AE40;
  result = sub_1000286EC(a1, (char)v10, a3, a4, a5, a6, a7, a8);
  if ( !(_DWORD)result )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_100028ABC((_QWORD *)a1);
  }
  return result;
}
// 100028AAC: variable '_18' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
