/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404CA0
// Address: 0x00404CA0

//----- (00404CA0) --------------------------------------------------------
char __thiscall sub_404CA0(int this, int a2, int a3)
{
  *(_DWORD *)(this + 44) = a2;
  *(_DWORD *)(this + 40) = 3;
  *(_DWORD *)(this + 76) = a3;
  sub_456370(hHandle, 0xFFFFFFFF);
  dword_4B69C0 = this;
  sub_456350(hSemaphore);
  sub_456370(*(HANDLE *)(this + 200), 0xFFFFFFFF);
  return *(_BYTE *)(this + 92);
}
// 4B69C0: using guessed type int dword_4B69C0;
