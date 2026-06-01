/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001DD84
// Address: 0x000000010001DD84

//----- (000000010001DD84) ----------------------------------------------------
__int64 __fastcall sub_10001DD84(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // x0
  int v6; // w1

  if ( (unsigned int)(a2 - 1) < 3 )
    return qword_10007AE48[a2 - 1] | (unsigned int)(32 * ~(-1 << a4));
  if ( under_debugger == 1 )
    __break(1u);
  interr(2022);
  return sub_10001DDE0(v5, v6);
}
// 10001DDDD: variable 'v5' is possibly undefined
// 10001DDDD: variable 'v6' is possibly undefined
// 10007AE48: using guessed type __int64 qword_10007AE48[23];
// 1000A590D: using guessed type char under_debugger;
