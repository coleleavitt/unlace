/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000265C0
// Address: 0x00000001000265C0

//----- (00000001000265C0) ----------------------------------------------------
__int64 __fastcall sub_1000265C0(
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

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return 0;
  v8 = *(int *)(*(_QWORD *)(a1 + 184) + 24LL);
  if ( !(_DWORD)v8 )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v8);
  if ( *(_QWORD *)(v9 + 40) )
    v10 = *(char **)(v9 + 32);
  else
    v10 = &byte_100075A30;
  result = sub_1000262A4(a1, (char)v10, a3, a4, a5, a6, a7, a8);
  if ( !(_DWORD)result )
    return sub_100026638((_QWORD *)a1);
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
