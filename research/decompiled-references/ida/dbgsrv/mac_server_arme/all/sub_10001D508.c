/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D508
// Address: 0x000000010001D508

//----- (000000010001D508) ----------------------------------------------------
__int64 __fastcall sub_10001D508(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0
  int v6; // w1
  __int64 v7; // x2
  _BYTE v8[240]; // [xsp+8h] [xbp-138h] BYREF
  __int64 v9; // [xsp+F8h] [xbp-48h]
  __int64 v10; // [xsp+108h] [xbp-38h]

  if ( (sub_10001D5D0(a1, *(_DWORD *)(a2 + 4), (__int64)v8) & 1) == 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_7;
    interr(2023);
LABEL_6:
    if ( under_debugger != 1 )
    {
      interr(2024);
      return sub_10001D5D0(v5, v6, v7);
    }
LABEL_7:
    __break(1u);
  }
  v10 = v9;
  result = sub_10001D790(a1, *(_DWORD *)(a2 + 4), v8);
  if ( (result & 1) == 0 )
    goto LABEL_6;
  return result;
}
// 10001D5CD: variable 'v5' is possibly undefined
// 10001D5CD: variable 'v6' is possibly undefined
// 10001D5CD: variable 'v7' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
