/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408560
// Address: 0x00408560

//----- (00408560) --------------------------------------------------------
int __thiscall sub_408560(int this, int **a2)
{
  if ( ((int (__thiscall *)(int **))(*a2)[34])(a2) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1551);
  }
  if ( !sub_406200(*(_DWORD **)(this + 8), a2[2]) )
    ++*(_DWORD *)(this + 12);
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
