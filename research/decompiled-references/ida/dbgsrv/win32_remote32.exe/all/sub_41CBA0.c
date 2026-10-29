/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CBA0
// Address: 0x0041CBA0

//----- (0041CBA0) --------------------------------------------------------
int __thiscall sub_41CBA0(int *this)
{
  void *v1; // esi
  int result; // eax

  v1 = (void *)*(this + 1);
  if ( v1 )
  {
    sub_41C390(v1, *this, *(int **)(*(_DWORD *)v1 + 4));
    return sub_4627F2(*(void **)v1);
  }
  return result;
}
