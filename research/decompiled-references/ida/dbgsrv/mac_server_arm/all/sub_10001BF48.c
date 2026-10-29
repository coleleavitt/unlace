/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BF48
// Address: 0x000000010001BF48

//----- (000000010001BF48) ----------------------------------------------------
__int64 __fastcall sub_10001BF48(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // x0
  int v6; // w1

  if ( (unsigned int)(a2 - 1) < 3 )
    return qword_100075A38[a2 - 1] | (unsigned int)(32 * ~(-1 << a4));
  if ( under_debugger == 1 )
    __break(1u);
  interr(2022);
  return sub_10001BFA0(v5, v6);
}
// 10001BF9D: variable 'v5' is possibly undefined
// 10001BF9D: variable 'v6' is possibly undefined
// 100075A38: using guessed type __int64 qword_100075A38[23];
// 10009D90D: using guessed type char under_debugger;
