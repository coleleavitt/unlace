/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064C90
// Address: 0x0000000100064C90

//----- (0000000100064C90) ----------------------------------------------------
_BYTE *__fastcall sub_100064C90(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  _QWORD *v3; // rax

  v2 = operator new(0x1C8u);
  sub_100054640((__int64)v2, a2, a1);
  v2[184] = *(_BYTE *)(a1 + 107);
  v3 = sub_1000236E0();
  *((_DWORD *)v3 + 10) = 1;
  sub_100054EA0((__int64)v2, (__int64)v3);
  qword_1000AD1A8 = (__int64)v2;
  return v2;
}
// 1000AD1A8: using guessed type __int64 qword_1000AD1A8;
