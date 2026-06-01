/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DE10
// Address: 0x000000000009DE10

//----- (000000000009DE10) ----------------------------------------------------
_BYTE *__fastcall sub_9DE10(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x19
  _DWORD *v5; // x0

  v4 = operator new(0x1C8u);
  sub_8CB18((__int64)v4, a2, a1);
  v4[184] = *(_BYTE *)(a1 + 107);
  v5 = sub_47524();
  v5[10] = 1;
  sub_8D538((__int64)v4, (__int64)v5);
  qword_166CB0 = (__int64)v4;
  return v4;
}
// 166CB0: using guessed type __int64 qword_166CB0;
