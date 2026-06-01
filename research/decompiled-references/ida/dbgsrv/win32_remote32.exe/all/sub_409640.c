/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409640
// Address: 0x00409640

//----- (00409640) --------------------------------------------------------
void *__thiscall sub_409640(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 1);
  if ( result )
    return (void *)sub_4627F2(result);
  return result;
}
