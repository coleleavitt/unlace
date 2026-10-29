/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A790
// Address: 0x0043A790

//----- (0043A790) --------------------------------------------------------
void *__thiscall sub_43A790(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
