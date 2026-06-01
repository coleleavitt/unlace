/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420A70
// Address: 0x00420A70

//----- (00420A70) --------------------------------------------------------
int __thiscall sub_420A70(int this)
{
  int result; // eax

  LOWORD(result) = sub_4282F0(*(_DWORD **)(this + 68), *(_DWORD *)(this + 60));
  *(_DWORD *)(this + 60) += 2;
  return (unsigned __int16)result;
}
