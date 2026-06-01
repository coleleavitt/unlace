/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404E30
// Address: 0x00404E30

//----- (00404E30) --------------------------------------------------------
char __thiscall sub_404E30(int this, int a2, int a3, int a4)
{
  *(_DWORD *)(this + 64) = a2;
  *(_DWORD *)(this + 68) = a3;
  *(_DWORD *)(this + 40) = 5;
  *(_DWORD *)(this + 72) = a4;
  sub_456370(hHandle, 0xFFFFFFFF);
  dword_4B69C0 = this;
  sub_456350(hSemaphore);
  sub_456370(*(HANDLE *)(this + 200), 0xFFFFFFFF);
  return *(_BYTE *)(this + 92);
}
// 4B69C0: using guessed type int dword_4B69C0;
