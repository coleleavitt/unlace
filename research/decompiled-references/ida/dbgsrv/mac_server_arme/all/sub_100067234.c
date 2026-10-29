/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067234
// Address: 0x0000000100067234

//----- (0000000100067234) ----------------------------------------------------
_QWORD *__fastcall sub_100067234(_QWORD *a1, int a2)
{
  __int64 v4; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = a1[11];
  if ( v4 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_1000A5AD8 + 344))(a1[12]);
      v4 = a1[11];
    }
    if ( (a2 & 0x80000000) == 0 )
    {
      (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 296))(v4);
      v4 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(qword_1000A5AD8 + 224))(v4);
    a1[11] = 0;
  }
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000625F4(a1 + 4);
}
// 1000672B4: variable '_28' is possibly undefined
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
