/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404E90
// Address: 0x00404E90

//----- (00404E90) --------------------------------------------------------
char __thiscall sub_404E90(int this, int a2, int a3, int a4)
{
  *(_DWORD *)(this + 48) = a2;
  *(_DWORD *)(this + 40) = 4;
  *(_DWORD *)(this + 56) = a3;
  *(_DWORD *)(this + 60) = a4;
  sub_456370(hHandle, 0xFFFFFFFF);
  dword_4B69C0 = this;
  sub_456350(hSemaphore);
  sub_456370(*(HANDLE *)(this + 200), 0xFFFFFFFF);
  return *(_BYTE *)(this + 92);
}
// 4B69C0: using guessed type int dword_4B69C0;
