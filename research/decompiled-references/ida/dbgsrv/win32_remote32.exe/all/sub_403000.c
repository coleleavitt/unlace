/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403000
// Address: 0x00403000

//----- (00403000) --------------------------------------------------------
bool __thiscall sub_403000(int this)
{
  bool result; // al

  sub_456330(*(HANDLE *)(this + 28));
  result = sub_456330(*(HANDLE *)(this + 32));
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}
