/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424E00
// Address: 0x0000000000424E00

//----- (0000000000424E00) ----------------------------------------------------
__int64 __fastcall sub_424E00(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8

  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( (int)sub_424D70(a1, a2, 4, 1, a5) >= 0
      && (int)sub_424D70(a1, a2 + 4, 1, 1, v5) >= 0
      && (int)sub_424D70(a1, a2 + 5, 1, 1, v6) >= 0
      && (int)sub_424D70(a1, a2 + 6, 2, 1, v7) >= 0
      && (int)sub_424D70(a1, a2 + 8, *(int *)(a1 + 424), 1, v8) >= 0 )
    {
      return (unsigned int)((int)sub_424D70(a1, a2 + 16, *(int *)(a1 + 432), 1, v9) >> 31);
    }
  }
  else if ( (int)sub_424D70(a1, a2, 4, 1, a5) >= 0
         && (int)sub_424D70(a1, a2 + 8, *(int *)(a1 + 424), 1, v11) >= 0
         && (int)sub_424D70(a1, a2 + 16, 4, 1, v12) >= 0
         && (int)sub_424D70(a1, a2 + 4, 1, 1, v13) >= 0
         && (int)sub_424D70(a1, a2 + 5, 1, 1, v14) >= 0 )
  {
    return (unsigned int)((int)sub_424D70(a1, a2 + 6, 2, 1, v15) >> 31);
  }
  return 0xFFFFFFFFLL;
}
// 424E41: variable 'v5' is possibly undefined
// 424E5F: variable 'v6' is possibly undefined
// 424E7D: variable 'v7' is possibly undefined
// 424E9D: variable 'v8' is possibly undefined
// 424EBD: variable 'v9' is possibly undefined
// 424EF0: variable 'v11' is possibly undefined
// 424F0A: variable 'v12' is possibly undefined
// 424F24: variable 'v13' is possibly undefined
// 424F3E: variable 'v14' is possibly undefined
// 424F58: variable 'v15' is possibly undefined
