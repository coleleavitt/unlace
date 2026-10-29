/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D950
// Address: 0x000000014002D950

//----- (000000014002D950) ----------------------------------------------------
__int64 __fastcall sub_14002D950(unsigned __int64 a1)
{
  _QWORD *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rdi

  v2 = sub_14002DA30();
  v3 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( a1 >= v2[9] )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(284);
  }
  v4 = *(_QWORD *)(v2[8] + 8 * a1);
  sub_14005D6D0(v3);
  return v4;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
