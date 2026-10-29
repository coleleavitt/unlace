/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402E60
// Address: 0x00402E60

//----- (00402E60) --------------------------------------------------------
void *__thiscall sub_402E60(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
