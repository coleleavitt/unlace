/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CEE0
// Address: 0x0041CEE0

//----- (0041CEE0) --------------------------------------------------------
char *__thiscall sub_41CEE0(_DWORD *this, int a2)
{
  if ( *(this + 1) || a2 )
    return (char *)(a2 + *this);
  else
    return &byte_48BE67;
}
// 48BE67: using guessed type char byte_48BE67;
