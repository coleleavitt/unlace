/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427740
// Address: 0x0000000000427740

//----- (0000000000427740) ----------------------------------------------------
_BOOL8 __fastcall sub_427740(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edx
  __int64 v6; // r8
  _BOOL8 result; // rax

  *(_OWORD *)a2 = 0;
  v5 = sub_424D70(*(_QWORD *)(a1 + 8), a2, *(int *)(*(_QWORD *)(a1 + 8) + 436LL), 1, a5);
  result = 0;
  if ( v5 >= 0 )
    return (int)sub_424D70(*(_QWORD *)(a1 + 8), a2 + 8, *(int *)(*(_QWORD *)(a1 + 8) + 424LL), 1, v6) >= 0;
  return result;
}
// 427784: variable 'v6' is possibly undefined
