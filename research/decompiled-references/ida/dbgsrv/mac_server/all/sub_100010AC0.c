/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010AC0
// Address: 0x0000000100010AC0

//----- (0000000100010AC0) ----------------------------------------------------
__int64 __fastcall sub_100010AC0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  char v4; // cl

  if ( *(_QWORD *)(a1 + 120) != -1 )
    return a1 + 164;
  if ( under_debugger == 1 )
    BUG();
  interr(0x4E25u);
  return sub_100010AF0((const __m128i *)0x4E25, a2, v3, v4);
}
// 100010AEF: variable 'v3' is possibly undefined
// 100010AEF: variable 'v4' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
