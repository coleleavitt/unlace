/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420A50
// Address: 0x00420A50

//----- (00420A50) --------------------------------------------------------
unsigned int __thiscall sub_420A50(int this, unsigned int a2, signed int a3)
{
  unsigned int result; // eax

  result = sub_427EC0(*(_DWORD **)(this + 68), *(_DWORD *)(this + 60), a2, a3);
  *(_DWORD *)(this + 60) += a3;
  return result;
}
