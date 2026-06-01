/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400258A0
// Address: 0x00000001400258A0

//----- (00000001400258A0) ----------------------------------------------------
__int64 __fastcall sub_1400258A0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdi

  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  if ( v2 >= *(_QWORD *)(a1 + 96) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(288);
  }
  v5 = *(_QWORD *)(a1 + 88) + 56 * v2;
  sub_14005D6D0(v4);
  return v5 + 24;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
