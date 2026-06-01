/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4259B0
// Address: 0x00000000004259B0

//----- (00000000004259B0) ----------------------------------------------------
_BOOL8 __fastcall sub_4259B0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r8
  __int64 v6; // r8

  return (int)sub_424D70(a1, a2, 4, 1, a5) >= 0
      && (!*(_BYTE *)(a1 + 617) || (int)sub_424D70(a1, a2 + 4, 4, 1, v5) >= 0)
      && (int)sub_424D70(a1, a2 + 8, *(int *)(a1 + 432), 1, v5) >= 0
      && (int)sub_424D70(a1, a2 + 16, *(int *)(a1 + 432), 1, v6) >= 0;
}
// 4259E9: variable 'v5' is possibly undefined
// 425A21: variable 'v6' is possibly undefined
