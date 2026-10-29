/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4095F0
// Address: 0x004095F0

//----- (004095F0) --------------------------------------------------------
void *__thiscall sub_4095F0(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
