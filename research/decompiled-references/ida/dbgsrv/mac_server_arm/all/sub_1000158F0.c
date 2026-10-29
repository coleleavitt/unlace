/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000158F0
// Address: 0x00000001000158F0

//----- (00000001000158F0) ----------------------------------------------------
void __fastcall sub_1000158F0(__int64 a1)
{
  _QWORD *v1; // x1
  _QWORD *v2; // x19

  v2 = (_QWORD *)(a1 + 40);
  v1 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  sub_100008C50(a1 + 32, v1);
  *v2 = 0;
  v2[1] = 0;
  *(v2 - 1) = v2;
}
