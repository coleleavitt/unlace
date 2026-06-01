/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035620
// Address: 0x0000000140035620

//----- (0000000140035620) ----------------------------------------------------
__int64 __fastcall sub_140035620(__int64 a1, void **a2, __int64 a3, char a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  _QWORD *v9; // rdi

  v8 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v9 = sub_14002DA30();
  sub_14003E960(v9[4], a1, v9[3]);
  LOBYTE(v9) = sub_140032D80((__int64)v9, a3, a2, a4 ^ 1u);
  sub_14005D6D0(v8);
  return (unsigned __int8)v9;
}
