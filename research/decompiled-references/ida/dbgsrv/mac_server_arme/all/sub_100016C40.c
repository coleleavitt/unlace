/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016C40
// Address: 0x0000000100016C40

//----- (0000000100016C40) ----------------------------------------------------
void __fastcall sub_100016C40(__int64 a1)
{
  _QWORD *v1; // x1
  _QWORD *v2; // x19

  v2 = (_QWORD *)(a1 + 40);
  v1 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  sub_10000938C(a1 + 32, v1);
  *v2 = 0;
  v2[1] = 0;
  *(v2 - 1) = v2;
}
