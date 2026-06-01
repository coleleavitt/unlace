/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404EF0
// Address: 0x00404EF0

//----- (00404EF0) --------------------------------------------------------
char __thiscall sub_404EF0(int this, int a2)
{
  *(_DWORD *)(this + 40) = 2;
  *(_DWORD *)(this + 44) = a2;
  *(_DWORD *)(this + 76) = 0;
  sub_456370(hHandle, 0xFFFFFFFF);
  dword_4B69C0 = this;
  sub_456350(hSemaphore);
  sub_456370(*(HANDLE *)(this + 200), 0xFFFFFFFF);
  return *(_BYTE *)(this + 92);
}
// 4B69C0: using guessed type int dword_4B69C0;
