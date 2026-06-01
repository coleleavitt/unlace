/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4058A0
// Address: 0x004058A0

//----- (004058A0) --------------------------------------------------------
char __thiscall sub_4058A0(int this, _OWORD *a2, int a3)
{
  *(_OWORD *)(this + 100) = *a2;
  sub_403330(this + 116, (unsigned int *)a3);
  sub_403330(this + 128, (unsigned int *)(a3 + 12));
  *(_OWORD *)(this + 140) = *(_OWORD *)(a3 + 24);
  *(_QWORD *)(this + 156) = *(_QWORD *)(a3 + 40);
  sub_403330(this + 164, (unsigned int *)(a3 + 48));
  *(_DWORD *)(this + 176) = *(_DWORD *)(a3 + 60);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a3 + 64);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a3 + 68);
  *(_DWORD *)(this + 40) = 1;
  sub_456370(hHandle, 0xFFFFFFFF);
  dword_4B69C0 = this;
  sub_456350(hSemaphore);
  return *(_BYTE *)(this + 92);
}
// 4B69C0: using guessed type int dword_4B69C0;
