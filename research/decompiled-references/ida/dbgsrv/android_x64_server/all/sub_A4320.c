/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4320
// Address: 0x00000000000A4320

//----- (00000000000A4320) ----------------------------------------------------
_BYTE *__fastcall sub_A4320(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  _DWORD *v3; // rax

  v2 = operator new(0x1C8u);
  sub_927C0((__int64)v2, a2, a1);
  v2[184] = *(_BYTE *)(a1 + 107);
  v3 = sub_487C0();
  v3[10] = 1;
  sub_93430((__int64)v2, (__int64)v3);
  qword_1559F8 = (__int64)v2;
  return v2;
}
// 1559F8: using guessed type __int64 qword_1559F8;
