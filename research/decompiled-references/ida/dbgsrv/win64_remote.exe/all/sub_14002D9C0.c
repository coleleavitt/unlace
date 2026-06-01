/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D9C0
// Address: 0x000000014002D9C0

//----- (000000014002D9C0) ----------------------------------------------------
__int64 __fastcall sub_14002D9C0(__int64 a1, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdi

  v4 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( a2 >= *(_QWORD *)(a1 + 72) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(284);
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  sub_14005D6D0(v4);
  return v5;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
