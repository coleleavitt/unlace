/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473A80
// Address: 0x0000000000473A80

//----- (0000000000473A80) ----------------------------------------------------
__int64 __fastcall sub_473A80(
        unsigned __int8 a1,
        int a2,
        __int64 a3,
        __int64 (__fastcall ***a4)(_QWORD, __int64 *, __int64))
{
  int v6; // w22
  __int64 *v8; // x0
  __int64 result; // x0
  __int64 v10; // x1

  v6 = a1;
  v8 = sub_4739D8(a2);
  if ( !v8 )
    return 0;
  result = *(_QWORD *)((**a4)(a4, v8, a3) + 8);
  if ( a2 == 15 )
  {
    v10 = 4;
    if ( !v6 )
      v10 = 8;
    result += v10;
  }
  return result;
}
