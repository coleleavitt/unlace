/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CB30
// Address: 0x0041CB30

//----- (0041CB30) --------------------------------------------------------
void *__thiscall sub_41CB30(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
