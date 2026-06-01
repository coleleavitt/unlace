/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425070
// Address: 0x0000000000425070

//----- (0000000000425070) ----------------------------------------------------
_BOOL8 __fastcall sub_425070(int *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8

  return (int)sub_424D70((__int64)a1, a2, 4, 1, a5) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 4, 4, 1, v5) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 8, a1[108], 1, v6) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 16, a1[106], 1, v7) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 24, a1[107], 1, v8) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 32, a1[108], 1, v9) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 40, 4, 1, v10) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 44, 4, 1, v11) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 48, a1[108], 1, v12) >= 0
      && (int)sub_424D70((__int64)a1, a2 + 56, a1[108], 1, v13) >= 0;
}
// 4250A4: variable 'v5' is possibly undefined
// 4250C4: variable 'v6' is possibly undefined
// 4250E4: variable 'v7' is possibly undefined
// 425104: variable 'v8' is possibly undefined
// 425124: variable 'v9' is possibly undefined
// 42513E: variable 'v10' is possibly undefined
// 425158: variable 'v11' is possibly undefined
// 425174: variable 'v12' is possibly undefined
// 425190: variable 'v13' is possibly undefined
