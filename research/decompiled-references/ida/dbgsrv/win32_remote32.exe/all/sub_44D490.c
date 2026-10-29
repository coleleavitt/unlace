/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D490
// Address: 0x0044D490

//----- (0044D490) --------------------------------------------------------
_DWORD *__thiscall sub_44D490(_DWORD *this, int a2, int a3, int a4)
{
  *this = a2;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 60))(a2, a3, a4);
  return this;
}
