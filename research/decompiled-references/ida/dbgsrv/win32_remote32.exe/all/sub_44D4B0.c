/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D4B0
// Address: 0x0044D4B0

//----- (0044D4B0) --------------------------------------------------------
int __thiscall sub_44D4B0(_DWORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 64))(*this);
  *this = 0;
  return result;
}
