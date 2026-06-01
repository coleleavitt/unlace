/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A5A0
// Address: 0x000000000045A5A0

//----- (000000000045A5A0) ----------------------------------------------------
__int64 __fastcall sub_45A5A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = operator new(0x1C8u);
  sub_45F630(v2, a2, a1);
  *(_BYTE *)(v2 + 184) = *(_BYTE *)(a1 + 107);
  v3 = sub_416150();
  *(_DWORD *)(v3 + 40) = 1;
  sub_45F740(v2, v3);
  qword_4C8250 = v2;
  return v2;
}
// 4C8250: using guessed type __int64 qword_4C8250;
