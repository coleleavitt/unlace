/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E635
// Address: 0x0046E635

//----- (0046E635) --------------------------------------------------------
char __thiscall sub_46E635(int this)
{
  sub_4718A2(*(_DWORD **)this, **(_BYTE **)(this + 4));
  **(_BYTE **)(this + 4) = 0;
  return sub_471328(*(_DWORD *)this, **(_DWORD **)(this + 8), *(_DWORD *)(*(_DWORD *)(this + 8) + 4));
}
